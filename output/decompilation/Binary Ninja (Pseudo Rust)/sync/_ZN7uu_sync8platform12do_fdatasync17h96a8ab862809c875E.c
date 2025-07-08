
  fn uu_sync::platform::do_fdatasync::h96a8ab862809c875(arg1: *mut i64) -> i64

{
    let mut var_60: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9a1852c79297885(&var_60, arg1);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a7ea6899d56cacd(&i, &var_60);
    
    while i != -0x8000000000000000
    {
        let var_80: i64;
        let var_68_1: i64 = var_80;
        let mut var_78: i128 = i;
        let mut var_40: ();
        std::fs::File::open::hb61d83fd15029ce8(&var_40, &var_78);
        let fd: i32 = core::result::Result$LT$T$C$E$GT$::unwrap::h6821ae79beea1012(&var_40);
        syscall(0x4b, fd);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb199f37a0f14444(fd);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a7ea6899d56cacd(&i, &var_60);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h6657d3c6baf80487(&var_60)
}
