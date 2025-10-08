long long uu_nproc::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3b9]
    char v1;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0x3b7]
    void* v3;  // [bp-0x3a8], Other Possible Types: char *, char, unsigned long long
    unsigned long v4;  // [bp-0x3a0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x398], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x390]
    char v7;  // [bp-0x388]
    unsigned long long v8;  // [bp-0x378]
    unsigned long long v9;  // [bp-0x370]
    char *v10;  // [bp-0x368]
    unsigned long long v11;  // [bp-0x360]
    char *v12;  // [bp-0x358]
    unsigned long long v13;  // [bp-0x350]
    unsigned long long v14;  // [bp-0x348]
    unsigned long long v15;  // [bp-0x340]
    char v16;  // [bp-0x338]
    char v17;  // [bp-0x328]
    unsigned long long v18;  // [bp-0x318]
    char v19;  // [bp-0x310]
    unsigned long long v20;  // [bp-0x300]
    void* v21;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v22;  // [bp-0x2f0]
    char *v23;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v24;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v25;  // [bp-0x2d8]
    unsigned short v26;  // [bp-0x2b8]
    unsigned long long v28[3];  // rax
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    void* v32;  // rbp
    unsigned long long v33;  // r14
    unsigned long long v34;  // r13
    unsigned long long v35;  // rax

    uu_nproc::uu_app(&v21);
    v3.try_get_matches_from(&v21, a0, a1);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v15.from();
    v18 = v8;
    memcpy(&v17, &v7, 16);
    memcpy(&v16, &v5, 16);
    v14 = v3;
    v15 = v4;
    v21.try_get_one(&v14, _ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E, g_4e0ee0);
    v28 = _ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E.unwrap(g_4e0ee0, &v21);
    if (v28)
    {
        ::0x450320::core::num::<impl usize>::from_ascii_radix(&(char)v1, core::str::<impl str>::trim_matches(v28[1], v28[2]), v30);
        if (v1)
        {
            v0 = v2;
            v3 = 0;
            v4 = v28[1];
            v5 = v28[2];
            v6 = 1;
            v10 = &v3;
            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
            v12 = &v0;
            v13 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v21 = &g_4e05c0;
            v22 = 2;
            v25 = 0;
            v23 = &v10;
            v24 = 2;
            v19.map_or_else(&v21);
            v24 = 1;
            memcpy(&v21, &v19, 16);
            v23 = v20;
            v31 = v21.new();
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
            return v31;
        }
    }
    else
    {
        v32 = 0;
    }
    std::env::var(&v21, "OMP_THREAD_LIMIT", 16);
    if ((v21 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v21);
        v33 = 18446744073709551615;
    }
    else
    {
        ::0x450320::core::num::<impl usize>::from_ascii_radix(&v3, v23, v24);
        v33 = (!v3 ? -(v4 < 1) | v4 : 18446744073709551615);
        core::ptr::drop_in_place<alloc::string::String>(v22, v23);
    }
    if ((char)v14.get_flag(_ZN8uu_nproc7OPT_ALL17hde320e20e68328b9E, g_4e0ed0))
    {
        v34 = uu_nproc::num_cpus_all();
    }
    else
    {
        std::env::var(&v3, "OMP_NUM_THREADSError flushing stdout: ", 15);
        if (v3 == 1)
        {
            v34 = uu_nproc::available_parallelism();
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v3);
        }
        else
        {
            v9 = v4;
            v23.into_searcher(v5, *((long long *)&v6));
            v21 = 0;
            v22 = *((long long *)&v6);
            v26 = 0;
            v35 = v21.next();
            if (v35)
            {
                ::0x450320::core::num::<impl usize>::from_ascii_radix(&(char)v10, v35, v30);
                if (!!v34 && !(char)v10)
                    goto LABEL_4531f6;
                v34 = uu_nproc::available_parallelism();
            }
            else
            {
                v34 = uu_nproc::available_parallelism();
            }
LABEL_4531f6:
            v1 = v34;
            core::ptr::drop_in_place<alloc::string::String>(v9, v5);
        }
    }
    *((int *)&v1) = (v33.min(v34) > v32 ? v33.min(v34) - v32 : 1);
    v3 = &(char)v1;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v21 = &g_4e0568;
    v22 = 2;
    v25 = 0;
    v23 = &v3;
    v24 = 1;
    std::io::stdio::_print(&v21);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
    return 0;
}
