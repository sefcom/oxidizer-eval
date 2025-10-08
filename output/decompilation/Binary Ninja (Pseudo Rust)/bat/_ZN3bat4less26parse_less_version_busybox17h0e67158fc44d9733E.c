
  fn bat::less::parse_less_version_busybox::h0e67158fc44d9733(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_18: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_18, arg1, arg2);
    
    if (var_18 & 1) != 0
    {
        return 2;
    }
    
    let var_10: u64;
    let var_8: *mut c_void;
    2 - _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "BusyBox .ucf-old*.devicepagedown…", 8, var_10, var_8)
}
