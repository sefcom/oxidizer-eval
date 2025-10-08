
  fn uu_sort::FieldSelector::parse_with_options::h698e7c19784cfaad(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> u64

{
    let r15: i64 = *arg2;
    let r12: i64 = arg2[1];
    let r13: i64 = arg2[2];
    let rbp: i64 = arg2[3];
    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h14a8cebf2953677d();
    let mut var_d0: i32 = 0;
    let var_cc: i16 = 0x600;
    let mut var_c0: i64;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(&var_c0, r13, 
        rbp, &var_d0);
    let mut result: u64;
    let result_2: u64;
    let mut var_88: i128;
    let mut result_1: u64;
    
    if !(0 + -(var_c0))
    {
        var_88 = var_c0;
        result_1 = result_2;
        'label_4d3631:
        result = result_1;
        arg1[1] = result;
        *arg1 = var_88;
    }
    else
    {
        let var_b8: i8;
        let mut var_a8: i8;
        uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(&var_a8, r15, r12, 1, var_b8);
        let result_3: u64;
        let result_4: u64 = result_3;
        let cond:0_1: bool = (var_a8 & 1) != 0;
        let mut var_a0: i128;
        var_88 = var_a0;
        result_1 = result_3;
        
        if cond:0_1
        {
            goto 'label_4d3631;
        }
        
        let r15_1: i64 = *arg3;
        let mut var_c8: i32;
        let mut var_58: i128;
        
        if r15_1 == 0
        {
            result = 2;
            'label_4d3662:
            var_a8 = var_58;
            *var_a0[8] = result;
            *var_a0[9] = var_c8;
            *var_a0[0xc] = var_c8;
            return uu_sort::FieldSelector::new::h5b970f0569e874f9(arg1, &var_88, &var_a8, 
                var_cc << 0x20 | var_d0);
        }
        
        let r12_1: i64 = arg3[1];
        uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(&var_c0, 
            arg3[2], arg3[3], &var_d0);
        let mut var_e0_1: i32;
        let mut var_68_1: i128;
        
        if var_c0 != -0x8000000000000000
        {
            result = result_2;
            let var_d8_2: i32 = *result_2[1];
            let rcx_11: i32 = *result_2[4];
            var_68_1 = var_c0;
            var_e0_1 = rcx_11;
            var_e0_1 = rcx_11;
        }
        else
        {
            uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(&var_a8, r15_1, r12_1, 0, var_b8);
            result = result_3;
            let var_d8_1: i32 = *result_3[1];
            let rcx_3: i32 = *result_3[4];
            var_68_1 = var_a0;
            var_e0_1 = rcx_3;
            var_e0_1 = rcx_3;
            
            if (var_a8 & 1) == 0
            {
                var_58 = var_68_1;
                var_c8 = var_e0_1;
                var_c8 = var_e0_1;
                goto 'label_4d3662;
            }
        }
        
        *arg1 = var_68_1;
        *arg1.byte_offset(0x11) = var_e0_1;
        *arg1.byte_offset(0x14) = var_e0_1;
        arg1[1] = result;
    }
    *arg1.byte_offset(0x37) = 2;
    result
}
