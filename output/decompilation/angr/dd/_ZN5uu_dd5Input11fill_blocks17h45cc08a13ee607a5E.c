long long uu_dd::Input::fill_blocks::h45cc08a13ee607a5(struct_0 *a0, struct_2 *a1, unsigned long long a2[3], unsigned int a3)
{
    void* v0;  // [sp-0xd8]
    void* v1;  // [sp-0xd0]
    unsigned long long v2;  // [sp-0xc8]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x78]
    unsigned long long v7;  // r13
    unsigned long long v8;  // rdi
    void* v9;  // r12
    void* v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v15;  // rax

    v7 = a2[2];
    if (!v7)
    {
        v10 = 0;
        v9 = 0;
        v0 = 0;
        v1 = 0;
    }
    v8 = a1->field_8->field_70;
    v1 = 0;
    v0 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
        v2 = v10;
        v11 = ::0x4d4e90::core::cmp::min_by::hf29fead33a8278ec(v8 + v9, v7);
        if (_$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(a1, ::0x4d4b20::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h56fc8485fa379185(v9, v11, a2[1], v7), a2))
        {
            a0->field_8 = v12;
            v15 = 1;
        }
        if (!v12)
        {
            v10 = v2;
            break;
        }
        v13 = v11 - v9;
        if (v13 <= v12)
        {
            v1 += 1;
        }
        else
        {
            v0 += 1;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&v3, a3, v13 - v12);
            ::0x4d6520::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9f073f067a0e9b2e(&v4, &v3);
            alloc::vec::Vec$LT$T$C$A$GT$::splice::h0fd839b9d32da106(&v5, a2, v9 + v12, v11, &v4);
            core::ptr::drop_in_place$LT$alloc..vec..splice..Splice$LT$alloc..vec..into_iter..IntoIter$LT$u8$GT$$GT$$GT$::hfe92d49d1adc9d71(&v5);
        }
        v10 = v2 + v12;
        v8 = a1->field_8->field_70;
        v9 += v8;
        v7 = a2[2];
    } while (v9 < v7);
}
