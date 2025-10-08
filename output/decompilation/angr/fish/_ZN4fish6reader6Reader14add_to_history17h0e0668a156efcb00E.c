void fish::reader::Reader::add_to_history(struct_0 *a0, unsigned long a1)
{
    unsigned int *v0;  // [sp-0x60]
    unsigned long long v1;  // [sp-0x58]
    char v2;  // [bp-0x50]
    unsigned int *v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned int *v7;  // r15
    unsigned long long v8;  // r12
    unsigned int v9;  // eax
    unsigned int v10;  // edx
    unsigned int v11;  // ebp
    unsigned int v12;  // ebp
    char v13;  // cl
    unsigned long v14;  // cc_ndep

    if (a0->field_4fb)
        return;
    v2.to_vec(a0->field_28, a0->field_30);
    v7 = v3;
    v8 = v4;
    v0 = v7;
    v1 = &v7[v8];
    if ((int)v0.next_back() != 2)
    {
        while (true)
        {
            v12 = v11;
            v9.unwrap(v12, &g_14bd3d0);
            if (v12 != 10 && v12 != 32)
                break;
            if (!v8)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e0e58); /* do not return */
            if (((char)fish::wcstringutil::count_preceding_backslashes(v7, v8, v8 - 1) & 1))
                break;
            v2.pop();
            v7 = v3;
            v8 = v4;
            v0 = v7;
            v1 = &v7[v8];
            v9 = v0.next_back();
            v11 = v10;
            if (v9 == 2)
                break;
        }
    }
    a0->field_830 + 16.remove_ephemeral_items();
    if (v8)
    {
        v13 = v5.should_add_to_history(v7, v8);
        if (v13)
            fish::history::in_private_mode(v5 + 472, &g_14c7518);
        if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_830) + 1, 0, _ccall(17, (unsigned long long)v13, 0, v14)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 21001932()
        a0->field_830.add_pending_with_file_detection(v7, v8, v5 + 472, 2);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    return;
}
