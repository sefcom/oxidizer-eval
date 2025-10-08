
  fn alacritty::ipc::socket_prefix::h72fe10f54a073b54(arg1: *mut i64) -> i64

{
    let mut var_48: i32;
    std::env::var::h6dfe92363d5ba5ff(&var_48, "WAYLAND_DISPLAYDISPLAYneither WA…");
    let mut var_a8: i128;
    let mut var_98: i128;
    let mut var_40: ();
    
    if var_48 != 1
    {
        let var_38: i128;
        var_98 = var_38;
        var_a8 = var_48;
    }
    else
    {
        alacritty::ipc::socket_prefix::_$u7b$$u7b$closure$u7d$$u7d$::hbd6393b3722c6a59(&var_a8, 
            &var_40);
    }
    let mut var_70: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h963cd60af23de70f(&var_70, &var_a8);
    let var_68: i64;
    let var_60: i64;
    let mut var_28: ();
    let rdx_2: u64 = alloc::str::_$LT$impl$u20$str$GT$::replace::hb8f25c113ebcb6e9(&var_28, var_68, 
        var_60, 0x2f, "--0o-0b0x0o0bempty YAML tag is n…");
    let mut var_58: *mut c_void = &var_28;
    let var_50: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_a8 = &data_c83020;
    *var_a8[8] = 1;
    let var_88: i64 = 0;
    var_98 = &var_58;
    *var_98[8] = 1;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(arg1, 0, rdx_2, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_28);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_70)
}
