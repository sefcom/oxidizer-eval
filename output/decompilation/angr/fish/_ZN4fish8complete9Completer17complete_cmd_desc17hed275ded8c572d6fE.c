long long fish::complete::Completer::complete_cmd_desc(struct_3 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v1;  // [bp-0x128], Other Possible Types: struct_0 *, unsigned long long
    unsigned long long v2;  // [bp-0x120]
    unsigned int *v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    char v5;  // [bp-0x108]
    int v6;  // [bp-0xf8], Other Possible Types: char
    char v7;  // [bp-0xf0]
    unsigned int *v8;  // [bp-0xe8]
    char *v10;  // [bp-0xd0]
    void* v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xb0]
    void* v15;  // [bp-0xa8]
    void* v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    void* v18;  // [bp-0x90]
    unsigned long v19;  // [bp-0x88]
    char v25;  // [bp-0x58]
    unsigned long long v26;  // [bp-0x50]
    char v27;  // [bp-0x48]
    struct_2 *v30;  // rax
    unsigned long long v31;  // rax
    unsigned long v32;  // cc_dep1
    unsigned long long v33;  // 4096
    unsigned long v34;  // cc_ndep
    unsigned long long v35;  // cc_ndep
    unsigned long long v36;  // rdx
    unsigned long v37;  // rdx
    unsigned long long v38;  // r15
    unsigned long long v39;  // rax
    struct_0 *v40;  // r14
    unsigned long long v41;  // r13
    unsigned long long v42;  // rax
    unsigned long v52;  // r14
    unsigned long long v53;  // r13
    unsigned long long v54[2];  // rax
    unsigned long v55;  // r13

    v30 = a0->field_38;
    if (v30->field_0 == 1)
        return v30;
    v1 = a1;
    v2 = a1 + a2 * 4;
    v31 = v1.rposition();
    v32 = (char)v31 & 1;
    v33 = a2;
    if (((char)v31 & 1))
    {
        v35 = _ccall(17, v32, 0, v34);
        v37 = v36 + 1;
        if ((char)_ccall(4, 24, v36 + 1, 0, _ccall(17, v32, 0, v34)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d5d00); /* do not return */
        v38 = a2 - v37;
        if (a2 < v37)
            return v31;
        a1 += v37 * 4;
        v33 = v38;
    }
    if (v33 < 2)
        return v31;
    v39 = fish::wildcard::wildcard_has(a1, v33);
    if ((char)v39)
        return v39;
    v40 = a0->field_8;
    v41 = a0->field_10 * 56;
    v1 = v40;
    v2 = &v40->padding_0[v41];
    v42 = v1.any();
    if (!(char)v42)
        return v42;
    v19 = a0->field_10;
    fish::common::escape(&v6, a1, v33);
    v1 = 0;
    v2 = 2;
    v3 = &"f";
    v4 = 64;
    memcpy(&v5, &v7, 16);
    v10 = &v25;
    v25.collect(&v1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    fish::exec::exec_subshell(v26, *((long long *)&v27), v30->field_8, &v13, 0);
    v16 = 0;
    v18 = 0;
    if (v19)
    {
        v52 = &(&v40->field_10)[1];
        do
        {
            v53 = v41;
            v54 = v16.get(v17, *((long long *)(v52 - 16)), *((long long *)(v52 - 8)));
            if (v54)
            {
                v1.to_vec(v54[0], v54[1]);
                v8 = v3;
                *((int128_t *)&v6) = *((int128_t *)&v1);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v52);
                *((unsigned int **)(v52 + 16)) = v8;
                *((int128_t *)v52) = (int128_t)v6;
            }
            v52 += 56;
            v55 = v53 - 56;
            v41 = v55;
        } while (v53 != 56);
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<&widestring::utfstr::Utf32Str,&widestring::utfstr::Utf32Str>>(&v16);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v13);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v25);
}
