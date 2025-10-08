
  fn bat::vscreen::Attributes::update_with_hyperlink::h54b93a72f9c23ceb(arg1: *mut c_void, arg2: i64, arg3: u64) -> i64

{
    let result: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "8;;\x1b\x1b[;5;;2;;\x1b]8;;\x1b\", 3);
    
    if result != 0
    {
        *arg1.byte_offset(0x100) = 0;
        return result;
    }
    
    *arg1.byte_offset(0x100) = 0;
    /* tailcall */
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg1.byte_offset(0xf0), arg2, arg3 + arg2)
}
