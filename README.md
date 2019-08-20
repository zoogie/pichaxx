# pichaxx

## Intro

This is a new (sorta) userland exploit for Pokemon Picross on 3DS.
It was discovered and [demonstrated](https://twitter.com/mrnbayoh/status/744899681663258624?lang=en) by MrNbaYoh back in June 2016, and he documented it in 2017. Without him, this release wouldn't be possible.

For US/EU/JP and old or new 3ds/2ds.


## Why?

Compared to Steelhax as a userland exploit, I can see these advantages:
- Less than half the file size (just 91MB). This can be an issue for people still using the tiny, Nintendo supplied 2-4 GB sd card.
- Only one version to choose from - Steelhax's latest update isn't supported. This avoids potential user confusion with downloading the wrong version.
- Region free
- Less files (other than the save file, just otherapp.bin)
- Cuter icon ! (if you consider pikachu cuter than a giant war machine)
![pika](https://kanzashi-ctr.cdn.nintendo.net/i/b8eb6c5c3318ff8bb13f71f8bb95b218bb639f09ae53814134183e9b3f869ff0.jpg)
![sub](https://kanzashi-ctr.cdn.nintendo.net/i/c28581f4d68ac31d4ea287ca07a46f213fe05b5dfacb36ae708c61c076cb47aa.jpg)

Mostly though, I had fun with Bannerbomb3 and just wanted to do another userland exploit.

## Directions 
 
Offline directions are provided in the Release archive.

You may also follow these online instructions if you can't run the python program in the offline version:
https://gist.github.com/zoogie/931c87ca8cae98c28e931182af26f89b/

## Exploit 

The following is taken from 3dbrew, written by MrNbaYoh:
https://www.3dbrew.org/wiki/3DS_Userland_Flaws

> Pokemon Picross - Arbitrary memcpy via unchecked size<br>
> When reading the savefile, the game handles some lists of buffers that are copied to memory. These buffers should always be 0x14-bytes long but the game uses the size provided in the savefile to copy them.<br>
> These buffers are copied in some structs and thus with a big enough length value, one can overwrite the next struct which contains a size and a destination address for a memcpy.

## Q&A 

Q: Why didn't MrNbaYoh release this back in 2016?<br>
A: It's probably better to ask him, but I assume it's because PASLR (homebrew exploit mitigation) was introduced for this game right before he could release pichaxx (there was no remedy at the time). Another possible reason is he had other exploits that were better, so he just skipped it. Secondary exploits were also not as valuable back then because there was no seedminer to help install the hax save from a PC (you had to have another userland exploit to install it).

Q: Did you come up with the name pichaxx?<br>
A: No! That's the original exploit name from MrNbaYoh and I kept it out of respect (totally not because I couldn't think of anything better ;p).
   
## Greetz 

- MrNbaYoh - first discovered this exploit
- Yellows8 - for https://github.com/yellows8/3ds_ropkit
- Stary2001 - Haxfactory was a helpful demonstration on how to use 3ds_ropkit for otherapp
- wwylele - for https://github.com/wwylele/3ds-save-tool
- lory98 - for https://github.com/lory98/3ds-steelhax-encrypter