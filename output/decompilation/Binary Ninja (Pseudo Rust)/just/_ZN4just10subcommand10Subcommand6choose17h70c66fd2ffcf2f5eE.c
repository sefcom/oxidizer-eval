
  fn just::subcommand::Subcommand::choose::h70c66fd2ffcf2f5e(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: *mut i64, arg6: i64, arg7: u64) -> i64

{
    let mut var_210: i64 = 0;
    let var_208: u64 = 8;
    let var_200: i64 = 0;
    let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax = arg3;
    let mut var_288: i64 = 1;
    let mut i: i64 = 1;
    let r12: i8 = *arg2.byte_offset(0x1a3);
    let mut var_158: *mut c_void;
    let mut var_150: u64;
    let mut var_148: *mut *mut i64;
    
    do
    {
        let rbp_1: *mut c_void = *(rax + (i << 3) - 8);
        just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(&var_158, rbp_1, r12);
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h93278e255ad3d258(&var_210, var_150, 
            var_150 + (var_148 << 3));
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_158, var_150);
        let rax_2: i64 = *rbp_1.byte_offset(0x2a0);
        let mut rcx_2: i64;
        let mut zmm0_1: i128;
        
        if rax_2 == 0
        {
            zmm0_1 = {0};
            rcx_2 = 0;
        }
        else
        {
            zmm0_1 = *rbp_1.byte_offset(0x2a8);
            rcx_2 = 1;
        }
        
        let mut var_78: i64 = rcx_2;
        let var_70_1: i64 = 0;
        let var_68_1: i64 = rax_2;
        let var_60_1: i64 = zmm0_1;
        let var_58_1: i64 = rcx_2;
        let var_50_1: i64 = 0;
        let var_48_1: i64 = rax_2;
        let var_40_1: i128 = zmm0_1;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h75c19498e857f9f5(&var_288, &var_78);
        i -= 1;
    } while i != 0;
    
    let mut rsi_15: u64;
    let mut rdi_20: i64;
    
    if var_200 == 0
    {
        *arg1 = 0x23;
        'label_68d526:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_288, rax);
        rdi_20 = var_210;
        rsi_15 = var_208;
    }
    else
    {
        let mut rbx_1: *mut c_void;
        let mut r14_1: *mut i64;
        
        if arg6 == 0
        {
            var_158 = nullptr;
            var_150 = 1;
            var_148 = nullptr;
            std::ffi::os_str::OsString::push::h940d7017541ba73c(&var_158, 
                "fzf --multi --preview 'just --un…", 0x42);
            rbx_1 = arg2;
            r14_1 = arg3;
            std::ffi::os_str::OsString::push::h990ba6e64567b155(&var_158, arg4);
            std::ffi::os_str::OsString::push::h940d7017541ba73c(&var_158, 
                "" --show {}'_just() {\n    local…", 0xc);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_158, arg6, arg7);
            rbx_1 = arg2;
            r14_1 = arg3;
        }
        
        let rax_4: *mut *mut i64 = var_148;
        let mut var_268: i128 = var_158;
        just::settings::Settings::shell_command::h194009976e056ef8(&var_158, &r14_1[0x15], rbx_1);
        std::process::Command::arg::hdfbbb0c642d6ac00(&var_158, &var_268);
        std::process::Command::stdout::h735b5e124ef77713(&var_158, 2, 
            std::process::Command::stdin::hf565ff9df9f78a2a(&var_158, 2, 
                std::process::Command::current_dir::hfb203bdc96bba19b(&var_158, 
                    arg4.byte_offset(0x18))));
        let mut var_180: i32;
        std::process::Command::spawn::haea730ea7b05a977(&var_180, &var_158);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h68c11017a1ebd395(&var_158);
        let rbp_2: i32 = var_180;
        let mut var_238: i64;
        let mut var_1f8: i128;
        let var_17c: i128;
        let mut var_138: i64;
        
        if rbp_2 == 1
        {
            let r12_1: i64 = *var_17c[4];
            var_238 = r12_1;
            just::settings::Settings::shell::hd5c075b0126ed5e7(&var_158, &r14_1[0x15], rbx_1);
            let r15_3: *mut *mut i64 = var_148;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_158, var_158, var_150);
            let rax_6: *mut *mut i64 = var_148;
            var_1f8 = var_158;
            let var_140: i64;
            alloc::str::join_generic_copy::h1d897c8c94fa609a(&var_158, var_140, var_138, 
                " [private]\nexport no entry foun…", 1);
            *arg1.byte_offset(0x38) = var_148;
            *arg1.byte_offset(0x28) = var_158;
            *arg1.byte_offset(0x50) = rax_4;
            *arg1.byte_offset(0x40) = var_268;
            *arg1.byte_offset(0x10) = var_1f8;
            *arg1.byte_offset(0x20) = rax_6;
            *arg1 = 4;
            *arg1.byte_offset(8) = r12_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(r15_3, var_140);
            goto 'label_68d526;
        }
        
        let var_26c_1: i32 = rbp_2;
        let mut var_19c: i128 = var_17c;
        let mut var_1a8: i128 = var_17c;
        let mut r15_4: *mut c_void = nullptr;
        let temp0_1: i32 = *var_19c[4];
        let mut rcx_3: i32;
        rcx_3 = temp0_1 == 0xffffffff;
        let mut var_298: i64;
        var_298 = rcx_3;
        
        if temp0_1 != 0xffffffff
        {
            r15_4 = &*var_19c[4];
        }
        
        if temp0_1 == 0xffffffff
        {
            r14_1 = 1;
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_1f8, &var_210);
        let mut rax_10: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_1f8);
        let mut rbp_3: *mut i64 = arg3;
        let mut var_1c0: *mut i64;
        let mut var_1b8: fn(arg1: *mut c_void, arg2: i64) -> i64;
        
        if rax_10 == 0
        {
            'label_68d697:
            r14_1 = 1;
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_1f8);
            let var_22c_1: i96 = var_19c;
            var_238 = var_1a8;
            std::process::Child::wait_with_output::h38fea98de738bb30(&var_158, &var_238);
            
            if !(0 + -(var_158))
            {
                let var_128: i64;
                let var_1c8_1: i64 = var_128;
                let var_1d8_1: i128 = var_138;
                let mut var_1e8: u64;
                var_1e8 = var_148;
                var_1f8 = var_158;
                
                if var_128 == 0
                {
                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_1c0, 
                        *var_1f8[8], var_1e8);
                    let var_1b0: i64;
                    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h46590bb9cc81fd74(&var_148, var_1b8, var_1b0);
                    var_158 = nullptr;
                    let var_150_1: i64 = var_1b0;
                    let var_120_1: i16 = 1;
                    core::iter::traits::iterator::Iterator::collect::h8adcad548a0c510c(&var_238, 
                        &var_158);
                    let var_230: i64;
                    just::justfile::Justfile::run::h44a153d0be889dd4(arg1, rbp_3, arg2, arg4, arg5, 
                        var_230, *var_22c_1[4]);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_238);
                    core::ptr::drop_in_place$LT$just..request..Request$GT$::h16e954a6b6741939(
                        &var_1c0);
                    core::ptr::drop_in_place$LT$std..process..Output$GT$::h8303f69cbb083d43(
                        &var_1f8);
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                        &var_268);
                }
                else
                {
                    *arg1.byte_offset(0x18) = rax_4;
                    *arg1.byte_offset(8) = var_268;
                    *arg1 = 6;
                    *arg1.byte_offset(4) = var_128;
                    core::ptr::drop_in_place$LT$std..process..Output$GT$::h8303f69cbb083d43(
                        &var_1f8);
                }
            }
            else
            {
                *arg1.byte_offset(0x20) = rax_4;
                *arg1.byte_offset(0x10) = var_268;
                *arg1 = 5;
                *arg1.byte_offset(8) = var_150;
            }
        }
        else
        {
            loop
            {
                just::recipe::Recipe::spaced_namepath::h63fb739d97f7fb8f(&var_238, rax_10);
                var_1c0 = &var_238;
                var_1b8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_158 = &data_82dbd8;
                var_150 = 2;
                var_138 = 0;
                var_148 = &var_1c0;
                let var_140_1: i64 = 1;
                let rax_11: *mut c_void =
                    std::io::Write::write_fmt::h5aacf0fea719cf49(r15_4, &var_158);
                
                if rax_11 != 0
                {
                    var_158 = rax_11;
                    
                    if std::io::error::Error::kind::h135fe00c4e7365f3(rax_11) != 0xb
                    {
                        *arg1.byte_offset(0x20) = rax_4;
                        *arg1.byte_offset(0x10) = var_268;
                        *arg1 = 7;
                        *arg1.byte_offset(8) = rax_11;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_238);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_1f8);
                        core::ptr::drop_in_place$LT$std..process..Child$GT$::h297edfa0c5bf1f96(
                            &var_1a8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6f129e5e75731b85(
                        &var_158);
                    rbp_3 = arg3;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_238);
                rax_10 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_1f8);
                
                if rax_10 == 0
                {
                    goto 'label_68d697;
                }
            }
        }
        rdi_20 = var_288;
        rsi_15 = rax;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(rdi_20, rsi_15)
}
