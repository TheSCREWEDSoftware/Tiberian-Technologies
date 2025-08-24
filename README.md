> [!IMPORTANT]
> I'm not the owner of, or in any way related to, the team behind [Tiberian Technologies](https://www.tiberiantechnologies.org/) patch or work. I've only made this on GitHub for my personal convenience.


## Index

- [How to build in Visual Studio](#how-to-build-in-visual-studio)
- [Scripts / Plugins](#scripts--plugins)
- [License](#license)
- [Authors](#authors)

| Branch Name   | Status                          |
|---------------|---------------------------------|
| [main/master](https://github.com/TheSCREWEDSoftware/Tiberian-Technologies/tree/main)      | Source Code for 4.8.4           |
| [tsg_scripts](https://github.com/TheSCREWEDSoftware/Tiberian-Technologies/tree/tsg_scripts) | My Attempt of Scripts           |

### Visual Studio Version Used for This Project

```
- Edition: Microsoft Visual Studio Community 2022
- Version: 17.12.4
- Build: VisualStudio.17.Release/17.12.4+35707.178
- .NET Framework installed: 4.8.09032
```

### Source Code (Version: [4.8.4](https://www.tiberiantechnologies.org/files/source-4.8.4.zip))

Information below directly from the [tiberiantechnologies.org](https://www.tiberiantechnologies.org/Downloads) website.

```
Version: 4.8 Update 4
Revision: 9000
Release: 25/02/2025 12:18:06 +00:00
```

## How to build in Visual Studio

Based on [Guide for scripts.dll Development](https://www.tiberiantechnologies.org/Docs/?page=Guide%20for%20scripts.dll%20Development).

> [!NOTE]  
> This source used and uses the Visual Studio 2012 (VS2012) Build Tools.

This is the way I achieve building the source with no issues, you're free to follow their guide or follow what worked for me.

1. Acquire `Visual Studio 2012`, the only way I know is the one shared in the guide above by [Internet Archive](https://archive.org/details/en_visual_studio_professional_2012_x86_dvd).

2. Install `Visual Studio 2012`, you may un-select all `Optional` features if you don't wish to install any, they are not required.

3. Download and Install `Visual Studio 2022`.

4. When you run `Visual Studio Installer` you will have option to choose what `Workloads` you wish to install, under `Desktop & Mobile` check the box of `Desktop development with C++` this is the only you will need, and proceed with the rest of the download and instalation.

### Download 

Either one you download is the same outcome

- Tiberian Technologies' [Download](https://www.tiberiantechnologies.org/files/source-4.8.4.zip)

- Github [Download](https://github.com/TheSCREWEDSoftware/Tiberian-Technologies/archive/refs/heads/main.zip) / [Clone](https://github.com/TheSCREWEDSoftware/Tiberian-Technologies.git)

5. Run `scripts_VC2012.sln` that you've downloaded or cloned.

6. If you get prompt about `Review Solution Actions` recommended to choose the latest SDK (`10.0`) in my case, and **DO NOT** upgrade the `Platform Toolset` just leave it as `No Upgrade` and press `OK`.

7. Select `Build` and see the magic happen, you will find the final result in `bin\Debug`.

## Scripts / Plugins

<details>

<summary>Click me to see what folders/projects get included into Scripts.dll</summary>

### Name
```
- scripts
- MemoryManager
- tdbedit
- bansystem
- crates
- CTF
- teamspeak
- Mute
- Swap
- example-plugin
- RandomStartingCredits
- FirstBlood
- PointsDistribution
- ExtraConsoleCommands
- NoPoints
- AntiSpawnKill
- CharacterRefund
- SuddenDeath
- shared
```
### Description
- `scripts`: Main scripting engine and entry point for custom game logic.
- `MemoryManager`: Handles custom memory management for the server/game.
- `tdbedit`: Likely a tool or editor for database or game data.
- `bansystem`: Manages player bans and ban lists.
- `crates`: Controls crate spawning and rewards in the game.
- `CTF`: Adds Capture The Flag game mode features.
- `teamspeak`: Integrates with TeamSpeak server for voice communication.
- `Mute`: Adds functionality to mute/unmute players in-game.
- `Swap`: Handles swapping teams or players.
- `example-plugin`: Sample plugin for development reference.
- `RandomStartingCredits`: Sets random starting credits for players.
- `FirstBlood`: Awards points for the first kill in a match.
- `PointsDistribution`: Manages how points are distributed for actions.
- `ExtraConsoleCommands`: Adds extra admin/server console commands.
- `NoPoints`: Prevents players from earning points under certain conditions.
- `AntiSpawnKill`: Prevents or penalizes spawn killing.
- `CharacterRefund`: Allows players to refund or change their character.
- `SuddenDeath`: Implements sudden death rules or events.
- `shared`: Provides shared code/utilities for other plugins.

### Commands
- Mute:
  - `/mute <clientId>`
  - `/unmute <clientId>`
- ExtraConsoleCommands:
  - `/takecredits <clientId> <amount>`
  - `/kill <clientId>`
  - `/takepoints <clientId> <amount>`
- SuddenDeath:
  - `/suddendeath`


</details>


## License

This project includes code originally licensed under the **GNU General Public License v2**.

### GNU General Public License (GPL) v2 — Summary

GNU GENERAL PUBLIC LICENSE
Version 2, June 1991
Copyright (C) 1989, 1991 Free Software Foundation, Inc.
59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.

[Full text of GPL v2: https://www.gnu.org/licenses/old-licenses/gpl-2.0.txt]

### Additional Notice for [Tiberian Technologies](https://www.tiberiantechnologies.org/) Code

This repository contains source code from **Renegade Scripts.dll**  
Copyright 2013 Tiberian Technologies  

- The original code is licensed under **GPL v2 or later**.  
- An exemption allows **Run-Time Dynamic Linking** of this code with closed-source modules, provided those modules **do not contain code covered by this license**.  
- Only the source code of modules containing the GPL-licensed code must be released.  
- All original copyright notices and license headers in source files have been preserved.  
- This repository does **not** claim ownership of the original code.

### Copying / Copyright

Check: [COPYING](./scripts/COPYING)

## Authors

Below is a list of active Tiberian Technologies developers, in alphabetical order.

| Name                        | Position                    |
|-----------------------------|-----------------------------|
| Daniel "dblaney1" Blaney    | Developer                   |
| Jerad2142                   | Developer                   |
| Jonathan "jonwil" Wilson    | Developer                   |
| Unstoppable                 | Website Maintainer, Developer|
| [Unstoppable](https://github.com/TheUnstoppable) | Website Maintainer, Developer|

Tiberian Technologies developers are also a part of W3D Hub. You can view the full staff list [here](https://w3dhub.com/forum/search/?&type=core_members&joinedDate=any&group[4]=1&group[24]=1&group[57]=1).
