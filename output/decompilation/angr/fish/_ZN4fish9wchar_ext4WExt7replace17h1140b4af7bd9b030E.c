long long fish::wchar_ext::WExt::replace(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x94]
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x78]
    struct_0 *v6;  // [bp-0x70]
    char v7;  // [bp-0x68]
    unsigned long long v9;  // rax
    void* v11;  // r15
    unsigned long long v12;  // rsi
    void* v13;  // r15
    unsigned long v14;  // rdx
    unsigned long long v15;  // rbx
    void* v16;  // rbx

    v0 = 64976;
    v9 = v0.as_ref();
    v2.to_vec(a1.index(a2), a2);
    v11 = 0;
    v1 = &g_14e46c0;
    v5 = v4;
    while (true)
    {
        v12 = v5;
        v13 = v11;
        if (!((char)fish::common::subslice_position(v13 * 4 + v3, v12 - v13, v9, 1) & 1))
        {
            v6->field_10 = v4;
            v6->field_0 = *((int128_t *)&v2);
            return v4;
        }
        if ((char)__CFADD__(v13, v14))
            break;
        v15 = v13 + v14;
        v16 = v15 + 1;
        if (!((char)_ccall(4, 24, v15 + 1, 0, (v13 + v14 <= v13 ? 1 : 0))))
        {
            v7.splice(&v2, v15, v16, "~", "nonebg.1kPRTcud1kENDNone");
            core::ptr::drop_in_place<alloc::vec::splice::Splice<widestring::utfstr::iter::CharsUtf32>>(&v7);
            v11 = v16;
            v5 = v4;
            if (v11 > v5)
                core::slice::index::slice_start_index_len_fail(v16, v4, &g_14e4708); /* do not return */
        }
        else
        {
            v1 = &g_14e46d8;
            break;
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(v1); /* do not return */
}
