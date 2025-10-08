long long uu_cksum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3ea]
    char v1;  // [bp-0x3e9]
    struct_1 *v2;  // [bp-0x3e8], Other Possible Types: char
    char v3;  // [bp-0x3e8]
    int v4;  // [bp-0x3e0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x3d8]
    unsigned long long v6;  // [bp-0x3d0]
    unsigned long long v7;  // [bp-0x3c8]
    void* v8;  // [bp-0x3b8]
    unsigned long long v9;  // [bp-0x3b0]
    int v10;  // [bp-0x3a8]
    char v11;  // [bp-0x398]
    unsigned long long v12;  // [bp-0x388]
    unsigned long long v13;  // [bp-0x380]
    void* v14;  // [bp-0x378], Other Possible Types: char
    char v15;  // [bp-0x370]
    int v16;  // [bp-0x368]
    char v17;  // [bp-0x358]
    char v18;  // [bp-0x348]
    void* v19;  // [bp-0x338], Other Possible Types: char, unsigned long long
    void* v20;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x328]
    unsigned long long v22;  // [bp-0x328]
    struct_1 *v23;  // [bp-0x320], Other Possible Types: void*
    unsigned long long v24;  // [bp-0x318]
    unsigned long long v25;  // [bp-0x310]
    unsigned long long v26;  // [bp-0x308]
    char v27;  // [bp-0x300]
    char v28;  // [bp-0x2ff]
    char v29;  // [bp-0x2fe]
    char v30;  // [bp-0x2fd]
    char v31;  // [bp-0x70]
    char v33;  // bpl
    struct_2 *v34;  // rax
    unsigned long long *v35;  // rax
    char v36;  // cl
    void* v37;  // rbx
    void* v38;  // r12
    char v39;  // al
    char v40;  // al
    unsigned int v41;  // eax
    unsigned int v42;  // eax
    char v43;  // al
    unsigned long long v44;  // r15
    unsigned long long v45;  // r15
    unsigned long long v47;  // r12
    unsigned long long v48;  // r14
    char v50;  // r13b
    char v51;  // bpl
    unsigned long long v52;  // rdx
    void* v53;  // rax

    uu_cksum::uu_app(&v19);
    v14.try_get_matches_from(&v19, a0, a1);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
        return *((long long *)&v15).from();
    v12 = *((long long *)&v18);
    memcpy(&v11, &v17, 16);
    v10 = v16;
    v8 = v14;
    v9 = *((long long *)&v15);
    v33 = v8.get_flag("checkalgorithmlengthrawbase64binarystrictstatusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 5);
    v19.try_get_one(&v8);
    v34 = v19.unwrap();
    if (v34)
    {
        *((int128_t *)&v4) = *((int128_t *)&(&v34->padding_0)[1]);
    }
    else if (v33)
    {
        v4 = 1;
        v5 = 0;
    }
    else
    {
        v4 = "crcbsdcrc32bblake2b  (BLAKE2b (";
        v5 = 3;
    }
    v19.try_get_one(&v8);
    v35 = v19.unwrap();
    if (!v35)
    {
        v37 = 0;
        goto LABEL_48329f;
    }
    v36 = 10;
    if ((char)v4.equal(v5, "blake2b  (BLAKE2b (", 7))
    {
        uucore::features::checksum::calculate_blake2b_length(&v19, *(v35));
        v37 = v20;
        if ((v19 & 1))
        {
            v38 = v37;
        }
        else
        {
            v6 = v21;
LABEL_48329f:
            v36 = 12;
            if (((char)v4.slice_contains() & v33))
                goto LABEL_4832b0;
            if (v33)
            {
                v39 = v8.get_flag("textdumb", 4);
                v40 = v8.get_flag("binarystrictstatusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 6);
                v2 = v8.get_flag("strictstatusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 6);
                v0 = v8.get_flag("statusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 6);
                v41 = v8.get_flag("warn", 4);
                v42 = v8.get_flag("ignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 14);
                v43 = v8.get_flag("quiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 5);
                v36 = 11;
                if (v40 || v39 || (char)v8.get_flag("tag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 3))
                    goto LABEL_4832b0;
                v44 = v5;
                v45 = v44;
                if (v45)
                    v45 = v4;
                v47 = v45;
                v19.try_get_many(&v8);
                v14.unwrap(&v19);
                v19.map_or_else(&v14);
                v38 = uucore::features::checksum::perform_checksum_validation(v20, v21 * 16 + v20, v47, v44, v37, v6, v42 * 0x100 | v3 * 0x10000 | (!v0 ? (!v43 ? (v41 | 2) * 0x1000000 : 0x1000000) : 0));
                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v19, v20);
            }
            else
            {
                std::env::args_os(&v19);
                uu_cksum::handle_tag_text_binary_flags(&v14, &v19);
                v38 = v14;
                if (!v14)
                {
                    v1 = v15;
                    v0 = (&v15)[1];
                    uucore::features::checksum::detect_algo(&v19, v4, v5, v37, v6);
                    v48 = v19;
                    v38 = v20;
                    if (v48)
                    {
                        v2 = v23;
                        v13 = v24;
                        v50 = ((char)v8.get_flag("zeroAnsi -- ", 4) ? 0 : 10);
                        v51 = 1;
                        if (!(char)v8.get_flag("rawbase64binarystrictstatusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 3))
                            v51 = (char)v8.get_flag("base64binarystrictstatusignore-missingquiettag/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 6) * 2;
                        v7 = v2->field_28(v21);
                        v19.try_get_many(&v8);
                        v31.unwrap(&v19);
                        if (*((long long *)&v31))
                        {
                            v19 = v37;
                            v20 = v6;
                            v22 = v48;
                            v23 = v38;
                            v24 = v7;
                            v25 = v52;
                            v26 = v13;
                            v27 = v1;
                            v28 = v0;
                            v29 = v51;
                            v30 = v50;
                            v53 = uu_cksum::cksum(&v19, &v31);
                        }
                        else
                        {
                            v19 = v37;
                            v20 = v6;
                            v22 = v48;
                            v23 = v38;
                            v24 = v7;
                            v25 = v52;
                            v26 = v13;
                            v27 = v1;
                            v28 = v0;
                            v29 = v51;
                            v30 = v50;
                            v53 = uu_cksum::cksum(&v19);
                        }
                        v38 = v53;
                        if (!v53)
                        {
                            core::ptr::drop_in_place<uu_cksum::Options>(v21, v2);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
                            return 0;
                        }
                        core::ptr::drop_in_place<uu_cksum::Options>(v21, v2);
                    }
                }
            }
        }
    }
    else
    {
LABEL_4832b0:
        v38 = v36.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return v38;
}
