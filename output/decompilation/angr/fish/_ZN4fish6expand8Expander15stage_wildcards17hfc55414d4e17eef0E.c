long long fish::expand::Expander::stage_wildcards(struct_1 *a0, struct_0 *a1, unsigned long long a2[4])
{
    unsigned long long v0;  // [bp-0x130]
    unsigned int v1;  // [bp-0x130]
    unsigned long long v2[6];  // [bp-0x128]
    int v3;  // [bp-0x118], Other Possible Types: unsigned int
    char v4;  // [bp-0x110]
    unsigned long v5;  // [bp-0x108], Other Possible Types: unsigned long long
    char v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    unsigned long long v9;  // [bp-0xe8]
    void* v10;  // [bp-0xd8], Other Possible Types: int
    unsigned long long v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    void* v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    int v15;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xa8]
    char v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x90]
    void* v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    void* v22;  // [bp-0x78]
    int v23;  // [bp-0x68]
    unsigned long long v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    char v26;  // [bp-0x48]
    unsigned long v28;  // r12
    char v29;  // al
    unsigned int v31;  // ebp
    unsigned long long v32;  // rdx
    unsigned long v33;  // r14
    unsigned long long v34;  // rax
    unsigned int v35;  // ebp

    v28 = a0->field_10;
    fish::expand::remove_internal_separator(a1, ((unsigned int)v28 & 65535 & 4) >> 2);
    v29 = fish::wildcard::wildcard_has_internal(a1);
    if (!(v29 & (char)((v28 & 255) >> 4)))
    {
        if (!((char)v28 & 8))
        {
            if (!v29)
            {
                v5 = a1->field_8;
                *((unsigned long long [2])&v3) = a1->field_0;
                return (!a2.add(&(char)v3) ? fish::expand::append_overflow_error(a0->field_8->field_0) : 0);
            }
LABEL_13ae7a8:
            v2[0] = a0->field_0;
            *((long long *)((!v2[0] ? &g_14c7518 : ((unsigned int)v2[0] == 1 ? v2[2] : v2[3])) + 48))(&v17);
            v20 = 0;
            v21 = 8;
            v22 = 0;
            if (((unsigned short)v28 & 0x2800))
            {
                v31 = (vvar_165{reg 56} & 0xffffff00 | 2) & 0xffffff00 | 1;
                v32 = &g_14d89a0;
                if (a1->field_0[1].starts_with(a1->field_8, "/", 1))
                    goto LABEL_13ae8a6;
                if (a1->field_0[1].starts_with(a1->field_8, ".", 2) || a1->field_0[1].starts_with(a1->field_8, ".", 3))
                {
                    v32 = &g_14d89a0;
                    goto LABEL_13ae8a6;
                }
                if (((unsigned short)v28 & 0x2000))
                {
                    v3 = 47;
                    v32 = &g_14d89a0;
                    if (!v3.slice_contains(a1->field_0[1], a1->field_8))
                        goto LABEL_13aeadd;
LABEL_13ae8a6:
                    v35 = 0;
                    v20.push(&v17, v32);
                }
                else
                {
LABEL_13aeadd:
                    v33 = (unsigned int)v28 & 65535 & 0x800;
                    *((long long *)((!v2[0] ? &g_14c7518 : ((unsigned int)v2[0] == 1 ? v2[2] : v2[3])) + 24))();
                    if (*((long long *)&v26))
                    {
                        fish::parse_execution::ExecutionContext::run_for_statement::{{closure}}(&v3, &v26);
                        v34 = (long long)v3;
                        *((int128_t *)&v10) = *((int128_t *)&v4);
                        if (v34 == 0x8000000000000000)
                            goto LABEL_13aeb92;
                        *((int128_t *)&v15) = (int128_t)v10;
                        v14 = v34;
                    }
                    else
                    {
LABEL_13aeb92:
                        v14 = 0;
                        v15 = 8;
                        v16 = 0;
                    }
                    v3.to_vec(((v33 & 65535) ? "." : 4), (unsigned int)v33 >> 11);
                    v12 = v5;
                    *((int128_t *)&v10) = *((int128_t *)&v3);
                    v14.push(&(char)v10, &g_14d8970);
                    v3.into_iter(&v14);
                    v6.next(&v3);
                    if (v7 != 0x8000000000000000)
                    {
                        v0 = v18;
                        v31 = (unsigned int)&(char)v10;
                        do
                        {
                            fish::path::path_apply_working_directory(&(char)v10, v8, v9, v0, v19);
                            v20.push(&(char)v10, &g_14d8988);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                            v6.next(&v3);
                        } while (v7 != 0x8000000000000000);
                    }
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v3);
                    v35 = v31 & 0xffffff00 | 1;
                }
            }
            else
            {
                v32 = &g_14d8958;
                goto LABEL_13ae8a6;
            }
            (char)v10.subreceiver(a2);
            v1 = v35;
            v3.into_iter(&v20);
            v6.next(&v3);
            if (v7 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v3);
                *((int128_t *)&v23) = (int128_t)v10;
                v25 = v12;
                v10 = 0;
                v11 = 8;
                v13 = 0;
                alloc::slice::<impl [T]>::sort_by(v24, v12);
                core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v10);
                if ((char)v1)
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
            }
            else
            {
                goto (long long)(g_9f3dd0[(int)fish::wildcard::wildcard_expand_string(a1->field_0[1], a1->field_8, v8, v9, v28 & 65535, v2[4], v2[5], &(char)v10)] + (char *)&g_9f3dd0[0]);
            }
        }
        else if (!((v29 ^ 1) & (char)v28 >> 2))
        {
            goto LABEL_13ae7a8;
        }
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    return 0;
}
