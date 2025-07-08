
  fn uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> *mut i128

{
    let rax: u64 = *arg2.byte_offset(5);
    let mut var_70: *mut *mut [i8; 0x35];
    
    if rax == 6 || rax == arg3
    {
        let r15_1: *mut i64 = arg1;
        let mut result: *mut i128 = uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(
            &var_70, arg3, *arg2.byte_offset(3), *arg2.byte_offset(2));
        
        if var_70 != -0x8000000000000000
        {
            let result_1: *mut i128;
            result = result_1;
            r15_1[2] = result;
            *r15_1 = var_70;
        }
        else
        {
            *arg2.byte_offset(5) = arg3;
            *r15_1 = -0x8000000000000000;
        }
        
        return result;
    }
    
    let mut var_78: i32 = *"n".byte_offset(rax << 2);
    let mut var_74: i32 = *"n".byte_offset(arg3 << 2);
    let mut var_40: *mut i32 = &var_78;
    let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    let var_30_1: *mut i32 = &var_74;
    let var_28_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    var_70 = &data_5ff878;
    let var_68_1: i64 = 3;
    let var_50_1: i64 = 0;
    let var_60: *mut *mut i32 = &var_40;
    let var_58_1: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_70)
}
