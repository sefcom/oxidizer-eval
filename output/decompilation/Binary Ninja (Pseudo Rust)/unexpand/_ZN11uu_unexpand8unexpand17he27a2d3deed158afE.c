
  fn uu_unexpand::unexpand::he27a2d3deed158af(arg1: *mut c_void) -> u64

{
    let mut rbx: *mut c_void;
    let var_30: *mut c_void = rbx;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_58: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h396c2b4f3a201ba9(&var_58, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    let r14: *mut i64 = *arg1.byte_offset(0x20);
    let rcx: u64 = *arg1.byte_offset(0x28);
    let mut var_170: i64 = 0;
    let var_168: i64 = 1;
    let var_160: i64 = 0;
    let mut var_148: i64;
    let mut rax_1: i64;
    
    if rcx > 1
    {
        var_148 = r14[rcx - 1];
        rax_1 = *arg1.byte_offset(0x10);
        
        if rax_1 == 0
        {
            goto 'label_45d542;
        }
        
        goto 'label_45d313;
    }
    
    var_148 = 0;
    rax_1 = *arg1.byte_offset(0x10);
    let mut result: u64;
    let mut rsi_7: i64;
    let mut rdi_11: i64;
    
    if rax_1 != 0
    {
        'label_45d313:
        rbx = *arg1.byte_offset(8);
        let mut r12_1: *mut c_void = rbx.byte_offset(rax_1 * 0x18);
        let rbp_1: i8 = *arg1.byte_offset(0x30);
        let r13_1: i8 = *arg1.byte_offset(0x31);
        let var_140_1: *mut c_void = r12_1;
        
        loop
        {
            let mut var_c0: i64;
            uu_unexpand::open::h50e1d0eba05cf6a0(&var_c0, *rbx.byte_offset(8), 
                *rbx.byte_offset(0x10));
            let var_b0: *mut i64;
            
            if var_c0 != 0
            {
                let var_90: i64;
                let var_c8_1: i64 = var_90;
                let var_a0: i128;
                let var_d8_1: i128 = var_a0;
                let var_e8_1: i128 = var_b0;
                let mut var_f8: i128 = var_c0;
                let mut i: u64;
                
                do
                {
                    let mut rax_4: i64;
                    let mut rdx_2: i64;
                    rax_4 = std::io::read_until::h5aae19ff83fee6ca(&var_f8, &var_170);
                    let mut rcx_1: i64 = rdx_2;
                    
                    if (rax_4 & 1) != 0
                    {
                        rcx_1 = var_160;
                    }
                    
                    if rcx_1 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h549e604d5c5e935d(rax_4, rdx_2);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hcd1e4735b34a6ffa(&var_f8);
                        r12_1 = var_140_1;
                        goto 'label_45d4f2;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h549e604d5c5e935d(rax_4, rdx_2);
                    let mut rdx_4: *mut c_void;
                    i = uu_unexpand::unexpand_line::h1d2ec673d7b6113d(&var_170, &var_58, rbp_1, 
                        r13_1, var_148, r14, rcx);
                    result = i;
                } while i == 0;
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hcd1e4735b34a6ffa(&var_f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc8e1e3a6a3c0f26a(
                    var_170, var_168);
                break;
            }
            
            let var_b8: i64;
            let mut var_158: i64 = var_b8;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_b0[0xb]());
            let mut rax_8: i64;
            let mut rdx_5: i64;
            rax_8 = uucore::util_name::h074417a1e6395129();
            let mut var_128: i64 = rax_8;
            let var_120_1: i64 = rdx_5;
            let mut var_118: *mut i64 = &var_128;
            let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3b2c8e4a8b65ef3f;
            let var_108_1: *mut i64 = &var_158;
            let var_100_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6fc909ecf6e591ec;
            let mut var_88: *mut c_void = &data_4e8388;
            let var_80_1: i64 = 3;
            let var_68_1: i64 = 0;
            let var_78_1: *mut *mut i64 = &var_118;
            let var_70_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb4ab6cf7cdea7204(var_158, var_b0);
            'label_45d4f2:
            rbx += 0x18;
            
            if rbx == r12_1
            {
                rdi_11 = var_170;
                rsi_7 = var_168;
                goto 'label_45d549;
            }
        }
    }
    else
    {
        'label_45d542:
        rsi_7 = 1;
        rdi_11 = 0;
        'label_45d549:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc8e1e3a6a3c0f26a(rdi_11, rsi_7);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h0b67ea383d9d318b(&var_58);
    result
}
