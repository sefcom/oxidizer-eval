
  fn uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(arg1: i64, arg2: i64, arg3: *mut i64) -> *mut *mut c_void

{
    let mut var_58: i64 = arg1;
    let var_50: i64 = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0c34312a4b925c00(arg1);
    let mut var_48: ();
    uu_fmt::linebreak::find_kp_breakpoints::h79846ee711f881cb(&var_48, rax, rdx, arg3);
    let var_40: i64;
    let mut var_a8: i64 = var_40;
    let var_38: i64;
    let var_a0: i64 = (var_38 << 4) + var_40;
    let rax_2: i64 = arg3[3];
    let mut var_90: i128 = *arg3.byte_offset(8);
    let var_78: i64 = rax_2;
    let var_70: *mut i64 = &var_58;
    let mut var_68: i8;
    core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::haf3d46e0f2661060(&var_68, 
        &var_a8, &var_90);
    let mut result: *mut *mut c_void;
    let result_1: *mut *mut c_void;
    
    if var_68 == 0
    {
        var_a8 = var_58;
        let rax_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
        let var_66: i8;
        
        if rax_3 == 0
        {
            'label_4bb804:
            let rdi_9: *mut i64 = arg3[3];
            let rax_7: i64 = rdi_9[2];
            
            if *rdi_9 - rax_7 <= 1
            {
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(rdi_9, "\n   /home/34r7hm4n/.cargo/regis…", 1);
            }
            else
            {
                rdi_9[1][rax_7] = 0xa;
                rdi_9[2] = rax_7 + 1;
                result = nullptr;
            }
        }
        else if var_66 == 0
        {
            'label_4bb72d:
            let var_67: i8;
            uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&var_90, var_66, 
                *rax_3.byte_offset(0x10), *rax_3.byte_offset(0x18), *rax_3.byte_offset(0x20), 
                arg3[6], *rax_3.byte_offset(0x3a), *rax_3.byte_offset(0x38), var_67);
            let mut rbp_2: i8 = *rax_3.byte_offset(0x39);
            let result_3: *mut *mut c_void =
                uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(*var_90[8], &arg3[6], 
                var_90, arg3[3]);
            result = result_3;
            
            if result_3 == 0
            {
                loop
                {
                    let rax_5: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
                    
                    if rax_5 == 0
                    {
                        break;
                    }
                    
                    uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&var_90, 0, 
                        *rax_5.byte_offset(0x10), *rax_5.byte_offset(0x18), 
                        *rax_5.byte_offset(0x20), arg3[6] != 0, *rax_5.byte_offset(0x3a) != 0, 
                        *rax_5.byte_offset(0x38) != 0, rbp_2 != 0);
                    rbp_2 = *rax_5.byte_offset(0x39);
                    let result_4: *mut *mut c_void =
                        uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(*var_90[8], 
                        &arg3[6], var_90, arg3[3]);
                    result = result_4;
                    
                    if result_4 != 0
                    {
                        goto 'label_4bb845;
                    }
                }
                
                goto 'label_4bb804;
            }
        }
        else
        {
            let result_2: *mut *mut c_void =
                uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(arg3[1], arg3[2], arg3[3]);
            result = result_2;
            
            if result_2 == 0
            {
                goto 'label_4bb72d;
            }
        }
    }
    else
    {
        result = result_1;
    }
    'label_4bb845:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&var_48);
    result
}
