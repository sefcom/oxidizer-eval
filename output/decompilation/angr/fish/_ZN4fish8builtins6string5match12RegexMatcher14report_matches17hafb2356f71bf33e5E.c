long long fish::builtins::string::match::RegexMatcher::report_matches(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x320]
    int v1;  // [bp-0x308]
    unsigned long long v2;  // [bp-0x2f8]
    unsigned long v3;  // [bp-0x2f0]
    int v4;  // [bp-0x2e8]
    unsigned long long v5;  // [bp-0x2d8]
    int v6;  // [bp-0x2c8]
    int v7;  // [bp-0x2b8], Other Possible Types: unsigned long long
    int v8;  // [bp-0x2a8]
    int v9;  // [bp-0x298]
    void* v10;  // [bp-0x288]
    struct_0 *v11;  // [bp-0x278]
    unsigned long long v12;  // [bp-0x270]
    unsigned long long v13;  // [bp-0x268]
    void* v14;  // [bp-0x260]
    char v15;  // [bp-0x258], Other Possible Types: unsigned long long
    int v16;  // [bp-0x250], Other Possible Types: char
    unsigned long long v17;  // [bp-0x240]
    int v18;  // [bp-0x238]
    int v19;  // [bp-0x228], Other Possible Types: char
    int v20;  // [bp-0x218]
    int v21;  // [bp-0x208], Other Possible Types: char
    int v22;  // [bp-0x1f8]
    int v23;  // [bp-0x1e8], Other Possible Types: char
    int v24;  // [bp-0x1d8]
    int v25;  // [bp-0x1c8], Other Possible Types: char
    int v26;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v27;  // [bp-0x1a8]
    unsigned long long v28;  // [bp-0x150]
    int v29;  // [bp-0x148]
    unsigned long long v30;  // [bp-0x138]
    int v31;  // [bp-0x130]
    int v32;  // [bp-0x120]
    int v33;  // [bp-0x110]
    int v34;  // [bp-0x100]
    int v35;  // [bp-0xf0]
    unsigned long long v36;  // [bp-0x90]
    int v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x78]
    int v39;  // [bp-0x70]
    int v40;  // [bp-0x60]
    int v41;  // [bp-0x50]
    int v42;  // [bp-0x40]
    unsigned long long v45;  // rcx
    unsigned long v46;  // rcx
    char v47;  // bpl
    void* v48;  // 4096
    unsigned long long v49;  // rcx

    v11 = a1;
    v12 = a2;
    v13 = a3;
    v14 = 0;
    v10 = 0;
    v15.next(&v10);
    if (v15 == 2)
    {
        v6 = v16;
        v7 = v17;
        *((unsigned long long *)&a0[16]) = v7;
        *(a0) = v16;
        return v17;
    }
    v45 = 2;
    if ((unsigned int)v15 != 3)
    {
        v27 = v17;
        memcpy(&v26, &v16, 16);
        v22 = v18;
        memcpy(&v23, &v19, 16);
        v24 = v20;
        memcpy(&v25, &v21, 16);
        v45 = v15;
    }
    v28 = v45;
    v29 = v26;
    v30 = v27;
    v31 = v22;
    v32 = v23;
    v33 = v24;
    v34 = v25;
    v26.report_match(a1->field_68, a2, a3, &v28, a4);
    if ((int)v26 != 3)
    {
        v46 = a1->field_70;
        if ((char)_ccall(4, 24, v46 + 1, 0, (unsigned long long)(char)((int)v26 < 3)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d3470); /* do not return */
        a1->field_70 = v46 + 1;
        if (v46)
            goto LABEL_137302d;
        v47 = 1;
        a1->padding_0[56].populate_captures_from_match((int)a1->field_68[24], &v26);
    }
    else
    {
LABEL_137302d:
    }
    v48 = a0;
    if (!(char)a1->field_68[28])
    {
        v48 = a0;
        if ((char)a1->field_68[24] == 1)
        {
            v3 = &a1->padding_0[56];
            while (true)
            {
                v15.next(&v10);
                v49 = 2;
                if (v15 != 3)
                {
                    if ((unsigned int)v15 != 2)
                    {
                        v5 = v17;
                        v4 = v16;
                        memcpy(&v6, &v18, 16);
                        v7 = v19;
                        v8 = v20;
                        v9 = v21;
                        v49 = v15;
                    }
                    else
                    {
                        v1 = v16;
                        v2 = v17;
                        *((unsigned long long *)&a0[16]) = v17;
                        *(a0) = v16;
                        return core::ptr::drop_in_place<fish::builtins::string::match::MatchResult>(&v26);
                    }
                }
                memcpy(&v1, &v4, 16);
                v2 = v5;
                v42 = v9;
                v41 = v8;
                v40 = v7;
                v39 = v6;
                v36 = v49;
                v38 = v2;
                v37 = v1;
                v35.report_match(a1->field_68, a2, a3, &v36, a4);
                if ((int)v35 == 3)
                    break;
                if (v47)
                    v3.populate_captures_from_match((int)a1->field_68[24], &v35);
                core::ptr::drop_in_place<core::option::Option<pcre2::regex_impl::Captures<pcre2::ffi::CodeUnitWidth32>>>(&v35);
            }
            core::ptr::drop_in_place<fish::builtins::string::match::MatchResult>(&v35);
            v48 = v0;
        }
    }
    *((unsigned long long *)v48) = 2;
    return core::ptr::drop_in_place<fish::builtins::string::match::MatchResult>(&v26);
}
