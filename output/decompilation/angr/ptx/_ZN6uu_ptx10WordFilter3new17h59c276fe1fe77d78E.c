long long uu_ptx::WordFilter::new(void* a0, unsigned long long a1, struct_1 *a2)
{
    unsigned long long v0;  // [bp-0x1a0]
    int v1;  // [bp-0x198], Other Possible Types: void*
    void* v2;  // [bp-0x198]
    void* v3;  // [bp-0x198]
    void* v4;  // [bp-0x198]
    void* v5;  // [bp-0x198]
    unsigned long long v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x190]
    int v8;  // [bp-0x188], Other Possible Types: char
    char v9;  // [bp-0x180]
    int v10;  // [bp-0x178]
    char v11;  // [bp-0x170]
    char v12;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x160]
    void* v14;  // [bp-0x160]
    unsigned long long v15;  // [bp-0x158]
    char *v16;  // [bp-0x150], Other Possible Types: unsigned long long
    char v17;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v18;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x138]
    struct_1 *v20;  // [bp-0x120]
    void* v21;  // [bp-0x118], Other Possible Types: char
    unsigned long long v22;  // [bp-0x110]
    unsigned long long v23;  // [bp-0x108]
    int v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf0]
    int v26;  // [bp-0xe8], Other Possible Types: char
    int v27;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v28;  // [bp-0xd8]
    int v29;  // [bp-0xd8]
    int v30;  // [bp-0xc8], Other Possible Types: char
    char v31;  // [bp-0xb8]
    unsigned long long v32;  // [bp-0xa8]
    void* v33;  // [bp-0x98]
    unsigned long long v34;  // [bp-0x90]
    unsigned long long v35;  // [bp-0x88]
    int v36;  // [bp-0x80]
    unsigned long long v37;  // [bp-0x70]
    char *v38;  // [bp-0x68]
    unsigned long long v39;  // [bp-0x60]
    int v40;  // [bp-0x58], Other Possible Types: char
    void* v41;  // [bp-0x48], Other Possible Types: char
    char v42;  // [bp-0x40]
    struct_1 *v44;  // r15
    char v45;  // al
    unsigned long long v46;  // rdx
    char v47;  // al
    void* v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rdx
    unsigned long long v51;  // r13
    int v52;  // xmm0
    int v53;  // xmm1
    void* v54;  // r13
    struct_0 *v55;  // rax
    void* v56;  // rax
    int v57;  // xmm0
    char v58;  // cl
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm1
    int v62;  // xmm2

    v44 = a2;
    v45 = a1.contains_id("only-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read st", 9);
    if (v45)
    {
        uu_ptx::read_word_filter_file(&v12, a1, "only-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read st", 9);
        (char)v4.map_err_context(&v12);
        v46 = *((long long *)&v8);
        if (!v3)
        {
            *((unsigned long long *)&a0[8]) = v6;
            *((unsigned long long *)&a0[16]) = v46;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return a0;
        }
        v23 = *((long long *)&v11);
        memcpy(&v21, &v9, 16);
        v5 = v3;
        v7 = v6;
    }
    else
    {
        v12.default();
        memcpy(&v21, &v17, 16);
        v23 = v19;
        v13 = v3;
        v15 = v6;
        v16 = v46;
    }
    v2 = v5;
    v14 = v13;
    v33 = v3;
    v34 = v6;
    v35 = v46;
    *((int128_t *)&v36) = *((int128_t *)&v21);
    v37 = v23;
    v47 = a1.contains_id("ignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is", 11);
    if (v47)
    {
        uu_ptx::read_word_filter_file(&v12, a1, "ignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is", 11);
        (char)v4.map_err_context(&v12);
        v48 = v2;
        v49 = v7;
        v50 = *((long long *)&v8);
        if (!v2)
        {
            *((unsigned long long *)&a0[8]) = v7;
            *((unsigned long long *)&a0[16]) = v50;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v33);
            return a0;
        }
        v27 = *((long long *)&v11);
        memcpy(&v26, &v9, 16);
    }
    else
    {
        v12.default();
        v48 = v14;
        v49 = v15;
        v50 = v16;
        memcpy(&v26, &v17, 16);
        v27 = v19;
    }
    v21 = v48;
    v22 = v49;
    v23 = v50;
    v24 = v26;
    v25 = v27;
    if (!(char)a1.contains_id("break-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no ", 10) || (char)a1.contains_id("word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to", 11))
    {
        v54 = 0;
        v27 = v28;
    }
    else
    {
        uu_ptx::read_char_filter_file(&v12, a1);
        (char)v4.map_err_context(&v12);
        v20 = a2;
        v51 = *((long long *)&v8);
        if (!v2)
        {
            *((unsigned long long *)&a0[8]) = v7;
            *((unsigned long long *)&a0[16]) = v51;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v21);
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v33);
            return a0;
        }
        v0 = v7;
        v32 = *((long long *)&v11);
        memcpy(&v31, &v9, 16);
        if (v20->field_58)
        {
            v12.default();
            v52 = *((int128_t *)&v14);
            v53 = *((int128_t *)&v16);
            *((int128_t *)&v10) = *((int128_t *)&v18);
            v8 = v53;
            v1 = v52;
            v3 = v2;
        }
        else
        {
            (char)v4.collect();
            v3 = v2;
        }
        v14 = v2;
        v15 = v0;
        v16 = v51;
        memcpy(&v17, &v31, 16);
        v19 = v32;
        (char)v4.extend(&v14);
        v54 = v3;
        v0 = v7;
        memcpy(&v26, &v8, 16);
        memcpy(&v27, &v10, 16);
        v44 = v20;
        v27 = v29;
    }
    if ((char)a1.contains_id("word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to", 11))
    {
        v14.try_get_one(a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to", 11);
        v55 = "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to".unwrap(11, &v14);
        if (v55 && v55->field_10)
        {
            v14.clone(v55);
            v56 = v14;
            memcpy(&v40, &v15, 16);
            if (!((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63)))
            {
                v57 = v40;
                goto LABEL_52b227;
            }
        }
    }
    if (v54)
    {
        memcpy(&(char)v10, &v27, 16);
        v8 = v26;
        v1 = v54;
        v6 = v0;
        v14.into_iter(&v1);
        v1.collect(&v14);
        regex::escape(&v31, v6, (long long)v8);
        v38 = &v31;
        v39 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &g_651748;
        v15 = 2;
        v18 = 0;
        v16 = &v38;
        v17 = 1;
        v41.map_or_else(&v12);
        core::ptr::drop_in_place<alloc::string::String>(&v31);
        core::ptr::drop_in_place<alloc::string::String>(&v1);
        v56 = v41;
        memcpy(&v30, &v42, 16);
        v58 = 1;
    }
    else
    {
        if (v44->field_58)
            v14.to_vec("\\w+parsing options failed!src/uu/ptx/src/ptx.rs", 3);
        else
            v14.to_vec("[^ \t\n]+", 7);
        v56 = v14;
        v57 = *((int128_t *)&v15);
LABEL_52b227:
        v30 = v57;
    }
    v59 = *((int128_t *)&v33);
    v60 = *((int128_t *)&v35);
    *((int128_t *)&a0[56]) = (int128_t)(&v36)[8];
    a0[40] = v60;
    a0[24] = v59;
    v61 = *((int128_t *)&v23);
    v62 = (int128_t)(&v24)[8];
    *((int128_t *)&a0[72]) = *((int128_t *)&v21);
    a0[88] = v61;
    a0[104] = v62;
    *((void* *)a0) = v56;
    a0[8] = v30;
    *((char *)&a0[120]) = v45;
    *((char *)&a0[121]) = v47;
    if (!!v54 && !v58)
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v54, v0);
    return a0;
}
