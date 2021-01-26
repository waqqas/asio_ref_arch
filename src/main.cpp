#include <boost/asio.hpp>
#include <iostream>

int main(void)
{
   boost::asio::io_context io;
   io.run();

   return 0;
}