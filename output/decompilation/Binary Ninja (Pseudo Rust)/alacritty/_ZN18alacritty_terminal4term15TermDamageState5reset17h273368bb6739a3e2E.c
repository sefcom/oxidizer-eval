
  fn alacritty_terminal::term::TermDamageState::reset::h273368bb6739a3e2(arg1: *mut c_void, arg2: i64) -> i64

{
    let result_1: i64;
    let mut result: i64 = result_1;
    result = arg2;
    *arg1.byte_offset(0x28) = 0;
    let rax: i64 = *arg1.byte_offset(8);
    _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::for_each::h79b605f0884a99ec(rax, rax + *arg1.byte_offset(0x10) * 0x18, &result);
    result
}
