long long uu_rm::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    unsigned int v5;  // [bp-0x834]
    char v6;  // [bp-0x830]
    unsigned int v7;  // [bp-0x5b8]
    char v8;  // [bp-0x5b4]
    unsigned long long v9;  // [bp-0x574]
    unsigned int v10;  // [bp-0x56c]
    char v11;  // [bp-0x568]
    unsigned int v12;  // [bp-0x2f0]
    char v13;  // [bp-0x2ec]
    unsigned long v14;  // [bp-0x2ac]
    unsigned int v15;  // [bp-0x2a4]
    void* v16;  // [bp-0x2a0], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [bp-0x298]
    char v18;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x288]
    unsigned long long v22;  // rdx

    v11.new(uucore::util_name(), v22);
    v6.version(&v11, "(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot rem", 24);
    uucore::mods::locale::get_message(&v3, "rm-about", 8);
    v11.about(&v6, &v3);
    uucore::mods::locale::get_message(&v0, "rm-usageall-args", 8);
    uucore::format_usage(&v3, v1, v2);
    v6.override_usage(&v11, &v3);
    uucore::mods::locale::get_message(&v3, "rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 13);
    v11.after_help(&v6, &v3);
    memcpy(&v6, &v11, 700);
    v9 = 584115552392 | v14;
    v10 = v15;
    v11.new("forceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-ro", 5);
    v3.short(&v11, 102);
    v11.long(&v3, "forceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-ro", 5);
    uucore::mods::locale::get_message(&v16, "rm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 13);
    v3.help(&v11, &v16);
    v16.action(&v3, 2);
    v11.arg(&v6, &v16);
    v6.new("prompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-re", 13);
    v3.short(&v6, 105);
    uucore::mods::locale::get_message(&v16, "rm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 21);
    v6.help(&v3, &v16);
    v16 = "prompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-hel";
    v17 = 11;
    v18 = "interactiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-";
    v19 = 11;
    v3.overrides_with_all(&v6, &v16);
    v16.action(&v3, 2);
    v6.arg(&v11, &v16);
    v11.new("prompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-hel", 11);
    v3.short(&v11, 73);
    uucore::mods::locale::get_message(&v16, "rm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 19);
    v11.help(&v3, &v16);
    v16 = "prompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-re";
    v17 = 13;
    v18 = "interactiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-";
    v19 = 11;
    v3.overrides_with_all(&v11, &v16);
    v16.action(&v3, 2);
    v11.arg(&v6, &v16);
    v6.new("interactiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-", 11);
    v3.long(&v6, "interactiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-", 11);
    uucore::mods::locale::get_message(&v16, "rm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 19);
    v6.help(&v3, &v16);
    v3.value_name(&v6);
    v16 = 0;
    v17 = 1;
    v18 = 0;
    v6.num_args(&v3, &v16);
    memcpy(&v3, &v6, 632);
    v4 = 128 | v7;
    v5 = *((int *)&v8);
    v6.default_missing_value(&v3);
    v16 = "prompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-re";
    v17 = 13;
    v18 = "prompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-hel";
    v19 = 11;
    v3.overrides_with_all(&v6, &v16);
    v6.arg(&v11, &v3);
    v11.new("one-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-", 15);
    v3.long(&v11, "one-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-", 15);
    uucore::mods::locale::get_message(&v16, "rm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 23);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("no-preserve-root", 16);
    v3.long(&v6, "no-preserve-root", 16);
    uucore::mods::locale::get_message(&v16, "rm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 24);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.arg(&v11, &v3);
    v11.new("preserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-r", 13);
    v3.long(&v11, "preserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-r", 13);
    uucore::mods::locale::get_message(&v16, "rm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 21);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("recursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-hel", 9);
    v3.short(&v6, 114);
    v6.visible_short_alias(&v3, 82);
    v3.long(&v6, "recursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-hel", 9);
    uucore::mods::locale::get_message(&v16, "rm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 17);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.arg(&v11, &v3);
    v11.new("dirinteractiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-", 3);
    v3.short(&v11, 100);
    v11.long(&v3, "dirinteractiveforceone-file-systempreserve-rootprompt-alwaysprompt-oncerecursiveverbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-", 3);
    uucore::mods::locale::get_message(&v16, "rm-help-dirrm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 11);
    v3.help(&v11, &v16);
    v16.action(&v3, 2);
    v11.arg(&v6, &v16);
    v6.new("verbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbose", 7);
    v3.short(&v6, 118);
    v6.long(&v3, "verbose-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbose", 7);
    uucore::mods::locale::get_message(&v16, "rm-help-verbosepresume-input-tty: \ncannot remove : Permission denied\n", 15);
    v3.help(&v6, &v16);
    v16.action(&v3, 2);
    v6.arg(&v11, &v16);
    v11.new("-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume", 18);
    v3.long(&v11, "presume-input-tty: \ncannot remove : Permission denied\n", 17);
    v11.alias(&v3, "-presume-input-ttyfiles(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume", 18);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 4;
    v5 = *((int *)&v13);
    v16.action(&v3, 2);
    v11.arg(&v6, &v16);
    v6.new("files(uutils coreutils) 0.1.0rm-after-helprm-help-forcerm-help-prompt-alwaysrm-help-prompt-oncerm-help-interactivealwaysrm-help-one-file-systemrm-help-no-preserve-rootrm-help-preserve-rootrm-help-recursiverm-help-dirrm-help-verbosepresume-input-tty: \ncanno", 5);
    v3.action(&v6, 1);
    v16 = 2;
    v6.value_parser(&v3, &v16);
    v3.num_args(&v6);
    v6.value_hint(&v3, 2);
    a0.arg(&v11, &v6);
    ::0x49f4a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
