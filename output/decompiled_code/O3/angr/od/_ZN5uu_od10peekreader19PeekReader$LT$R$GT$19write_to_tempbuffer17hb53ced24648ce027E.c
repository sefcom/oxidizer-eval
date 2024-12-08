long long uu_od::peekreader::PeekReader$LT$R$GT$::write_to_tempbuffer::hb53ced24648ce027(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x48]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdx

    v4 = a0 + 72;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h4908236a044157f1(&v2, v4, a2);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb9b4f3ca338d5dad(&v0, &v2);
    ::0x477500::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha2581f13c92da64b(v4, ::0x4774b0::core::slice::iter::Iter$LT$T$GT$::make_slice::h8173472493cef235(a1, a2 + a1), v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h91d8f582cea7bace(&v1, &v0);
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h1880c735b8cafba6(v4, &v1, v5);
}
