long long uu_shred::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x439]
    char v1;  // [bp-0x438]
    unsigned int v2;  // [bp-0x434]
    unsigned long long v3;  // [bp-0x430]
    unsigned long long v4;  // [bp-0x420]
    unsigned long long v5;  // [bp-0x418]
    char v6;  // [bp-0x410]
    char v7;  // [bp-0x400]
    unsigned long long v8;  // [bp-0x3f0]
    void* v9;  // [bp-0x3e8], Other Possible Types: char, unsigned long long
    int v10;  // [bp-0x3e0], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x3d8], Other Possible Types: char
    char v12;  // [bp-0x3d0], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x3c8], Other Possible Types: char
    char v14;  // [bp-0x3b8]
    int v15;  // [bp-0x3a8], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x3a0]
    char *v17;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x390]
    unsigned long long v19;  // [bp-0x380]
    unsigned long long v20;  // [bp-0x378]
    struct_2 *v21;  // [bp-0x370]
    int v22;  // [bp-0x368], Other Possible Types: char
    int v23;  // [bp-0x358], Other Possible Types: char
    unsigned long long v24;  // [bp-0x348]
    int v25;  // [bp-0x340], Other Possible Types: char
    unsigned long long v26;  // [bp-0x330]
    char v27;  // [bp-0x328]
    unsigned long long v28;  // [bp-0x318]
    char v29;  // [bp-0x310]
    unsigned long long v30;  // [bp-0x300]
    int v31;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v32;  // [bp-0x2f0]
    int v33;  // [bp-0x2f0]
    int v34;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    int v35;  // [bp-0x2e0], Other Possible Types: unsigned int
    char v36;  // [bp-0x2d8]
    char v37;  // [bp-0x2c8]
    struct_0 *v39;  // rbx
    unsigned long long v40;  // rax
    unsigned long long v41[3];  // r14
    unsigned long long v42;  // rbx
    unsigned int v43;  // eax
    unsigned long v44;  // r12
    unsigned long long v45;  // r12
    unsigned long long v46[3];  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // r14
    struct_2 *v49;  // rdx
    char v50;  // al
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rsi
    unsigned long long v54;  // r14
    char v55;  // al
    char v56;  // al
    int v57;  // xmm0
    unsigned long long v58[3];  // rax
    unsigned long long v59;  // rax

    uu_shred::uu_app(&v31);
    v9.try_get_matches_from(&v31, a0, a1);
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
        return v5.from();
    v8 = *((long long *)&v14);
    memcpy(&v7, &v13, 16);
    memcpy(&v6, &v11, 16);
    v4 = v9;
    v5 = v10;
    if ((char)v4.contains_id("filesizei128", 4))
    {
        v31.try_get_one(&v4, "iterationsrandom-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 10);
        v39 = "iterationsrandom-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source".unwrap(10, &v31);
        if (!v39)
            core::panicking::panic("internal error: entered unreachable codea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rsdescription() is deprecated; use Display/roo", 40, &g_594ae0); /* do not return */
        ::0x4a2500::core::num::<impl u64>::from_str_radix(&v31, *((long long *)&v39->field_8), *((long long *)&v39[1].padding_0[7]));
        if (v31)
        {
            v31.to_vec("passesunlinkinternal error: entered unreachable code: should be caught by clapshred-missing-file-operanditerationsrandom-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source");
            v17 = v34;
            *((int128_t *)&v15) = *((int128_t *)&v31);
            v9 = 0;
            *((int128_t *)&v10) = *((int128_t *)&v39->field_8);
            v12 = 1;
            v31.spec_to_string(&v9);
            v28 = v17;
            memcpy(&v27, &v15, 16);
            memcpy(&v29, &v31, 16);
            v30 = v34;
            v31.from_iter(&v27);
            uucore::mods::locale::get_message_with_args(&v25, "shred-invalid-number-of-passessourceshred-cannot-open-random-source", 30, &v31);
            v35 = 1;
            v31 = v25;
            v34 = v26;
            v40 = v31.new();
LABEL_4a33c7:
            v42 = v40;
        }
        else
        {
            v19 = v32;
            v31.try_get_one(&v4, "random-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 13);
            v41 = "random-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source".unwrap(13, &v31);
            if (v41)
            {
                v31.open(v41);
                if ((v31 & 1))
                {
                    v40 = uu_shred::uumain::uumain::{{closure}}(v41[1], v41[2], v32);
                    if (!(!v40))
                        goto LABEL_4a33c7;
                    v43 = &g_594b48;
                }
            }
            else
            {
                v43 = 4294967295;
            }
            v2 = v43;
            v45 = v44 & 0xffffffffffffff00 | 3;
            if (!(char)v4.get_flag("uremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 1))
            {
                if ((char)v4.contains_id("removeforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 6))
                {
                    v31.try_get_one(&v4, "removeforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 6);
                    v46 = "removeforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source".unwrap(6, &v31);
                    if (!v46)
                    {
                        v31 = &g_594a18;
                        v32 = 1;
                        v34 = &v1;
                        *((uint128_t *)&v35) = 0;
                        core::panicking::panic_fmt(&v31, &g_594af8); /* do not return */
                    }
                    v47 = v46[1].call_once(v46[2]);
                    if (!v47)
                    {
                        v31 = &g_594a18;
                        v32 = 1;
                        v34 = &v1;
                        *((uint128_t *)&v35) = 0;
                        core::panicking::panic_fmt(&v31, &g_594af8); /* do not return */
                    }
                    v48 = v47;
                    v45 = v45 & 0xffffffffffffff00 | 1;
                    if (!(char)v47.equal(v49, "unlinkinternal error: entered unreachable code: should be caught by clapshred-missing-file-operanditerationsrandom-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 6))
                    {
                        v45 = v45 & 0xffffffffffffff00 | 2;
                        if (!(char)v48.equal(v49, "wipe", 4))
                        {
                            v45 = v45 & 0xffffffffffffff00 | 3;
                            if (!(char)v48.equal(v49, "wipesync", 8))
                            {
                                v31 = &g_594a18;
                                v32 = 1;
                                v34 = &v1;
                                *((uint128_t *)&v35) = 0;
                                core::panicking::panic_fmt(&v31, &g_594af8); /* do not return */
                            }
                        }
                    }
                }
                else
                {
                    v45 = 0;
                }
            }
            v50 = v4.get_flag("forceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 5);
            v31.try_get_one(&v4, "sizei128", 4);
            v51 = "sizei128".unwrap(4, &v31);
            if (v51)
            {
                v31.clone(v51);
                v52 = v31;
                memcpy(&v22, &v32, 16);
            }
            else
            {
                v52 = 0x8000000000000000;
            }
            v31 = v52;
            v33 = v22;
            v54 = uu_shred::get_size(&v31, v53);
            v55 = v4.get_flag("exactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 5);
            v0 = v4.get_flag("zeroAnsi -- ", 4);
            v56 = v4.get_flag("verboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 7);
            v31.try_get_many(&v4, "filesizei128", 4);
            v9.unwrap("filesizei128", 4, &v31);
            if (!v9)
                core::option::unwrap_failed(&g_594b10); /* do not return */
            v57 = *((int128_t *)&v9);
            memcpy(&v37, &v14, 16);
            memcpy(&v36, &v13, 16);
            *((int128_t *)&v34) = *((int128_t *)&v11);
            v31 = v57;
            while (true)
            {
                v58 = v31.next();
                if (!v58)
                    break;
                v59 = uu_shred::wipe_file(v58[1], v58[2], v19, v45 & 4294967295, v54, v49, v55 | v54 == 1, v0, &v2, v56, v50);
                if (!v59)
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v49);
                }
                else
                {
                    v3 = v59;
                    uucore::mods::error::set_exit_code(v49->field_58(v59));
                    v20 = uucore::util_name();
                    v21 = v49;
                    v15 = &v20;
                    v16 = <&T as core::fmt::Display>::fmt;
                    v17 = &v3;
                    v18 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v9 = &g_594a28;
                    v10 = 3;
                    v13 = 0;
                    v11 = &v15;
                    v12 = 2;
                    std::io::stdio::_eprint(&v9);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v3, v49);
                }
            }
            core::ptr::drop_in_place<uu_shred::RandomSource>(v2);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
            return 0;
        }
    }
    else
    {
        uucore::mods::locale::get_message(&v23, "shred-missing-file-operanditerationsrandom-sourceuremoveforceexactverboseshred-invalid-number-of-passessourceshred-cannot-open-random-source", 26);
        v35 = 1;
        v31 = v23;
        v34 = v24;
        v42 = v31.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
    return v42;
}
