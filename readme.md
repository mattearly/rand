# rand

A small randomization dll that seeds using current time and uses [Mersenne Twister](https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine) randomization method.

Being a dll allows this to be shared across multiple running applications, allowing a single seed.

The basic functionality tests can be found here: [randTest](github.com/mattearly/randTest). Clone into the same directory you have cloned rand into and the randTest project should see the rand dll and is macroed to copy in post-build if a updated/new version of the rand.dll exists.

built on VisualStudio2019 Community Edition

