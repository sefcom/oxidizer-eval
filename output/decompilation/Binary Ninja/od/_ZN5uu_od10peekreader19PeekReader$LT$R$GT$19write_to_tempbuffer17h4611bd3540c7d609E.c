
  int64_t uu_od::peekreader::PeekReader$LT$R$GT$::write_to_tempbuffer::h4611bd3540c7d609(void* arg1, int64_t arg2, int64_t arg3)

{
    void var_48;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h8d595f7286eec3fb(&var_48, arg1 + 0x48);
    void var_80;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6c8deafb5c067f9d(&var_80, &var_48);
    int64_t rax;
    uint64_t rdx;
    rax = core::slice::iter::Iter$LT$T$GT$::make_slice::h0e35da82cfb5e4cc(arg2, arg3 + arg2);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h5a076726952885c5(arg1 + 0x48, rax, rdx);
    void var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc4d5cde4b690c154(&var_68, &var_80);
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h2dfbb914521bf3e6(arg1 + 0x48, &var_68);
}
