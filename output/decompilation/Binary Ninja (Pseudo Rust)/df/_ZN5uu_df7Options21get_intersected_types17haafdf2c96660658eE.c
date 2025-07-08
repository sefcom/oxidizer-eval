
  fn uu_df::Options::get_intersected_types::haafdf2c96660658e(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_80: i64 = 0;
    let var_78: i64 = 8;
    let result: i64 = 0;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg2 + arg3 * 0x18;
    let i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&var_40);
    let mut var_68: i128;
    
    if i_2 == 0
    {
        let result_2: i64 = result;
        var_68 = var_80;
    }
    else
    {
        let mut i_1: *mut c_void = i_2;
        let mut i: *mut c_void;
        
        do
        {
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(i_1, arg4, arg5) != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_68, i_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_80, &var_68);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&var_40);
            i_1 = i;
        } while i != 0;
        let result_1: i64 = result;
        var_68 = var_80;
        
        if result != 0
        {
            arg1[1] = result;
            *arg1 = var_80;
            return result;
        }
    }
    
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h25b333f73b84419d(
        &var_68)
}
