long long uu_ls::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    struct_0 *v0;  // [bp-0x5c0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x5b8]
    unsigned long long v2;  // [bp-0x5b0]
    char v3;  // [bp-0x5a8]
    char v4;  // [bp-0x598]
    char v5;  // [bp-0x588]
    unsigned long long v6;  // [bp-0x578]
    int v7;  // [bp-0x568], Other Possible Types: char
    unsigned long long v8;  // [bp-0x558]
    int v9;  // [bp-0x550], Other Possible Types: char
    unsigned long long v10;  // [bp-0x540]
    char v11;  // [bp-0x538], Other Possible Types: unsigned long long
    struct_0 *v12;  // [bp-0x530], Other Possible Types: unsigned long long
    char v13;  // [bp-0x528], Other Possible Types: unsigned long long
    char v14;  // [bp-0x520]
    char v15;  // [bp-0x518]
    char v16;  // [bp-0x508]
    int v17;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x420]
    unsigned long long v19;  // [bp-0x418]
    unsigned int v20;  // [bp-0x410]
    char v21;  // [bp-0x320]
    char v22;  // [bp-0x2e0]
    struct_0 *v24;  // rdi
    unsigned long long v25;  // rax
    unsigned long long v26;  // rbx

    uu_ls::uu_app(&v22);
    v11.try_get_matches_from(&v22, a0, a1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        v24 = v12;
        if ((v24->field_dd & 29) == 12)
            return v24.from();
        if (v24->field_dd)
        {
            v0 = v24;
            v9.spec_to_string(&v0);
            v20 = 2;
            v17 = v9;
            v19 = v10;
            v25 = (char)v17.new();
        }
        else
        {
            v0 = v24;
            v7.spec_to_string(&v0);
            v20 = 1;
            v17 = v7;
            v19 = v8;
            v25 = (char)v17.new();
        }
        core::ptr::drop_in_place<clap_builder::error::Error>(v0);
        return v25;
    }
    else
    {
        v6 = *((long long *)&v16);
        memcpy(&v5, &v15, 16);
        memcpy(&v4, &v13, 16);
        memcpy(&v3, &v11, 16);
        v11.from(&v3);
        v26 = v12;
        if (v11 != 0x8000000000000000)
        {
            memcpy(&(char)v20, &v14, 240);
            v17 = v11;
            v18 = v26;
            v19 = v13;
            v11.try_get_many(&v3, _ZN5uu_ls7options5PATHS17h978caca964396fddE, g_686720);
            v21.unwrap(_ZN5uu_ls7options5PATHS17h978caca964396fddE, g_686720, &v11);
            if (*((long long *)&v21))
            {
                v11.collect(&v21);
                *((int128_t *)&v1) = *((int128_t *)&v12);
                v0 = v11;
            }
            else
            {
                uu_ls::uumain::uumain::{{closure}}(&(char)v0);
            }
            v13 = v2;
            v11 = v0;
            v12 = (long long)v1;
            v26 = uu_ls::list(&v11, &v17);
            core::ptr::drop_in_place<uu_ls::Config>(&v17);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
        return v26;
    }
}
