# tabmo-coding-challenge-cpp-skeleton

### Description
This little boilerplate application compiles an HTTP server based on Drogon (https://github.com/an-tao/drogon).
This server implements one single http endpoint:
* http://localhot:8090/api/v1/helloworld

### System Requirements
* The Linux kernel should be not lower than 2.6.9, 64-bit version;
* The gcc version is not less than 5.4.0;
* Use cmake as the build tool, and the cmake version should be not less than 3.5;
* Use git as the version management tool;

### Library Dependencies
* trantor, a non-blocking I/O C++ network library, also developed by the author of Drogon, has been used as a git repository submodule, no need to install in advance;
* jsoncpp, JSON's c++ library, the version should be no less than 1.7;
* libuuid, generating c library of uuid;
* zlib, used to support compressed transmission;
* OpenSSL, not mandatory, if the OpenSSL library is installed, drogon will support HTTPS as well, otherwise drogon only supports HTTP.
* c-ares, not mandatory, if the c-ares library is installed，drogon will be more efficient with DNS;
* libbrotli, not mandatory, if the libbrotli library is installed, drogon will support brotli compression when sending HTTP responses;
* boost, the version should be no less than 1.61, is required only if the C++ compiler does not support C++ 17.
* the client development libraries of postgreSQL, mariadb and sqlite3, not mandatory, if one or more of them is installed, drogon will support access to the according database.
* gtest, not mandatory, if the gtest library is installed, the unit tests can be compiled.

### Dependencies installation:
Drogon depends on Follow link https://drogon.docsforge.com/master/installation/#system-preparation-examples

### Compile and launch:
```
mkdir build
cd build
cmake ..
make
./tabmo-coding-challenge
```

### Test:

Request:
```
curl http://localhost:8090/api/v1/helloworld
```
Response:
```
{
   "message":"Hello, World!"
}
```
