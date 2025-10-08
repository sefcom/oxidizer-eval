
  fn bat::assets::build_assets::acknowledgements::license_contains_marker::h7fe1f84f804c53fa(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> u64

{
    let mut var_30: ();
    bat::assets::build_assets::acknowledgements::normalize_license_text::h78808add2c223c35(&var_30, 
        arg1, arg2);
    let mut var_40: i64 = arg3;
    let var_38: i64 = (arg4 << 4) + arg3;
    let rax: i32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::he6484902e1783226(&var_40, &var_30);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_30);
    rax
}
