long long uu_ls::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x5b8]
    char v1;  // [bp-0x5a8]
    char v2;  // [bp-0x598]
    unsigned long long v3;  // [bp-0x588]
    struct_0 *v4;  // [bp-0x580]
    int v5;  // [bp-0x540], Other Possible Types: char
    unsigned long long v6;  // [bp-0x530]
    int v7;  // [bp-0x528], Other Possible Types: char
    unsigned long long v8;  // [bp-0x518]
    char v9;  // [bp-0x510]
    int v10;  // [bp-0x4f8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x4f0]
    unsigned long long v12;  // [bp-0x4e8]
    unsigned int v13;  // [bp-0x4e0]
    char v14;  // [bp-0x3e8], Other Possible Types: unsigned long long
    struct_0 *v15;  // [bp-0x3e0], Other Possible Types: unsigned long long
    char v16;  // [bp-0x3d8], Other Possible Types: unsigned long long
    char v17;  // [bp-0x3d0]
    char v18;  // [bp-0x3c8]
    char v19;  // [bp-0x3b8]
    char v20;  // [bp-0x2e0]
    struct_0 *v22;  // rdi
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbx

    uu_ls::uu_app(&v20);
    v14.try_get_matches_from(&v20, a0, a1);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
    {
        v22 = v15;
        if ((v22->field_f9 & 29) == 12)
            return v22.from();
        if (v22->field_f9)
        {
            v4 = v22;
            v7.spec_to_string(&v4);
            v13 = 2;
            v10 = v7;
            v12 = v8;
            v23 = (char)v10.new();
        }
        else
        {
            v4 = v22;
            v5.spec_to_string(&v4);
            v13 = 1;
            v10 = v5;
            v12 = v6;
            v23 = (char)v10.new();
        }
        core::ptr::drop_in_place<clap_builder::error::Error>(v4);
        return v23;
    }
    else
    {
        v3 = *((long long *)&v19);
        memcpy(&v2, &v18, 16);
        memcpy(&v1, &v16, 16);
        memcpy(&v0, &v14, 16);
        v14.from(&v0);
        v24 = v15;
        if (v14 != 0x8000000000000000)
        {
            memcpy(&(char)v13, &v17, 240);
            v10 = v14;
            v11 = v24;
            v12 = v16;
            v14.try_get_many(&v0, _ZN5uu_ls7options5PATHS17hfa32a56119ad4e17E, g_6a0e80);
            (char)v4.unwrap(_ZN5uu_ls7options5PATHS17hfa32a56119ad4e17E, g_6a0e80, &v14);
            v9.map_or_else(&(char)v4);
            v24 = uu_ls::list(&v9, &v10);
            core::ptr::drop_in_place<uu_ls::Config>(&v10);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
        return v24;
    }
}
