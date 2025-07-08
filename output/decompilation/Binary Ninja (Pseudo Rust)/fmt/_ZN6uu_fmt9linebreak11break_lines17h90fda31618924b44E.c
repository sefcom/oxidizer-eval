
  fn uu_fmt::linebreak::break_lines::h90fda31618924b44(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i64) -> *mut *mut c_void

{
    let r13: i64 = *arg1.byte_offset(0x58);
    let mut var_58: ();
    uu_fmt::parasplit::ParaWords::new::h0f4d6dca046f9bf2(&var_58, arg2, arg1);
    let var_50: i64;
    let var_48: i64;
    let rcx_2: i64 = (var_48 << 6) + var_50;
    let mut var_a8: i64 = var_50;
    let rax_1: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
    let mut result: *mut *mut c_void;
    
    if rax_1 == 0
    {
        let rax_4: i64 = arg3[2];
        
        if *arg3 - rax_4 <= 1
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, "\n   /home/34r7hm4n/.cargo/regis…", 1);
        }
        else
        {
            arg3[1][rax_4] = 0xa;
            arg3[2] = rax_4 + 1;
            result = nullptr;
        }
    }
    else
    {
        let rax_2: i64 = *rax_1.byte_offset(0x28);
        let mut rbp_1: i64;
        
        if (*arg2.byte_offset(0x48) | *arg2.byte_offset(0x49)) != 0
        {
            let rsi: i64 = *arg1.byte_offset(0x20);
            let r13_1: u64 = *arg1.byte_offset(0x28);
            let rbp_2: i64 = arg3[2];
            
            if r13_1 < *arg3 - rbp_2
            {
                memcpy(arg3[1] + rbp_2, rsi, r13_1);
                arg3[2] = rbp_2 + r13_1;
                'label_4bb2da:
                rbp_1 = *arg1.byte_offset(0x48);
                goto 'label_4bb331;
            }
            
            let result_2: *mut *mut c_void =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, rsi, r13_1);
            result = result_2;
            
            if result_2 == 0
            {
                goto 'label_4bb2da;
            }
        }
        else if *arg1.byte_offset(0x68) == 0
        {
            let rsi_1: i64 = *arg1.byte_offset(0x38);
            let r13_2: u64 = *arg1.byte_offset(0x40);
            let rbp_4: i64 = arg3[2];
            
            if r13_2 < *arg3 - rbp_4
            {
                memcpy(arg3[1] + rbp_4, rsi_1, r13_2);
                arg3[2] = rbp_4 + r13_2;
                rbp_1 = r13;
                goto 'label_4bb331;
            }
            
            let result_3: *mut *mut c_void =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, rsi_1, r13_2);
            result = result_3;
            rbp_1 = r13;
            
            if result_3 == 0
            {
                goto 'label_4bb331;
            }
        }
        else
        {
            rbp_1 = 0;
            'label_4bb331:
            let rsi_2: i64 = *rax_1.byte_offset(0x10);
            let r12_2: u64 = *rax_1.byte_offset(0x18);
            let r13_3: i64 = arg3[2];
            
            if r12_2 >= *arg3 - r13_3
            {
                let result_4: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(arg3, rsi_2, r12_2);
                result = result_4;
                
                if result_4 == 0
                {
                    goto 'label_4bb37a;
                }
            }
            else
            {
                memcpy(arg3[1] + r13_3, rsi_2, r12_2);
                arg3[2] = r13_3 + r12_2;
                'label_4bb37a:
                let rbp_6: i64 = rbp_1 + rax_2;
                let mut result_1: *mut *mut c_void;
                let mut var_90: *mut c_void;
                let mut zmm0_1: i128;
                
                if *arg1.byte_offset(0x68) == 0
                {
                    let rax_13: i8 = *arg2.byte_offset(0x4e);
                    zmm0_1 = *arg1.byte_offset(0x38);
                    var_90 = arg2;
                    let var_70_2: i64 = rbp_6;
                    let var_88_2: i128 = zmm0_1;
                    let var_68_2: i64 = r13;
                    let var_60_2: i8 = rax_13;
                    let var_78_2: *mut i64 = arg3;
                    
                    if *arg2.byte_offset(0x4f) == 0
                    {
                        result_1 = uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(var_a8, 
                            rcx_2, &var_90);
                    }
                    else
                    {
                        result_1 = uu_fmt::linebreak::break_simple::h99fb810256b9c0af(var_a8, 
                            rcx_2, &var_90);
                    }
                }
                else
                {
                    zmm0_1 = *arg1.byte_offset(0x38);
                    var_90 = arg2;
                    let var_70_1: i64 = rbp_6;
                    let var_88_1: i128 = zmm0_1;
                    let var_68_1: i64 = r13;
                    let var_60_1: i8 = 1;
                    let var_78_1: *mut i64 = arg3;
                    result_1 =
                        uu_fmt::linebreak::break_simple::h99fb810256b9c0af(var_a8, rcx_2, &var_90);
                }
                result = result_1;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&var_58);
    result
}
