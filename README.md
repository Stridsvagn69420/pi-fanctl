# pi-fanctl
Raspberry Pi daemon for PWM fan speed control

## Functionality
* Daemon for creating a PWM signal for a fan depending on the CPU temperature
* Command-line tool for managing the fan curve and optionally toggling the daemon into manual mode
* Daemon for a shutdown button

# Installation
## Software
### pigpio
This daemon requires `pigpio` for the GPIO access, both for development as well as for running the daemon.
- Arch: `sudo pacman -S libpigpiod`
- Debian: `sudo apt install pigpio`

### pi-fanctl
You can choose between these options:
* Use [Kagero](https://github.com/Stridsvagn69420/Kagero) to install it from my personal repository.
* Download the pre-built binary [from the release page](https://github.com/Stridsvagn69420/pi-fanctl/releases/latest). (recommended)
* Build it from source. (recommended for customized layouts)

<hr>

As the other options are straightforwards, this section describes how to build it from source. You'll need in addition to `pigpio`:
* A C compiler like `gcc`.
* `git` for cloning the source code.

1. Clone the repository: `git clone https://github.com/Stridsvagn69420/pi-fanctl.git`
2. Go into the cloned repo: `cd pi-fanctl`
3. Run the build command: `./build.sh`
4. Install pi-fanctl and the systemd service: `sudo ./install.sh`

More things will follow. This is WIP.

## Hardware
WIP.

# Usage
## Daemon
WIP.

## CLI
WIP.
