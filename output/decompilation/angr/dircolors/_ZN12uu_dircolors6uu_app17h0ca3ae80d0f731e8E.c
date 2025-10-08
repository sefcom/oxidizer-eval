long long uu_dircolors::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned long long v4;  // [bp-0x574]
    unsigned int v5;  // [bp-0x56c]
    char v6;  // [bp-0x568]
    unsigned int v7;  // [bp-0x2f0]
    char v8;  // [bp-0x2ec]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v6.new(uucore::util_name(), v14);
    v3.version(&v6);
    v6.about(&v3);
    v3.after_help(&v6);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]bourne-shellshc-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 21);
    v6.override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 584115552392 | v9;
    v5 = v10;
    v6.new("bourne-shellshc-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 12);
    v0.long(&v6, "shc-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 2);
    v6.short(&v0, 98);
    v0.visible_alias(&v6, "bourne-shellshc-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 12);
    v6.overrides_with(&v0, "c-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 7);
    v0.help(&v6, "output Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 41);
    v11.action(&v0, 2);
    v6.arg(&v3, &v11);
    v3.new("c-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 7);
    v0.long(&v3, "cshsetenv LS_COLORS 'LS_COLORS=''';\nexport LS_COLORSinternal error: entered unreachable codesrc/uu/dircolors/src/dircolors.rs", 3);
    v3.short(&v0, 99);
    v0.visible_alias(&v3, "c-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 7);
    v3.overrides_with(&v0, "bourne-shellshc-shelloutput Bourne shell code to set LS_COLORSoutput C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 12);
    v0.help(&v3, "output C shell code to set LS_COLORSprint-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 36);
    v11.action(&v0, 2);
    v3.arg(&v6, &v11);
    v6.new("print-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 14);
    v0.long(&v6, "print-databaseprint the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 14);
    v6.short(&v0, 112);
    v0.help(&v6, "print the byte countsprint-ls-colorsoutput fully escaped colors for displayoptionscolor", 21);
    v11.action(&v0, 2);
    v6.arg(&v3, &v11);
    v3.new("print-ls-colorsoutput fully escaped colors for displayoptionscolor", 15);
    v0.long(&v3, "print-ls-colorsoutput fully escaped colors for displayoptionscolor", 15);
    v3.help(&v0, "output fully escaped colors for displayoptionscolor", 39);
    v0.action(&v3, 2);
    v3.arg(&v6, &v0);
    v6.new("FILE.alz.mpgchar", 4);
    memcpy(&v0, &v6, 632);
    v1 = v7 | 4;
    v2 = *((int *)&v8);
    v6.value_hint(&v0);
    v0.action(&v6, 1);
    a0.arg(&v3, &v0);
    return a0;
}
