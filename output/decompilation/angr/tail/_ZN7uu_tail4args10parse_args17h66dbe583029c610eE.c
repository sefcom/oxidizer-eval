long long uu_tail::args::parse_args(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x400]
    unsigned long long v1[6];  // [bp-0x3f8]
    char v2;  // [bp-0x3e8]
    unsigned long long v3;  // [bp-0x3e8]
    unsigned long long v4;  // [bp-0x3e0]
    unsigned long long v5;  // [bp-0x3d8]
    int v6;  // [bp-0x3d0]
    unsigned long long v7;  // [bp-0x3c8]
    int v8;  // [bp-0x3c0]
    unsigned long long v9;  // [bp-0x3b8]
    int v10;  // [bp-0x3b0]
    unsigned long long v11;  // [bp-0x3a8]
    unsigned long long v12;  // [bp-0x3a0]
    char v13;  // [bp-0x398], Other Possible Types: unsigned int
    int v14;  // [bp-0x388]
    int v15;  // [bp-0x378]
    unsigned long long v16;  // [bp-0x368]
    int v17;  // [bp-0x358]
    int v18;  // [bp-0x348]
    int v19;  // [bp-0x338], Other Possible Types: char
    unsigned long long v20;  // [bp-0x328]
    char v21;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x318]
    int v23;  // [bp-0x310]
    int v24;  // [bp-0x300]
    unsigned long long v25;  // [bp-0x2f0]
    unsigned long long v26;  // [bp-0x2e8]
    unsigned long long v28;  // [bp-0x2e0]
    unsigned long long v30;  // [bp-0x2d8]
    int v32;  // [bp-0x2d0]
    int v34;  // [bp-0x2c0]
    int v36;  // [bp-0x2b0]
    char v38;  // [bp-0x2a0]
    unsigned long long v40;  // rdx
    unsigned long long v41[6];  // rax
    unsigned long v42;  // r14
    unsigned long long v43[6];  // rax
    unsigned long long v44;  // rcx
    int v46;  // xmm0
    int v47;  // xmm1
    int v48;  // xmm2
    unsigned long long v49;  // rsi
    int v50;  // xmm0

    v0.collect(a1, a2);
    uu_tail::args::uu_app(&(char)v26);
    v2.clone(&v0);
    v21.try_get_matches_from(&(char)v26, &v2);
    if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
    {
        v4 = v22.from();
        v5 = v40;
        v3 = 5;
        if (!((576460752303423486 & v44) == 2))
            goto LABEL_4ed5dd;
        v41 = v1;
        v42 = &v41[3];
        v43 = v41;
        if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
            goto LABEL_4ed582;
        goto LABEL_4ed518;
    }
    else
    {
        v16 = v25;
        v15 = v24;
        v14 = v23;
        memcpy(&v13, &v21, 16);
        (char)v26.from(&v13);
        if (v26 == 5)
        {
            *((unsigned long long *)&a0->padding_1[7]) = v28;
            *((unsigned long long *)&a0->field_10) = v30;
            *((unsigned long long *)&a0->field_0) = 5;
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
        }
        else
        {
            v12 = *((long long *)&v38);
            v10 = v36;
            v8 = v34;
            v6 = v32;
            v3 = v26;
            v4 = v28;
            v5 = v30;
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
            if ((576460752303423486 & v44) == 2)
            {
                v41 = v1;
                v42 = &v41[3];
LABEL_4ed518:
                (char)v26.to_string_lossy(v41[4], v41[5]);
                v13 = 0;
                if ((char)core::slice::<impl [T]>::starts_with(v28, v30, ::0x4ed070::core::char::methods::encode_utf8_raw(&v13), 1))
                {
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v26);
                    v43[0] = v1;
                }
                else
                {
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v26);
                    goto LABEL_4ed674;
                }
LABEL_4ed582:
                uu_tail::args::parse_obsolete(&(char)v26, v42, (3 <= v44 ? v43 + 1 : 0));
                if (v26 == 6)
                {
                    *((unsigned long long *)&a0->padding_1[7]) = v28;
                    *((unsigned long long *)&a0->field_10) = v30;
                    *((unsigned long long *)&a0->field_0) = 5;
                    core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v3);
                }
                else
                {
                    v20 = *((long long *)&v38);
                    memcpy(&v19, &v36, 16);
                    v18 = v34;
                    v17 = v32;
                    if ((unsigned int)v26 == 5)
                    {
LABEL_4ed674:
                        *((int128_t *)&a0->field_20[16]) = *((int128_t *)&v11);
                        v46 = *((int128_t *)&v3);
                        v47 = *((int128_t *)&v5);
                        v48 = *((int128_t *)&v7);
                        *((int128_t *)&a0->field_20[0]) = *((int128_t *)&v9);
                        *((void*)&a0->field_18[8]) = v48;
                        *((void*)&a0->field_10) = v47;
                        *((void*)&a0->field_0) = v46;
                    }
                    else
                    {
                        *((unsigned long long *)&a0->field_28[0]) = v20;
                        *((void*)&a0->field_20[8]) = v19;
                        *((void*)&a0->field_18[16]) = v18;
                        *((void*)&a0->field_18[0]) = v17;
                        *((unsigned long long *)&a0->field_0) = v26;
                        *((unsigned long long *)&a0->padding_1[7]) = v28;
                        *((unsigned long long *)&a0->field_10) = v30;
                        core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v3);
                    }
                }
            }
            else
            {
LABEL_4ed5dd:
                *((int128_t *)&a0->field_20[16]) = *((int128_t *)&v11);
                v49 = (long long)v6;
                v50 = *((int128_t *)&v7);
                *((int128_t *)&a0->field_20[0]) = *((int128_t *)&v9);
                *((void*)&a0->field_18[8]) = v50;
                *((unsigned long long *)&a0->field_10) = v5;
                *((unsigned long long *)&a0->field_18[0]) = v49;
                *((unsigned long long *)&a0->field_0) = v3;
                *((unsigned long long *)&a0->padding_1[7]) = v4;
            }
        }
    }
    ::0x4eccf0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
    return a0;
}
