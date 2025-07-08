
  fn uu_cp::disk_usage::hdb6cf68ba645e675(arg1: i64, arg2: i64, arg3: i8) -> i64

{
    let mut var_e8: i64 = arg1;
    let var_e0: i64 = arg1 + arg2 * 0x18;
    let mut rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
    
    if rax_2 != 0
    {
        let mut var_d8: i32;
        let var_a0: i32;
        let var_88: i64;
        let mut rbx_1: i64;
        
        if arg3 == 0
        {
            rbx_1 = 0;
            
            loop
            {
                std::fs::metadata::hcf81ab27d993cd47(&var_d8, rax_2);
                
                if var_d8 == 2
                {
                    return 1;
                }
                
                let mut rax_6: i64;
                
                if (var_a0 & 0xf000) != 0x4000
                {
                    rax_6 = var_88;
                }
                else
                {
                    rax_6 = 0;
                }
                
                rbx_1 += rax_6;
                rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
                
                if rax_2 == 0
                {
                    return 0;
                }
            }
        }
        else
        {
            rbx_1 = 0;
            
            loop
            {
                std::fs::metadata::hcf81ab27d993cd47(&var_d8, rax_2);
                
                if var_d8 != 2
                {
                    if (var_a0 & 0xf000) != 0x4000
                    {
                        rbx_1 += var_88;
                        'label_5089b8:
                        rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
                        
                        if rax_2 == 0
                        {
                            break;
                        }
                        
                        continue;
                    }
                    else
                    {
                        *rax_2.byte_offset(0x10);
                        let mut rax_5: i64;
                        let mut rdx: i64;
                        rax_5 =
                            uu_cp::disk_usage_directory::h440b87226599f819(*rax_2.byte_offset(8));
                        
                        if rax_5 == 0
                        {
                            rbx_1 += rdx;
                            goto 'label_5089b8;
                        }
                    }
                }
                
                return 1;
            }
        }
    }
    
    0
}
