long long uu_ptx::WordFilter::new(struct_0 *a0, unsigned long long a1, struct_1 *a2)
{
    int v0;  // [bp-0x1d8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x1d8]
    unsigned long long v2;  // [bp-0x1d8]
    unsigned long long v3;  // [bp-0x1d0]
    int v4;  // [bp-0x1c8], Other Possible Types: char *, unsigned long long
    char v5;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v6;  // [bp-0x1b8], Other Possible Types: void*, unsigned long long
    unsigned long long v7;  // [bp-0x1b0]
    int v8;  // [bp-0x1a8]
    int v9;  // [bp-0x198], Other Possible Types: char
    unsigned long long v10;  // [bp-0x190]
    unsigned long long v11;  // [bp-0x190]
    int v12;  // [bp-0x188], Other Possible Types: char
    char v13;  // [bp-0x180]
    int v14;  // [bp-0x178], Other Possible Types: char
    unsigned long long v15;  // [bp-0x170]
    int v16;  // [bp-0x168]
    char v17;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x150]
    unsigned long long v19;  // [bp-0x148]
    unsigned long long v20;  // [bp-0x148]
    char v21;  // [bp-0x140]
    char v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x130]
    int v24;  // [bp-0x118], Other Possible Types: char
    void* v25;  // [bp-0x108], Other Possible Types: char, unsigned long long
    int v26;  // [bp-0x108]
    int v27;  // [bp-0xf8], Other Possible Types: char
    int v28;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v29;  // [bp-0xd0]
    unsigned long long v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    int v32;  // [bp-0xb8]
    unsigned long long v33;  // [bp-0xa8]
    unsigned long long v34;  // [bp-0xa0]
    unsigned long long v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x90]
    int v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x78]
    char *v39;  // [bp-0x70]
    unsigned long long v40;  // [bp-0x68]
    char v41;  // [bp-0x60], Other Possible Types: unsigned long long
    char v42;  // [bp-0x58]
    int v43;  // [bp-0x48], Other Possible Types: char
    char v45;  // al
    unsigned long long v46;  // rcx
    unsigned long long v47;  // rdx
    char v48;  // al
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdx
    int v52;  // xmm0
    int v53;  // xmm0
    int v54;  // xmm1
    struct_2 *v55;  // rax
    unsigned long long v56;  // rax
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2
    char v60;  // cl
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm1
    int v64;  // xmm2

    v45 = a1.contains_id(_ZN6uu_ptx7options9ONLY_FILE17hef60c9031d725183E, g_73c070);
    if (v45)
    {
        uu_ptx::read_word_filter_file(&(char)v2, a1, _ZN6uu_ptx7options9ONLY_FILE17hef60c9031d725183E, g_73c070);
        (char)v9.map_err_context(&(char)v2);
        v46 = *((long long *)&v9);
        v47 = *((long long *)&v12);
        if (!*((long long *)&v9))
        {
            *((unsigned long long *)&a0->field_8) = v11;
            *((unsigned long long *)&a0->padding_9[7]) = v47;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v19 = v15;
        memcpy(&v17, &v13, 16);
        v10 = v11;
    }
    else
    {
        v0.default();
        memcpy(&v17, &v5, 16);
        v19 = v7;
        v1 = v46;
        v3 = v11;
        v4 = v47;
    }
    v2 = v1;
    v29 = v46;
    v30 = v11;
    v31 = v47;
    *((int128_t *)&v32) = *((int128_t *)&v17);
    v33 = v19;
    v48 = a1.contains_id(_ZN6uu_ptx7options11IGNORE_FILE17h6ae7b198784764dfE, g_73c060);
    if (v48)
    {
        uu_ptx::read_word_filter_file(&(char)v2, a1, _ZN6uu_ptx7options11IGNORE_FILE17h6ae7b198784764dfE, g_73c060);
        (char)v9.map_err_context(&(char)v2);
        v49 = *((long long *)&v9);
        v50 = v10;
        v51 = *((long long *)&v12);
        if (!v49)
        {
            *((unsigned long long *)&a0->field_8) = v10;
            *((unsigned long long *)&a0->padding_9[7]) = v51;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v29);
            return a0;
        }
        v19 = v15;
        memcpy(&v17, &v13, 16);
    }
    else
    {
        (char)v2.default();
        v49 = v2;
        v50 = v3;
        v51 = v4;
        memcpy(&v17, &v5, 16);
        v19 = v7;
    }
    v34 = v49;
    v35 = v50;
    v36 = v51;
    *((int128_t *)&v37) = *((int128_t *)&v17);
    v38 = v19;
    if (!(char)a1.contains_id(_ZN6uu_ptx7options10BREAK_FILE17hf504c01eb3c1890fE, g_73c030) || (char)a1.contains_id(_ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E, g_73c020))
    {
        v25 = 0;
    }
    else
    {
        uu_ptx::read_char_filter_file(&(char)v2, a1, _ZN6uu_ptx7options10BREAK_FILE17hf504c01eb3c1890fE, g_73c030);
        (char)v9.map_err_context(&(char)v2);
        if (!*((long long *)&v9))
        {
            *((unsigned long long *)&a0->field_8) = v10;
            *((unsigned long long *)&a0->padding_9[7]) = v20;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v34);
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v29);
            return a0;
        }
        v23 = v15;
        memcpy(&v21, &v13, 16);
        v17 = *((long long *)&v9);
        v18 = v10;
        v20 = *((long long *)&v12);
        if (a2->field_58)
        {
            (char)v2.default();
            v52 = *((int128_t *)&v2);
            memcpy(&v14, &v6, 16);
            *((int128_t *)&v12) = *((int128_t *)&v4);
            v9 = v52;
        }
        else
        {
            (char)v9.from_iter();
        }
        v53 = *((int128_t *)&v17);
        v54 = *((int128_t *)&v19);
        *((int128_t *)&v6) = *((int128_t *)&v22);
        v4 = v54;
        v0 = v53;
        (char)v9.extend(&(char)v2);
        memcpy(&v25, &v9, 16);
        memcpy(&v27, &v12, 16);
        memcpy(&v28, &v14, 16);
        v19 = v20;
    }
    if ((char)a1.contains_id(_ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E, g_73c020))
    {
        (char)v2.try_get_one(a1, _ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E, g_73c020);
        v55 = _ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E.unwrap(g_73c020, &(char)v2);
        if (v55 && v55->field_10)
        {
            (char)v2.clone(v55);
            v56 = v2;
            memcpy(&v43, &v3, 16);
            if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
            {
                v57 = v43;
                goto LABEL_5a0db1;
            }
        }
    }
    if (v25)
    {
        v14 = v28;
        v12 = v27;
        v9 = v26;
        (char)v2.into_iter(&(char)v9);
        v58 = (int128_t)v4;
        v59 = (int128_t)v6;
        *((int128_t *)&v9) = *((int128_t *)&v2);
        v12 = v58;
        v14 = v59;
        v16 = v8;
        v17.from_iter(&(char)v9);
        regex::escape(&(char)v9, v18, v19);
        v39 = &(char)v9;
        v40 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_73b510;
        v3 = 2;
        v6 = 0;
        v4 = &v39;
        v5 = 1;
        v41.map_or_else(&v0);
        ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
        ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v17);
        v56 = v41;
        memcpy(&v24, &v42, 16);
        v60 = 1;
    }
    else
    {
        if (a2->field_58)
            (char)v2.to_vec("\\w+parsing options failed!src/uu/ptx/src/ptx.rs", 3);
        else
            (char)v2.to_vec("[^ \t\n]+ ", 7);
        v56 = v2;
        v57 = *((int128_t *)&v3);
LABEL_5a0db1:
        v24 = v57;
    }
    v61 = *((int128_t *)&v29);
    v62 = *((int128_t *)&v31);
    *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v32)[8];
    *((void*)((char *)&a0->field_18 + 8)) = v62;
    *((void*)&(&a0->padding_9)[1]) = v61;
    v63 = *((int128_t *)&v36);
    v64 = (int128_t)(&v37)[8];
    *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v34);
    *((void*)((char *)&a0->field_48 + 8)) = v63;
    *((void*)((char *)&a0->field_58 + 8)) = v64;
    a0->field_0 = v56;
    *((void*)&a0->field_8) = v24;
    *((char *)&a0->field_68 + 8) = v45;
    *((char *)&a0->field_68 + 9) = v48;
    if (!v60 && v25)
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(&v26);
    return a0;
}
