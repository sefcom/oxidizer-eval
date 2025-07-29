long long uu_dircolors::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x824]
    char v6;  // [bp-0x820]
    unsigned int v7;  // [bp-0x5a8]
    char v8;  // [bp-0x5a4]
    unsigned long v9;  // [bp-0x564]
    unsigned int v10;  // [bp-0x55c]
    char v11;  // [bp-0x558]
    unsigned long long v12;  // [bp-0x29c]
    unsigned int v13;  // [bp-0x294]
    char v14;  // [bp-0x290]
    unsigned long long v17;  // rdx

    v6.new(uucore::util_name(), v17);
    v11.version(&v6, "(uutils coreutils) 0.1.0dircolors-aboutdircolors-after-helpdircolors-usagebourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 24);
    uucore::mods::locale::get_message(&v3, "dircolors-aboutdircolors-after-helpdircolors-usagebourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 15);
    v6.about(&v11, &v3);
    uucore::mods::locale::get_message(&v3, "dircolors-after-helpdircolors-usagebourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 20);
    v11.after_help(&v6, &v3);
    uucore::mods::locale::get_message(&v0, "dircolors-usagebourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 15);
    uucore::format_usage(&v3, v1, v2);
    v6.override_usage(&v11, &v3);
    memcpy(&v11, &v6, 700);
    v12 = 584115552392 | v9;
    v13 = v10;
    v6.new("bourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 12);
    v3.long(&v6, "shc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 2);
    v6.short(&v3, 98);
    v3.visible_alias(&v6, "bourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 12);
    v6.overrides_with(&v3, "c-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 7);
    uucore::mods::locale::get_message(&v14, "dircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 27);
    v3.help(&v6, &v14);
    v14.action(&v3, 2);
    v6.arg(&v11, &v14);
    v11.new("c-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 7);
    v3.long(&v11, "cshsetenv LS_COLORS 'LS_COLORS=''';\nexport LS_COLORSinternal error: entered unreachable codesrc/uu/dircolors/src/dircolors.rs", 3);
    v11.short(&v3, 99);
    v3.visible_alias(&v11, "c-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 7);
    v11.overrides_with(&v3, "bourne-shellshc-shelldircolors-help-bourne-shelldircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 12);
    uucore::mods::locale::get_message(&v14, "dircolors-help-c-shellprint-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 22);
    v3.help(&v11, &v14);
    v14.action(&v3, 2);
    v11.arg(&v6, &v14);
    v6.new("print-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 14);
    v3.long(&v6, "print-databasedircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 14);
    v6.short(&v3, 112);
    uucore::mods::locale::get_message(&v14, "dircolors-help-print-databaseprint-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 29);
    v3.help(&v6, &v14);
    v14.action(&v3, 2);
    v6.arg(&v11, &v14);
    v11.new("print-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 15);
    v3.long(&v11, "print-ls-colorsdircolors-help-print-ls-colorsoptionscolor", 15);
    uucore::mods::locale::get_message(&v14, "dircolors-help-print-ls-colorsoptionscolor", 30);
    v11.help(&v3, &v14);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("FILE.alz.mpgchar", 4);
    memcpy(&v3, &v6, 632);
    v4 = v7 | 4;
    v5 = *((int *)&v8);
    v6.value_hint(&v3, 3);
    v3.action(&v6, 1);
    a0.arg(&v11, &v3);
    ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
