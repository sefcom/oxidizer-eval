void fish::wildcard::expander::WildCardExpander::try_add_completion_result(struct_1 *a0, unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, void* a9, char a10)
{
    struct_3 *v0;  // [bp-0x80]
    unsigned long long v1[3];  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long v7;  // [bp-0x40]
    unsigned long v8;  // [bp-0x38]
    unsigned long v9;  // rbp
    unsigned long long v10[3];  // rbx
    struct_0 *v11;  // rax
    struct_0 *v12;  // r12
    unsigned long long v13;  // rbx
    struct_0 *v14;  // r14
    unsigned long v15;  // rax
    unsigned long long v16;  // rbx
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rbx

    v9 = a0->field_88;
    if (!((char)v9 & 8))
        core::panicking::panic("assertion failed: self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion failed: any_tail.chars().next().unwrap() == ANY_STRING_RECURSIVEassertion failed: before <= afterass", 67, &g_14e4f70); /* do not return */
    v4.to_vec(a0->field_70, a0->field_78);
    v3 = v6;
    *((int128_t *)&v1) = *((int128_t *)&v4);
    fish::path::append_path_component(&(char)v1, a1, a2);
    if (((unsigned short)v9 & 0x800))
    {
        fish::wutil::normalize_path(&v4, v2, v3, 1);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v1);
        v3 = v6;
        *((int128_t *)&v1) = *((int128_t *)&v4);
    }
    v10 = a0->field_80;
    if ((char)fish::wildcard::wildcard_test_flags_then_complete(v2, v3, a3, a4, a5, a6, v9, v10, a9))
    {
        v7 = v10[2];
        v11 = v10[2].index_mut(v10[2], v10[1], v10[2], &g_14e4f40);
        v8 = v10[2];
        v12 = v11;
        if (a10)
        {
            v13 = (char *)v12 + 56 * v17;
            while (true)
            {
                v14 = &v12[1].padding_0[4];
                if (v12 == v13)
                {
                    v14 = v12;
                    if (v12 == v13)
                        break;
                }
                else if (v12 == v13)
                {
                    break;
                }
                if (!v12)
                    break;
                v15 = v12->field_32;
                if (!((char)v15 & 2))
                {
                    v12->field_32 = (unsigned short)v15 | 2;
                    v12.prepend_token_prefix(a5, a6);
                }
                v12.prepend_token_prefix(a7, a8);
                v12 = v14;
            }
        }
        else
        {
            for (v16 = v17 * 56; v16 && v12; v12 = &v12[1].padding_0[4])
            {
                v16 -= 56;
                v12.prepend_token_prefix(a7, a8);
            }
        }
        if ((v0->field_89 & 16))
        {
            v4.descend_unique_hierarchy(v0, &(char)v1);
            if (v6)
            {
                v18 = v8.index_mut(v7, a0->field_80->field_8, a0->field_80->field_10, &g_14e4f58);
                for (v19 = v17 * 56; v19 && v18; v18 += 56)
                {
                    v19 -= 56;
                    v18.spec_extend(v5, v5 + v6 * 4);
                }
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        }
        a0->field_8c = 1;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v1);
    return;
}
