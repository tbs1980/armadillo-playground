# armadillo-playground

An effort learn internals of Armadillo Linear Algebra Library.

# Installation

Download the souce from [here](https://arma.sourceforge.net/download.html).

Unpack the compressed file:

```bash
tar xvJf ./armadillo-14.4.0.tar.xz
cd armadillo-14.4.0
mkdir build
cmake -DCMAKE_INSTALL_PREFIX=/home/sree/linalg/installations/ ../
make
make install
```

This will install all the relevant files to the install location.
