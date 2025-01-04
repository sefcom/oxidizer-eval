long long uu_od::peekreader::PeekReader$LT$R$GT$::write_to_tempbuffer::h4611bd3540c7d609(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x48]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdx

    v4 = a0 + 72;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h8d595f7286eec3fb(&v2, v4, a2);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6c8deafb5c067f9d(&v0, &v2);
    ::0x476110::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h5a076726952885c5(v4, core::slice::iter::Iter$LT$T$GT$::make_slice::h0e35da82cfb5e4cc(a1, a2 + a1), v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc4d5cde4b690c154(&v1, &v0);
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h2dfbb914521bf3e6(v4, &v1, v5);
}
