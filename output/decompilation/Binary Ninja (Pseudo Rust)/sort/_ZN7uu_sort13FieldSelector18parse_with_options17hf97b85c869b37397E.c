
  fn uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> *mut i64

{
    let r15: i64 = *arg2;
    let r12: i64 = arg2[1];
    let r13: i64 = arg2[2];
    let rbp: i64 = arg2[3];
    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h939b9802cdaabb58();
    let var_dc: i16 = 0x600;
    let mut var_e0: i32 = 0;
    let mut var_d0: i64;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&var_d0, r13, 
        rbp, &var_e0);
    let mut result: *mut i64;
    let result_2: *mut i64;
    let mut var_98: i128;
    let mut result_1: *mut i64;
    
    if var_d0 != -0x8000000000000000
    {
        var_98 = var_d0;
        result_1 = result_2;
        'label_521772:
        result = result_1;
        arg1[1] = result;
        *arg1 = var_98;
    }
    else
    {
        let var_c8: i8;
        let mut var_b8: i64;
        uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&var_b8, r15, r12, 1, var_c8);
        let result_3: *mut i64;
        let result_4: *mut i64 = result_3;
        let cond:0_1: bool = var_b8 != 0;
        let mut var_b0: i128;
        var_98 = var_b0;
        result_1 = result_3;
        
        if cond:0_1
        {
            goto 'label_521772;
        }
        
        let r15_1: i64 = *arg3;
        let mut var_d8: i32;
        let mut var_58: i128;
        
        if r15_1 == 0
        {
            result = 2;
            'label_5217a3:
            var_b8 = var_58;
            *var_b0[8] = result;
            *var_b0[9] = var_d8;
            *var_b0[0xc] = var_d8;
            return uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(arg1, &var_98, &var_b8, 
                var_dc << 0x20 | var_e0);
        }
        
        let r12_1: i64 = arg3[1];
        uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&var_d0, 
            arg3[2], arg3[3], &var_e0);
        let mut var_f0_1: i32;
        let mut var_78_1: i128;
        
        if var_d0 != -0x8000000000000000
        {
            result = result_2;
            let var_e8_2: i32 = *result_2[1];
            let rcx_11: i32 = *result_2[4];
            var_78_1 = var_d0;
            var_f0_1 = rcx_11;
            var_f0_1 = rcx_11;
        }
        else
        {
            uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&var_b8, r15_1, r12_1, 0, var_c8);
            result = result_3;
            let var_e8_1: i32 = *result_3[1];
            let rcx_3: i32 = *result_3[4];
            var_78_1 = var_b0;
            var_f0_1 = rcx_3;
            var_f0_1 = rcx_3;
            
            if var_b8 == 0
            {
                var_58 = var_78_1;
                var_d8 = var_f0_1;
                var_d8 = var_f0_1;
                goto 'label_5217a3;
            }
        }
        
        *arg1 = var_78_1;
        *arg1.byte_offset(0x11) = var_f0_1;
        *arg1.byte_offset(0x14) = var_f0_1;
        arg1[1] = result;
    }
    *arg1.byte_offset(0x37) = 2;
    result
}
