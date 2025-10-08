long long uu_chmod::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x70c]
    char v1;  // [bp-0x70b]
    char v2;  // [bp-0x70a]
    char v3;  // [bp-0x709]
    unsigned long v4;  // [bp-0x708]
    unsigned long v5;  // [bp-0x700]
    void* v6;  // [bp-0x6f8]
    unsigned int v7;  // [bp-0x6ec]
    void* v9;  // [bp-0x6e8]
    void* v10;  // [bp-0x6e0]
    unsigned long long v11;  // [bp-0x6d8]
    void* v12;  // [bp-0x6d0], Other Possible Types: char, unsigned long long
    void* v13;  // [bp-0x6d0]
    unsigned long long v14;  // [bp-0x6c8]
    int v15;  // [bp-0x6c8], Other Possible Types: unsigned long
    char v16;  // [bp-0x6c0], Other Possible Types: unsigned long
    void* v17;  // [bp-0x6c0]
    char v18;  // [bp-0x6b8]
    int v19;  // [bp-0x6b0]
    unsigned long long v20;  // [bp-0x6a0]
    unsigned long long v21;  // [bp-0x698]
    unsigned long long v22;  // [bp-0x690]
    char v23;  // [bp-0x688]
    int v24;  // [bp-0x678]
    unsigned long long v25;  // [bp-0x668]
    unsigned long long v26;  // [bp-0x660]
    char v27;  // [bp-0x658]
    unsigned long long v28;  // [bp-0x648]
    char *v29;  // [bp-0x640]
    unsigned long long v30;  // [bp-0x638]
    char *v31;  // [bp-0x630]
    unsigned long long v32;  // [bp-0x628]
    int v33;  // [bp-0x620], Other Possible Types: char
    unsigned long long v34;  // [bp-0x610]
    int v35;  // [bp-0x608], Other Possible Types: char, unsigned long long
    void* v36;  // [bp-0x608]
    void* v37;  // [bp-0x600]
    void* v38;  // [bp-0x600]
    unsigned long long v39;  // [bp-0x5f8]
    char v40;  // [bp-0x5f0], Other Possible Types: unsigned int
    unsigned int v41;  // [bp-0x5ec]
    char v42;  // [bp-0x5e8]
    char v43;  // [bp-0x5e7]
    char v44;  // [bp-0x5e6]
    char v45;  // [bp-0x5e5]
    char v46;  // [bp-0x5e4]
    char v47;  // [bp-0x5e3]
    char v48;  // [bp-0x5e2]
    char v49;  // [bp-0x5e0]
    char v50;  // [bp-0x5d0]
    char v51;  // [bp-0x338]
    int v52;  // [bp-0x2f8], Other Possible Types: char
    int v53;  // [bp-0x2f8]
    unsigned long long v54;  // [bp-0x2f0]
    char *v55;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v56;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v57;  // [bp-0x2d8]
    void* v59;  // r14
    void* v60;  // r12
    void* v61;  // rbx
    unsigned long long v62[3];  // rbx
    unsigned int v63;  // ebp
    unsigned long long v64;  // rax
    unsigned long long v65;  // r12
    unsigned int v66;  // ebp

    v52.skip(a0, a1);
    uu_chmod::extract_negative_modes(&v35, &v52);
    v59 = v36;
    v60 = v37;
    memcpy(&v27, &v40, 16);
    v28 = *((long long *)&v49);
    uu_chmod::uu_app(&v35);
    v52.after_help(&v35);
    v12.try_get_matches_from(&v52, &v27);
    if (v12 == 0x8000000000000000)
    {
        v61 = v22.from();
    }
    else
    {
        v25 = v20;
        v24 = v19;
        memcpy(&v23, &v16, 16);
        v21 = v12;
        v22 = v14;
        v3 = v21.get_flag("changesquietverbosepreserve-rootRFILEError flushing stdout: ", 7);
        v2 = v21.get_flag("quietverbosepreserve-rootRFILEError flushing stdout: ", 5);
        v1 = v21.get_flag("verbosepreserve-rootRFILEError flushing stdout: ", 7);
        v0 = v21.get_flag("preserve-rootRFILEError flushing stdout: ", 13);
        v35.try_get_one(&v21, "RFILEError flushing stdout: ", 5);
        v62 = "RFILEError flushing stdout: ".unwrap(5, &v35);
        if (v62)
        {
            std::fs::metadata(&v35, v62);
            if ((int)v36 == 2)
            {
                v6 = v37;
                v12 = 0;
                v15 = v62[1];
                v16 = v62[2];
                v18 = 1;
                v29 = &v12;
                v30 = <os_display::Quoted as core::fmt::Display>::fmt;
                v31 = &v6;
                v32 = <std::io::error::Error as core::fmt::Display>::fmt;
                *((unsigned long long **)&v53) = &g_4eaea0;
                v54 = 2;
                v57 = 0;
                v55 = &v29;
                v56 = 2;
                v33.map_or_else(&(unsigned long long)v53);
                v56 = 1;
                v53 = v33;
                v55 = v34;
                v61 = (unsigned long long)v53.new();
                core::ptr::drop_in_place<std::io::error::Error>(v6);
                goto LABEL_45a25e;
            }
            else
            {
                v7 = 4095 & *((int *)&v50);
                v63 = 1;
            }
        }
        else
        {
            v63 = 0;
        }
        v35.try_get_one(&v21, "MODEEADV", 4);
        v64 = "MODEEADV".unwrap(4, &v35);
        if (v59 != 0x8000000000000000)
        {
            v9 = v59;
            v10 = v60;
            v11 = v39;
        }
        else if (v64)
        {
            (char)v9.clone(v64);
        }
        else
        {
            core::option::unwrap_failed(&g_4eaec0); /* do not return */
        }
        v5 = v60;
        v4 = v59;
        v35.try_get_many(&v21);
        v51.unwrap(&v35);
        if (*((long long *)&v51))
        {
            v35.collect(&v51);
            *((int128_t *)&v52) = *((int128_t *)&v37);
            if (v36 == 0x8000000000000000)
                goto LABEL_45a04d;
            *((int128_t *)&v15) = (int128_t)v52;
            v13 = v36;
            if (v62)
                goto LABEL_45a071;
LABEL_45a1c1:
            v65 = v9;
            v59 = v10;
            v26 = v11;
            if (v17)
                goto LABEL_45a096;
LABEL_45a1e4:
            v52.to_vec("missing operandEach MODE is of the form [ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+.changesquietverbosepreserve-rootRFILEError flushing stdout: ", 15);
            v39 = v55;
            *((int128_t *)&v35) = (int128_t)v52;
            v40 = 1;
            v61 = v35.new();
LABEL_45a23f:
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v65, v59);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
            v60 = v5;
            v59 = v4;
LABEL_45a25e:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
        }
        else
        {
LABEL_45a04d:
            v13 = 0;
            v14 = 8;
            v17 = 0;
            if (!v62)
                goto LABEL_45a1c1;
LABEL_45a071:
            v13.push(&(char)v9);
            v65 = 0x8000000000000000;
            if (!v17)
                goto LABEL_45a1e4;
LABEL_45a096:
            uucore::features::perms::configure_symlink_and_recursion(&v35, &v21, 1);
            v61 = v36;
            v66 = (unsigned int)v37;
            if (v36)
                goto LABEL_45a23f;
            v42 = v3;
            v43 = v2;
            v44 = v1;
            v45 = v0;
            v46 = (char)v66 & 1;
            v40 = v63;
            v41 = v7;
            v35 = v65;
            v38 = v59;
            v39 = v26;
            v48 = v66 >> 16;
            v47 = (char)(v66 >> 8) & 1;
            v61 = v35.chmod(v14, v17);
            core::ptr::drop_in_place<uu_chmod::Chmoder>(v65, v59);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
            v60 = v5;
            v59 = v4;
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
        }
    }
    if (v59 != 0x8000000000000000)
        core::ptr::drop_in_place<alloc::string::String>(v59, v60);
    return v61;
}
