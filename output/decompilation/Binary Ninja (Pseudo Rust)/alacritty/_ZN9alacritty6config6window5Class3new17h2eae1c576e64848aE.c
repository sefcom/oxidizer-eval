
  fn alacritty::config::window::Class::new::h2eae1c576e64848a(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64, arg5: u64) -> i64

{
    let mut var_48: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h2911e1f510df5049(&var_48, arg2, 
        arg3);
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h2911e1f510df5049(&var_30, arg4, 
        arg5);
    let var_38: i64;
    arg1[1] = var_38;
    *arg1 = var_48;
    *arg1.byte_offset(0x18) = var_30;
    let result: i64;
    *arg1.byte_offset(0x28) = result;
    result
}
