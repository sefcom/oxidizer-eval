
  fn uu_head::uu_head::hda677bb53c9ed421(arg1: *mut i64) -> u64

{
    let mut r15: fn() -> i64;
    let var_10: fn() -> i64 = r15;
    let mut rax: i64 = arg1[4];
    
    if rax == 0
    {
        return 0;
    }
    
    let mut r14_1: *mut c_void = arg1[3];
    let rbp_1: *mut c_void = r14_1.byte_offset(rax * 0x18);
    let mut r12_1: *mut c_void = r14_1.byte_offset(0x18);
    let rcx_2: i8 = *arg1.byte_offset(0x2a);
    rax = rax != 1;
    let rcx_3: i8 = ((arg1[5] ^ 1) & rax) | *arg1.byte_offset(0x29);
    let mut rbx: i64;
    rbx = 1;
    let mut fd: i32;
    let var_d0_1: *mut i32 = &fd;
    let mut fd_1: i32;
    let mut var_a8: *mut c_void;
    let mut result: u64;
    let mut fd_2: i32;
    
    loop
    {
        let mut var_90: i128;
        let mut var_68: i64;
        
        if rcx_2 == 0
        {
            let mut rax_1: *mut c_void = r12_1;
            r12_1 = r14_1;
            
            loop
            {
                let r14_2: i64 = *r12_1.byte_offset(8);
                r15 = *r12_1.byte_offset(0x10);
                r12_1 = rax_1;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf89d8b6cb7931351(r14_2, r15, "-error writing 'standard output'…", 1) != 0
                {
                    break;
                }
                
                let mut var_60: i64 = r14_2;
                let var_58_1: fn() -> i64 = r15;
                let mut var_50: i32;
                std::fs::File::open::had2dc7ba2303a5e6(&var_50, r14_2);
                
                if var_50 != 1
                {
                    let fd_3: i32;
                    fd = fd_3;
                    
                    if (rcx_3 & 1) != 0
                    {
                        if (rbx & 1) == 0
                        {
                            var_a8 = &data_4f79d0;
                            let var_a0_5: i64 = 1;
                            let var_98_4: i64 = 8;
                            var_90 = {0};
                            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                        }
                        
                        fd_1 = &var_60;
                        let var_c0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he50def4c4ab764c8;
                        var_a8 = &data_4f7d88;
                        let var_a0_6: i64 = 2;
                        *var_90[8] = 0;
                        let var_98_5: *mut i32 = &fd_1;
                        var_90 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                    }
                    
                    if (uu_head::head_file::hb04afafcea474c83(&fd, arg1) & 1) == 0
                    {
                        var_68 = 0;
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd);
                        goto 'label_467d77;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    fd_2 = fd;
                    goto 'label_467dbc;
                }
                
                let mut var_70: u64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc23ff01e4da35d28();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                let mut rax_4: i64;
                let mut rdx_3: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                let mut var_40: i64 = rax_4;
                let var_38_1: i64 = rdx_3;
                fd_1 = &var_40;
                let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he50def4c4ab764c8;
                let var_b8_1: *mut u64 = &var_70;
                let var_b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h56fc0ec6d62ee034;
                var_a8 = &data_4f7d58;
                let var_a0_1: i64 = 3;
                *var_90[8] = 0;
                let var_98_1: *mut i32 = &fd_1;
                var_90 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h701d8b6bf603c728(var_70);
                rax_1 = r12_1.byte_offset(0x18);
                
                if r12_1 == rbp_1
                {
                    return 0;
                }
            }
        }
        
        if (rcx_3 & 1) != 0
        {
            if (rbx & 1) == 0
            {
                var_a8 = &data_4f79d0;
                let var_a0_2: i64 = 1;
                let var_98_2: i64 = 8;
                let var_90_1: i128 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            }
            
            var_a8 = &data_4f7d48;
            let var_a0_3: i64 = 1;
            let var_98_3: i64 = 8;
            var_90 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        }
        
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        fd_1 = 0;
        let mut rax_5: *mut c_void;
        let mut rdx_4: i64;
        rax_5 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
            &fd_1);
        var_a8 = rax_5;
        let var_a0_4: i64 = rdx_4;
        let mut rax_6: i8;
        
        if (rax_5 & 1) == 0
        {
            let mut rax_7: i8;
            let mut rdx_5: i64;
            rax_7 = uu_head::head_file::hb04afafcea474c83(&fd_1, arg1);
            
            if (rax_7 & 1) != 0
            {
                break;
            }
            
            rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&fd_1, 
                0, rdx_4 + rdx_5);
        }
        else
        {
            rax_6 = uu_head::head_file::hb04afafcea474c83(&fd_1, arg1);
        }
        
        if (rax_6 & 1) != 0
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_a8);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd_1);
        var_68 = 0;
        'label_467d77:
        r14_1 = r12_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hd58954f55c2f1209(&var_68);
        r12_1 += 0x18;
        rbx = 0;
        
        if r14_1 == rbp_1
        {
            r12_1 = r14_1;
        }
        
        if r14_1 == rbp_1
        {
            return 0;
        }
    }
    
    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_a8);
    fd_2 = fd_1;
    'label_467dbc:
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd_2);
    result
}
