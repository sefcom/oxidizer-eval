long long uu_dd::progress::ProgUpdate::write_prog_line(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    int v0;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v1;  // [bp-0x2e8]
    int v2;  // [bp-0x2e8]
    int v3;  // [bp-0x2e8]
    void* v4;  // [bp-0x2e8]
    int v5;  // [bp-0x2e8]
    int v6;  // [bp-0x2e8]
    int v7;  // [bp-0x2e8]
    int v8;  // [bp-0x2e8]
    int v9;  // [bp-0x2e8]
    int v10;  // [bp-0x2e8]
    int v11;  // [bp-0x2e8]
    int v12;  // [bp-0x2e8]
    unsigned long long v13;  // [bp-0x2e0]
    void* v14;  // [bp-0x2d8], Other Possible Types: char *, unsigned long long
    int v15;  // [bp-0x2d0], Other Possible Types: unsigned int, unsigned long long
    char v16;  // [bp-0x2cc]
    void* v17;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x2c0]
    int v19;  // [bp-0x2b8], Other Possible Types: char
    unsigned long long v20;  // [bp-0x2a8]
    int v21;  // [bp-0x2a0]
    unsigned long long v22;  // [bp-0x290]
    int v23;  // [bp-0x288], Other Possible Types: char
    unsigned long long v24;  // [bp-0x278]
    int v25;  // [bp-0x270]
    unsigned long long v26;  // [bp-0x260]
    int v27;  // [bp-0x258], Other Possible Types: char *, char
    unsigned long long v28;  // [bp-0x250]
    char *v29;  // [bp-0x248], Other Possible Types: int, unsigned long long
    unsigned long long v30;  // [bp-0x240]
    char *v31;  // [bp-0x238], Other Possible Types: int
    unsigned long long v32;  // [bp-0x230]
    int v33;  // [bp-0x228]
    char v34;  // [bp-0x218]
    char v35;  // [bp-0x208]
    int v36;  // [bp-0x1f8], Other Possible Types: char
    int v37;  // [bp-0x1e8], Other Possible Types: char
    int v38;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x1d0]
    int v40;  // [bp-0x1c8], Other Possible Types: char
    char v41;  // [bp-0x1b8]
    char v42;  // [bp-0x1a8]
    char v43;  // [bp-0x198]
    char v44;  // [bp-0x188]
    char v45;  // [bp-0x178]
    unsigned long v46;  // [bp-0x168]
    unsigned long v47;  // [bp-0x160]
    int v48;  // [bp-0x158], Other Possible Types: char
    unsigned long long v49;  // [bp-0x148]
    int v50;  // [bp-0x140]
    unsigned long long v51;  // [bp-0x130]
    void* v52;  // [bp-0x120]
    unsigned long long v53;  // [bp-0x118]
    void* v54;  // [bp-0x110]
    char v55;  // [bp-0x108]
    char v56;  // [bp-0xf0]
    int v57;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v58;  // [bp-0xc8]
    int v59;  // [bp-0xc0]
    unsigned long long v60;  // [bp-0xb0]
    char v61;  // [bp-0xa0]
    char v62;  // [bp-0x88]
    unsigned long long v63;  // [bp-0x78]
    char v64;  // [bp-0x68]
    unsigned long v65;  // [bp-0x50]
    unsigned long long v66;  // [bp-0x48]
    unsigned long v67;  // [bp-0x40]
    unsigned long v68;  // [bp-0x38]
    unsigned long long v69;  // [bp-0x28]
    unsigned long long v70;  // [bp-0x10]
    unsigned long long v72;  // r15
    unsigned long long v73;  // r12
    unsigned long v74;  // rbp
    unsigned long long v75;  // rax
    unsigned long long v76;  // rdx
    unsigned long long v77;  // r8
    unsigned long long v78;  // r9
    unsigned long long v80;  // rax
    unsigned long long v81;  // rbx
    unsigned long long v82;  // r12
    int v83;  // xmm2
    int v84;  // xmm2
    int v85;  // xmm1
    int v86;  // xmm2
    int v87;  // xmm1
    int v88;  // xmm2
    unsigned long long v89;  // rax

    v70 = v72;
    v69 = v73;
    v74 = a2;
    v46 = a0->field_30;
    v47 = a0->field_38;
    uu_dd::numbers::to_magnitude_and_suffix(&v61, v46, v47, 1);
    uu_dd::numbers::to_magnitude_and_suffix(&v64, v46, v47, 0);
    v75 = core::cmp::max_by((a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000, a0->field_0 / 18446744073709552 + (((a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000 <= a0->field_8 * 1125899907 >> 50 ? 1 : 0) & 1));
    if (!(v75 || v76))
        core::panicking::panic_const::panic_const_div_by_zero(&g_5df1d0); /* do not return */
    uu_dd::numbers::to_magnitude_and_suffix(&v55, __udivti3(v46, v47, v75, v76, v77, v78) * 1000, __udivti3(v46, v47, v75, v76, v77, v78) / 18446744073709552 + v76 * 1000, 1);
    *((int *)&v65) = (!(v74 & 255) ? 1 : "\rdd-progress-byte-copieddd-progress-bytes-copied-si-iecdd-progress-bytes-copied-sidd-progress-bytes-copiedpartialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rus");
    v66 = v74 & 4294967295;
    *((int *)&v67) = ((char)v74 ? 1 : "\ndd-progress-truncated-recordbytessiiec");
    v68 = (char)v66 ^ 1;
    v52 = 0;
    v53 = 1;
    v54 = 0;
    v16 = 2;
    v4 = 0;
    v14 = 0;
    v15 = 0;
    v27.from();
    v80 = (unsigned long long)v4.fmt(&v52, &v27);
    if (v80)
    {
        v81 = v80.from();
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v27);
    }
    else
    {
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v27);
        core::str::converts::from_utf8(&v27, 1, 0);
        v82 = v27.unwrap();
        if (UnaryOp GetMSBs == 65535)
        {
            v27.to_vec("bytessiiec", 5);
            v14 = v29;
            *((int128_t *)&v5) = *((int128_t *)&v27);
            v27.spec_to_string(&v46);
            v20 = v14;
            memcpy(&v19, &v5, 16);
            *((int128_t *)&v21) = *((int128_t *)&v27);
            v22 = v29;
            v27.to_vec("duration", 8);
            v14 = v29;
            *((int128_t *)&v6) = *((int128_t *)&v27);
            v27.to_vec(v82, v76);
            v26 = v29;
            *((int128_t *)&v25) = *((int128_t *)&v27);
            memcpy(&v23, &v5, 16);
            v24 = v14;
            v27.to_vec("ratei128", 4);
            v49 = v29;
            memcpy(&v48, &v27, 16);
            v27.clone(&v55);
            v14 = v49;
            memcpy(&v4, &v48, 16);
            *((int128_t *)&v15) = *((int128_t *)&v27);
            v18 = v29;
            v83 = (int128_t)(&v21)[8];
            memcpy(&v27, &v19, 16);
            *((int128_t *)&v29) = *((int128_t *)&v20);
            v31 = v83;
            memcpy(&v35, &v25, 16);
            memcpy(&v34, &v24, 16);
            v33 = v23;
            v38 = v17;
            v39 = v18;
            memcpy(&v37, &v14, 16);
            memcpy(&v36, &v5, 16);
            v4.from_iter(&v27);
            uucore::mods::locale::get_message_with_args(&v56, "dd-progress-byte-copieddd-progress-bytes-copied-si-iecdd-progress-bytes-copied-sidd-progress-bytes-copiedpartialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 23, &v4);
        }
        else if ((char)amd64g_calculate_condition(2, 16, v47, (unsigned long long)(char)(v46 < 1000), (unsigned long long)(char)(v46 < 1000)))
        {
            v27.to_vec("bytessiiec", 5);
            v14 = v29;
            *((int128_t *)&v7) = *((int128_t *)&v27);
            v27.spec_to_string(&v46);
            v20 = v14;
            memcpy(&v19, &v5, 16);
            *((int128_t *)&v21) = *((int128_t *)&v27);
            v22 = v29;
            v27.to_vec("duration", 8);
            v14 = v29;
            *((int128_t *)&v8) = *((int128_t *)&v27);
            v27.to_vec(v82, v76);
            v26 = v29;
            *((int128_t *)&v25) = *((int128_t *)&v27);
            memcpy(&v23, &v5, 16);
            v24 = v14;
            v27.to_vec("ratei128", 4);
            v49 = v29;
            memcpy(&v48, &v27, 16);
            v27.clone(&v55);
            v14 = v49;
            memcpy(&v4, &v48, 16);
            *((int128_t *)&v15) = *((int128_t *)&v27);
            v18 = v29;
            v84 = (int128_t)(&v21)[8];
            memcpy(&v27, &v19, 16);
            *((int128_t *)&v29) = *((int128_t *)&v20);
            v31 = v84;
            memcpy(&v35, &v25, 16);
            memcpy(&v34, &v24, 16);
            v33 = v23;
            v38 = v17;
            v39 = v18;
            memcpy(&v37, &v14, 16);
            memcpy(&v36, &v5, 16);
            v4.from_iter(&v27);
            uucore::mods::locale::get_message_with_args(&v56, "dd-progress-bytes-copiedpartialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rs/root/.rustup/toolchains/nightly-2025-0", 24, &v4);
        }
        else if ((char)amd64g_calculate_condition(2, 16, v47, (unsigned long long)(char)(v46 < 0x400), (unsigned long long)(char)(v46 < 0x400)))
        {
            v27.to_vec("bytessiiec", 5);
            v14 = v29;
            *((int128_t *)&v9) = *((int128_t *)&v27);
            v27.spec_to_string(&v46);
            v49 = v14;
            memcpy(&v48, &v5, 16);
            *((int128_t *)&v50) = *((int128_t *)&v27);
            v51 = v29;
            v27.to_vec("siiec", 2);
            v14 = v29;
            *((int128_t *)&v10) = *((int128_t *)&v27);
            v27.clone(&v61);
            v20 = v14;
            memcpy(&v19, &v5, 16);
            *((int128_t *)&v21) = *((int128_t *)&v27);
            v22 = v29;
            v27.to_vec("duration", 8);
            v14 = v29;
            *((int128_t *)&v11) = *((int128_t *)&v27);
            v27.to_vec(v82, v76);
            v26 = v29;
            *((int128_t *)&v25) = *((int128_t *)&v27);
            memcpy(&v23, &v5, 16);
            v24 = v14;
            v27.to_vec("ratei128", 4);
            v58 = v29;
            memcpy(&v57, &v27, 16);
            v27.clone(&v55);
            v14 = v58;
            v12 = v57;
            memcpy(&v15, &v27, 16);
            v18 = v29;
            v85 = *((int128_t *)&v49);
            v86 = (int128_t)(&v50)[8];
            v27 = v48;
            v29 = v85;
            v31 = v86;
            memcpy(&v35, &(char)v21, 16);
            memcpy(&v34, &v20, 16);
            v33 = v19;
            v87 = *((int128_t *)&v24);
            *((int128_t *)&v38) = (int128_t)(&v25)[8];
            v37 = v87;
            v36 = v23;
            memcpy(&v42, &v17, 16);
            memcpy(&v41, &v14, 16);
            memcpy(&v40, &v5, 16);
            v4.from_iter(&v27);
            uucore::mods::locale::get_message_with_args(&v56, "dd-progress-bytes-copied-sidd-progress-bytes-copiedpartialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rs/root/.rustu", 27, &v4);
        }
        else
        {
            v27.to_vec("bytessiiec", 5);
            v14 = v29;
            *((int128_t *)&v0) = (int128_t)v27;
            v27.spec_to_string(&v46);
            v58 = v14;
            memcpy(&v57, &v5, 16);
            *((int128_t *)&v59) = (int128_t)v27;
            v60 = v29;
            v27.to_vec("siiec", 2);
            v14 = v29;
            *((int128_t *)&v1) = (int128_t)v27;
            v27.clone(&v61);
            v49 = v14;
            memcpy(&v48, &v5, 16);
            *((int128_t *)&v50) = (int128_t)v27;
            v51 = v29;
            v27.to_vec("iec", 3);
            v14 = v29;
            *((int128_t *)&v2) = (int128_t)v27;
            v27.clone(&v64);
            v20 = v14;
            memcpy(&v19, &v5, 16);
            *((int128_t *)&v21) = (int128_t)v27;
            v22 = v29;
            v27.to_vec("duration", 8);
            v14 = v29;
            *((int128_t *)&v3) = (int128_t)v27;
            v27.to_vec(v82, v76);
            v26 = v29;
            *((int128_t *)&v25) = (int128_t)v27;
            memcpy(&v23, &v5, 16);
            v24 = v14;
            v27.to_vec("ratei128", 4);
            v63 = v29;
            memcpy(&v62, &v27, 16);
            v27.clone(&v55);
            v14 = v63;
            memcpy(&v4, &v62, 16);
            *((int128_t *)&v15) = (int128_t)v27;
            v18 = v29;
            v88 = (int128_t)(&v59)[8];
            memcpy(&v27, &v57, 16);
            *((int128_t *)&v29) = *((int128_t *)&v58);
            v31 = v88;
            memcpy(&v35, &v50, 16);
            memcpy(&v34, &v49, 16);
            v33 = v48;
            memcpy(&(char)v38, &(char)v21, 16);
            memcpy(&v37, &v20, 16);
            v36 = v19;
            memcpy(&v42, &v25, 16);
            memcpy(&v41, &v24, 16);
            v40 = v23;
            memcpy(&v45, &v17, 16);
            memcpy(&v44, &v14, 16);
            memcpy(&v43, &v5, 16);
            v4.from_iter(&v27);
            uucore::mods::locale::get_message_with_args(&v56, "dd-progress-bytes-copied-si-iecdd-progress-bytes-copied-sidd-progress-bytes-copiedpartialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/st", 31, &v4);
        }
        v27 = &v65;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = &v56;
        v30 = <alloc::string::String as core::fmt::Display>::fmt;
        v31 = &v67;
        v32 = <&T as core::fmt::Display>::fmt;
        v0 = &g_439750;
        v13 = 3;
        v17 = 0;
        v14 = &v27;
        v15 = 3;
        v89 = a1.write_fmt(&v0);
        if (!v89)
        {
            ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v56);
            ::0x4d5840::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v52);
            ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v55);
            ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v64);
            ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v61);
            return 0;
        }
        v81 = v89.from();
        ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v56);
    }
    ::0x4d5840::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v52);
    ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v55);
    ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v64);
    ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v61);
    return v81;
}
