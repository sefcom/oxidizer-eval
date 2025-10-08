long long uu_join::parse_settings(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x148], Other Possible Types: void*, char, unsigned long long
    unsigned long long v1;  // [bp-0x140]
    unsigned long long v2;  // [bp-0x140]
    int v3;  // [bp-0x138]
    void* v4;  // [bp-0x138]
    int v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    void* v7;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x108]
    int v11;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xf8]
    char v13;  // [bp-0xf0]
    char v14;  // [bp-0xef]
    char v15;  // [bp-0xee]
    char v16;  // [bp-0xed], Other Possible Types: unsigned int
    char v17;  // [bp-0xec]
    char v18;  // [bp-0xeb]
    char v19;  // [bp-0xea]
    char v20;  // [bp-0xe9]
    void* v21;  // [bp-0xe8]
    unsigned long long v22;  // [bp-0xe0]
    void* v23;  // [bp-0xd8]
    char v24;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v25;  // [bp-0xd0]
    unsigned long v26;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v27;  // [bp-0xc0], Other Possible Types: char
    unsigned short v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x78]
    void* v31;  // [bp-0x70]
    void* v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x60]
    unsigned long long v34;  // [bp-0x58]
    unsigned int v35;  // [bp-0x50]
    unsigned long long v36;  // [bp-0x48]
    unsigned long long v37;  // [bp-0x40]
    unsigned long long v38;  // [bp-0x38]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    struct_0 *v42;  // rax
    unsigned long long v43;  // r12
    unsigned long long v44[3];  // rax
    unsigned long v45;  // r12
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48[3];  // rax
    int v50;  // xmm0
    int v51;  // xmm1
    int v52;  // xmm2

    uu_join::get_and_parse_field_number(&v0, a1, "j12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, r");
    if (*((int *)&v0) != 1)
    {
        uu_join::get_and_parse_field_number(&v0, a1, "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, re");
        if (*((int *)&v0) != 1)
        {
            uu_join::get_and_parse_field_number(&v0, a1, "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, rea");
            if (*((int *)&v0) == 1)
            {
                *((int128_t *)&a0[8]) = *((int128_t *)&vvar_522{stack -320});
            }
            else
            {
                v32 = v4;
                v33 = v2;
                uu_join::parse_print_settings(&v0, a1);
                v40 = v2;
                if (v0)
                {
                    *((unsigned long long *)&a0[8]) = v0;
                    *((unsigned long long *)&a0[16]) = v40;
                }
                else
                {
                    v31 = v4;
                    v30 = v2;
                    *((uint128_t *)&v11) = 0;
                    v20 = 10;
                    v29 = 9223372036854775811;
                    v8 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    *((uint128_t *)&v3) = 0;
                    v6 = 1;
                    v7 = 0;
                    v16 = 0;
                    v15 = (char)v40 & 1;
                    v13 = (char)((v40 & 4294967295) >> 8) & 1;
                    v14 = (char)((v40 & 4294967295) >> 16) & 1;
                    v16 = a1.get_flag("itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read", 1);
                    uu_join::get_field_number(&v24, v2, v4, v33, v32);
                    v41 = v26;
                    if (!v24)
                    {
                        v11 = v41;
                        uu_join::get_field_number(&v24, v2, v4, v30, v31);
                        v41 = v26;
                        if (!v24)
                        {
                            v12 = v41;
                            v24.try_get_one(a1);
                            v42 = v24.unwrap();
                            if (v42)
                            {
                                uu_join::parse_separator(&v24, v42->field_8, v42->field_10);
                                v43 = *((long long *)&v27);
                                if (v24 == 9223372036854775812)
                                {
                                    *((unsigned long long *)&a0[8]) = v26;
                                    *((unsigned long long *)&a0[16]) = v43;
                                    *((unsigned long long *)a0) = 0x8000000000000000;
                                    core::ptr::drop_in_place<uu_join::Settings>(&v0);
                                    return a0;
                                }
                                core::ptr::drop_in_place<uu_join::SepSetting>(9223372036854775811, v9);
                                v8 = v24;
                                v9 = v26;
                                v10 = v43;
                            }
                            v24.try_get_one(a1, "oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read s");
                            v44 = "oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read s".unwrap(&v24);
                            if (v44)
                            {
                                v45 = v44[2];
                                if ((char)v44[1].equal(v45, "autoBool", 4))
                                {
                                    v17 = 1;
                                }
                                else
                                {
                                    v21 = 0;
                                    v22 = 8;
                                    v23 = 0;
                                    v34 = 188978561056;
                                    v35 = 9;
                                    v27.into_searcher(&v34, v44[1], v45);
                                    v25 = 0;
                                    v26 = v45;
                                    v28 = 1;
                                    while (true)
                                    {
                                        v46 = v25.next();
                                        if (!v46)
                                            break;
                                        v34.parse(v46, v47);
                                        if ((int)v34 == 1)
                                        {
                                            *((long long *)&a0[8]) = *((long long *)&v35);
                                            *((unsigned long long *)&a0[16]) = v36;
                                            *((unsigned long long *)a0) = 0x8000000000000000;
                                            v21.drop_in_place<alloc::vec::Vec<uu_join::Spec>>(8);
                                            core::ptr::drop_in_place<uu_join::Settings>(&v0);
                                            return a0;
                                        }
                                        v37 = *((long long *)&v35);
                                        v38 = v36;
                                        v21.push(&v37);
                                    }
                                    *((int128_t *)&v0) = *((int128_t *)&v21);
                                    v4 = 0;
                                    0.drop_in_place<alloc::vec::Vec<uu_join::Spec>>(8);
                                }
                            }
                            v24.try_get_one(a1, "enocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read st");
                            v48 = "enocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read st".unwrap(&v24);
                            if (v48)
                            {
                                v24.to_vec(v48[1], v48[2]);
                                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
                                v7 = (long long)v27;
                                *((int128_t *)&v5) = *((int128_t *)&v25);
                            }
                            if ((char)a1.get_flag("nocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read sta", 13))
                                v19 = 1;
                            if ((char)a1.get_flag("check-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{", 11))
                                v19 = 2;
                            if ((char)a1.get_flag("headerz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION].", 6))
                                v18 = 1;
                            *((int *)&v20) = ((char)a1.get_flag("z(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION]... FIL", 1) ? 0 : 10);
                            *((int128_t *)&a0[64]) = *((int128_t *)&v10);
                            v50 = (int128_t)v0;
                            v51 = (int128_t)v3;
                            v52 = *((int128_t *)&v6);
                            *((int128_t *)&a0[48]) = *((int128_t *)&v8);
                            a0[32] = v52;
                            a0[16] = v51;
                            *(a0) = v50;
                            *((unsigned long long *)&a0[80]) = v12;
                            *((int *)&a0[88]) = *((int *)&v13);
                            *((short *)&a0[92]) = *((short *)((char *)&v16 + 1));
                            *((char *)&a0[94]) = v19;
                            *((char *)&a0[95]) = v20;
                            return a0;
                        }
                    }
                    *((unsigned long long *)&a0[8]) = v24;
                    *((unsigned long long *)&a0[16]) = v41;
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<uu_join::Settings>(&v0);
                    return a0;
                }
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            return a0;
        }
    }
    *((int128_t *)&a0[8]) = *((int128_t *)&v2);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return a0;
}
