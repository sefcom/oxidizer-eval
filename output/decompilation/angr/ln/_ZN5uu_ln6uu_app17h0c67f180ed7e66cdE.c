long long uu_ln::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v3.new(uucore::util_name(), v14);
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...forceremove existing destination filesinteractiveprompt whether to remove existing destination filesno-dereferencetreat LINK_", 131);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    uucore::features::backup_control::arguments::backup(&v0);
    v8.arg(&v3, &v0);
    uucore::features::backup_control::arguments::backup_no_args(&v0);
    v3.arg(&v8, &v0);
    v8.new("forceremove existing destination filesinteractiveprompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly ", 5);
    v0.short(&v8, 102);
    v8.long(&v0, "forceremove existing destination filesinteractiveprompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly ", 5);
    v0.help(&v8, "remove existing destination filesinteractiveprompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to sy", 33);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("interactiveprompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links i", 11);
    v0.short(&v3, 105);
    v3.long(&v0, "interactiveprompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links i", 11);
    v0.help(&v3, "prompt whether to remove existing destination filesno-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of h", 51);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("no-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create t", 14);
    v0.short(&v8, 110);
    v8.long(&v0, "no-dereferencetreat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create t", 14);
    v0.help(&v8, "treat LINK_NAME as a normal file if it is a symbolic link to a directorylogicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECT", 72);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("logicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symb", 7);
    v0.short(&v3, 76);
    v3.long(&v0, "logicalfollow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symb", 7);
    v0.help(&v3, "follow TARGETs that are symbolic linksmake hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic li", 38);
    v3.overrides_with(&v0, "physicalNotFoundTimedOutENETDOWNrelative\n       ");
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("physicalNotFoundTimedOutENETDOWNrelative\n       ", 8);
    v0.short(&v8, 80);
    v8.long(&v0, "physicalNotFoundTimedOutENETDOWNrelative\n       ", 8);
    v0.help(&v8, "make hard links directly to symbolic linksmake symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverbosepr", 42);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("symbolicEALREADY", 8);
    v0.short(&v3, 115);
    v3.long(&v0, "symbolicEALREADY", 8);
    v0.help(&v3, "make symbolic links instead of hard linksspecify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/", 41);
    v3.overrides_with(&v0, "symbolicEALREADY");
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    uucore::features::backup_control::arguments::suffix(&v0);
    v8.arg(&v3, &v0);
    v3.new("target-directory", 16);
    v0.short(&v3, 116);
    v3.long(&v0, "target-directory", 16);
    v0.help(&v3, "specify the DIRECTORY in which to create the linksDIRECTORYno-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/ln.rs", 50);
    v3.value_name(&v0);
    v0.value_hint(&v3, 4);
    v11.conflicts_with(&v0);
    v3.arg(&v8, &v11);
    v8.new("no-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/ln.rs", 19);
    v0.short(&v8, 84);
    v8.long(&v0, "no-target-directorytreat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/ln.rs", 19);
    v0.help(&v8, "treat LINK_NAME as a normal file alwayscreate symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/ln.rs", 39);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("relative\n       ", 8);
    v0.short(&v3, 114);
    v3.long(&v0, "relative\n       ", 8);
    v0.help(&v3, "create symbolic links relative to link locationverboseprint name of each linked filesrc/uu/ln/src/ln.rs", 47);
    v3.requires(&v0);
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("verboseprint name of each linked filesrc/uu/ln/src/ln.rs", 7);
    v0.short(&v8, 118);
    v8.long(&v0, "verboseprint name of each linked filesrc/uu/ln/src/ln.rs", 7);
    v0.help(&v8, "print name of each linked filesrc/uu/ln/src/ln.rs", 30);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("files(uutils coreutils) 0.0.30Make links between files.{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...forceremove existing destination filesinteractiveprompt whether to rem", 5);
    v0.action(&v3, 1);
    v3.value_hint(&v0, 2);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *((int *)&v5);
    v3.num_args(&v0);
    a0.arg(&v8, &v3);
    return a0;
}
