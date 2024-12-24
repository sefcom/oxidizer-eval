long long uu_base32::base_common::fast_encode::write_with_line_breaks::hbe8b558126122e65(unsigned long long a0[4], struct_0 *a1, unsigned long long a2, struct struct_1 **a3, unsigned int a4)
{
    unsigned int v0;  // [sp-0x5c]
    struct_0 *v1;  // [bp-0x58], Other Possible Types: char
    unsigned long long v2;  // [sp-0x50]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x38]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    void* v10;  // r13
    unsigned long long v11;  // rdx
    void* v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx

    v0 = a4;
    ::0x4c4400::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hdc42b558cabfeed8(&v1, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hd338e6cf207795fc(a1), v8, a0[3], &g_54a818);
    v9 = ::0x4c4730::_$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha42140e97c53d0ac(&v1);
    v10 = 0;
    if (v9)
    {
        do
        {
            v10 += v11;
            ::0x4c4540::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h8313ef223fd3dc4b(a0, ::0x4c44c0::core::slice::iter::Iter$LT$T$GT$::make_slice::h267f30bbfc2d752e(v9, v11 + v9), v8);
            ::0x4c4590::alloc::vec::Vec$LT$T$C$A$GT$::push::hb2393035eac6f738(a0, 10);
            v9 = ::0x4c4730::_$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha42140e97c53d0ac(&v1);
        } while (v9);
    }
    v12 = a3(a2, a0[1], a0[2]);
    if (v12)
        return v12;
    v13 = core::slice::index::range::h6792dcb33fc39761(v10, a1->field_18);
    v14 = v8 - v13;
    v15 = a1->field_18;
    a1->field_18 = v13;
    v1 = a1;
    v2 = v14;
    v3 = v13;
    v4 = v15 - v14;
    v5 = v14;
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..drain..Drain$LT$u8$GT$$GT$::ha6325e00c7bf2a96(&v1);
    if (!(char)v0)
    {
        a0[2] = 0;
    }
    else if (a1->field_18)
    {
        v12 = a3(a2, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hd338e6cf207795fc(a1));
        if (!v12)
        {
            v12 = a3(a2, "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs", 1);
            return v12;
        }
        return v12;
    }
    return 0;
}
