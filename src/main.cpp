#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <iostream>

using boost::asio::ip::udp;

void send_callback(const boost::system::error_code &ec,                // Result of operation.
                   std::size_t                      bytes_transferred  // Number of bytes sent.
)
{
   if (!ec)
   {
      std::cout << "Number of bytes transferred: " << bytes_transferred << std::endl;
   }
   else
   {
      std::cerr << "Error in sending: " << ec.message() << std::endl;
   }
}

int main(int argc, char *argv[])
{
   boost::asio::io_context io;
   udp::endpoint           receiver_endpoint{boost::asio::ip::make_address("127.0.0.1"), 1313u};

   udp::socket socket(io);
   socket.open(udp::v4());

   socket.async_send_to(boost::asio::buffer("hello"), receiver_endpoint, &send_callback);

   io.run();

   return 0;
}