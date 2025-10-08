
  fn uu_install::directory::h0671663bd4f8b2db(arg1: i64, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut var_e0: *mut c_void;
    
    if arg2 == 0
    {
        var_e0 = 1;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
    }
    
    let mut var_13c_1: i32 = 0x1ed;
    
    if (*arg3.byte_offset(0x48) & 1) != 0
    {
        var_13c_1 = *arg3.byte_offset(0x4c);
    }
    
    let rax_2: i8 = *arg3.byte_offset(0x61);
    let mut i: i64 = 0;
    
    do
    {
        let r15_1: i64 = *(arg1 + i + 8);
        let rbx_1: u64 = *(arg1 + i + 0x10);
        std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, r15_1);
        let rbp_1: i32 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
        let mut var_150: u64;
        let mut var_138: *mut u64;
        let mut var_120: fn(arg1: *mut i64) -> i64;
        let mut var_108: u64;
        let mut var_100: i64;
        
        if rbp_1 != 2
        {
            'label_467398:
            
            if uu_install::mode::chmod::hdfca6c9c8a923e56(r15_1, rbx_1) != 0
            {
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            else
            {
                let rax_8: u64 =
                    uu_install::chown_optional_user_group::h803ff07f1543e95d(r15_1, rbx_1, arg3);
                
                if rax_8 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hfbc899ec46b6393d(0, &data_502208);
                }
                else
                {
                    var_150 = rax_8;
                    let var_148_3: *mut i64 = &data_502208;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uu_install..InstallError$u20$as$u20$uucore..mods..error..UError$GT$::code::hae211d2e19e01945(rax_8));
                    let mut rax_10: u64;
                    let mut rdx_6: i64;
                    rax_10 = uucore::util_name::h074417a1e6395129();
                    var_108 = rax_10;
                    var_100 = rdx_6;
                    var_138 = &var_108;
                    let var_130_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                    let var_128_3: *mut u64 = &var_150;
                    var_120 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
                    var_e0 = &data_5022c0;
                    let var_d8_3: i64 = 3;
                    let var_c0_3: i64 = 0;
                    let var_d0_3: *mut *mut u64 = &var_138;
                    let var_c8_3: i64 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_150, var_148_3);
                }
            }
        }
        else
        {
            uucore::features::fs::dir_strip_dot_for_creation::h60bc83913df5140f(&var_108, r15_1, 
                rbx_1);
            let rax_5: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h25a33db3103aecfc(std::fs::create_dir_all::hd557ad1207496242(var_100));
            
            if rax_5 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hfbc899ec46b6393d(0, &data_501e30);
                
                if (rax_2 & 1) != 0
                {
                    var_138 = 1;
                    let var_130_2: i64 = var_100;
                    let var_f8: i64;
                    let var_128_2: i64 = var_f8;
                    var_120 = 1;
                    var_150 = &var_138;
                    let var_148_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_5022f0;
                    let var_d8_2: i64 = 2;
                    let var_c0_2: i64 = 0;
                    let var_d0_2: *mut u64 = &var_150;
                    let var_c8_2: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_108);
                goto 'label_467398;
            }
            
            let mut var_118: i64 = rax_5;
            let var_110_1: *mut *mut c_void = &data_501e30;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let mut rax_6: u64;
            let mut rdx_3: i64;
            rax_6 = uucore::util_name::h074417a1e6395129();
            var_150 = rax_6;
            let var_148_1: i64 = rdx_3;
            var_138 = &var_150;
            let var_130_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
            let var_128_1: *mut i64 = &var_118;
            var_120 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
            var_e0 = &data_5022c0;
            let var_d8_1: i64 = 3;
            let var_c0_1: i64 = 0;
            let var_d0_1: *mut *mut u64 = &var_138;
            let var_c8_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_118, var_110_1);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_108);
        }
        i += 0x18;
    } while arg2 * 0x18 != i;
    
    0
}
