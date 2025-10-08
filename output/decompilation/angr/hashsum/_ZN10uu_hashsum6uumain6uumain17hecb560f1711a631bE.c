long long uu_hashsum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x70b]
    char v1;  // [bp-0x70b]
    char v2;  // [bp-0x70a]
    char v3;  // [bp-0x709]
    char v4;  // [bp-0x708], Other Possible Types: unsigned long long
    char v5;  // [bp-0x708]
    struct_1 *v6;  // [bp-0x700]
    unsigned long long v7;  // [bp-0x6f8]
    unsigned long long v8;  // [bp-0x6f0]
    void* v9;  // [bp-0x6e8]
    unsigned long long v10;  // [bp-0x6e0]
    unsigned long long v11;  // [bp-0x6d8]
    void* v12;  // [bp-0x6d0]
    char v13;  // [bp-0x6c8]
    char v14;  // [bp-0x6b8]
    unsigned long long v15;  // [bp-0x6a8]
    unsigned long long v16;  // [bp-0x6a0]
    char v17;  // [bp-0x690], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x688]
    unsigned long long v19;  // [bp-0x680]
    int v20;  // [bp-0x678], Other Possible Types: char
    unsigned long long v21;  // [bp-0x668]
    char v22;  // [bp-0x630]
    unsigned long long v23;  // [bp-0x608]
    unsigned long long v24;  // [bp-0x608]
    unsigned long long v26;  // [bp-0x608]
    void* v27;  // [bp-0x600]
    void* v28;  // [bp-0x600]
    unsigned long long v29;  // [bp-0x5f8]
    unsigned long long v30;  // [bp-0x5f8]
    struct_1 *v31;  // [bp-0x5f0], Other Possible Types: unsigned long long
    char v32;  // [bp-0x5e8], Other Possible Types: unsigned long long
    char v33;  // [bp-0x5e0]
    char v34;  // [bp-0x5df]
    char v35;  // [bp-0x5de]
    char v36;  // [bp-0x5dd]
    char v37;  // [bp-0x5d8]
    char v38;  // [bp-0x340]
    char v39;  // [bp-0x338]
    char v40;  // [bp-0x2f8]
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    void* v45;  // r13
    unsigned long long *v46;  // rax
    unsigned long long v47;  // r12
    char v48;  // bl
    char v49;  // r14b
    char v50;  // al
    char v51;  // bpl
    char v52;  // al
    char v53;  // al
    unsigned long v54;  // rax
    char *v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rbx
    char v58;  // bpl
    unsigned long long v59;  // rax

    v16 = a0;
    v20.next(&v16);
    if ((char)(((0 ^ *((long long *)&v20)) & (0 ^ -(*((long long *)&v20)))) >> 63))
    {
        (char)v24.to_vec("hashsum", 7);
        v26 = v23;
        v27 = v28;
        v29 = v30;
    }
    else
    {
        v23 = *((long long *)&v20);
    }
    v24 = v26;
    v10 = v23;
    v9 = v28;
    v43 = v28.file_stem(v30);
    if (!v43)
        v44 = 7;
    if (!v43)
        v43 = "hashsum";
    v17.from_utf8_lossy(v43, v44);
    (char)v24.clone(v28, v30);
    v21 = v29;
    *((int128_t *)&v20) = *((int128_t *)&v24);
    v22.chain(&v20, v16, a1);
    uu_hashsum::uu_app(&(char)v24, v18, v19);
    memcpy(&v40, &(char)v24, 712);
    (char)v24.try_get_matches_from(&v40, &v22);
    if (v24 == 0x8000000000000000)
    {
        v45 = v12.from();
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v17, v18);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v9);
        return v45;
    }
    v15 = *((long long *)&v37);
    memcpy(&v14, &v32, 16);
    memcpy(&v13, &v29, 16);
    v11 = v24;
    v12 = v27;
    if ((char)v18.eq(v19))
    {
        (char)v24.try_get_one(&v11);
        v46 = (char)v24.unwrap();
        if (!v46)
            goto LABEL_476c53;
        uucore::features::checksum::calculate_blake2b_length(&(char)v24, *(v46));
        v45 = v27;
        v47 = v29;
        if (((char)v24 & 1))
            goto LABEL_476ed3;
        if (!v38)
            goto LABEL_476c5b;
LABEL_476c3e:
        uu_hashsum::create_algorithm_from_flags(&(char)v24, &v11);
    }
    else
    {
LABEL_476c53:
        v45 = 0;
        if (v38)
            goto LABEL_476c3e;
LABEL_476c5b:
        uucore::features::checksum::detect_algo(&(char)v24, v18, v19, v45, v47);
    }
    v45 = v27;
    if (v24)
    {
        v7 = v24;
        v6 = v31;
        v8 = v32;
        v2 = v11.get_flag("binary", 6);
        if (!v2)
            v11.get_flag("textSomedumb", 4);
        v48 = v11.get_flag("checkstatusquietstrictignore-missingBLAKE2b-", 5);
        v49 = v11.get_flag("statusquietstrictignore-missingBLAKE2b-", 6);
        v50 = v11.get_flag("quietstrictignore-missingBLAKE2b-", 5);
        v0 = v11.get_flag("strictignore-missingBLAKE2b-", 6);
        v3 = v11.get_flag("warnZero", 4);
        v4 = v11.get_flag("ignore-missingBLAKE2b-", 14);
        v51 = v50 | v49;
        if (v5)
        {
            v52 = 1;
            if (v48)
                goto LABEL_476da8;
        }
        else if (v48)
        {
LABEL_476da8:
            v53 = v11.get_flag("textSomedumb", 4);
            v52 = 11;
            if ((v53 | (char)v11.get_flag("binary", 6)) != 1)
            {
                (char)v24.try_get_many(&v11);
                v20.unwrap(&(char)v24);
                (char)v24.map_or_else(&v20);
                v45 = uucore::features::checksum::perform_checksum_validation(v27, v29 * 16 + v27, v7, v45, v8, v5 * 0x100 | v0 * 0x10000 | (!v49 ? (!v51 ? (v3 & (v49 ^ 1) | 2) * 0x1000000 : 0x1000000) : 0));
                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v24, v27);
                goto LABEL_476ec3;
            }
        }
        else
        {
            v1 = v0 | v51;
            if (!v0 && !v51)
            {
                (char)v24.try_get_one(&v11);
                v54 = ((int)v24 == 2 ? v27 : 0);
                v55 = (v54 ? v54 : &g_411cc8);
                v0 = v11.get_flag("zeroAnsi -- ", 4);
                v4 = v56;
                v57 = v6->field_28(v29);
                v58 = v11.get_flag("tagBLAKE2b ( (", 3);
                (char)v24.try_get_many(&v11);
                v39.unwrap(&(char)v24);
                if (*((long long *)&v39))
                {
                    v23 = v7;
                    v27 = v45;
                    v30 = v57;
                    v31 = v4;
                    v32 = v8;
                    v33 = v2;
                    v34 = v58;
                    v35 = *(v55);
                    v36 = v0;
                    v59 = uu_hashsum::hashsum(&v23, &v39);
                }
                else
                {
                    v23 = v7;
                    v27 = v45;
                    v30 = v57;
                    v31 = v4;
                    v32 = v8;
                    v33 = v2;
                    v34 = v58;
                    v35 = *(v55);
                    v36 = v0;
                    v59 = uu_hashsum::hashsum(&v23);
                }
                core::ptr::drop_in_place<uu_hashsum::Options>(v29, v6);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v17, v18);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v9);
                return v59;
            }
        }
        v45 = v52.new();
LABEL_476ec3:
        core::ptr::drop_in_place<uu_hashsum::Options>(v29, v6);
    }
LABEL_476ed3:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v17, v18);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v9);
    return v45;
}
