
  fn uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: i64;
    let mut rdx: *mut c_void;
    result = core::str::_$LT$impl$u20$str$GT$::rfind::h6ddde4d1ca094418(arg2, arg3);
    let result_1: i64 = result;
    
    if result != 0
    {
        if rdx != -3
        {
            if rdx.byte_offset(3) >= arg3
            {
                if rdx.byte_offset(3) != arg3
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, 
                        rdx.byte_offset(3));
                    /* no return */
                }
            }
            else if *arg2.byte_offset(rdx.byte_offset(3)) <= 0xbf
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, 
                    rdx.byte_offset(3));
                /* no return */
            }
        }
        
        let mut rax_1: i64;
        let mut rdx_2: i64;
        rax_1 =
            core::str::_$LT$impl$u20$str$GT$::rfind::h5f0bced45080d5d4(arg2, rdx.byte_offset(3));
        result = core::option::Option$LT$T$GT$::map_or::h073759538f04d9ef(rax_1, rdx_2);
        arg1[1] = result;
        arg1[2] = rdx.byte_offset(3);
    }
    
    *arg1 = result_1;
    result
}
