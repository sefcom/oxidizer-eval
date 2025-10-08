
  fn uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_50: i64 = arg2;
    let var_48: i64 = arg3 + arg2;
    let mut rax: i8;
    let mut rdx_1: i32;
    rax = core::str::validations::next_code_point::h9988461282470584(&var_50, rbx);
    let mut rbp: i8 = 0;
    let mut rax_5: *mut i64;
    
    if (rax & 1) != 0
    {
        loop
        {
            let rax_2: u64 = rdx_1 - 0x4d;
            let mut var_88: *mut i64;
            let mut rdx_2: bool;
            let mut rsi_1: *mut c_void;
            let mut rdi_3: *mut i64;
            
            if rax_2 <= 0x25
            {
                match rax_2
                {
                    0 =>
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        'label_4d3889:
                        let var_78: *mut i64;
                        arg1[1] = var_78;
                        *arg1 = var_88;
                        return var_78;
                    }
                    5 =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = true;
                        goto 'label_4d3815;
                    }
                    9 =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = true;
                        'label_4d3815:
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(rdi_3, rsi_1, rdx_2);
                        rax_5 = var_88;
                        
                        if rax_5 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        goto 'label_4d387b;
                    }
                    0x15 =>
                    {
                        rbp = 1;
                        'label_4d3763:
                        let mut rax_1: i8;
                        rax_1 = core::str::validations::next_code_point::h9988461282470584(&var_50, 
                            &jump_table_428a88);
                        
                        if (rax_1 & 1) == 0
                        {
                            break;
                        }
                        
                        continue;
                    }
                    0x17 =>
                    {
                        uu_sort::KeySettings::set_dictionary_order::h7dadc9f8379aee5d(&var_88, 
                            arg4);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        goto 'label_4d3889;
                    }
                    0x19 =>
                    {
                        *arg4.byte_offset(1) = 1;
                        goto 'label_4d3763;
                    }
                    0x1a =>
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        goto 'label_4d3889;
                    }
                    0x1b =>
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if var_88 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        goto 'label_4d3889;
                    }
                    0x1c =>
                    {
                        uu_sort::KeySettings::set_ignore_non_printing::hb18c264c9cade1ef(&var_88, 
                            arg4);
                        rax_5 = var_88;
                        
                        if rax_5 == -0x8000000000000000
                        {
                            goto 'label_4d3763;
                        }
                        
                        'label_4d387b:
                        let rcx: *mut *mut c_void = arg1;
                        let var_80: i64;
                        *rcx.byte_offset(8) = var_80;
                        *rcx = rax_5;
                        return rax_5;
                    }
                    0x21 =>
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = false;
                        goto 'label_4d3815;
                    }
                    0x25 =>
                    {
                        *arg4.byte_offset(4) = 1;
                        goto 'label_4d3763;
                    }
                }
            }
            let mut var_54: i32 = rdx_1;
            let mut var_40: *mut i32 = &var_54;
            let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_88 = &data_58d098;
            let var_80_1: i64 = 2;
            let var_68_1: i64 = 0;
            let var_78_1: *mut *mut i32 = &var_40;
            let var_70_1: i64 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_88);
        }
    }
    
    rax_5 = arg1;
    rax_5[1] = rbp;
    *rax_5 = -0x8000000000000000;
    rax_5
}
