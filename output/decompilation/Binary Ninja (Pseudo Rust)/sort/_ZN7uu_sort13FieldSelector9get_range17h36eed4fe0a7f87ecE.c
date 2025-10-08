
  fn uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i64, arg5: i64) -> u64

{
    let mut rax: i64;
    let mut result_1: u64;
    rax = uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(arg2, arg3, arg4, 
        arg5, &arg1[3]);
    let mut result: u64;
    let mut var_60: *mut *mut [i8; 0x94];
    
    if rax == 0
    {
        result = result_1;
        
        if arg1[2] != 2
        {
            let mut rax_1: i64;
            let mut rdx_1: u64;
            rax_1 = uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(arg2, arg3, 
                arg4, arg5, arg1);
            
            match rax_1
            {
                0 =>
                {
                    let mut rax_4: *mut c_void;
                    let mut rdx_4: *mut c_void;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_1, arg2, arg3);
                    
                    if rax_4 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rdx_1, arg3);
                        /* no return */
                    }
                    
                    var_60 = rax_4;
                    let var_58_2: *mut c_void = rdx_4.byte_offset(rax_4);
                    let mut rax_5: i8;
                    let mut rdx_6: i32;
                    rax_5 =
                        core::str::validations::next_code_point::h9988461282470584(&var_60, arg3);
                    let mut rdi_5: i32 = 0x110000;
                    
                    if (rax_5 & 1) != 0
                    {
                        rdi_5 = rdx_6;
                    }
                    
                    core::option::Option$LT$T$GT$::map_or::h5c2167395a49aa5e(rdi_5);
                }
                2 =>
                {
                    result = 0;
                }
            }
        }
    }
    else
    {
        result = arg3;
        
        if rax != 3
        {
            var_60 = &data_58d100;
            let var_58_1: i64 = 1;
            let mut var_68: ();
            let var_50: *mut c_void = &var_68;
            let var_48: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
    }
    result
}
