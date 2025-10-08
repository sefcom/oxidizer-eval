long long starship::bug_report::get_shell_info(struct_0 *a0)
{
    int v0;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v1;  // [bp-0xc0]
    int v2;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xa8]
    int v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x88]
    char v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    int v11;  // [bp-0x48], Other Possible Types: char
    unsigned long long v12;  // [bp-0x38]
    char v13;  // [bp-0x30]

    std::env::var(&v10, "STARSHIP_SHELLsrc/bug_report.rs", 14);
    if ((v10 & 1))
    {
        v0.to_vec("<unknown shell><unknown version>STARSHIP_SHELLsrc/bug_report.rs", 15);
        v6 = v1;
        v5 = v0;
        v0.to_vec("<unknown version>STARSHIP_SHELLsrc/bug_report.rs", 17);
        v4 = v1;
        v2 = v0;
        v0.to_vec("<unknown config>unhealthy_symbolEscapedTransformzbus::connectioncore.commitGraphtransition table when inserting Uppercase_Letterthe subcommand '", 16);
        *((unsigned long long *)&a0->field_30) = v1;
        *((void*)&a0->field_28) = v0;
        a0->field_10 = v6;
        *((void*)&a0->field_0) = v5;
        *((void*)&(&a0->field_10)[1]) = v2;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v4;
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v10);
    }
    v7.unwrap(&v10);
    starship::bug_report::get_shell_version(&(char)v5, v8, v9);
    starship::bug_report::get_config_path(&v13, v8, v9);
    if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
    {
        v2 = 0x8000000000000000;
    }
    else
    {
        std::fs::read_to_string(&(char)v0, &v13);
        if ((long long)v0 == 0x8000000000000000)
        {
            v2 = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&(char)v0);
        }
        else
        {
            v4 = v1;
            v3 = v0;
        }
    }
    v11.map_or_else(&v3);
    a0->field_10 = v9;
    a0->field_0 = *((int128_t *)&v7);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v6;
    *((void*)&(&a0->field_10)[1]) = v5;
    *((void*)&a0->field_28) = v11;
    *((unsigned long long *)&a0->field_30) = v12;
    return v12;
}
