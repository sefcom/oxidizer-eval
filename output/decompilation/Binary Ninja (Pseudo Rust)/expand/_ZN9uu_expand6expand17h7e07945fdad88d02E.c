
  fn uu_expand::expand::h7e07945fdad88d02(arg1: *mut c_void) -> i64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_58: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h62993fbbc8aa06bb(&var_58, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    let r14: *mut i64 = *arg1.byte_offset(0x20);
    let r15: i64 = *arg1.byte_offset(0x28);
    let mut var_e0: i64 = 0;
    let var_d8: i64 = 1;
    let var_d0: i64 = 0;
    let rax: i64 = *arg1.byte_offset(0x10);
    let mut result: i64;
    let mut rsi_9: i64;
    let mut rdi_16: i64;
    
    if rax == 0
    {
        rsi_9 = 1;
        rdi_16 = 0;
        'label_45dc27:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb3894eaab1b20cfd(rdi_16, rsi_9);
        result = 0;
    }
    else
    {
        let mut r13_1: *mut c_void = *arg1.byte_offset(8);
        let mut r12_2: *mut c_void = rax * 0x18 + r13_1;
        let mut rax_2: *mut c_void = r13_1.byte_offset(0x18);
        let var_a8_1: *mut c_void = r12_2;
        
        loop
        {
            let mut var_b0: *mut c_void = r13_1;
            let rdi_1: i64 = *r13_1.byte_offset(8);
            let rsi_1: u64 = *r13_1.byte_offset(0x10);
            r13_1 = rax_2;
            let mut var_128: *mut c_void;
            let mut var_118: *mut *mut i64;
            let mut var_108: i64;
            let mut var_f0: *mut i64;
            let mut var_a0: *mut i64;
            let mut var_98: fn(arg1: *mut i64, arg2: i64) -> i64;
            
            if std::path::Path::is_dir::h02edbc48c38d7d9e(rdi_1, rsi_1) == 0
            {
                let rax_5: *mut c_void = var_b0;
                uu_expand::open::hc6af5baed7605e7e(&var_a0, *rax_5.byte_offset(8), 
                    *rax_5.byte_offset(0x10));
                
                if var_a0 != 0
                {
                    let var_70: i64;
                    let var_f8_1: i64 = var_70;
                    let var_80: i128;
                    var_108 = var_80;
                    let var_90: i128;
                    var_118 = var_90;
                    var_128 = var_a0;
                    let mut i: i64;
                    
                    do
                    {
                        let mut rax_7: i64;
                        let mut rdx_3: i64;
                        rax_7 = std::io::read_until::he79a9ae76b7d0ac2(&var_128, &var_e0);
                        
                        if (rax_7 & 1) != 0
                        {
                            if var_d0 == 0
                            {
                                goto 'label_45dacf;
                            }
                            
                            goto 'label_45dbed;
                        }
                        
                        if rdx_3 == 0
                        {
                            rdx_3 = 0;
                            'label_45dbed:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb34bad757c41de(rax_7, rdx_3);
                            r12_2 = var_a8_1;
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4160db49dd893c24(&var_128);
                            goto 'label_45d940;
                        }
                        
                        'label_45dacf:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb34bad757c41de(rax_7, rdx_3);
                        i = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4d94a61557d52f12(uu_expand::expand_line::h49356f72fbe6ed37(&var_e0, &var_58, r14, r15, 
                            arg1));
                        result = i;
                    } while i == 0;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4160db49dd893c24(&var_128);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb3894eaab1b20cfd(
                        var_e0, var_d8);
                    break;
                }
                
                let mut var_c8: i128 = var_98;
                let mut rax_9: *mut i64;
                let mut rdx_5: i64;
                rax_9 = uucore::util_name::h074417a1e6395129();
                var_f0 = rax_9;
                let var_e8_2: i64 = rdx_5;
                let mut var_68: *mut *mut i64 = &var_f0;
                let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a55ce0d4da56261;
                var_128 = &data_4e8ad0;
                let var_120_3: i64 = 2;
                let var_108_2: i64 = 0;
                let var_118_2: *mut *mut *mut i64 = &var_68;
                let var_110_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_f0 = &var_c8;
                let var_e8_3: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27bb90d2eb185827;
                var_128 = &data_4e8b10;
                let var_120_4: i64 = 2;
                var_108 = 0;
                var_118 = &var_f0;
                let var_110_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hdb3e2bb4f9085848(var_c8, *var_c8[8]);
            }
            else
            {
                let mut rax_4: *mut i64;
                let mut rdx_1: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_a0 = rax_4;
                let var_98_1: i64 = rdx_1;
                var_f0 = &var_a0;
                let var_e8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a55ce0d4da56261;
                var_128 = &data_4e8ad0;
                let var_120_1: i64 = 2;
                let var_108_1: i64 = 0;
                let var_118_1: *mut *mut i64 = &var_f0;
                let var_110_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_a0 = &var_b0;
                var_98 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd97d1afc4e866689;
                var_128 = &data_4e8af0;
                let var_120_2: i64 = 2;
                var_108 = 0;
                var_118 = &var_a0;
                let var_110_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            'label_45d940:
            rax_2 = r13_1.byte_offset(0x18);
            
            if r13_1 == r12_2
            {
                rax_2 = r13_1;
            }
            
            if r13_1 == r12_2
            {
                rdi_16 = var_e0;
                rsi_9 = var_d8;
                goto 'label_45dc27;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h7c3e098b824165b9(&var_58);
    result
}
