
  fn uu_fmt::linebreak::break_lines::hc2099fd01901faf2(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i64) -> ssize_t

{
    let rbp: i64 = *arg1.byte_offset(0x58);
    let mut var_90: i64;
    uu_fmt::parasplit::ParaWords::new::h604c573007ec43f4(&var_90, arg2, arg1);
    let var_88: *mut c_void;
    let var_80: i64;
    let mut result: ssize_t;
    
    if var_80 == 0
    {
        let rax_6: i64 = arg3[2];
        
        if *arg3 - rax_6 <= 1
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, "\n   Found NoFormatLine when exp…", 1);
        }
        else
        {
            arg3[1][rax_6] = 0xa;
            arg3[2] = rax_6 + 1;
            result = 0;
        }
    }
    else
    {
        let rax: i64 = *var_88.byte_offset(0x28);
        let mut rbx_3: i64;
        
        if *arg2.byte_offset(0x48) != 0 || *arg2.byte_offset(0x49) == 1
        {
            let rsi: i64 = *arg1.byte_offset(0x20);
            let rbp_1: u64 = *arg1.byte_offset(0x28);
            let rbx_1: i64 = arg3[2];
            
            if rbp_1 < *arg3 - rbx_1
            {
                memcpy(arg3[1] + rbx_1, rsi, rbp_1);
                arg3[2] = rbx_1 + rbp_1;
                'label_461344:
                rbx_3 = *arg1.byte_offset(0x48);
                goto 'label_461348;
            }
            
            let result_3: ssize_t =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, rsi, rbp_1);
            result = result_3;
            
            if result_3 == 0
            {
                goto 'label_461344;
            }
        }
        else if *arg1.byte_offset(0x68) == 0
        {
            let rsi_6: i64 = *arg1.byte_offset(0x38);
            let rbp_3: u64 = *arg1.byte_offset(0x40);
            let rbx_5: i64 = arg3[2];
            
            if rbp_3 < *arg3 - rbx_5
            {
                memcpy(arg3[1] + rbx_5, rsi_6, rbp_3);
                arg3[2] = rbx_5 + rbp_3;
                rbx_3 = rbp;
                goto 'label_461348;
            }
            
            let result_4: ssize_t =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, rsi_6, rbp_3);
            result = result_4;
            rbx_3 = rbp;
            
            if result_4 == 0
            {
                goto 'label_461348;
            }
        }
        else
        {
            rbx_3 = 0;
            'label_461348:
            let rsi_1: i64 = *var_88.byte_offset(0x10);
            let rbp_2: u64 = *var_88.byte_offset(0x18);
            let r12_1: i64 = arg3[2];
            
            if rbp_2 >= *arg3 - r12_1
            {
                let result_2: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(arg3, rsi_1, rbp_2);
                result = result_2;
                
                if result_2 == 0
                {
                    goto 'label_46138a;
                }
            }
            else
            {
                memcpy(arg3[1] + r12_1, rsi_1, rbp_2);
                arg3[2] = r12_1 + rbp_2;
                'label_46138a:
                let r15_2: *mut c_void = (var_80 << 6) + var_88;
                let rax_5: i8 = *arg1.byte_offset(0x68);
                let mut rdx_3: i8 = 1;
                
                if rax_5 == 0
                {
                    rdx_3 = *arg2.byte_offset(0x4e);
                }
                
                let zmm0_1: i128 = *arg1.byte_offset(0x38);
                let mut var_68: *mut c_void = arg2;
                let var_48_1: i64 = rbx_3 + rax;
                let var_60_1: i128 = zmm0_1;
                let var_40_1: i64 = rbp;
                let var_38_1: i8 = rdx_3;
                let var_50_1: *mut i64 = arg3;
                let mut result_1: ssize_t;
                
                if ((*arg2.byte_offset(0x4f) | rax_5) & 1) == 0
                {
                    result_1 = uu_fmt::linebreak::break_knuth_plass::hff9de5c7a48631b8(
                        var_88.byte_offset(0x40), r15_2, &var_68);
                }
                else
                {
                    result_1 = uu_fmt::linebreak::break_simple::h385151684df30ef9(
                        var_88.byte_offset(0x40), r15_2, &var_68);
                }
                
                result = result_1;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::hed976bcb652c3a4a(var_90, var_88);
    result
}
