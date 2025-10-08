
  fn bat::theme::ThemeName::new::hd040bb7840011c00(arg1: *mut i64, arg2: *mut i128) -> u64

{
    let mut var_20: i128;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h35c1f69784b2d4f1(&var_20, arg2);
    let var_18: i64;
    let result: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_18, result, "defaultplainUnknown style 'src/s…", 7) != 0
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_20);
    }
    
    arg1[2] = result;
    *arg1 = var_20;
    result
}
