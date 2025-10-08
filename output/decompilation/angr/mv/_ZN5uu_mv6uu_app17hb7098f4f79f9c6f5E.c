long long uu_mv::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xaf0]
    char v1;  // [bp-0xad8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xad0]
    unsigned long long v3;  // [bp-0xac8]
    unsigned long long v4;  // [bp-0xac0]
    unsigned int v5;  // [bp-0x860]
    unsigned int v6;  // [bp-0x85c]
    char v7;  // [bp-0x858]
    char v8;  // [bp-0x840]
    unsigned int v9;  // [bp-0x5c8]
    char v10;  // [bp-0x5c4]
    unsigned long long v11;  // [bp-0x584]
    unsigned int v12;  // [bp-0x57c]
    char v13;  // [bp-0x578], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x570]
    char *v15;  // [bp-0x568]
    unsigned long long v16;  // [bp-0x560]
    void* v17;  // [bp-0x558]
    unsigned long v18;  // [bp-0x2bc]
    unsigned int v19;  // [bp-0x2b4]
    unsigned long long v20;  // [bp-0x2b0]
    unsigned long long v21;  // [bp-0x2a8]
    unsigned long long v22;  // [bp-0x2a0]
    unsigned long long v23;  // [bp-0x298]
    unsigned long long v26;  // rdx

    v13.new(uucore::util_name(), v26);
    v8.version(&v13);
    v13.about(&v8);
    uucore::format_usage(&v1, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -", 104);
    v8.override_usage(&v13, &v1);
    v1 = &g_541610;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &g_541600;
    v4 = <&T as core::fmt::Display>::fmt;
    v13 = &g_5415e0;
    v14 = 2;
    v17 = 0;
    v15 = &v1;
    v16 = 2;
    v7.map_or_else(&v13);
    v13.after_help(&v8, &v7);
    memcpy(&v8, &v13, 700);
    v11 = 549755814016 | v18;
    v12 = v19;
    v13.new("forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]...", 5);
    v1.short(&v13, 102);
    v13.long(&v1, "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]...", 5);
    v1.help(&v13, "do not prompt before overwritingsrc/uucore/src/lib/mods/error.rsFormatting argument out of rangelibrary/std/src/sys/args/unix.rs", 32);
    v20 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t D";
    v21 = 11;
    v22 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SO";
    v23 = 10;
    v13.overrides_with_all(&v1, &v20);
    v1.action(&v13, 2);
    v13.arg(&v8, &v1);
    v8.new("interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t D", 11);
    v1.short(&v8, 105);
    v8.long(&v1, "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t D", 11);
    v1.help(&v8, "prompt before overridedo not overwrite an existing fileremove any trailing slashes from each SOURCE argumentmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being doneDisplay a progress bar. \nNote: this feature is", 22);
    v20 = "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]...";
    v21 = 5;
    v22 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SO";
    v23 = 10;
    v8.overrides_with_all(&v1, &v20);
    v1.action(&v8, 2);
    v8.arg(&v13, &v1);
    v13.new("no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SO", 10);
    v1.short(&v13, 110);
    v13.long(&v1, "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SO", 10);
    v1.help(&v13, "do not overwrite an existing fileremove any trailing slashes from each SOURCE argumentmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being doneDisplay a progress bar. \nNote: this feature is not supported by GNU ", 33);
    v20 = "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]...";
    v21 = 5;
    v22 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t D";
    v23 = 11;
    v13.overrides_with_all(&v1, &v20);
    v1.action(&v13, 2);
    v13.arg(&v8, &v1);
    v8.new("strip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The", 22);
    v1.long(&v8, "strip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The", 22);
    v8.help(&v1, "remove any trailing slashes from each SOURCE argumentmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being doneDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.explain how a file is c", 53);
    v1.action(&v8, 2);
    v8.arg(&v13, &v1);
    uucore::features::backup_control::arguments::backup(&v1);
    v13.arg(&v8, &v1);
    uucore::features::backup_control::arguments::backup_no_args(&v1);
    v8.arg(&v13, &v1);
    uucore::features::backup_control::arguments::suffix(&v1);
    v13.arg(&v8, &v1);
    uucore::features::update_control::arguments::update(&v1);
    v8.arg(&v13, &v1);
    uucore::features::update_control::arguments::update_no_args(&v1);
    v13.arg(&v8, &v1);
    v8.new("target-directory", 16);
    v1.short(&v8, 116);
    v8.long(&v1, "target-directory", 16);
    v1.help(&v8, "move all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being doneDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.explain how a file is copied. Implies -vbacking up  might destroy source;   ", 40);
    v8.value_name(&v1);
    v1.value_hint(&v8, 4);
    v8.conflicts_with(&v1);
    v0 = 2;
    v1.value_parser(&v8, &v0);
    v8.arg(&v13, &v1);
    v13.new("no-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~',", 19);
    v1.short(&v13, 84);
    v13.long(&v1, "no-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~',", 19);
    v1.help(&v13, "treat DEST as a normal fileexplain what is being doneDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.explain how a file is copied. Implies -vbacking up  might destroy source;   not moved: overwrite ?  \ncannot move ", 27);
    v20.action(&v1, 2);
    v13.arg(&v8, &v20);
    v8.new("verbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --", 7);
    v1.short(&v8, 118);
    v8.long(&v1, "verbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --", 7);
    v1.help(&v8, "explain what is being doneDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.explain how a file is copied. Implies -vbacking up  might destroy source;   not moved: overwrite ?  \ncannot move ", 26);
    v20.action(&v1, 2);
    v8.arg(&v13, &v20);
    v13.new("progress", 8);
    v1.short(&v13, 103);
    v13.long(&v1, "progress", 8);
    v1.help(&v13, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.explain how a file is copied. Implies -vbacking up  might destroy source;   not moved: overwrite ?  \ncannot move ", 78);
    v20.action(&v1, 2);
    v13.arg(&v8, &v20);
    v8.new("filesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix ", 5);
    v1.action(&v8, 1);
    v8.num_args(&v1);
    memcpy(&v1, &v8, 632);
    v5 = v9 | 1;
    v6 = *((int *)&v10);
    v8.value_parser(&v1, &v0);
    v1.value_hint(&v8, 2);
    v8.arg(&v13, &v1);
    v13.new("debug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SI", 5);
    v1.long(&v13, "debug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SI", 5);
    v13.help(&v1, "explain how a file is copied. Implies -vbacking up  might destroy source;   not moved: overwrite ?  \ncannot move ", 40);
    v1.action(&v13, 2);
    a0.arg(&v8, &v1);
    return a0;
}
