long long uu_rm::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned int v1;  // [bp-0x848]
    char v2;  // [bp-0x844]
    unsigned long long v3;  // [bp-0x804]
    unsigned int v4;  // [bp-0x7fc]
    char v5;  // [bp-0x7f8]
    unsigned int v6;  // [bp-0x580]
    unsigned int v7;  // [bp-0x57c]
    char v8;  // [bp-0x578]
    unsigned int v9;  // [bp-0x300]
    char v10;  // [bp-0x2fc]
    unsigned long v11;  // [bp-0x2bc]
    unsigned int v12;  // [bp-0x2b4]
    char v13;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x2a8]
    unsigned long long v15;  // [bp-0x2a0]
    unsigned long long v16;  // [bp-0x298]
    unsigned long long v19;  // rdx

    v0.new(uucore::util_name(), v19);
    v8.version(&v0);
    v0.about(&v8);
    uucore::format_usage(&v5, "{} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mi", 22);
    v8.override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v11;
    v4 = v12;
    v8.new("forceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once be", 5);
    v5.short(&v8, 102);
    v8.long(&v5, "forceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once be", 5);
    v5.help(&v8, "ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakesprompt according", 52);
    v13.action(&v5, 2);
    v8.arg(&v0, &v13);
    v0.new("promptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three fil", 6);
    v5.short(&v0, 105);
    v0.help(&v5, "prompt before every removalprompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakesprompt according to WHEN: never, once (-I), or always (-i). Without ", 27);
    v13 = "prompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or";
    v14 = 11;
    v15 = "interactiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalpro";
    v16 = 11;
    v5.overrides_with_all(&v0, &v13);
    v13.action(&v5, 2);
    v0.arg(&v8, &v13);
    v8.new("prompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or", 11);
    v5.short(&v8, 73);
    v8.help(&v5, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakesprompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts alwaysalwaysw", 161);
    v13 = "promptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three fil";
    v14 = 6;
    v15 = "interactiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalpro";
    v16 = 11;
    v5.overrides_with_all(&v8, &v13);
    v13.action(&v5, 2);
    v8.arg(&v0, &v13);
    v0.new("interactiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalpro", 11);
    v5.long(&v0, "interactiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalpro", 11);
    v0.help(&v5, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts alwaysalwayswhen removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED", 88);
    v5.value_name(&v0);
    v0.num_args(&v5, 0, 1);
    memcpy(&v5, &v0, 632);
    v6 = 128 | v1;
    v7 = *((int *)&v2);
    v0.default_missing_value(&v5);
    v13 = "promptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three fil";
    v14 = 6;
    v15 = "prompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or";
    v16 = 11;
    v5.overrides_with_all(&v0, &v13);
    v0.arg(&v8, &v5);
    v8.new("one-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before ", 15);
    v5.long(&v8, "one-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before ", 15);
    v8.help(&v5, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)do not treat '/' speciallydo not remove '/' (default)remove directories and their contents re", 163);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("no-preserve-root", 16);
    v5.long(&v0, "no-preserve-root", 16);
    v0.help(&v5, "do not treat '/' speciallydo not remove '/' (default)remove directories and their contents recursivelyremove empty directoriesexplain what is being donepresume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refu", 26);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("preserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more t", 13);
    v5.long(&v8, "preserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more t", 13);
    v8.help(&v5, "do not remove '/' (default)remove directories and their contents recursivelyremove empty directoriesexplain what is being donepresume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refusing to remove '.' or '..'", 27);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("recursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when remov", 9);
    v5.short(&v0, 114);
    v0.visible_short_alias(&v5);
    v5.long(&v0, "recursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when remov", 9);
    v0.help(&v5, "remove directories and their contents recursivelyremove empty directoriesexplain what is being donepresume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refusing to remove '.' or '..' directory: skipping ''\nit ", 49);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("dirinteractiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removal", 3);
    v5.short(&v8, 100);
    v8.long(&v5, "dirinteractiveforceone-file-systempreserve-rootpromptprompt-morerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removal", 3);
    v5.help(&v8, "remove empty directoriesexplain what is being donepresume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refusing to remove '.' or '..' directory: skipping ''\nit is dangerous to operate recursively on 'use --no-", 24);
    v13.action(&v5, 2);
    v8.arg(&v0, &v13);
    v0.new("verbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recur", 7);
    v5.short(&v0, 118);
    v0.long(&v5, "verbose-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recur", 7);
    v5.help(&v0, "explain what is being donepresume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refusing to remove '.' or '..' directory: skipping ''\nit is dangerous to operate recursively on 'use --no-preserve-root to overrid", 26);
    v13.action(&v5, 2);
    v0.arg(&v8, &v13);
    v8.new("-presume-input-ttyfiles(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recursively.", 18);
    v5.long(&v8, "presume-input-tty: cannot remove : No such file or directory\n\n: Permission denied\nremoved directory refusing to remove '.' or '..' directory: skipping ''\nit is dangerous to operate recursively on 'use --no-preserve-root to override this failsafe\n: Is a directory\nremove symbolic link ? remove regular empty file remove file remove write-protected regular empty file remove write-protected regular file attempt removal of inaccessible directory remove write-protected directory remove directory src/uu/rm/src/rm.rsdescend into directory ", 17);
    v8.alias(&v5);
    memcpy(&v5, &v8, 632);
    v6 = v9 | 4;
    v7 = *((int *)&v10);
    v13.action(&v5, 2);
    v8.arg(&v0, &v13);
    v0.new("files(uutils coreutils) 0.0.30Remove (unlink) the FILE(s){} [OPTION]... FILE...ignore nonexistent files and arguments, never promptprompt before every removalprompt once before removing more than three files, or when removing recursively. Less intrusive th", 5);
    v5.action(&v0, 1);
    v13 = 2;
    v0.value_parser(&v5, &v13);
    v5.num_args(&v0);
    v0.value_hint(&v5);
    a0.arg(&v8, &v0);
    return a0;
}
