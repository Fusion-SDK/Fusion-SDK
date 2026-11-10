# Fusion SDK

Official starter SDK for developing mods for the Fusion Circle ecosystem.

**Status:** Early scaffold. This package defines a starter C++ API shape; it is not yet connected to a working Geometry Dash mod loader.

## What's included
- C++17 public headers
- Minimal example mod
- CMake build configuration
- Example mod manifest
- Getting-started, compatibility, and security documentation

## Requirements
- CMake 3.20+
- A C++17 compiler

## Build the example
```bash
cmake -S . -B build
cmake --build build --config Release
```

This builds a shared-library example. It does not inject into, patch, or load into Geometry Dash. A compatible Fusion Loader runtime and edition-specific adapters must be implemented separately.

## Create a mod
1. Copy `examples/hello-mod`.
2. Update `templates/fusion-mod.json` for your mod.
3. Implement `fusion::Mod`.
4. Build against the SDK headers.
5. Test with a compatible Fusion Loader development runtime before distribution.

## Planned game editions
- Geometry Dash (Full)
- Geometry Dash Lite
- Geometry Dash World
- Geometry Dash Meltdown
- Geometry Dash SubZero

Compatibility is edition-, platform-, and game-version-specific. Listing an edition in a manifest is not proof of compatibility.

## License
MIT. See `LICENSE`.
