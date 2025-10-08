
  fn uu_fmt::linebreak::break_knuth_plass::hff9de5c7a48631b8(arg1: i64, arg2: i64, arg3: *mut i64) -> ssize_t

{
    let mut var_58: i64 = arg1;
    let var_50: i64 = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he39c15aea62ebab7(arg1);
    let mut var_48: i64;
    uu_fmt::linebreak::find_kp_breakpoints::h8e1b34bce65123f0(&var_48, rax, rdx, arg3);
    let var_40: i64;
    let mut var_a8: i64 = var_40;
    let var_38: i64;
    let var_a0: i64 = (var_38 << 4) + var_40;
    let rax_4: i64 = arg3[3];
    let mut var_90: i128 = *arg3.byte_offset(8);
    let var_78: i64 = rax_4;
    let var_70: *mut i64 = &var_58;
    let mut var_68: i8;
    core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h6f354a9d532b4781(&var_68, 
        &var_a8, &var_90);
    let mut result: ssize_t;
    let result_1: ssize_t;
    
    if var_68 != 1
    {
        var_a8 = var_58;
        let rax_5: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_a8);
        let var_66: i8;
        
        if rax_5 == 0
        {
            'label_4618ce:
            let rdi_9: *mut i64 = arg3[3];
            let rax_9: i64 = rdi_9[2];
            
            if *rdi_9 - rax_9 <= 1
            {
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(rdi_9, "\n   Found NoFormatLine when exp…", 1);
            }
            else
            {
                rdi_9[1][rax_9] = 0xa;
                rdi_9[2] = rax_9 + 1;
                result = 0;
            }
        }
        else if var_66 == 0
        {
            'label_461822:
            let var_67: i8;
            uu_fmt::linebreak::slice_if_fresh::h1732064ecc95b219(&var_90, var_66, 
                *rax_5.byte_offset(0x10), *rax_5.byte_offset(0x18), *rax_5.byte_offset(0x20), 
                arg3[6], *rax_5.byte_offset(0x3a), *rax_5.byte_offset(0x38), var_67);
            let mut r12_2: i8 = *rax_5.byte_offset(0x39);
            let result_3: ssize_t = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(
                *var_90[8], &arg3[6], var_90, arg3[3]);
            result = result_3;
            
            if result_3 == 0
            {
                loop
                {
                    let rax_7: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_a8);
                    
                    if rax_7 == 0
                    {
                        break;
                    }
                    
                    uu_fmt::linebreak::slice_if_fresh::h1732064ecc95b219(&var_90, 0, 
                        *rax_7.byte_offset(0x10), *rax_7.byte_offset(0x18), 
                        *rax_7.byte_offset(0x20), arg3[6], *rax_7.byte_offset(0x3a), 
                        *rax_7.byte_offset(0x38), r12_2);
                    r12_2 = *rax_7.byte_offset(0x39);
                    let result_4: ssize_t = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(
                        *var_90[8], &arg3[6], var_90, arg3[3]);
                    result = result_4;
                    
                    if result_4 != 0
                    {
                        goto 'label_4618fc;
                    }
                }
                
                goto 'label_4618ce;
            }
        }
        else
        {
            let result_2: ssize_t =
                uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(arg3[1], arg3[2], arg3[3]);
            result = result_2;
            
            if result_2 == 0
            {
                goto 'label_461822;
            }
        }
    }
    else
    {
        result = result_1;
    }
    'label_4618fc:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::hcfec7ca4ac6b63a6(var_48, var_40);
    result
}
