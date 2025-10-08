long long bat::less::retrieve_less_version(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x180]
    int v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    int v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    char v5;  // [bp-0x158], Other Possible Types: unsigned long long
    char v6;  // [bp-0x150]
    char v7;  // [bp-0x148], Other Possible Types: unsigned long long
    int v8;  // [bp-0x140]
    int v9;  // [bp-0x130]
    char v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x108]
    char v12;  // [bp-0x100]
    char v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    char v15;  // [bp-0xe0]
    unsigned long long v18;  // rdx
    unsigned long v19;  // r14

    grep_cli::decompress::resolve_binary(&v13, a0.as_ref(), v18);
    if ((v13 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(&v13);
    }
    else
    {
        memcpy(&v7, &v15, 16);
        if (!((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63)))
        {
            memcpy(&v12, &v7, 16);
            v11 = v14;
            v13.new(&v11);
            v13.arg("--versionless src/less.rs", 9);
            v7.output(&v13);
            if (v7 != 0x8000000000000000)
            {
                memcpy(&v5, &v10, 16);
                v3 = v9;
                v1 = v8;
                v0 = v7;
                core::ptr::drop_in_place<std::process::Command>(&v13);
                v19 = (!*((int *)&v6) ? bat::less::parse_less_version((long long)v1, v2) : bat::less::parse_less_version_busybox(v4, v5));
                core::ptr::drop_in_place<std::process::Output>(&v0);
                return v19;
            }
            core::ptr::drop_in_place<core::result::Result<std::process::Output,std::io::error::Error>>(&v7);
            core::ptr::drop_in_place<std::process::Command>(&v13);
        }
    }
    return 2;
}
