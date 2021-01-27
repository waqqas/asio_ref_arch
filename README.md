# asio_ref_arch
Reference architecture using boost asio

Installing dependencies on Mac OS
---

- `brew install boost`

Building
---

- `mkdir build && cd build`
- `cmake ..`
- `cmake --build .`


Running
----

- `nc -u 127.0.0.1 -l 1313`
- `./src/app`