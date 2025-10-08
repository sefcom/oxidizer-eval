
  int64_t bat::vscreen::Attributes::update_with_hyperlink::h54b93a72f9c23ceb(void* arg1, int64_t arg2, uint64_t arg3)

{
    char result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "8;;\x1b\x1b[;5;;2;;\x1b]8;;\x1b\", 3);
    
    if (result)
    {
        *(arg1 + 0x100) = 0;
        return result;
    }
    
    *(arg1 + 0x100) = 0;
    /* tailcall */
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg1 + 0xf0, arg2, arg3 + arg2);
}
