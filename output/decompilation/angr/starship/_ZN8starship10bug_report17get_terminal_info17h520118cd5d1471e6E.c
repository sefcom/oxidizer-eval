long long starship::bug_report::get_terminal_info(struct_1 *a0)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [bp-0xa0]
    int v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    int v4;  // [bp-0x88], Other Possible Types: char
    unsigned long long v5;  // [bp-0x78]
    int v6;  // [bp-0x68], Other Possible Types: char
    unsigned long v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    int v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    char v12;  // [bp-0x28]
    char v13;  // [bp-0x20]
    struct_0 *v15;  // r14
    int v16;  // xmm0
    int v17;  // xmm0

    std::env::var(&v8, "TERM_PROGRAMTERM_PROGRAM_VERSIONLC_TERMINAL<unknown terminal>LC_TERMINAL_VERSIONnunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.conf", 12);
    if (*((int *)&v8) == 1)
    {
        starship::bug_report::get_terminal_info::{{closure}}(&v0, &v9);
        v15 = &(char)v0;
        if (*((int *)&v0) == 1)
            goto LABEL_b46b94;
LABEL_b46b62:
        v5 = v3;
        memcpy(&v4, &v1, 16);
    }
    else
    {
        v16 = *((int128_t *)&v8);
        v2 = v10;
        v0 = v16;
        v15 = &(char)v0;
        if ((int)v0 != 1)
            goto LABEL_b46b62;
LABEL_b46b94:
        starship::bug_report::get_terminal_info::{{closure}}(&v4, &(char)v0);
    }
    std::env::var(&v11, "TERM_PROGRAM_VERSIONLC_TERMINAL<unknown terminal>LC_TERMINAL_VERSIONnunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.", 20);
    if (*((int *)&v11) == 1)
    {
        starship::bug_report::get_terminal_info::{{closure}}(&v0, &v12);
        if ((int)v0 != 1)
            goto LABEL_b46bff;
LABEL_b46bd4:
        starship::bug_report::get_terminal_info::{{closure}}(&v6, &(char)v0);
    }
    else
    {
        v17 = *((int128_t *)&v11);
        *((int128_t *)&v2) = *((int128_t *)&v13);
        v0 = v17;
        if ((int)v0 == 1)
            goto LABEL_b46bd4;
LABEL_b46bff:
        v7 = v15->field_10;
        *((char [16])&v6) = v15->field_0;
    }
    a0->field_10 = v5;
    *((void*)&a0->field_0) = v4;
    *((void*)&(&a0->field_10)[1]) = v6;
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v7;
    return v7;
}
