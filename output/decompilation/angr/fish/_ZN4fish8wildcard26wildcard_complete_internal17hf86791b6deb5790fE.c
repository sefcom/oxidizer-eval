long long fish::wildcard::wildcard_complete_internal(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, unsigned int a5, struct_1 *a6, char a7)
{
    struct_1 *v0;  // [bp-0x118]
    unsigned int v1;  // [bp-0xfc]
    unsigned long long v2;  // [bp-0xf8]
    struct_0 *v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [sp-0x78]
    void* v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x48]
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rdx
    unsigned long v18;  // r9
    unsigned int v19;  // eax
    void* v20;  // r14
    struct_1 *v21;  // 4096
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    void* v24;  // r14
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdi
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rcx
    char v31;  // al
    unsigned int v32;  // r8d
    char v33;  // dl
    char v34;  // bpl
    char v35;  // r14b
    unsigned long long v36;  // rdx

    v1 = a5;
    if (a7 && !(a4->field_20[1] & 4) && (int)a0.char_at(a1, 0) == 46)
    {
        v16 = 0;
        if ((int)a2.char_at(a3, 0) == 46)
            goto LABEL_1425f17;
    }
    else
    {
LABEL_1425f17:
        v7 = a2;
        v8 = a2 + a3 * 4;
        v13 = 0;
        if (!((char)v7.try_fold(&v13) & 1))
        {
            v16 = 0;
            v31 = fish::wcstringutil::string_fuzzy_match_string(a2, a3, a0, a1, 0);
            if (v31 != 3)
            {
                v32 = (unsigned int)a4->field_20;
                if ((v33 < 2 | (char)(v32 >> 8) & 1) != 1)
                    goto LABEL_142631c;
                if (a6)
                {
                    if ((v33 & 254) == 2 || v31)
                    {
                        if (a3 > a1)
                            core::panicking::panic("assertion failed: !full_replacement || wc.len() <= s.len()assertion failed: !segment_has_wildcardsassertion failed: self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion fa", 58, &g_14e4dc0); /* do not return */
                    }
                    else
                    {
                        if (!a3 <= a1 && !!((char)v1 & 2))
                            core::panicking::panic("assertion failed: !full_replacement || wc.len() <= s.len()assertion failed: !segment_has_wildcardsassertion failed: self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion fa", 58, &g_14e4dc0); /* do not return */
                        a4 = a4;
                        v34 = v33;
                        v35 = v31;
                        if (!((char)v1 & 2))
                        {
                            v5 = a0.slice_from(a1, a3);
                            v6 = v36;
                            fish::wildcard::resolve_description(&v15, a4->field_0, a4->field_8, &v5, v32, *((long long *)&a4->field_10), a4->field_18);
                            goto LABEL_1426293;
                        }
                    }
                    v5 = a4->field_0;
                    v6 = a4->field_8;
                    fish::wildcard::resolve_description(&v15, a4->field_0, a4->field_8, &v5, v32, *((long long *)&a4->field_10), a4->field_18);
                    v1 |= 2;
LABEL_1426293:
                    v7.to_vec(v5, v6);
                    v14 = v9;
                    memcpy(&v13, &v7, 16);
                    v7.new(&v13, &v15, v35, v34, v1);
                    v16 = a6.add(&v7) & 0xffffff00 | (a6.add(&v7) ^ 1) * 2 + 1;
                }
                else
                {
                    v16 = 1;
                }
            }
        }
        else if (!v17)
        {
            v16 = 0;
            v19 = a2.char_at(a3, 0);
            if (v19 != 64992)
            {
                if (v19 != 64993)
                {
                    if (v19 != 64994)
                        core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14e4da8); /* do not return */
                }
                else
                {
                    if (a3 == 1)
                    {
                        v26 = 4;
                        v28 = 4;
                        v27 = 0;
                        v29 = 0;
                        goto LABEL_14261c2;
                    }
                    if (!v2)
                        goto LABEL_142631c;
                    v3 = a4;
                    if (a6)
                    {
                        v20 = 0;
                        v16 = 0;
                        v21 = a6;
                        while (true)
                        {
                            v4 = v21->field_10;
                            v22 = a0.slice_from(a1, v20);
                            v23 = fish::wildcard::wildcard_complete_internal(v22, v17, a2.slice_from(a3, 1), v17, v3, v1, a6, 0);
                            if ((char)v23)
                            {
                                if ((unsigned int)v23 != 1)
                                    break;
                                v16 = v16 & 0xffffffffffffff00 | 1;
                                if (fish::wildcard::has_prefix_match(*((long long *)&a6->field_8), a6->field_10, v4))
                                    return (v16 & 0xffffffffffffff00 | 1) & 4294967295;
                            }
                            v20 += 1;
                            v21 = a6;
                            if (a1 == v20)
                                return v16 & 4294967295;
                        }
                    }
                    else
                    {
                        v24 = 0;
                        while (true)
                        {
                            v25 = a0.slice_from(v2, v24);
                            v23 = fish::wildcard::wildcard_complete_internal(v25, v17, a2.slice_from(a3, 1), v17, v3, v1, NULL, 0);
                            if ((char)v23)
                                break;
                            v24 += 1;
                            if (v2 == v24)
                                return 0;
                        }
                    }
LABEL_14261d7:
                    v16 = v23 & 4294967295;
                }
            }
            else
            {
                if (v2)
                {
                    v26 = a0.slice_from(v2, 1);
                    v28 = a2.slice_from(a3, 1);
LABEL_14261c2:
                    v18 = v1;
                    v0 = a6;
LABEL_14261ce:
                    v23 = fish::wildcard::wildcard_complete_internal(v26, v27, v28, v29, a4, v18, v0, 0);
                    goto LABEL_14261d7;
                }
LABEL_142631c:
                v16 = 0;
            }
        }
        else if (v17 < v2)
        {
            v7.split_at(a0, v2, v17);
            v26 = v9;
            v12 = *((long long *)&v10);
            v7.split_at(a2, a3, v17);
            v28 = v9;
            v11 = *((long long *)&v10);
            v4 = v7;
            if ((char)v4.equal(v8, v7, v8))
            {
                v18 = v1;
                v27 = v12;
                v29 = v11;
                goto LABEL_1426160;
            }
            else if (!(char)fish::fallback::wcscasecmp(v4, v8, v7, v8))
            {
                v26 = a0.slice_from(a1, v17);
                v28 = a2.slice_from(a3, v17);
                v18 = v1 | 2;
                v27 = v17;
                v29 = v17;
LABEL_1426160:
                v0 = a6;
                goto LABEL_14261ce;
            }
        }
    }
    return v16 & 4294967295;
}
