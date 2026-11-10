# Getting started

1. Copy `examples/hello-mod` into your own project.
2. Include `<fusion/fusion.hpp>`.
3. Implement `fusion::Mod` and its three methods.
4. Add a manifest based on `templates/fusion-mod.json`.
5. Build with CMake.

The lifecycle guarantees, threading model, and binary ABI are not finalized. This scaffold has no game bindings, hooks, loader, or compatibility guarantee. Do not distribute a build as a working Geometry Dash mod until it has been tested with an official compatible Fusion Loader release.
