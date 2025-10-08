long long starship::context::Context::get_shell()
{
    char v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rbp

    std::env::var(&v3, "STARSHIP_SHELLsrc/bug_report.rs", 14);
    v0.unwrap_or_default(&v3);
    if ((char)v1.equal(v2, "bashopam$allHOMEUserBare0000koi8CoreTextSlimv150granname", 4))
    {
        v5 = 0;
    }
    else
    {
        v5 = vvar_13{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)v1.equal(v2, "fish ", 4))
        {
            v5 = v5 & 0xffffffffffffff00 | 2;
            if (!(char)v1.equal(v2, "ionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String)", 3))
            {
                v5 = v5 & 0xffffffffffffff00 | 3;
                if (!(char)v1.equal(v2, "pwsh\n```", 4))
                {
                    v5 = v5 & 0xffffffffffffff00 | 4;
                    if (!(char)v1.equal(v2, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10))
                    {
                        v5 = v5 & 0xffffffffffffff00 | 5;
                        if (!(char)v1.equal(v2, "zshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).tr", 3))
                        {
                            v5 = v5 & 0xffffffffffffff00 | 6;
                            if (!(char)v1.equal(v2, "elvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about the problem here. If applicable, add screenshots to help explain. -->\n\n#### Possible Solution\n<!--- Only if you have suggestions on a fix for the bug -->\n\n#### Environment\n- Starship version: \n-  version: \n- Operating system: \n- Terminal emulator: \n- Git Commit Hash: \n- Branch/Tag: \n- Rust Version: \n- Rust channel: \n- Build Time: \n#### Relevant Shell Configuration\n\n```\n```\n\n#### Starship Configuration\n\n```toml\n", 6))
                            {
                                v5 = v5 & 0xffffffffffffff00 | 7;
                                if (!(char)v1.equal(v2, "tcsh", 4))
                                {
                                    v5 = v5 & 0xffffffffffffff00 | 8;
                                    if (!(char)v1.equal(v2, "nunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHea", 2))
                                    {
                                        v5 = v5 & 0xffffffffffffff00 | 9;
                                        if (!(char)v1.equal(v2, "xonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim(", 5))
                                            v5 = (int)v1.equal(v2, "cmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about ", 3) & 0xffffff00 | (char)v1.equal(v2, "cmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about ", 3) ^ 11;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v5 & 4294967295;
}
