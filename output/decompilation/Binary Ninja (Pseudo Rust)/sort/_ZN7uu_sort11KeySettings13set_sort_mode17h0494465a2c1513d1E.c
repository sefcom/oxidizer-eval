
  fn uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(arg1: *mut i64, arg2: *mut c_void, arg3: bool) -> *mut i128

{
    let rax: u64 = *arg2.byte_offset(5);
    let mut var_68: *mut *mut [i8; 0x34];
    
    if (rax != 6 & rax != arg3) == 0
    {
        let mut result: *mut i128 = uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(
            &var_68, arg3, *arg2.byte_offset(3), *arg2.byte_offset(2));
        
        if !(0 + -(var_68))
        {
            let result_1: *mut i128;
            result = result_1;
            arg1[2] = result;
            *arg1 = var_68;
        }
        else
        {
            *arg2.byte_offset(5) = arg3;
            *arg1 = -0x8000000000000000;
        }
        
        return result;
    }
    
    let mut var_70: i32 = *U"nhgMVR"[rax];
    let mut var_6c: i32 = *U"nhgMVR"[arg3];
    let mut var_38: *mut i32 = &var_70;
    let var_30_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let var_28_1: *mut i32 = &var_6c;
    let var_20_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_68 = &data_58cdc0;
    let var_60_1: i64 = 3;
    let var_48_1: i64 = 0;
    let var_58: *mut *mut i32 = &var_38;
    let var_50_1: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_68)
}
