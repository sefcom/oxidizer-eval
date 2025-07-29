long long uu_hashsum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x72b]
    char v1;  // [bp-0x72a]
    char v2;  // [bp-0x729]
    unsigned long long v3;  // [bp-0x728], Other Possible Types: char
    char v4;  // [bp-0x728]
    unsigned long long v5;  // [bp-0x720]
    char v6;  // [bp-0x718]
    unsigned long long v7;  // [bp-0x710]
    unsigned long long v8;  // [bp-0x708]
    unsigned long long v9;  // [bp-0x700]
    unsigned long long v10;  // [bp-0x6f8]
    char v11;  // [bp-0x6f0]
    char v12;  // [bp-0x6e0]
    unsigned long long v13;  // [bp-0x6d0]
    int v14;  // [bp-0x6c8]
    unsigned long long v15;  // [bp-0x6c0]
    unsigned long long v16;  // [bp-0x6b8]
    unsigned long long v17;  // [bp-0x6b0]
    unsigned long long v18;  // [bp-0x6a8]
    unsigned long long v19;  // [bp-0x6a0]
    int v20;  // [bp-0x698]
    unsigned long long v21;  // [bp-0x690]
    unsigned long long v22;  // [bp-0x688]
    int v23;  // [bp-0x678], Other Possible Types: char
    int v24;  // [bp-0x668], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x658]
    int v26;  // [bp-0x630], Other Possible Types: char
    int v27;  // [bp-0x620]
    unsigned long long v28;  // [bp-0x610]
    char v29;  // [bp-0x608], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x608]
    unsigned long long v31;  // [bp-0x600]
    unsigned long long v32;  // [bp-0x5f8]
    char v33;  // [bp-0x5f0], Other Possible Types: unsigned long long
    char v34;  // [bp-0x5e8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [bp-0x5e0]
    unsigned long long v36;  // [bp-0x5d8]
    char v37;  // [bp-0x5d0]
    char v38;  // [bp-0x5cf]
    char v39;  // [bp-0x5ce]
    char v40;  // [bp-0x5cd]
    char v41;  // [bp-0x340]
    char v42;  // [bp-0x338]
    char v43;  // [bp-0x2f8]
    int v45;  // xmm0
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long *v48;  // rax
    unsigned long long v49;  // r14
    char v50;  // r15b
    char v51;  // r12b
    char v52;  // al
    unsigned long long v53;  // rax
    char v54;  // r13b
    unsigned long long v55;  // rdi
    char v56;  // al
    unsigned long long v57;  // rsi
    unsigned long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // r15
    unsigned long long v61;  // r13
    unsigned long long v62;  // r14
    unsigned long long v63;  // rbp
    char v64;  // r12b
    unsigned long long v65;  // rax
    void* v66;  // rbx, Other Possible Types: unsigned long long

    v22 = a0;
    v23.next(&v22);
    if ((char)(((0 ^ *((long long *)&v23)) & (0 ^ -(*((long long *)&v23)))) >> 63))
    {
        (char)v30.to_owned("hashsum", 7);
        v16 = v32;
        v45 = *((int128_t *)&v29);
    }
    else
    {
        v16 = v24;
    }
    v14 = v45;
    v46 = v15.file_stem(v16);
    if (!v46)
        v47 = 7;
    v6.to_string_lossy((v46 ? v46 : "hashsum"), v47);
    (char)v30.clone(&(char)v14);
    v24 = v32;
    memcpy(&v23, &v30, 16);
    v26.chain(&v23, v22, a1);
    uu_hashsum::uu_app(&(char)v30, v7, v8);
    memcpy(&v43, &(char)v30, 712);
    v25 = v28;
    v24 = v27;
    v23 = v26;
    (char)v30.try_get_matches_from(&v43, &v23);
    if (v30 == 0x8000000000000000)
    {
        v66 = v10.from();
        goto LABEL_4c40d3;
    }
    v13 = v36;
    memcpy(&v12, &v34, 16);
    memcpy(&v11, &v32, 16);
    v9 = v30;
    v10 = v31;
    if ((char)v6.eq())
    {
        (char)v30.try_get_one(&v9, "lengthbinary) = TermwarnZeromany", 6);
        v48 = "lengthbinary) = TermwarnZeromany".unwrap(6, &(char)v30);
        if (!v48)
            goto LABEL_4c3e14;
        uucore::features::checksum::calculate_blake2b_length(&(char)v30, *(v48));
        v66 = v31;
        v49 = v32;
        if (!((char)v30 & 1))
        {
            if (!v41)
                goto LABEL_4c3e1b;
LABEL_4c3dff:
            uu_hashsum::create_algorithm_from_flags(&(char)v30, &v9);
            goto LABEL_4c3e39;
        }
    }
LABEL_4c3e14:
    v66 = 0;
    if (!(!v41))
        goto LABEL_4c3dff;
LABEL_4c3e1b:
    uucore::features::checksum::detect_algo(&(char)v30, v7, v8, v66, v49);
LABEL_4c3e39:
    v66 = v31;
    if (!v30)
        goto LABEL_4c40c9;
    *((int128_t *)&v20) = *((int128_t *)&v33);
    v5 = v30;
    v17 = v5;
    v18 = v66;
    v19 = v32;
    v1 = v9.get_flag("binary) = TermwarnZeromany", 6);
    if (!v1)
        v9.get_flag("textSomedumb", 4);
    v50 = v9.get_flag("checkstatusquietstrictignore-missing", 5);
    v51 = v9.get_flag("statusquietstrictignore-missing", 6);
    v52 = v9.get_flag("quietstrictignore-missing", 5);
    v3 = v9.get_flag("strictignore-missing", 6);
    v0 = v9.get_flag("warnZeromany", 4);
    v53 = v9.get_flag("ignore-missing", 14);
    v54 = v52 | v51;
    if ((char)v53)
    {
        v55 = 1;
        if (!(!v50))
            goto LABEL_4c3f7c;
        goto LABEL_4c40a7;
    }
    if (v50)
    {
LABEL_4c3f7c:
        v56 = v9.get_flag("textSomedumb", 4);
        v55 = 11;
        if ((v56 | (char)v9.get_flag("binary) = TermwarnZeromany", 6)) != 1)
        {
            (char)v30.try_get_many(&v9, "fileEDOMsizei128", 4);
            v23.unwrap("fileEDOMsizei128", 4, &(char)v30);
            (char)v30.map_or_else(&v23);
            v66 = uucore::features::checksum::perform_checksum_validation(v31, v32 * 16 + v31, v5, v66, 1, v21, (unsigned int)v53 * 0x100 | v4 * 0x10000 | (!v51 ? (!v54 ? (v0 & (v51 ^ 1) | 2) * 0x1000000 : 0x1000000) : 0));
            ::0x4c5870::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&(char)v30);
            goto LABEL_4c40b6;
        }
    }
    else
    {
        v3 = v4 | v54;
        if (v4 || v54)
        {
            v55 = v54 | 2;
LABEL_4c40a7:
            v66 = v55.new(v57);
LABEL_4c40b6:
            core::ptr::drop_in_place<uu_hashsum::Options>(v32, (long long)v20);
LABEL_4c40c9:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
LABEL_4c40d3:
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
        }
        else
        {
            (char)v30.try_get_one(&v9, "no-names", 8);
            v58 = ((int)v30 == 2 ? v31 : 0);
            v0 = *((char *)(v58 ? v58 : &g_434a34));
            v2 = v9.get_flag("zeroAnsi -- ", 4);
            v3 = v59;
            v60 = (unsigned long long)v19.call();
            v61 = v21;
            v62 = v7;
            v63 = v8;
            v64 = v9.get_flag("tag/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsBLAKE2b ( ( *blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linu", 3);
            (char)v30.try_get_many(&v9, "fileEDOMsizei128", 4);
            v42.unwrap("fileEDOMsizei128", 4, &(char)v30);
            if (*((long long *)&v42))
            {
                v29 = v5;
                v31 = v66;
                v32 = v60;
                v33 = v3;
                v34 = v62;
                v35 = v63;
                v36 = v61;
                v37 = v1;
                v38 = v64;
                v39 = v0;
                v40 = v2;
                v65 = uu_hashsum::hashsum(&v29, &v42);
            }
            else
            {
                v29 = v5;
                v31 = v66;
                v32 = v60;
                v33 = v3;
                v34 = v62;
                v35 = v63;
                v36 = v61;
                v37 = v1;
                v38 = v64;
                v39 = v0;
                v40 = v2;
                v65 = uu_hashsum::hashsum(&v29);
            }
            v66 = v65;
            core::ptr::drop_in_place<uu_hashsum::Options>(v19, (long long)v20);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
        }
    }
    ::0x4c5760::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v14);
    return v66;
}
