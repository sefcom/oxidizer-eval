long long uu_pr::header_content::h02dbeaeea8884abb(unsigned long long a0[3], struct_0 *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x70]
    unsigned long v3;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x60]
    unsigned long long v5;  // [sp-0x58]
    unsigned long long v6;  // [sp-0x50]
    char *v7;  // [sp-0x48]
    unsigned long long v8;  // [sp-0x40]
    unsigned long v9;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x30]
    char *v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x20]
    void* v13;  // [sp-0x18]
    struct_1 *v15;  // rax
    unsigned long long v16;  // rax

    v0 = a2;
    if (!a1->field_141)
    {
        a0[0] = 0;
        a0[1] = 8;
        a0[2] = 0;
        return v16;
    }
    v3 = &a1->padding_0[120];
    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v5 = &a1->padding_0[48];
    v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v7 = &v0;
    v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v9 = &g_709590;
    v10 = 3;
    v13 = 0;
    v11 = &v3;
    v12 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&v1, &v9);
    v15 = ::0x5c2420::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 120);
    if (v15)
    {
        v15->field_0 = 0;
        v15->field_8 = 1;
        v15->field_10 = 0;
        v15->field_20 = 1;
        v15->field_28 = 0;
        v15->field_30 = *((int128_t *)&v1);
        v15->field_40 = *((long long *)&v2);
        v15->field_48 = 0;
        v15->field_50 = 1;
        *((int128_t *)&(&v15->field_50)[1]) = 0;
        *((long long *)((char *)&v15->field_58 + 8)) = 1;
        v15->field_68 = 0;
        v16 = alloc::slice::hack::into_vec::h00e2e55fcd83f713(a0, v15, 5);
        return v16;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
