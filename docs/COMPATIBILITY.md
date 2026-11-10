# Compatibility policy

Compatibility has three dimensions:

1. **Edition:** Full, Lite, World, Meltdown, or SubZero.
2. **Platform:** initially Windows; additional platforms may follow.
3. **Game version:** exact build or verified version range.

Do not assume editions share identical code or capabilities. The future loader should expose verified capability profiles and reject unsupported combinations before loading a mod.

Manifest status such as `untested` is an author declaration, not Fusion verification. The catalog should distinguish declared targets from independently verified compatibility.
