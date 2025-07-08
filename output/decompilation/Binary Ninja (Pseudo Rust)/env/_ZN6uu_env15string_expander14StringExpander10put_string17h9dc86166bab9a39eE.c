
  fn uu_env::string_expander::StringExpander::put_string::h9dc86166bab9a39e(arg1: *mut i64, arg2: *mut i64) -> i64

{
    arg2[2];
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$GT$::as_ref::h3aeb49a5fcb4de5c(arg2[1]);
    let var_20: i64 = rax;
    let var_18: i64 = rdx;
    let mut var_28: i64 = -0x8000000000000000;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0480c74d12e82013(arg1, rax, rdx + rax);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
        &var_28);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h80807dd825e9bc0c(arg2)
}
