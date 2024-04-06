# Multipackaging-src

This is an example to be run inside cloned repository of
https://github.com/tpanj/multipackaging

So read instructions there first how to achieve that this source code is
built and packaged across different distributions.

## TL;DR

```sh
git clone https://github.com/tpanj/multipackaging.git # clone repository
cd multipackaging # change directory to multipackaging
git clone https://github.com/tpanj/multipackaging-src.git src # define source code that we will build and pack
docker-compose up # compile src for distributions defined in docker-compose; output to packages folder
```