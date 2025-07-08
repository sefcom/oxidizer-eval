
  fn uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> *mut i64

{
    let mut r13: i64;
    let var_20: i64 = r13;
    let var_50: i64 = 0;
    let mut var_60: *mut i8 = arg2;
    let var_58: *mut c_void = arg2.byte_offset(arg3);
    let rdx: i32 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
    let mut rax_1: i64;
    let mut rdx_1: i32;
    
    if rdx == 0x2d
    {
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
    }
    
    if rdx != 0x2d || rdx_1 - 0x30 > 9
    {
        *arg1 = 0;
    }
    else
    {
        let mut rbp_1: i64 = rax_1;
        let mut rax_2: i64;
        let mut i_2: i32;
        rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
        let mut i_1: i32;
        
        if i_2 != 0x110000
        {
            r13 = rax_2;
            i_1 = i_2;
            
            if i_2 - 0x30 <= 9
            {
                let mut rax_5: i64;
                let mut i_3: i32;
                rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
                
                if i_3 != 0x110000
                {
                    i_1 = i_3;
                    let mut i: i32;
                    
                    do
                    {
                        rbp_1 = r13;
                        r13 = rax_5;
                        
                        if i_1 - 0x30 >= 0xa
                        {
                            goto 'label_4be35b;
                        }
                        
                        rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
                        i_1 = i;
                    } while i != 0x110000;
                }
                
                i_1 = 0;
                rbp_1 = r13;
            }
        }
        else
        {
            i_1 = 0;
        }
        
        'label_4be35b:
        let mut var_48: i64 = 1;
        let var_40_1: i64 = rbp_1;
        let var_38_1: i8 = 0;
        let mut rax_7: *mut c_void;
        let mut rdx_4: i64;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&var_48, arg2, arg3);
        uu_head::parse::process_num_block::h8e5bdc2257d4c6b6(arg1, rax_7, rdx_4, i_1, &var_60, r13);
    }
    
    arg1
}
