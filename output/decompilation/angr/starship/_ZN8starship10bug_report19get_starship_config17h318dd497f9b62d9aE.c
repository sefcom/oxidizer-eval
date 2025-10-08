double starship::bug_report::get_starship_config(long long a0)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    int v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    int v6;  // [bp-0x40], Other Possible Types: char
    unsigned long long v7;  // [bp-0x30]
    char v8;  // [bp-0x28]
    int v10;  // ymm0
    uint256_t v11;  // ymm0
    int v12;  // xmm0

    std::env::var(&v0, "STARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs", 15);
    v11 = v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v2);
    memcpy(&v6, &v2, 16);
    v7 = v4;
    if ((v0 & 1))
    {
        v5 = 1;
        v0 = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::env::VarError>>(&v5);
    }
    else
    {
        v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
        v1 = v6;
        v3 = v7;
    }
    v8.or_else(&v0);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        std::fs::read_to_string(&v0, &v8);
        if (v0 != 0x8000000000000000)
        {
            v12 = (int128_t)(&v1)[8];
            *((void*)&(&a0->field_0)[1]) = v12;
            a0->field_0 = v0;
            return (unsigned long long)v12;
        }
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
    }
    a0.to_vec("<unknown config>unhealthy_symbolEscapedTransformzbus::connectioncore.commitGraphtransition table when inserting Uppercase_Letterthe subcommand '", 16);
    return (unsigned long long)v11;
}
