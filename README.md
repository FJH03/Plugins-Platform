Build instructions
------------------

Make sure ambuild2 is installed: https://github.com/alliedmodders/ambuild

Metamod:Source
==============

Metamod:Source - A C++ Plugin Environment and Detour Library for the Source Engine.

```
cd metamod-source
mkdir build
cd build
```

You can configure the build Metamod:Source for linux css amd64:
```
python3 ../configure.py --sdks css --target x86_64 --enable-optimize
```

Configure the build Metamod:Source for pc css amd64:
```
chcp 65001
py ../configure.py -s css --target x86_64 --enable-optimize
```

---

SourceMod
=========

```
cd sourcemod
mkdir build
cd build
```

You can configure the build Sourcemod for linux css amd64:
```
python3 ../configure.py --sdks css --target x86_64 --no-mysql --enable-optimize
```

Configure the build Sourcemod for pc css amd64:
```
chcp 65001
py ../configure.py -s css --target x86_64 --no-mysql --enable-optimize
```

Common build method:
```
ambuild
```
> If you can't find msvc c/c++ compiler, try run this in commandline(example):
```
call "E:\vs\VC\Auxiliary\Build\vcvarsall.bat" amd64
```

General
-------
- [SourceMod website](http://www.sourcemod.net): Source Engine scripting and server administration
- [Forum](https://forums.alliedmods.net/forumdisplay.php?f=52): Discussion forum including plugin/extension development
- [General documentation](https://wiki.alliedmods.net/Category:SourceMod_Documentation): Miscellaneous information about SourceMod
 
Development
-----------
- [SourcePawn scripting](https://wiki.alliedmods.net/Category:SourceMod_Scripting): SourcePawn examples and introduction to the language
- [SourceMod plugin API](https://sm.alliedmods.net/new-api): Online SourceMod plugin API reference generated from the include files
- [SourceMod extension development](https://wiki.alliedmods.net/Category:SourceMod_Development): C++ examples and introduction to various extension interfaces
