long long uu_cksum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3da]
    char v1;  // [bp-0x3d9]
    int v2;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x3d0]
    unsigned long long v4;  // [bp-0x3c8]
    unsigned long long v5;  // [bp-0x3c0]
    unsigned long long v6;  // [bp-0x3b0]
    unsigned long long v7;  // [bp-0x3a8]
    char v8;  // [bp-0x3a0]
    char v9;  // [bp-0x390]
    unsigned long long v10;  // [bp-0x380]
    char v11;  // [bp-0x378], Other Possible Types: unsigned long long
    char v12;  // [bp-0x370], Other Possible Types: unsigned long long
    char v13;  // [bp-0x368], Other Possible Types: unsigned long long
    int v14;  // [bp-0x360]
    char v15;  // [bp-0x358]
    char v16;  // [bp-0x348]
    char v17;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x330]
    unsigned long long v19;  // [bp-0x328]
    char v20;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x318]
    unsigned long long v22;  // [bp-0x310]
    unsigned long long v23;  // [bp-0x308]
    char v24;  // [bp-0x300]
    char v25;  // [bp-0x2ff]
    char v26;  // [bp-0x2fe]
    char v27;  // [bp-0x2fd]
    char v28;  // [bp-0x70]
    char v30;  // bpl
    struct_0 *v31;  // rax
    unsigned long long *v32;  // rax
    unsigned long long v33;  // rdi
    void* v34;  // rbx
    unsigned long long v35;  // r15
    char v36;  // al
    char v37;  // al
    unsigned int v38;  // eax
    unsigned int v39;  // eax
    char v40;  // al
    unsigned long long v41;  // r15
    unsigned long long v42;  // r15
    unsigned long long v44;  // rbp
    unsigned long long v45;  // r13
    char v47;  // r14b
    char v48;  // bpl
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax

    uu_cksum::uu_app(&v17);
    v11.try_get_matches_from(&v17, a0, a1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return *((long long *)&v12).from();
    v10 = *((long long *)&v16);
    memcpy(&v9, &v15, 16);
    memcpy(&v8, &v13, 16);
    v6 = v11;
    v7 = *((long long *)&v12);
    v30 = v6.get_flag("checkalgorithmlengthrawbase64binarystrictstatusignore-missingquiettag", 5);
    v17.try_get_one(&v6, "algorithmlengthrawbase64binarystrictstatusignore-missingquiettag", 9);
    v31 = "algorithmlengthrawbase64binarystrictstatusignore-missingquiettag".unwrap(9, &v17);
    if (v31)
    {
        *((int128_t *)&v2) = *((int128_t *)&(&v31->padding_0)[1]);
    }
    else if (v30)
    {
        v2 = 1;
        v3 = 0;
    }
    else
    {
        v2 = "crcbsdcrc32bblake2b  (BLAKE2b (";
        v3 = 3;
    }
    v17.try_get_one(&v6, "lengthrawbase64binarystrictstatusignore-missingquiettag", 6);
    v32 = "lengthrawbase64binarystrictstatusignore-missingquiettag".unwrap(6, &v17);
    if (!v32)
    {
        v34 = 0;
        goto LABEL_4ccf89;
    }
    v33 = 10;
    if ((char)v2.equal(v3, "blake2b  (BLAKE2b (", 7))
    {
        uucore::features::checksum::calculate_blake2b_length(&v17, *(v32));
        v34 = v18;
        if ((v17 & 1))
        {
            v35 = v34;
        }
        else
        {
            v4 = v19;
LABEL_4ccf89:
            v33 = 12;
            if (!(!((char)v2.slice_contains(&g_60e5b8, 4) & v30)))
                goto LABEL_4ccfa9;
            if (v30)
            {
                v36 = v6.get_flag("textSomedumb", 4);
                v37 = v6.get_flag("binarystrictstatusignore-missingquiettag", 6);
                v1 = v6.get_flag("strictstatusignore-missingquiettag", 6);
                v0 = v6.get_flag("statusignore-missingquiettag", 6);
                v38 = v6.get_flag("warnZeromany", 4);
                v39 = v6.get_flag("ignore-missingquiettag", 14);
                v40 = v6.get_flag("quiettag", 5);
                v33 = 11;
                if (!(!v37 && !v36 && !(char)v6.get_flag("tag", 3)))
                    goto LABEL_4ccfa9;
                v41 = v3;
                v42 = v41;
                if (v42)
                    v42 = v2;
                v44 = v42;
                v17.try_get_many(&v6, "filesizei128", 4);
                v11.unwrap("filesizei128", 4, &v17);
                v17.map_or_else(&v11);
                v35 = uucore::features::checksum::perform_checksum_validation(v18, v19 * 16 + v18, v44, v41, v34, v4, v39 * 0x100 | v1 * 0x10000 | (!v0 ? (!v40 ? (v38 | 2) * 0x1000000 : 0x1000000) : 0));
                core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v17);
            }
            else
            {
                std::env::args_os(&v17);
                uu_cksum::handle_tag_text_binary_flags(&v11, &v17);
                v35 = v11;
                if (!v11)
                {
                    v0 = v12;
                    v1 = (&v12)[1];
                    uucore::features::checksum::detect_algo(&v17, v2, v3, v34, v4);
                    v45 = v17;
                    v35 = v18;
                    if (v45)
                    {
                        *((int128_t *)&v14) = *((int128_t *)&v20);
                        v11 = v45;
                        v12 = v35;
                        v13 = v19;
                        v47 = ((char)v6.get_flag("zeroAnsi -- ", 4) ? 0 : 10);
                        v48 = 1;
                        if (!(char)v6.get_flag("rawbase64binarystrictstatusignore-missingquiettag", 3))
                            v48 = (char)v6.get_flag("base64binarystrictstatusignore-missingquiettag", 6) * 2;
                        v5 = (unsigned long long)v13.call();
                        v17.try_get_many(&v6, "filesizei128", 4);
                        v28.unwrap("filesizei128", 4, &v17);
                        if (*((long long *)&v28))
                        {
                            v17 = v34;
                            v18 = v4;
                            v19 = v45;
                            v20 = v35;
                            v21 = v5;
                            v22 = v49;
                            v23 = (long long)(&v14)[8];
                            v24 = v0;
                            v25 = v1;
                            v26 = v48;
                            v27 = v47;
                            v50 = uu_cksum::cksum(&v17, &v28);
                        }
                        else
                        {
                            v17 = v34;
                            v18 = v4;
                            v19 = v45;
                            v20 = v35;
                            v21 = v5;
                            v22 = v49;
                            v23 = (long long)(&v14)[8];
                            v24 = v0;
                            v25 = v1;
                            v26 = v48;
                            v27 = v47;
                            v50 = uu_cksum::cksum();
                        }
                        v35 = v50;
                        if (!v50)
                        {
                            core::ptr::drop_in_place<uu_cksum::Options>(v13, (long long)v14);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
                            return 0;
                        }
                        core::ptr::drop_in_place<uu_cksum::Options>(v13, (long long)v14);
                    }
                }
            }
        }
    }
    else
    {
LABEL_4ccfa9:
        v35 = v33.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
    return v35;
}
