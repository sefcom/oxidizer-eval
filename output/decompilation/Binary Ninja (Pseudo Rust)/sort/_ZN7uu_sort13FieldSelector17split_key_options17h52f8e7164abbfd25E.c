
  fn uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let var_48: i64 = 0;
    let mut var_58: *mut i8 = arg2;
    let var_50: *mut c_void = &arg2[arg3];
    let mut result: i64;
    let mut rdx: i32;
    result = core::iter::traits::iterator::Iterator::try_fold::h6f7bd2e13eee62dc(&var_58);
    
    if rdx != 0x110000
    {
        let result_1: i64 = result;
        let mut var_40: i64;
        result = core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_40, 
            arg2, arg3, result);
        
        if var_40 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, result_1);
            /* no return */
        }
        
        let zmm0: i128 = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x10) = var_30;
        *arg1 = zmm0;
    }
    else
    {
        *arg1 = arg2;
        arg1[1] = arg3;
        arg1[2] = 1;
        arg1[3] = 0;
    }
    
    result
}
