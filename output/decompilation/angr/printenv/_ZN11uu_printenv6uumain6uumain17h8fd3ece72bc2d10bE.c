long long uu_printenv::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x478]
    unsigned long long v1;  // [bp-0x470]
    unsigned long long v2;  // [bp-0x468]
    int v3;  // [bp-0x458], Other Possible Types: char
    unsigned long long v4;  // [bp-0x450]
    unsigned long long v5;  // [bp-0x448]
    void* v6;  // [bp-0x440]
    int v7;  // [bp-0x438], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x430]
    int v9;  // [bp-0x428], Other Possible Types: char
    int v10;  // [bp-0x418]
    int v11;  // [bp-0x408], Other Possible Types: char *, unsigned long long
    unsigned long long v12;  // [bp-0x400]
    char *v13;  // [bp-0x3f8]
    unsigned long long v14;  // [bp-0x3f0]
    void* v15;  // [bp-0x3e8]
    unsigned long long v16;  // [bp-0x3d0]
    unsigned long long v17;  // [bp-0x3c8]
    unsigned long long v18;  // [bp-0x3c0]
    unsigned long long v19;  // [bp-0x3b8]
    unsigned long long v20;  // [bp-0x3b0]
    int v21;  // [bp-0x3a8]
    unsigned long long v22;  // [bp-0x398]
    int v23;  // [bp-0x390], Other Possible Types: char
    int v24;  // [bp-0x380]
    char v25;  // [bp-0x370]
    char v26;  // [bp-0x338]
    void* v27;  // [bp-0x2f8], Other Possible Types: char *, char, unsigned long long
    char v28;  // [bp-0x2f0], Other Possible Types: unsigned long long
    char *v29;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x2e0]
    void* v31;  // [bp-0x2d8], Other Possible Types: char *
    unsigned long long v32;  // [bp-0x2d0]
    unsigned long long v35;  // r13
    char v36;  // r12b
    void* v37;  // rbx

    uu_printenv::uu_app(&v27);
    v25.get_matches_from(&v27, a0, a1);
    v27.try_get_many(&v25, _ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E, g_4d4470);
    v26.unwrap(_ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E, g_4d4470, &v27);
    if (*((long long *)&v26))
    {
        v27.collect(&v26);
        *((int128_t *)&v11) = *((int128_t *)&v28);
        if (v27 == 0x8000000000000000)
            goto LABEL_44a124;
        *((int128_t *)&v7) = (int128_t)v11;
        v6 = v27;
    }
    else
    {
LABEL_44a124:
        v6 = 0;
        v7 = 8;
        v8 = 0;
    }
    *((int *)&v16) = ((char)v25.get_flag(_ZN11uu_printenv8OPT_NULL17h717858802ed57abbE, g_4d4460) ? &g_416130 : "\nTry ' --help' for more information.\n");
    v17 = 1;
    if (v8)
    {
        v9.into_iter(&v6);
        v3.next(&v9);
        if (*((long long *)&v3) != 0x8000000000000000)
        {
            do
            {
                if (v4.is_contained_in(v5))
                {
                    core::ptr::drop_in_place<alloc::string::String>(v35, v4);
                    goto LABEL_44a3bb;
                }
                else
                {
                    v27 = v35;
                    v28 = v4;
                    v29 = v5;
                    std::env::var(&v18, &v27);
                    if (v18 == 1)
                    {
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v18);
LABEL_44a3bb:
                        v36 = 1;
                        continue;
                    }
                    else
                    {
                        v2 = (long long)v21;
                        *((int128_t *)&v0) = *((int128_t *)&v19);
                        v11 = &(char)v0;
                        v12 = <alloc::string::String as core::fmt::Display>::fmt;
                        v13 = &v16;
                        v14 = <&T as core::fmt::Display>::fmt;
                        v27 = &g_416010;
                        v28 = 2;
                        v31 = 0;
                        v29 = &v11;
                        v30 = 2;
                        std::io::stdio::_print(&v27);
                        core::ptr::drop_in_place<alloc::string::String>((long long)v0, v1);
                    }
                }
                v3.next(&v9);
                v35 = *((long long *)&v3);
            } while (v35 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v9);
        if (!(v36 & 1))
            goto LABEL_44a368;
        v37 = 1.from();
    }
    else
    {
        std::env::vars(&v23);
        v10 = v24;
        v9 = v23;
        while (true)
        {
            v18.next(&v9);
            if (v18 == 0x8000000000000000)
                break;
            v5 = v20;
            *((int128_t *)&v3) = *((int128_t *)&v18);
            v2 = v22;
            v0 = v21;
            v27 = &(char)v3;
            v28 = <alloc::string::String as core::fmt::Display>::fmt;
            v29 = &(char)v0;
            v30 = <alloc::string::String as core::fmt::Display>::fmt;
            v31 = &v16;
            v32 = <&T as core::fmt::Display>::fmt;
            v11 = &g_4d3ac0;
            v12 = 3;
            v15 = 0;
            v13 = &v27;
            v14 = 3;
            std::io::stdio::_print(&v11);
            core::ptr::drop_in_place<alloc::string::String>((long long)v0, v1);
            core::ptr::drop_in_place<alloc::string::String>((long long)v3, v4);
        }
        core::ptr::drop_in_place<std::env::Vars>(&v9);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
LABEL_44a368:
        v37 = 0;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
    return v37;
}
