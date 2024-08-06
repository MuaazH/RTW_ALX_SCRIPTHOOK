
# Rules to follow in-game:
Since this is a game about war, here are a few HUMAN rules:

1. Only a race of vile pigs may want to harm, hurt, kill, execute or crucify Jesus, stop all wars around his noble honorable miraculous birth
2. Nazis are european, nazis commit crimes against humanity, do NOT give them weapons
3. Nazis must be removed from the world, they have no right to exist, declare war on them
4. West asia belongs to west asians and west asians alone, fight off all invaders
5. Any religion that justifies killing babies is vile and evil
6. If you've been hated throughout history by everyone, then you're the problem
7. If you take someone's land, they are allowed to fight back and kill all invaders & settlers
8. Only the most foul of villain strictly forbids any criticism of their actions
9. Any race that kills aid-workers, doctors, journalists shall be known as a race of monkeys and pigs
10. Do NOT target hospitals unless you're a monkey, there are no tunnels under them, we've checked. This crime is copyrighted © tiny hat 2023/2024
11. Genocide is not kosher, your "holy book" is clearly fabricated

# Rome total war alexander scripthook (Version 2.20.0)

A scripting plugin that allows you to alter the game using C code.

Q: What about Rome Remastered?
A: I don't have that game, and from what I hear it is still maintained. Ask the devs to add scripting to it, that would be much much eaiser

Q: What about Rome Total War 1.5 and 1.6?
A: I can't support all version because I have to work, unless this is work?

# HOW TO INSTALL

Copy these files into the main game directory:

```
d3d8.dll                 <- asi loader
libtcc.dll               <- tiny c compiler
scriptHook.asi           <- the plugin
scripts                  <- scripts & sdk (Copy to the mod directory)
```

Starting from 2.20.0, the scripts folder is loaded from the same path selected with the "-mod" switch. This will allow you to package your scripts with your mod.
<br>
if you get a missing dll error, install VC++2013 form Microsoft

# HOW IT WORKS

+ Scripts are loaded when you start/load a game, and cleared when you exit
+ The library creates a log file called scripthook.log when started
+ Scripts can be activated or disabled from this file: [main.c](scripts/main.c)
+ Your scripts must implement the hooks from the ```Script``` structure at the end of [scripthook.h](scripts/lib/scripthook.h)
+ See [scripthook.h](scripts/lib/scripthook.h) for API you can call


If you make a youtube video, make it funny and email me a link.
If you create a mod, let me know. I like new ideas (Email in my profile)

# Thanks

ASI-Loader: https://github.com/ThirteenAG/Ultimate-ASI-Loader <br>
TinyCC: https://github.com/TinyCC/tinycc/tree/mob <br>

# License

[ISRAEL LICENSE](https://github.com/MuaazH/ISRAEL-LICENSE)
Your only option is to israel the software, i.e. steal it and claim its yours, the US & UK will approve. No one will
stop you. 100% legal.
Please Visit: [taxpayersforpeace.org](https://taxpayersforpeace.org)

Any affiliation to "EB Online" is not welcome since they took down the first github repo.

<p style="text-align: center;">
<img src=".resources/ANTI_HUMAN.png" alt="NAZI PIGS & EB Online">
</p>

# Copyright

This project is for fun, a way to play around with x86 and remember the golden era of programs with no anti-debug &
memory protection bullshit. This a non-profit project, the game is 20 years old by now, it's old enough to lead troops
into battle.
