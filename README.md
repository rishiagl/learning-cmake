# Learning-CMake

## What is CMake? 

CMake is an open-source, cross-platform family of tools designed to build, test and package software. CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice.

## Why learn CMake?

Just learn it bro, it'll save you a lot(hell-lot) of time!

## Where to learn?

Youtube channel: [**vector of bool**](https://www.youtube.com/@vector-of-bool1005
),
### Why this particular channel?
This guy is the creator of CMake-Tools, a CMake extension for "The VS Code"; therefore his teaching is the most valuble resource for learning CMake, obviously after the creators of CMake! And his teaching style is one the best I have come across youtube.

## Who Am I?
Just a random guy learning to use cmake so decided to help the community by creating a git repo for reference which he did'nt(The youtubers seems to be lazy:).

## How to navigate this repo?
Each coding episode has been documented is seperate branch with its episode prefix as branch name, just navigate through branches as you watch episode's.

## Copy-right and disclaimer:
I do not own the rights of any of the code or tools used in this repo they owned by vector-of-bool or the tools creators.

## Branch details:

### 0b:

Everyone knows about the "cmake" command, but do you know about "cmake-gui"? What about "ccmake"? These are all different ways of running CMake, and I'll show each one in this video.

Another basic video. No addenda or errata here, because this video is literally perfect.

If you or a loved one has been diagnosed with autotools and has worked with software in the past ten years, you may be entitled to financial compensation.

### 1a:

**A "Hello, world" executable**
Wow! We're doing something real in this one!

It may seem basic, but I hope to always touch on aspects of CMake that aren't common knowledge. For example, did you know about CMake's --build argument?

No addenda or errata yet. This video is flawless and perfect.

If you experience any disorientation while viewing, remove your 3D glasses and close your eyes until you feel well again.

### 1b:

**Adding a Library**
Last time we created an executable, but you might also want to make some libraries! I'll show how you can make a library and how you can control what type of library is generated, as well as how we can link that library into an executable.

Addendum: I didn't touch on MODULE libraries much, only briefly mentioning them. In general, they are used to represent "plugins" for other software. It will manifest itself as a shared library but cannot be linked into other libraries. They're not as common to see.

WARNING: This video contains chemicals known to the State of California to cause cancer and birth defects or other reproductive harm.

### 1c:

**Subdirectories and Target Interface Properties**

You probably don't want a single flat project structure, especially if you have many files and targets. You'll also want to tag "usage requirements" to libraries so that only the consumers receive the proper preprocessor definitions/include paths. That's what this video focuses on.

When typing the include path I say ".cpp" instead of ".hpp", which is wrong, of course, but not overly upsetting.

I also tried a slower, more stream-of-consciousness approach to this video. Of course I've removed periods of silence where I think about what to say next, but I think it came out pretty good and flows nicely. Tell me what you think!

This video description guaranteed to contain 5% fewer witty remarks than usual. Made from $100% mental concentration.

### 2a:

***Scripting Basics***

CMake is controlled via a simple (also simplistic) scripting language. Understanding the language is essential for understanding how to make effective use of CMake as a build and project management tool.

A few things to clarify: Quotes are REQUIRED around literal arguments that contain whitespace, otherwise each whitespace will be treated as argument separators to a command. Only double quotes are accepted as real quotes. Single quotes are treated like literal single quote characters.

The CMake scripting language reference: https://cmake.org/cmake/help/latest/m...

No animals were harmed in the creation of this video tutorial.

### 2b:

***Control Flow and Auto-dereferencing***

Of course a scripting language has conditionals and control flow! I'll also address auto-dereferencing in conditionals: Something that every CMake user MUST be aware of.

The CMake if() command: https://cmake.org/cmake/help/latest/c...

All conditions to if() are also valid in elseif() and while().

No issues in this video. Immaculate, in fact.

This is an eight minute video to explain conditional branches and loops aimed at people who already understand programming. Maybe the CMake language has a problem...

### 2c:

***Functions, Scopes, Arguments, and List Expansion***

This video is a bit longer than usual, but it covers a lot of important topics for CMake scripting. The scripting language can be confusing for those unfamiliar with just how simplistic it really is.

The video covers several topics, so here's some timestamps for each part:

00:12 - Arguments to commands are just a sequence of strings. Always. There is no other syntax. No keywords. No magic.
02:41 - Argument list expansion is essential to understand. This is where quoted vs unquoted variable references become important. It won't bite you if you know when to expect it. It can be your friend.
05:54 - Defining your own functions. It's not hard, and you can make powerful functionality using CMake scripts on their own! Functions are key. Know the difference between ARGN and ARGV.
09:14 - Variable scopes. This can trip people up when they aren't expecting it. Functions receive their own variable scope. include() and macro() do not. Know this, and how to manipulate your parent scope to return values to them.
11:51 - CMake output parameters and "indirection" through variable name arguments. Essential for any CMake scripting magic. Builds upon knowledge of scopes.

I purposefully omitted discussion of macro(). It's a very sharp tool that must be used with care, and is rarely needed. You can almost always get away with function() instead. Prefer it.

I've been told to increase the font size on my screen, so I've inflated VSCode to pretty large proportions. Tell me how it looks in the comments!

No errata for this one. It's a masterpiece, truly.

Documentation about set(), discussing PARENT_SCOPE: https://cmake.org/cmake/help/latest/c...

Documentation about unquoted arguments (covering list expansion): https://cmake.org/cmake/help/latest/m...

Documentation on variables and scopes: https://cmake.org/cmake/help/latest/m...

This video has no quip in its description - The Sign Painter


