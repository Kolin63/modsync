# 🔧 Mod Sync
Mod Sync is a very simple tool that is made to make the process of sharing and
using custom Minecraft Modpacks easier.

**🐧 Only tested on Linux.**

## 📦 Installation
Run this script
```bash
wget https://github.com/Kolin63/modsync/releases/download/1.0.2/modsync -O $HOME/.local/bin/modsync
chmod +x $HOME/.local/bin/modsync
```

## 🚀 Usage
In your `mods/` directory, make a `modsync.txt` file. Make sure that when you
run the command `modsync`, you are in the same directory as the `modsync.txt`
file.

A `modsync.txt` consists of five different types of lines. Keep in mind that it
is whitespace sensitive, so don't include trailing whitespace.
* `both:` denotes mods that are on the client and server
* `server:` denotes mods that are only on the server
* `client:` denotes mods that are only on the server
* an empty line is for readability purposes only
* any other line is considered as a URL, and the program will try to download a
  file from it.

A possible `modsync.txt` could look like this:
```
both:
https://cdn.modrinth.com/data/lhGA9TYQ/versions/ZxYGwlk0/architectury-13.0.8-neoforge.jar
https://cdn.modrinth.com/data/u6dRKJwZ/versions/NMhqixRu/jei-1.21.1-neoforge-19.25.1.332.jar
https://cdn.modrinth.com/data/IYY9Siz8/versions/8Ph8BKRh/jamlib-neoforge-1.3.5%2B1.21.1.jar
https://cdn.modrinth.com/data/qIv5FhAA/versions/LEJ4qaYg/horseman-neoforge-1.21.1-1.5.6.jar
https://cdn.modrinth.com/data/Aqlf1Shp/versions/9uOfdsZC/forgified-fabric-api-0.115.6%2B2.1.4%2B1.21.1.jar
https://cdn.modrinth.com/data/uXXizFIs/versions/CnpoQxCx/ferritecore-7.0.2-neoforge.jar
https://cdn.modrinth.com/data/uCdwusMi/versions/uzLZ00HG/DistantHorizons-2.3.6-b-1.21.1-fabric-neoforge.jar
https://cdn.modrinth.com/data/LNytGWDc/versions/88L641Un/create-1.21.1-6.0.8.jar
https://cdn.modrinth.com/data/u58R1TMW/versions/YCMXHxwl/connector-2.0.0-beta.12%2B1.21.1-full.jar
https://cdn.modrinth.com/data/9s6osm5g/versions/izKINKFg/cloth-config-15.0.140-neoforge.jar
https://cdn.modrinth.com/data/jcOSOvm1/versions/hWX2f8Sa/sort_it_out-neoforge-1.1.4%2B1.21.1.jar
https://cdn.modrinth.com/data/XqqOkvZz/versions/lnOeoKcQ/neoforge-carpet-1.21.1-1.0.8%2Bv251027.jar
https://cdn.modrinth.com/data/1eAoo2KR/versions/h8Px82QV/yet_another_config_lib_v3-3.8.1%2B1.21.1-neoforge.jar
https://cdn.modrinth.com/data/rlloIFEV/versions/Mf1VMgxK/travelersbackpack-neoforge-1.21.1-10.1.29.jar

server:
https://cdn.modrinth.com/data/fALzjamp/versions/LuFhm4eU/Chunky-NeoForge-1.4.23.jar

client:
https://cdn.modrinth.com/data/5srFLIaK/versions/wapDaY5q/better-clouds-1.7.19%2B1.21.1-neoforge.jar
https://mediafilez.forgecdn.net/files/5553/811/light-overlay-12.0.0-neoforge.jar
https://cdn.modrinth.com/data/5ZwdcRci/versions/VerzLexd/ImmediatelyFast-NeoForge-1.6.7%2B1.21.1.jar
https://cdn.modrinth.com/data/XeEZ3fK2/versions/ROfcbxxe/freecam-neoforge-1.3.0%2Bmc1.21.jar
https://cdn.modrinth.com/data/NNAgCjsB/versions/aymdvJn6/entityculling-neoforge-1.9.3-mc1.21.1.jar
https://cdn.modrinth.com/data/LQ3K71Q1/versions/TWvfxJSz/dynamic-fps-3.9.5%2Bminecraft-1.21.0-neoforge.jar
https://cdn.modrinth.com/data/xv94TkTM/versions/FaNppCJJ/Controlling-neoforge-1.21.1-19.0.5.jar
https://cdn.modrinth.com/data/1IjD5062/versions/eXGUs5sy/continuity-3.0.0%2B1.21.neoforge.jar
https://cdn.modrinth.com/data/AANobbMI/versions/Pb3OXVqC/sodium-neoforge-0.6.13%2Bmc1.21.1.jar
https://cdn.modrinth.com/data/fuuu3xnx/versions/iEE85X0w/Searchables-neoforge-1.21.1-1.0.2.jar
https://cdn.modrinth.com/data/Bh37bMuy/versions/xAiCe6w8/reeses-sodium-options-neoforge-1.8.3%2Bmc1.21.4.jar
https://cdn.modrinth.com/data/aC3cM3Vq/versions/9I21YYxf/MouseTweaks-neoforge-mc1.21-2.26.1.jar
https://cdn.modrinth.com/data/51shyZVL/versions/2w0zNJb4/moreculling-neoforge-1.21.1-1.0.6.jar
https://cdn.modrinth.com/data/31TqAmXC/versions/gUMdVIn3/Mod%20Menu%20%28NeoForge%20Edition%29-1.0.1-1.21.1.jar
```
