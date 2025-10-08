
  fn alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128) -> i64

{
    let var_b8: i88 = arg2[1];
    let mut var_c8: i128 = *arg2;
    let zmm1: i128 = arg3[1];
    let mut var_a8: i128 = *arg3;
    let var_98: i88 = zmm1;
    let mut rax_1: i8 = 6;
    
    if *var_b8[0xa] - 2 < 6
    {
        rax_1 = *var_b8[0xa] - 2;
    }
    
    let mut rdi_5: *mut i128;
    let mut var_68: i128;
    let mut zmm0: i128;
    
    if rax_1 == 5
    {
        if *var_98[0xa] != 7
        {
            zmm0 = *arg3;
            arg1[1] = arg3[1];
            *arg1 = zmm0;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_c8);
        }
        
        let rax_7: i64 = arg2[1];
        let mut var_88: i128 = *arg2;
        var_68 = *arg3;
        let rdx: i64 = arg3[1];
        let var_58_1: i64 = rdx;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6bb287e271a114cd(&var_88, *var_68[8], rdx);
        let var_58_2: i64 = 0;
        arg1[1] = rax_7;
        *arg1 = var_88;
        *arg1.byte_offset(0x1a) = 7;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_68);
        let mut rax_10: i8 = 6;
        
        if *var_b8[0xa] - 2 < 6
        {
            rax_10 = *var_b8[0xa] - 2;
        }
        
        if rax_10 == 5
        {
            goto 'label_836459;
        }
        
        if rax_10 != 6
        {
            'label_83644d:
            core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(&var_c8);
            goto 'label_836459;
        }
        
        core::ptr::drop_in_place$LT$toml..map..Map$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h77749c849d56b1e5(&var_c8);
        'label_836459:
        let result: i8 = *var_98[0xa] - 2;
        let mut result_1: i8 = 6;
        
        if result < 6
        {
            result_1 = result;
        }
        
        if result_1 - 5 < 2
        {
            return result;
        }
        
        rdi_5 = &var_a8;
    }
    else
    {
        if rax_1 == 6
        {
            if (*var_98[0xa] | 0xf8) >= 0xfa
            {
                zmm0 = *arg3;
                arg1[1] = arg3[1];
                *arg1 = zmm0;
                return core::ptr::drop_in_place$LT$toml..map..Map$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h77749c849d56b1e5(&var_c8);
            }
            
            let var_38_1: i128 = arg2[1];
            let mut var_48: i128 = *arg2;
            alacritty::config::serde_utils::merge_tables::h62792841f9a2f486(&var_68, &var_48, arg3);
            let zmm0_1: i128 = var_68;
            let var_58: i64;
            arg1[1] = var_58;
            *arg1 = zmm0_1;
            let mut rax_5: i8 = 6;
            
            if *var_b8[0xa] - 2 < 6
            {
                rax_5 = *var_b8[0xa] - 2;
            }
            
            if rax_5 == 6
            {
                goto 'label_836459;
            }
            
            if rax_5 != 5
            {
                goto 'label_83644d;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_c8);
            goto 'label_836459;
        }
        
        zmm0 = *arg3;
        arg1[1] = arg3[1];
        *arg1 = zmm0;
        rdi_5 = &var_c8;
    }
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(rdi_5)
}
