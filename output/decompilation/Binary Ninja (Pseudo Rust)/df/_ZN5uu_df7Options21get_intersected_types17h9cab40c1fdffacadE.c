
  fn uu_df::Options::get_intersected_types::h9cab40c1fdffacad(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_70: i64 = 0;
    let var_68: i64 = 8;
    let result: i64 = 0;
    let mut var_58: i64;
    
    if arg3 == 0
    {
        let var_48: i64 = 0;
        var_58 = var_70;
        let var_50_1: i64 = var_68;
    }
    else
    {
        let mut r12_1: *mut c_void = arg2;
        let mut i_1: i64 = arg3 * 0x18;
        let mut i: i64;
        
        do
        {
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(r12_1, arg4, arg5) != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_58, r12_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_70, &var_58);
            }
            
            r12_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
        let result_1: i64 = result;
        var_58 = var_70;
        
        if result != 0
        {
            arg1[1] = result;
            *arg1 = var_70;
            return result;
        }
    }
    
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3cde21800b3ef049(
        &var_58)
}
