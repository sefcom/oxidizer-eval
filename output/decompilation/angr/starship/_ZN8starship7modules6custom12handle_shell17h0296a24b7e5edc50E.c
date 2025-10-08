long long starship::modules::custom::handle_shell(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned int v5;  // ebp
    unsigned long long v6;  // r12
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rax

    v4 = a1.file_stem(a2);
    v5 = vvar_52{reg 56} & 0xffffff00 | 1;
    if (!v4)
        return v5;
    core::str::converts::from_utf8(&v0, v4, a2);
    if (*((int *)&v0) == 1)
        return v5;
    v6 = *((long long *)&v2);
    if (!(char)v1.equal(v6, "pwsh\n```", 4) && !(char)v1.equal(v6, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10))
    {
        if (!(char)v1.equal(v6, "cmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about ", 3))
        {
            v8 = v1.equal(v6, "nunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHea", 2);
            if (!((char)v8 & !a3))
                return (unsigned int)v8 & 0xffffff00 | (char)v8 ^ 1;
            v7 = "-c--work-treeExecuting git command: ";
        }
        else if (!a3)
        {
            v7 = "/C-NoProfileError in module `daml`:\nsrc/modules/daml.rs";
        }
        else
        {
            return 0;
        }
        a0.arg(v7, 2);
        return 0;
    }
    if (a3)
        return v5;
    a0.arg("-NoProfileError in module `daml`:\nsrc/modules/daml.rs", 10);
    a0.arg("-Commandcontextsjsr.jsonPROTOCOLprofile.", 8);
    a0.arg("-", 1);
    return v5;
}
