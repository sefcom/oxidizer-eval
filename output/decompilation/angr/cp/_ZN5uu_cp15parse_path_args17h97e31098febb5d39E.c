long long uu_cp::parse_path_args(void* a0, struct_2 *a1, struct_0 *a2)
{
    struct_2 *v0;  // [bp-0xe0]
    int v1;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0xd0]
    char *v3;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    unsigned long v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xb8], Other Possible Types: char, unsigned long
    unsigned long long v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8]
    void* v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    int v12;  // [bp-0x78], Other Possible Types: unsigned long
    int v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    int v15;  // [bp-0x60], Other Possible Types: char
    unsigned long v16;  // [bp-0x50]
    int v17;  // [bp-0x48], Other Possible Types: char
    char v18;  // [bp-0x38]
    unsigned long v20;  // r12
    int v21;  // xmm0
    int v22;  // xmm1
    int v23;  // xmm0
    unsigned long v24;  // rax
    unsigned long long v25;  // rsi
    unsigned long v26;  // r15
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbx
    unsigned long v30;  // rbx
    struct_2 *v31;  // rcx
    int v32;  // xmm0

    v20 = a1->field_8;
    if (v20 != 1)
    {
        if (!v20)
        {
            v1.from("missing file operandmissing destination file operand after extra operand : warning: source   specified more than once\nwill not overwrite just-created ''", 20);
            *((long long *)&a0[48]) = *((long long *)&v7);
            v21 = *((int128_t *)&v1);
            v22 = *((int128_t *)&v3);
            *((int128_t *)&a0[32]) = *((int128_t *)&v5);
            a0[16] = v22;
            *(a0) = v21;
        }
        else
        {
            if ((a2->field_18 == 0x8000000000000000 & a2->field_5a))
            {
                if (v20 <= 2)
                    goto LABEL_49fdcc;
                v9 = a1->field_0[1] + 48;
                v10 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                v1 = &g_55ea28;
                v2 = 1;
                v5 = 0;
                v3 = &v9;
                v4 = 1;
                v17.map_or_else(&v1);
                *((long long *)&a0[24]) = *((long long *)&v18);
                v23 = v17;
            }
            else
            {
                if (a2->field_18 == 0x8000000000000000)
                {
LABEL_49fdcc:
                    v8 = a0;
                    v20 -= 1;
                    a1->field_8 = v20;
                    v24 = a1->field_0[1];
                    v25 = v20 * 3;
                    if (*((long long *)(v24 + v25 * 8)) == 0x8000000000000000)
                        core::option::unwrap_failed(&g_55ea38); /* do not return */
                    v0 = a1;
                    v12 = *((long long *)(v24 + v25 * 8));
                    *((int128_t *)&v13) = *((int128_t *)(v24 + v25 * 8 + 8));
                    if (a2->field_5d)
                        goto LABEL_49fe4e;
                }
                else
                {
LABEL_49fe0f:
                    (char)v1.clone(a2->field_20, a2->field_28);
                    v8 = a0;
                    v0 = a1;
                    v14 = v3;
                    *((int128_t *)&v12) = *((int128_t *)&v1);
                    if (a2->field_5d)
                    {
LABEL_49fe4e:
                        v26 = v0->field_0[1];
                        v27 = v20 * 24;
                        do
                        {
                            v28 = v27;
                            v1.components(*((long long *)(v26 + 8)), *((long long *)(v26 + 16)));
                            std::sys::pal::unix::os::split_paths::bytes_to_path(&v9, v1.as_path(), a2);
                            core::ptr::drop_in_place<std::path::PathBuf>(v26);
                            *((unsigned long long *)(v26 + 16)) = v11;
                            *((int128_t *)v26) = *((int128_t *)&v9);
                            v26 += 24;
                            v30 = v28 - 24;
                            v27 = v30;
                        } while (v28 != 24);
                    }
                }
                v31 = v0;
                v3 = v31->field_8;
                v32 = v31->field_0;
                v1 = v32;
                v6 = v14;
                memcpy(&(char)v4, &v12, 16);
                v8[8] = v32;
                *((unsigned long long *)&v8[24]) = v3;
                *((unsigned long *)&v8[32]) = v4;
                *((unsigned long *)&v8[40]) = v5;
                *((unsigned long long *)&v8[48]) = v6;
                *((unsigned long long *)v8) = 9223372036854775820;
                return v8;
            }
LABEL_49fdae:
            a0[8] = v23;
            *((unsigned long long *)a0) = 9223372036854775811;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a1);
        return a0;
    }
    if (a2->field_18 != 0x8000000000000000)
        goto LABEL_49fe0f;
    v9 = a1->field_0[1];
    v10 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
    v1 = &g_55ea18;
    v2 = 1;
    v5 = 0;
    v3 = &v9;
    v4 = 1;
    v15.map_or_else(&v1);
    *((unsigned long *)&a0[24]) = v16;
    v23 = v15;
    goto LABEL_49fdae;
}
