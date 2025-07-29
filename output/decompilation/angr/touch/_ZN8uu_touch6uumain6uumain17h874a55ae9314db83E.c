long long uu_touch::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x498], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x490]
    unsigned long long v2;  // [bp-0x488]
    int v3;  // [bp-0x478], Other Possible Types: char
    struct_0 **v4;  // [bp-0x470]
    unsigned long long v5;  // [bp-0x468]
    int v6;  // [bp-0x458], Other Possible Types: unsigned long long
    int v7;  // [bp-0x450], Other Possible Types: char
    char v8;  // [bp-0x448], Other Possible Types: unsigned long long
    int v9;  // [bp-0x440], Other Possible Types: char
    char v10;  // [bp-0x438]
    char v11;  // [bp-0x430], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x428]
    unsigned long long v13;  // [bp-0x420]
    int v14;  // [bp-0x418], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x410]
    unsigned long long v16;  // [bp-0x408]
    int v17;  // [bp-0x3f8]
    unsigned long long v18;  // [bp-0x3f8]
    unsigned long long v19;  // [bp-0x3f8]
    unsigned long long v20;  // [bp-0x3f0]
    unsigned long long v21;  // [bp-0x3e8]
    unsigned int v22;  // [bp-0x3e8]
    unsigned long long v23;  // [bp-0x3d8]
    unsigned long long v24;  // [bp-0x3d0]
    char v25;  // [bp-0x3c8]
    char v26;  // [bp-0x3b8]
    unsigned long long v27;  // [bp-0x3a8]
    char v28;  // [bp-0x3a0]
    unsigned long long v29;  // [bp-0x398]
    unsigned long long v30;  // [bp-0x390]
    int v31;  // [bp-0x388]
    unsigned long long v32;  // [bp-0x378]
    int v33;  // [bp-0x370]
    unsigned long long v34;  // [bp-0x360]
    unsigned long long v35;  // [bp-0x358]
    char v36;  // [bp-0x350]
    char v37;  // [bp-0x340]
    char v38;  // [bp-0x330]
    unsigned long long v39;  // [bp-0x320]
    char v40;  // [bp-0x318]
    unsigned long long v41;  // [bp-0x310]
    unsigned long long v42;  // [bp-0x308]
    char v43;  // [bp-0x300]
    unsigned long long v44;  // [bp-0x2f0]
    char v45;  // [bp-0x2e8]
    char v46;  // [bp-0x2e7]
    char v47;  // [bp-0x2e6]
    char v48;  // [bp-0x2e5]
    char v49;  // [bp-0x50]
    char v51;  // al
    unsigned long long v52[3];  // r14
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    void* v56;  // rcx
    void* v57;  // rsi
    unsigned long long v58;  // r14
    char v59;  // al
    char v60;  // al
    unsigned long long v61;  // rax
    int v62;  // xmm0

    uu_touch::uu_app(&v40);
    (char)v6.try_get_matches_from(&v40, a0, a1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return *((long long *)&v7).from();
    v27 = v12;
    memcpy(&v26, &v10, 16);
    memcpy(&v25, &v8, 16);
    v23 = v6;
    v24 = *((long long *)&v7);
    v40.try_get_many(&v23, _ZN8uu_touch9ARG_FILES17h767f98f2bd49379eE, g_770370);
    (char)v6.unwrap(_ZN8uu_touch9ARG_FILES17h767f98f2bd49379eE, g_770370, &v40);
    if (v6)
    {
        v39 = v13;
        memcpy(&v38, &v11, 16);
        memcpy(&v37, &v9, 16);
        v35 = v6;
        memcpy(&v36, &v7, 16);
        v3.from_iter(&v35, &g_76fda8);
        v51 = v23.get_flag(_ZN8uu_touch7options8NO_DEREF17h396be6aeffd9007cE, g_771640);
        v40.try_get_one(&v23, _ZN8uu_touch7options7sources9REFERENCE17hff6562b39181adc4E, g_771990);
        v52 = _ZN8uu_touch7options7sources9REFERENCE17hff6562b39181adc4E.unwrap(g_771990, &v40);
        v40.try_get_one(&v23, _ZN8uu_touch7options7sources4DATE17hc92707542e565230E, g_771980);
        v53 = _ZN8uu_touch7options7sources4DATE17hc92707542e565230E.unwrap(g_771980, &v40);
        if (v53)
        {
            v40.clone(v53);
            v16 = v42;
            *((int128_t *)&v14) = *((int128_t *)&v40);
        }
        else
        {
            v14 = 0x8000000000000000;
        }
        v40.try_get_one(&v23, _ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE, g_7719a0);
        v54 = _ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE.unwrap(g_7719a0, &v40);
        if (v54)
        {
            v40.clone(v54);
            v2 = v42;
            *((int128_t *)&v0) = *((int128_t *)&v40);
            v55 = v0;
            v56 = 0;
            v57 = 0;
            if (!(v14 == 0x8000000000000000))
                goto LABEL_5ababe;
        }
        else
        {
            v0 = 0x8000000000000000;
            v55 = 0x8000000000000000;
            v56 = 0;
            v57 = 0;
            if (v14 != 0x8000000000000000)
            {
LABEL_5ababe:
                v57 = v15;
            }
        }
        if (v55 != 0x8000000000000000)
            v56 = v1;
        if ((char)uu_touch::is_first_filename_timestamp(v52, v57, v16, v56, v2, v4, v5))
        {
            if (v5)
            {
                if (*(v4)->field_10 == 10)
                    uu_touch::shr2(&v40, *(v4)->field_8, 10);
                else
                    v40.clone(*(v4));
                v8 = v42;
                *((int128_t *)&v6) = *((int128_t *)&v40);
                ::0x5aaf80::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v0);
                v2 = v8;
                *((int128_t *)&v0) = (int128_t)v6;
                if (!v5)
                    core::slice::index::slice_start_index_len_fail(1, 0, &g_76fe60); /* do not return */
                v40.to_vec(v4 + 1, v5 - 1);
                ::0x5aaef0::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v3);
                v5 = v42;
                *((int128_t *)&v3) = *((int128_t *)&v40);
            }
            else
            {
                core::panicking::panic_bounds_check(0, 0, &g_76fdc0); /* do not return */
            }
        }
        if (v52)
        {
            v40.to_owned(v52[1], v52[2]);
            v21 = v42;
            *((int128_t *)&v17) = *((int128_t *)&v40);
            goto LABEL_5abc48;
        }
        if (v0 == 0x8000000000000000)
        {
            v18 = 9223372036854775809;
LABEL_5abc48:
            goto LABEL_5abc4b;
        }
        else
        {
            v8 = v2;
            *((int128_t *)&v6) = (int128_t)v0;
            uu_touch::parse_timestamp(&v40, (long long)(&v6)[8], v2);
            v58 = v41;
            if ((v40 & 1))
            {
                ::0x5aad10::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
                ::0x5aaf80::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v14);
                ::0x5aaef0::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v3);
            }
            else
            {
                v20 = v58;
                v22 = v42;
                v19 = 0x8000000000000000;
                ::0x5aad10::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
LABEL_5abc4b:
                v49.into_iter(&v3);
                v28.from_iter(&v49);
                v59 = v23.get_flag(_ZN8uu_touch7options9NO_CREATE17h76ecaf6274142ac9E, g_771630);
                v32 = v21;
                *((int128_t *)&v31) = (int128_t)v17;
                v8 = v16;
                memcpy(&(char)v6, &(char)v14, 16);
                v60 = uu_touch::determine_atime_mtime_change(&v23);
                v45 = v59;
                v46 = v51;
                memcpy(&v43, &v31, 16);
                v44 = v32;
                memcpy(&v40, &(char)v6, 16);
                v42 = v8;
                v48 = v60;
                v47 = 0;
                uu_touch::touch(&(char)v31, v29, v30);
                v61 = (long long)v31;
                if (v61 == 9223372036854775812)
                {
                    core::ptr::drop_in_place<uu_touch::Options>(&v40);
                    v28.drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>();
                    if (v0 != 0x8000000000000000)
                        ::0x5aad10::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
                    return 0;
                }
                else
                {
                    v11 = v34;
                    v62 = (int128_t)(&v31)[8];
                    v9 = v33;
                    v7 = v62;
                    v6 = v61;
                    v58 = v6.new();
                    core::ptr::drop_in_place<uu_touch::Options>(&v40);
                    v28.drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>();
                    if ((1 & v0 != 0x8000000000000000))
                        ::0x5aad10::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                }
            }
        }
    }
    else
    {
        v58 = uu_touch::uumain::uumain::{{closure}}();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
    return v58;
}
