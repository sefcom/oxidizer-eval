
  fn uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> *mut c_void

{
    let var_48: i64 = 0;
    let mut var_58: *mut i8 = arg2;
    let var_50: *mut c_void = arg2.byte_offset(arg3);
    let mut result: *mut c_void;
    let mut rdx: i32;
    result = core::iter::traits::iterator::Iterator::try_fold::h11c5615e8005357f(&var_58);
    
    if rdx != 0x110000
    {
        let mut var_40: i64;
        core::str::_$LT$impl$u20$str$GT$::split_at_checked::h90efbd1904036d35(&var_40, arg2, arg3, 
            result);
        
        if var_40 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, result);
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
