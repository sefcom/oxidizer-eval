
  fn uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(arg1: u64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i128

{
    let mut var_50: i64 = arg2;
    let var_48: i64 = arg3 + arg2;
    let mut rax: *mut i128;
    let mut rdx_1: i32;
    rax = core::str::validations::next_code_point::h7a92bc82d8dec435(&var_50, arg1);
    let mut rbp: i8;
    
    if rax == 0
    {
        rbp = 0;
    }
    else
    {
        rbp = 0;
        
        loop
        {
            let rax_1: u64 = rdx_1 - 0x4d;
            let mut var_88: *mut i128;
            let mut rdx_2: i8;
            let mut rdx_3: i8;
            let mut rsi: *mut c_void;
            let mut rsi_1: *mut c_void;
            let mut rdi_1: *mut i128;
            let mut rdi_3: *mut i128;
            
            if rax_1 <= 0x25
            {
                match rax_1
                {
                    0 =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 3;
                        'label_521953:
                        uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(rdi_3, rsi_1, rdx_3);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_5218b8;
                        }
                        
                        goto 'label_521992;
                    }
                    5 =>
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 5;
                        goto 'label_5218a2;
                    }
                    9 =>
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 4;
                        'label_5218a2:
                        uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(rdi_1, rsi, rdx_2);
                        rax = var_88;
                        
                        if rax == -0x8000000000000000
                        {
                            goto 'label_5218b8;
                        }
                        
                        let var_80: i64;
                        *(arg1 + 8) = var_80;
                        *arg1 = rax;
                        return rax;
                    }
                    0x15 =>
                    {
                        rbp = 1;
                        'label_5218b8:
                        rax = core::str::validations::next_code_point::h7a92bc82d8dec435(&var_50, 
                            &jump_table_42ea98);
                        
                        if rax != 0
                        {
                            continue;
                        }
                        
                        rbp &= 1;
                        break;
                    }
                    0x17 =>
                    {
                        uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(&var_88, 
                            arg4);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_5218b8;
                        }
                        
                        'label_521992:
                        let var_78: *mut i128;
                        *(arg1 + 0x10) = var_78;
                        *arg1 = var_88;
                        return var_78;
                    }
                    0x19 =>
                    {
                        *arg4.byte_offset(1) = 1;
                        goto 'label_5218b8;
                    }
                    0x1a =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 2;
                        goto 'label_521953;
                    }
                    0x1b =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 1;
                        goto 'label_521953;
                    }
                    0x1c =>
                    {
                        uu_sort::KeySettings::set_ignore_non_printing::h0e99c66f0992ecc6(&var_88, 
                            arg4);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_5218b8;
                        }
                        
                        goto 'label_521992;
                    }
                    0x21 =>
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 0;
                        goto 'label_5218a2;
                    }
                    0x25 =>
                    {
                        *arg4.byte_offset(4) = 1;
                        goto 'label_5218b8;
                    }
                }
            }
            let mut var_54: i32 = rdx_1;
            let mut var_40: *mut i32 = &var_54;
            let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_88 = &data_5ffac0;
            let var_80_1: i64 = 2;
            let var_68_1: i64 = 0;
            let var_78_1: *mut *mut i32 = &var_40;
            let var_70_1: i64 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_88);
        }
    }
    
    *(arg1 + 8) = rbp;
    *arg1 = -0x8000000000000000;
    rax
}
