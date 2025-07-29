long long uu_printenv::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x458]
    unsigned long long v1;  // [bp-0x450]
    unsigned long long v2;  // [bp-0x448]
    void* v3;  // [bp-0x440]
    int v4;  // [bp-0x438], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x430]
    int v6;  // [bp-0x428], Other Possible Types: char
    unsigned long long v7;  // [bp-0x418]
    unsigned long long v9;  // [bp-0x408]
    char v10;  // [bp-0x400]
    unsigned long long v11;  // [bp-0x3f8]
    int v12;  // [bp-0x3f0]
    unsigned long long v13;  // [bp-0x3e0]
    int v14;  // [bp-0x3d8], Other Possible Types: char
    char v15;  // [bp-0x3c8]
    char *v16;  // [bp-0x3b8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v17;  // [bp-0x3b0]
    char *v18;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v19;  // [bp-0x3a0]
    void* v20;  // [bp-0x398], Other Possible Types: char
    int v21;  // [bp-0x388]
    unsigned long long v22;  // [bp-0x378]
    unsigned long long v23;  // [bp-0x370]
    char v24;  // [bp-0x368]
    int v25;  // [bp-0x368]
    unsigned long long v26;  // [bp-0x358]
    int v27;  // [bp-0x350], Other Possible Types: char
    char v28;  // [bp-0x340]
    char v29;  // [bp-0x330]
    char *v30;  // [bp-0x2f8], Other Possible Types: int
    unsigned long long v31;  // [bp-0x2f8]
    unsigned long long v32;  // [bp-0x2f0]
    int v33;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned long long v34;  // [bp-0x2e0]
    int v35;  // [bp-0x2d8], Other Possible Types: void*, char *
    unsigned long long v36;  // [bp-0x2d0]
    int v37;  // [bp-0x2c8]
    int v39;  // xmm0
    int v40;  // xmm1
    char v42;  // bl
    unsigned long v43;  // rbx

    uu_printenv::uu_app(&(char)v30);
    v29.get_matches_from(&(char)v30, a0, a1);
    (char)v30.try_get_many(&v29, _ZN11uu_printenv13ARG_VARIABLES17h20ac64b88c54aab2E, g_55b3b0);
    v16.unwrap(_ZN11uu_printenv13ARG_VARIABLES17h20ac64b88c54aab2E, g_55b3b0, &(char)v30);
    if (v16)
    {
        v39 = *((int128_t *)&v16);
        v40 = *((int128_t *)&v18);
        v37 = v21;
        *((int128_t *)&v35) = *((int128_t *)&v20);
        v33 = v40;
        v30 = v39;
        (char)v9.from_iter(&(char)v30, &g_55b170);
        *((int128_t *)&v30) = *((int128_t *)&v10);
        if (v9 == 0x8000000000000000)
            goto LABEL_4898f5;
        *((int128_t *)&v4) = (int128_t)v30;
        v3 = v9;
    }
    else
    {
LABEL_4898f5:
        v3 = 0;
        v4 = 8;
        v5 = 0;
    }
    *((int *)&v22) = ((char)v29.get_flag(_ZN11uu_printenv8OPT_NULL17h80a38e94e9ea3752E, g_55b3a0) ? &g_42bda2 : "\nTry ' --help' for more information.\nDisabling rust signal handlers failed/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/printenv/src/printenv.rs=");
    v23 = 1;
    if (v5)
    {
        v14.into_iter(&v3);
        (char)v25.next(&v14);
        if (*((long long *)&v24) != 0x8000000000000000)
        {
            do
            {
                v0 = v25;
                v2 = v26;
                if (v1.is_contained_in(v26))
                {
                    ::0x489e70::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                    goto LABEL_489b78;
                }
                else
                {
                    v33 = v2;
                    *((int128_t *)&v30) = (int128_t)v0;
                    std::env::var(&(char)v9, &(char)v30);
                    if (((char)v9 & 1))
                    {
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v9);
LABEL_489b78:
                        v42 = 1;
                        continue;
                    }
                    else
                    {
                        v7 = (long long)v12;
                        memcpy(&v6, &v10, 16);
                        v16 = &v6;
                        v17 = <alloc::string::String as core::fmt::Display>::fmt;
                        v18 = &v22;
                        v19 = <&T as core::fmt::Display>::fmt;
                        v31 = &g_42bc00;
                        v32 = 2;
                        v35 = 0;
                        v33 = &v16;
                        v34 = 2;
                        std::io::stdio::_print(&v31);
                        ::0x489e70::core::ptr::drop_in_place<alloc::string::String>(&v6);
                        if (((char)v9 & 1))
                            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v9);
                    }
                }
                (char)v25.next(&v14);
            } while (*((long long *)&v24) != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v14);
        v43 = (!(v42 & 1) ? 0 : 1.from());
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
        return v43;
    }
    else
    {
        std::env::vars(&v27);
        memcpy(&v15, &v28, 16);
        v14 = v27;
        while (true)
        {
            (char)v9.next(&v14);
            if (v9 == 0x8000000000000000)
                break;
            v2 = v11;
            *((int128_t *)&v0) = *((int128_t *)&v9);
            v7 = v13;
            v6 = v12;
            v30 = &(char)v0;
            v32 = <alloc::string::String as core::fmt::Display>::fmt;
            v33 = &v6;
            v34 = <alloc::string::String as core::fmt::Display>::fmt;
            v35 = &v22;
            v36 = <&T as core::fmt::Display>::fmt;
            v16 = &g_55b140;
            v17 = 3;
            v20 = 0;
            v18 = &v30;
            v19 = 3;
            std::io::stdio::_print(&v16);
            ::0x489e70::core::ptr::drop_in_place<alloc::string::String>(&v6);
            ::0x489e70::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        }
        core::ptr::drop_in_place<std::env::Vars>(&v14);
        ::0x489ef0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
        return 0;
    }
}
