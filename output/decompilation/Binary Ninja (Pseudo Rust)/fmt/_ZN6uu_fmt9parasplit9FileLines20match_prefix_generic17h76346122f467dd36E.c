
  fn uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(arg1: i64, arg2: u64, arg3: *mut i8, arg4: *mut c_void, arg5: i8) -> i64

{
    let result: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(
        arg3, arg4, arg1, arg2);
    
    if result != 0 || arg5 != 0
    {
        return result;
    }
    
    let mut var_48: *mut i8 = arg3;
    let var_40_1: i64 = arg3.byte_offset(arg4);
    let var_38_1: i64 = 0;
    let mut rax_1: *mut c_void;
    let mut i_2: i32;
    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
    
    if i_2 != 0x110000
    {
        let mut r13: *mut c_void = rax_1;
        let mut i_1: i32 = i_2;
        let mut i: i32;
        
        do
        {
            let mut rax_3: *mut c_void;
            let mut rdx_2: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r13, arg3, arg4);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg3, arg4, r13, arg4);
                /* no return */
            }
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(rax_3, 
                rdx_2, arg1, arg2) != 0
            {
                return 1;
            }
            
            if i_1 - 9 >= 5 && i_1 != 0x20
            {
                if i_1 < 0x80
                {
                    break;
                }
                
                if core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(i_1) == 0
                {
                    break;
                }
            }
            
            let mut rax_2: *mut c_void;
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
            r13 = rax_2;
            i_1 = i;
        } while i != 0x110000;
    }
    
    0
}
