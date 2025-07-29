long long uu_nproc::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3f9]
    char *v1;  // [bp-0x3f8], Other Possible Types: int, unsigned long long
    unsigned long long v2;  // [bp-0x3f0]
    char v3;  // [bp-0x3e8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x3e0]
    char v5;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x3d0]
    char v7;  // [bp-0x3c8]
    void* v8;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [bp-0x3b0]
    char v10;  // [bp-0x3a0]
    int v11;  // [bp-0x398]
    unsigned long long v12;  // [bp-0x390]
    unsigned long long v13;  // [bp-0x388]
    int v14;  // [bp-0x380]
    unsigned long long v15;  // [bp-0x370]
    int v16;  // [bp-0x368], Other Possible Types: char
    unsigned long long v17;  // [bp-0x358]
    unsigned long long v18;  // [bp-0x348]
    unsigned long long v19;  // [bp-0x340]
    char v20;  // [bp-0x338]
    char v21;  // [bp-0x328]
    unsigned long long v22;  // [bp-0x318]
    char v23;  // [bp-0x310]
    unsigned long long v24;  // [bp-0x300]
    void* v25;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    char v26;  // [bp-0x2f7]
    void* v27;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x2f0]
    int v29;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned int v30;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v31;  // [bp-0x2d8], Other Possible Types: void*
    int v32;  // [bp-0x2c8]
    unsigned long long v33;  // [bp-0x2b8], Other Possible Types: unsigned short
    unsigned long long v34;  // [bp-0x2b0]
    unsigned long long v35;  // [bp-0x2a8]
    unsigned long long v36;  // [bp-0x2a0]
    struct_0 *v38;  // r14
    unsigned long long v40;  // rdx
    int v41;  // xmm3
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // r14
    unsigned long long v45;  // r15
    unsigned long long v46;  // rax

    uu_nproc::uu_app(&(char)v25);
    (char)v1.try_get_matches_from(&(char)v25, a0, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v19.from();
    v22 = *((long long *)&v7);
    memcpy(&v21, &v5, 16);
    memcpy(&v20, &v3, 16);
    v18 = v1;
    v19 = v2;
    (char)v25.try_get_one(&v18, _ZN8uu_nproc10OPT_IGNORE17h932118528c7a20d8E, g_56cc88);
    v38 = _ZN8uu_nproc10OPT_IGNORE17h932118528c7a20d8E.unwrap(g_56cc88, &(char)v25);
    if (v38)
    {
        ::0x491fe0::core::num::<impl u64>::from_str_radix(&(char)v25, core::str::<impl str>::trim_matches(*((long long *)&v38->field_8), *((long long *)&v38[1].padding_0[7])), v40);
        if (v25 == 1)
        {
            v0 = v26;
            (char)v25.to_vec("valueerrorOMP_NUM_THREADSnproc-error-invalid-number");
            v3 = v29;
            *((int128_t *)&v1) = *((int128_t *)&v25);
            v8 = 0;
            *((int128_t *)&v9) = *((int128_t *)&v38->field_8);
            v10 = 1;
            (char)v25.spec_to_string(&v8);
            v13 = v3;
            *((int128_t *)&v11) = (int128_t)v1;
            *((int128_t *)&v14) = *((int128_t *)&v25);
            v15 = v29;
            (char)v25.to_vec("errorOMP_NUM_THREADSnproc-error-invalid-number");
            v17 = v29;
            memcpy(&v16, &v25, 16);
            (char)v25.spec_to_string(&v0);
            v3 = v17;
            v1 = v16;
            *((int128_t *)&v4) = *((int128_t *)&v25);
            v6 = v29;
            v41 = (int128_t)(&v14)[8];
            memcpy(&(char)v25, &(char)v11, 16);
            *((int128_t *)&v29) = *((int128_t *)&v13);
            v31 = v41;
            v35 = v5;
            v36 = v6;
            v33 = v3;
            v34 = (long long)v4;
            v32 = v16;
            (char)v1.from_iter(&(char)v25);
            uucore::mods::locale::get_message_with_args(&v23, "nproc-error-invalid-number", 26, &(char)v1);
            v30 = 1;
            memcpy(&(char)v25, &v23, 16);
            v29 = v24;
            v42 = (char)v25.new();
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
            return v42;
        }
        v28 = v27;
    }
    else
    {
        v27 = 0;
    }
    std::env::var(&(char)v25, "OMP_THREAD_LIMIT", 16);
    v43 = *((long long *)&v25);
    v44 = 18446744073709551615;
    if (!v43)
    {
        *((int128_t *)&v1) = *((int128_t *)&v28);
        v3 = v30;
        ::0x491fe0::core::num::<impl u64>::from_str_radix(&(char)v11, v2, v30);
        ::0x4921b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        v44 = (!(char)v11 ? -(v12 < 1) | v12 : 18446744073709551615);
        v43 = *((long long *)&v25);
    }
    if (((char)v43 & 1))
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v25);
    if ((char)v18.get_flag(_ZN8uu_nproc7OPT_ALL17ha0feb420f26fbb99E, g_56cc78))
    {
        v45 = uu_nproc::num_cpus_all();
    }
    else
    {
        std::env::var(&(char)v1, "OMP_NUM_THREADSnproc-error-invalid-number", 15);
        if (((char)v1 & 1))
        {
            v45 = uu_nproc::available_parallelism();
            v8 = v45;
        }
        else
        {
            v13 = (long long)v4;
            *((int128_t *)&v11) = *((int128_t *)&v2);
            v29.into_searcher(v12, v13);
            v25 = 0;
            v28 = v13;
            v33 = 0;
            v46 = (char)v25.next();
            if (v46)
            {
                ::0x491fe0::core::num::<impl u64>::from_str_radix(&(char)v8, v46, v40);
                v45 = (long long)v9;
                if (!!v45 && !(char)v8)
                    goto LABEL_493274;
            }
            v45 = uu_nproc::available_parallelism();
LABEL_493274:
            v8 = v45;
            ::0x4921b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v11);
        }
        if (((char)v1 & 1))
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v1);
    }
    *((int *)&v8) = (::0x491fa0::core::cmp::min_by(v44, v45) > v27 ? ::0x491fa0::core::cmp::min_by(v44, v45) - v27 : 1);
    v1 = &v8;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v25 = &g_56c878;
    v27 = 2;
    v31 = 0;
    v29 = &v1;
    v30 = 1;
    std::io::stdio::_print(&(char)v25);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
    return 0;
}
