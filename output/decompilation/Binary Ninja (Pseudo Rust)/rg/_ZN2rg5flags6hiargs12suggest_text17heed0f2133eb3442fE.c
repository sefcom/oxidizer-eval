
  fn rg::flags::hiargs::suggest_text::heed0f2133eb3442f(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut rax: i8;
    let mut rdx_1: u64;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "pattern contains "\0"\n\nConside…", 0x15, arg2[1], arg2[2]);
    
    if rax == 0
    {
        let result: i64 = arg2[2];
        arg1[1] = result;
        *arg1 = *arg2;
        return result;
    }
    
    let mut var_68: *mut i64 = arg2;
    let var_60: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_40: *mut c_void = &data_7eb448;
    let var_38: i64 = 2;
    let var_20: i64 = 0;
    let var_30: *mut *mut c_void = &var_68;
    let var_28: i64 = 1;
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_58, 0, rdx_1, &var_40);
    let var_48: i64;
    arg1[1] = var_48;
    *arg1 = var_58;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(arg2)
}
