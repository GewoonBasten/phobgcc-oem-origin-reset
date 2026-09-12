# PhobGCC OEM origin reset

Hold **X+Y+Start for 3s**. Recaptures analog origin in RAM. Safe Mode can stay on. Stick calibration is not rewritten.

**Phob 2.0.x** (including 2.0.5): flash [`firmware/phobgcc-2.0.x-oem-origin-reset.uf2`](firmware/phobgcc-2.0.x-oem-origin-reset.uf2).  
**Phob 1:** do not use the UF2. Build with Arduino after uncommenting your board header in `PhobGCC/common/phobGCC.h`.

## Install (Phob 2.0.x)

Use a **data** Micro-USB cable. Hold **S1**, then plug USB (`RPI-RP2`).

```bash
picotool save -a -t uf2 backup.uf2
picotool load -v -x firmware/phobgcc-2.0.x-oem-origin-reset.uf2
```

Windows can drag the UF2 onto `RPI-RP2`. **Mac: do not use Finder** (it hangs); use picotool.

Then unplug, plug into the console/adapter

## Files

| Path | What |
|---|---|
| `firmware/*.uf2` | Phob **2.0** flash image. Not for Phob 1. |
| `PhobGCC/common/phobGCC.h` | Origin-reset code. Uncomment **one** board header here. |
| `PhobGCC/common/variables.h` | RAM origin offsets. |
| `PhobGCC/rp2040/` | Phob **2** CMake project (`cd PhobGCC/rp2040 && cmake -S . -B build`). |
| `PhobGCC/PhobGCC.ino` | Phob **1** Arduino sketch. |
| `PhobGCC/teensy/` | Phob **1** board headers. |

Fork of [PhobGCC-SW](https://github.com/PhobGCC/PhobGCC-SW) 0.31. GPL-3.0.
