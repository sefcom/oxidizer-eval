long long starship::bug_report::get_config_path(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rax

    if ((char)a1.equal(a2, "nunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHea", 2))
    {
        v3 = dirs::config_dir(&v0);
        if (*((long long *)&v0) != 0x8000000000000000)
            return (unsigned long long)starship::bug_report::get_config_path::{{closure}}(a0, &v0);
    }
    else
    {
        v3 = starship::utils::home_dir(&v1);
        if (*((long long *)&v1) != 0x8000000000000000)
            return (unsigned long long)starship::bug_report::get_config_path::{{closure}}(a0, a1, a2, &v1);
    }
    *(a0) = 0x8000000000000000;
    return v3;
}
