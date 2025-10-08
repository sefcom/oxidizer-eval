
  int64_t uu_od::peekreader::PeekReader$LT$R$GT$::write_to_tempbuffer::hf5b8d98366ed9358(void* arg1, int64_t arg2, int64_t arg3)

{
    void var_48;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h85a19b6f171aa2b7(&var_48, arg1 + 0x70);
    void var_60;
    core::iter::traits::iterator::Iterator::collect::h283b0bc88187e27d(&var_60, &var_48);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hfa5bd900e3366737(arg1 + 0x70, arg2, arg3 + arg2);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9cd36669bb8db529(&var_48, &var_60);
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h3d59e0fe6cb4c802(arg1 + 0x70, &var_48);
}
