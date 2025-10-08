
  fn rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(arg1: i64, arg2: *mut c_void) -> i64

{
    let r12: i64 = *arg2.byte_offset(0x160);
    
    if r12 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let r15: *mut c_void = *arg2.byte_offset(0x158);
    let mut var_108: i128;
    ignore::walk::WalkBuilder::new::h00a151c7e04b3dc1(&var_108, r15);
    let mut var_1f8: *mut c_void = r15;
    let mut var_1e8: i64 = 1;
    let mut rsi_1: i64 = 1;
    'label_6509cb:
    var_1e8 = 0;
    let rax_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h1b0f226fddfaabdf(&var_1f8, rsi_1);
    let mut rsi_2: *mut c_void = rax_3;
    
    if rax_3 != 0
    {
        loop
        {
            ignore::walk::WalkBuilder::add::hd68dfb85308f880c(&var_108, rsi_2);
            rsi_1 = var_1e8;
            
            if rsi_1 != 0
            {
                goto 'label_6509cb;
            }
            
            rsi_2 = var_1f8;
            
            if rsi_2 == r15.byte_offset(r12 * 0x18)
            {
                break;
            }
            
            var_1f8 = rsi_2.byte_offset(0x18);
        }
    }
    
    let mut var_1d8: i128;
    let mut var_1c8: i128;
    let mut var_178: i128;
    
    if *arg2.byte_offset(0x381) == 0
    {
        let rax_4: i64 = *arg2.byte_offset(0x148);
        
        if rax_4 != 0
        {
            let mut r12_1: *mut c_void = *arg2.byte_offset(0x140);
            let mut i_1: i64 = rax_4 * 0x18;
            let mut i: i64;
            
            do
            {
                ignore::walk::WalkBuilder::add_ignore::h494633bd0004d8f8(&var_178, &var_108, r12_1);
                
                if var_178 == 9
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$mut$u20$ignore..gitignore..GitignoreBuilder$C$ignore..Error$GT$$GT$::h61d7a7ae1f078bb4(&var_178);
                }
                else
                {
                    let var_148: i64;
                    var_1c8 = var_148;
                    let var_158: i128;
                    var_1d8 = var_158;
                    let var_168: i128;
                    var_1e8 = var_168;
                    var_1f8 = var_178;
                    
                    if rg::messages::messages::h9ee4188b23ce53b0() != 0
                        && rg::messages::ignore_messages::hf16747a1cdd9c08b() != 0
                    {
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        let mut var_248: *mut *mut c_void =
                            &std::io::stdio::STDOUT::h411b213c5c9add46;
                        let rax_9: *mut i64 =
                            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_248);
                        var_248 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        let mut var_258: *mut i64 =
                            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_248);
                        var_248 = &data_7e99c8;
                        let var_240_1: i64 = 1;
                        let var_238_1: i64 = 8;
                        let mut var_230_1: i128 = {0};
                        let mut rbp: *mut *mut c_void;
                        rbp = 1;
                        let rax_11: *mut *mut c_void =
                            std::io::Write::write_fmt::hfeba02f6870139ed(&var_258, &var_248);
                        let mut var_208: *mut *mut c_void = rax_11;
                        
                        if rax_11 != 0
                        {
                            var_248 = rax_11;
                            let mut rdi_23: i32;
                            rdi_23 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_11) != 0xb;
                            std::process::exit::hcda678ff272dfed1(rdi_23 * 2);
                            /* no return */
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_208);
                        var_208 = &var_1f8;
                        let var_200_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::heee24f66390ed69b;
                        var_248 = &data_7ea800;
                        let var_240_2: i64 = 2;
                        *var_230_1[8] = 0;
                        let var_238_2: *mut *mut *mut c_void = &var_208;
                        var_230_1 = 1;
                        let rax_12: *mut *mut c_void =
                            std::io::Write::write_fmt::hfeba02f6870139ed(&var_258, &var_248);
                        let mut var_210: *mut *mut c_void = rax_12;
                        
                        if rax_12 != 0
                        {
                            var_248 = rax_12;
                            let mut rdi_26: i32;
                            rdi_26 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_12) != 0xb;
                            std::process::exit::hcda678ff272dfed1(rdi_26 * 2);
                            /* no return */
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_210);
                        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_9);
                        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_258);
                    }
                    
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::h648dc1fae12db6ab(&var_1f8);
                }
                
                r12_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while i != 0x18;
        }
    }
    
    var_108 = *arg2.byte_offset(0x30);
    let var_38: i8 = *arg2.byte_offset(0x373);
    let var_f8: i128 = *arg2.byte_offset(0x40);
    let r15_1: i64 = *arg2.byte_offset(0x310);
    let var_58: i64 = r15_1;
    let var_37: i8 = *arg2.byte_offset(0x388);
    let mut rsi_6: i32;
    rsi_6 = *arg2.byte_offset(0x322) == 0;
    let rax_15: *mut c_void =
        ignore::walk::WalkBuilder::skip_stdout::hdd4731dfa27d7e8b(&var_108, rsi_6);
    _$LT$ignore..gitignore..Gitignore$u20$as$u20$core..clone..Clone$GT$::clone::h17cf217e3aef61a1(
        &var_1f8, arg2.byte_offset(0xd0));
    let var_198: i64;
    let var_118: i64 = var_198;
    let var_1a8: i128;
    let var_128: i128 = var_1a8;
    let var_1b8: i128;
    let var_138: i128 = var_1b8;
    let var_148_1: i128 = var_1c8;
    let var_158_1: i128 = var_1d8;
    let var_168_1: i128 = var_1e8;
    var_178 = var_1f8;
    let rax_17: *mut c_void =
        ignore::walk::WalkBuilder::overrides::h63e5f07af775591c(rax_15, &var_178);
    _$LT$ignore..types..Types$u20$as$u20$core..clone..Clone$GT$::clone::hd6a5e9cc2298641a(&var_1f8, 
        arg2.byte_offset(0x1f0));
    let rax_18: *mut c_void = ignore::walk::WalkBuilder::types::h4c377f7b2ea7a776(rax_17, &var_1f8);
    *rax_18.byte_offset(0x98) = *arg2.byte_offset(0x375) ^ 1;
    *rax_18.byte_offset(0x9a) = *arg2.byte_offset(0x383) ^ 1;
    let rcx_2: i8 = *arg2.byte_offset(0x37f);
    *rax_18.byte_offset(0x99) = rcx_2 ^ 1;
    let rsi_11: i8 = *arg2.byte_offset(0x384);
    let mut rdx_4: i8 = *arg2.byte_offset(0x382) ^ 1;
    
    if rsi_11 != 0
    {
        rdx_4 = 0;
    }
    
    *rax_18.byte_offset(0x9b) = rdx_4;
    *rax_18.byte_offset(0x9c) = rsi_11 ^ 1;
    let mut rdx_7: i8 = *arg2.byte_offset(0x380) ^ 1;
    
    if rsi_11 != 0
    {
        rdx_7 = 0;
    }
    
    *rax_18.byte_offset(0x9d) = rdx_7;
    *rax_18.byte_offset(0x9f) = *arg2.byte_offset(0x385) ^ 1;
    *rax_18.byte_offset(0x9e) = *arg2.byte_offset(0x376);
    let mut var_b8: ();
    
    if rcx_2 == 0
    {
        ignore::dir::IgnoreBuilder::add_custom_ignore_filename::h2f2dc442a6932d20(&var_b8);
    }
    let rax_19: i8 = *arg2.byte_offset(0x320);
    
    if rax_19 != 2
    {
        if r15_1 != 1
        {
            var_1f8 = &data_7eafd0;
            let var_1f0_1: i64 = 1;
            let var_1e8_1: i64 = 8;
            let var_1e0: i128 = {0};
            core::panicking::assert_failed::h449f2a7fe5426575(0, &data_4631a8, 
                arg2.byte_offset(0x310), &var_1f8);
            /* no return */
        }
        
        if (rax_19 & 1) == 0 && *arg2.byte_offset(0x321) == 0
        {
            ignore::walk::WalkBuilder::sort_by_file_name::hf893e8fd018a99a9(&var_108);
        }
    }
    
    memcpy(arg1, &var_108, 0xd8)
}
