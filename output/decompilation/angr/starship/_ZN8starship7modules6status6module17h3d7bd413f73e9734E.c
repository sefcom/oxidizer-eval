void starship::modules::status::module(unsigned long long *a0, unsigned long long a1[11])
{
    uint128_t v0[6];  // [bp-0x288]
    unsigned long long v1;  // [bp-0x280]
    unsigned long long v2;  // [bp-0x278]
    unsigned long long v3;  // [bp-0x278]
    void* v5;  // [bp-0x270]
    unsigned long long v6;  // [bp-0x268]
    void* v7;  // [bp-0x260]
    char v8;  // [bp-0x258]
    unsigned long long v9;  // [bp-0x248]
    char v10;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x230]
    unsigned long long v12;  // [bp-0x228]
    unsigned long long v13;  // [bp-0x220]
    unsigned long long v14;  // [bp-0x218]
    void* v15;  // [bp-0x210], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [bp-0x208]
    int v17;  // [bp-0x200]
    unsigned long long v18;  // [bp-0x200]
    int v19;  // [bp-0x1f8]
    void* v20;  // [bp-0x1f0]
    unsigned long v21;  // [bp-0x1d0]
    unsigned long long v22;  // [bp-0x1c8]
    void* v23;  // [bp-0x1c0]
    unsigned long v24;  // [bp-0x1b8]
    unsigned long long v25;  // [bp-0x1b0]
    unsigned long long v26;  // [bp-0x1a8]
    char *v27;  // [bp-0x1a0]
    char *v28;  // [bp-0x198]
    unsigned long long v29[11];  // [bp-0x190]
    char v30;  // [bp-0x188]
    char v31;  // [bp-0x180]
    int v32;  // [bp-0x168], Other Possible Types: char
    int v33;  // [bp-0x158]
    int v34;  // [bp-0x148]
    int v35;  // [bp-0x138]
    int v36;  // [bp-0x128]
    char v37;  // [bp-0x118]
    unsigned long long v38;  // [bp-0x110]
    char v39;  // [bp-0x108]
    unsigned long long v40;  // [bp-0xe8]
    unsigned long long v41;  // [bp-0xe0]
    unsigned long long v42;  // [bp-0xd8]
    char v43;  // [bp-0xd0]
    char v44;  // [bp-0xb0]
    int v45;  // [bp-0x58]
    unsigned long long v46;  // [bp-0x48]
    char v47;  // [bp-0x40]
    char v48;  // [bp-0x36]
    char v49;  // [bp-0x35]
    unsigned long long v51;  // rax
    void* v52;  // rcx
    void* v53;  // rcx
    void* v55;  // r12
    unsigned long long v56;  // rbx
    char v57;  // r15b
    char v58;  // al
    char v59;  // cl
    unsigned long long v60;  // r15
    unsigned long long v61;  // r15
    unsigned long long v62;  // rbp
    unsigned long long v63;  // rcx
    unsigned long long v64;  // r8

    v32.new_module(a1, "statusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 6);
    v51 = v39.try_load(v38);
    if (v49)
    {
        *(a0) = 0x8000000000000000;
    }
    else
    {
        if (a1[5] == 0x8000000000000000)
        {
            v52 = 0;
        }
        else
        {
            v52 = a1[6];
            v51 = a1[7];
        }
        if (v52)
            v53 = v52;
        else
            v53 = "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs";
        v55 = v53;
        if (!v52)
            v51 = 1;
        if (a1[8] == 0x8000000000000000)
        {
            v56 = 0;
        }
        else
        {
            v57 = 2 <= a1[10];
            v56 = v57 + 1;
        }
        v58 = v55.equal(v51, "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs", 1);
        v59 = !*((long long *)&v44) & v58;
        if (v48)
        {
            if (!v59)
                goto LABEL_bbd3a9;
            if (v57)
            {
                v15 = a1[9];
                v16 = a1[9] + a1[10] * 24;
                v56 = 2;
                if (!v15.all())
                    goto LABEL_bbd3a9;
            }
LABEL_bbd391:
            *(a0) = 0x8000000000000000;
        }
        else
        {
            if (v59)
                goto LABEL_bbd391;
            v56 = 0;
LABEL_bbd3a9:
            v60 = *((long long *)&v43);
            v1 = *((long long *)&v43);
            v2 = v42;
            v3 = v2;
            v61 = v60;
            if (v40)
            {
                v3 = v40;
                v61 = v41;
            }
            v62 = v3;
            v15 = v62;
            v16 = v61;
            v17 = v45;
            alloc::str::join_generic_copy(&v10, &v15, 2, 1, 0);
            v9 = v12;
            memcpy(&v8, &v10, 16);
            if ((unsigned int)v56 == 2)
            {
                v15 = 0;
                v20 = 0;
                v21 = a1[9];
                v22 = a1[9] + a1[10] * 24;
                v23 = 0;
                v24 = &a1[8];
                v25 = v62;
                v26 = v61;
                v27 = &v8;
                v28 = &v39;
                v29[0] = a1;
                (char)v5.collect(&v15);
                v63 = v2;
                v64 = v1;
                if (v56 == 2)
                    goto LABEL_bbd4d2;
            }
            else
            {
                v5 = 0;
                v6 = 8;
                v7 = 0;
                v63 = v2;
                v64 = v1;
                if (v56 == 2)
                {
LABEL_bbd4d2:
                    v63 = v46;
                }
            }
            if ((unsigned int)v56 == 2)
                v64 = *((long long *)&v47);
            starship::modules::status::format_exit_code(&v30, v55, v51, v63, v64, &(char)v5, &v39, a1);
            if (*((int *)&v30) != 1)
            {
                v32.set_segments(&v31);
                v0[5] = *((int128_t *)&v37);
                *((void*)&v0[4]) = v36;
                *((void*)&v0[3]) = v35;
                *((void*)&v0[2]) = v34;
                *((void*)&v0[1]) = v33;
                *((void*)&v0[0]) = v32;
                core::ptr::drop_in_place<alloc::vec::Vec<starship::segment::Segment>>(&(char)v5);
                core::ptr::drop_in_place<alloc::string::String>(&v8);
                return;
            }
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v15 = &g_11f61c8;
                v16 = 1;
                v18 = 8;
                *((uint128_t *)&v19) = 0;
                v10 = "starship::modules::statusError parsing format string in `status.pipestatus_segment_format`: Error parsing exit_code string to int0x";
                v11 = 25;
                v12 = "starship::modules::statusError parsing format string in `status.pipestatus_segment_format`: Error parsing exit_code string to int0x";
                v13 = 25;
                v14 = log::__private_api::loc(&g_11f61d8);
                log::__private_api::log(&v15, 2, &v10);
            }
            *(a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v31);
            core::ptr::drop_in_place<alloc::vec::Vec<starship::segment::Segment>>(&(char)v5);
            core::ptr::drop_in_place<alloc::string::String>(&v8);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v32);
    return;
}
