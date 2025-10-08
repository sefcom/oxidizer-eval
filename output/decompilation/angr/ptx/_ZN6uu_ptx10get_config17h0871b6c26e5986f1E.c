long long uu_ptx::get_config(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc8], Other Possible Types: char
    char v3;  // [bp-0xc7]
    unsigned long long v4;  // [bp-0xc0]
    char *v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    uint128_t v6;  // [bp-0xb0]
    char v7;  // [bp-0x98]
    char v8;  // [bp-0x97]
    unsigned long long v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    int v13;  // [bp-0x70], Other Possible Types: char
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    int v16;  // [bp-0x58], Other Possible Types: char
    char v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    char v20;  // [bp-0x30]
    char v21;  // [bp-0x2f]
    char v22;  // [bp-0x2e]
    char v23;  // [bp-0x2d]
    char v24;  // [bp-0x2c]
    char v25;  // [bp-0x2b]
    char v26;  // [bp-0x2a]
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32[3];  // rax
    unsigned long long v33[3];  // rax
    unsigned long long v34[3];  // rax
    char v35;  // cl
    int v36;  // xmm1
    int v37;  // xmm2

    v10.default();
    if ((char)a1.get_flag("traditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files", 11))
    {
        v20 = 0;
        v25 = 1;
        v16.clone_into();
        if ((char)a1.contains_id("sentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for s", 15))
        {
            v4 = "-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}";
            v5 = 2;
            v1 = 1;
            v28 = v1.new();
        }
        else
        {
            v21 = a1.get_flag("auto-referencetraditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in t", 14);
            v22 = a1.get_flag("referenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard in", 10);
            v23 &= (char)a1.get_flag("right-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are ", 15);
            v24 = a1.get_flag("ignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or w", 11);
            if ((char)a1.contains_id("macro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to l", 10))
            {
                v1.try_get_one(a1, "macro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to l", 10);
                v29 = "macro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to l".unwrap(10, &v1);
                if (!v29)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 22, &g_651800); /* do not return */
                v1.clone(v29);
                core::ptr::drop_in_place<alloc::string::String>(&v10);
                v12 = v5;
                memcpy(&v10, &v1, 16);
            }
            if ((char)a1.contains_id("flag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory", 15))
            {
                v1.try_get_one(a1, "flag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory", 15);
                v31 = "flag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory".unwrap(15, &v1);
                if (!v31)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 22, &g_651818); /* do not return */
                v1.clone(v31);
                core::ptr::drop_in_place<alloc::string::String>(&v13);
                v15 = v5;
                *((int128_t *)&v13) = *((int128_t *)&v1);
            }
            if ((char)a1.contains_id("widthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Defau", 5))
            {
                v1.try_get_one(a1, "widthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Defau", 5);
                v32 = "widthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Defau".unwrap(5, &v1);
                if (!v32)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 22, &g_651830); /* do not return */
                ::0x520920::core::num::<impl usize>::from_ascii_radix(&v7, v32[1], v32[2]);
                if (v7 == 1)
                {
                    v2 = 2;
                    v3 = v8;
                    v28 = v2.new();
                }
                else
                {
                    v18 = v9;
                    goto LABEL_52b6c2;
                }
            }
            else
            {
LABEL_52b6c2:
                if ((char)a1.contains_id(&g_4525d8, 8))
                {
                    v1.try_get_one(a1, &g_4525d8, 8);
                    v33 = g_4525d8.unwrap(8, &v1);
                    if (!v33)
                        core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 22, &g_651848); /* do not return */
                    ::0x520920::core::num::<impl usize>::from_ascii_radix(&v7, v33[1], v33[2]);
                    if (v7)
                    {
                        v2 = 2;
                        v3 = v8;
                        v28 = v2.new();
                    }
                    else
                    {
                        v19 = v9;
                        goto LABEL_52b756;
                    }
                }
                else
                {
LABEL_52b756:
                    v1.try_get_one(a1, "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option", 6);
                    v34 = "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option".unwrap(6, &v1);
                    if (v34)
                    {
                        v35 = 1;
                        if (!(char)v34[1].equal(v34[2], "roffHashj", 4))
                        {
                            v35 = 2;
                            if (!(char)v34[1].equal(v34[2], "texinternal error: entered unreachable code: should be caught by clap", 3))
                            {
                                v2 = &g_651768;
                                v4 = 1;
                                v5 = &v0;
                                v6 = 0;
                                core::panicking::panic_fmt(&v1, &g_651860); /* do not return */
                            }
                        }
                        v25 = v35;
                    }
                    if ((char)a1.get_flag("roffHashj", 4))
                        v25 = 1;
                    if ((char)a1.get_flag("texinternal error: entered unreachable code: should be caught by clap", 3))
                        v25 = 2;
                    *((unsigned long long *)&a0[80]) = v19;
                    *((int *)&a0[88]) = *((int *)&v20);
                    *((char *)&a0[92]) = v24;
                    *((char *)&a0[93]) = v25;
                    *((short *)&a0[94]) = *((short *)&v26);
                    *((int128_t *)&a0[64]) = *((int128_t *)&v17);
                    v36 = *((int128_t *)&v12);
                    v37 = *((int128_t *)&v14);
                    a0[48] = v16;
                    a0[32] = v37;
                    a0[16] = v36;
                    *(a0) = v11;
                    return a0;
                }
            }
        }
    }
    else
    {
        v4 = "GNU extensions-S:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}";
        v5 = 14;
        v2 = 1;
        v28 = v2.new();
    }
    *((unsigned long long *)&a0[8]) = v28;
    *((char **)&a0[16]) = &g_651798;
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<uu_ptx::Config>(&v10);
    return a0;
}
