
  fn uu_sort::FieldSelector::get_range::h94d5816cf09723a2(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut *mut c_void, arg5: i64) -> *mut c_void

{
    let mut rax: i64;
    let mut result_1: *mut c_void;
    rax = uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(arg2, arg3, arg4, 
        arg5, &arg1[3]);
    let mut result: *mut c_void;
    let mut var_60: *mut *mut c_void;
    
    if rax == 0
    {
        result = result_1;
        
        if arg1[2] != 2
        {
            let mut rax_1: i64;
            let mut rdx_1: *mut c_void;
            rax_1 = uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(arg2, arg3, 
                arg4, arg5, arg1);
            
            match rax_1
            {
                0 =>
                {
                    let mut rax_4: *mut c_void;
                    let mut rdx_4: *mut c_void;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rdx_1, arg2, arg3);
                    
                    if rax_4 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, rdx_1, arg3);
                        /* no return */
                    }
                    
                    var_60 = rax_4;
                    let var_58_2: *mut c_void = rdx_4.byte_offset(rax_4);
                    let mut rax_5: i32;
                    let mut rdx_6: i32;
                    rax_5 =
                        core::str::validations::next_code_point::h7a92bc82d8dec435(&var_60, arg3);
                    let mut rdi_5: i32 = 0x110000;
                    
                    if rax_5 != 0
                    {
                        rdi_5 = rdx_6;
                    }
                    
                    core::option::Option$LT$T$GT$::map_or::he8e807e236e41815(rdi_5);
                }
                2 =>
                {
                    result = nullptr;
                }
            }
        }
    }
    else
    {
        result = arg3;
        
        if rax != 3
        {
            var_60 = &data_5ffb28;
            let var_58_1: i64 = 1;
            let mut var_68: ();
            let var_50: *mut c_void = &var_68;
            let var_48: i128 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
            /* no return */
        }
    }
    result
}
