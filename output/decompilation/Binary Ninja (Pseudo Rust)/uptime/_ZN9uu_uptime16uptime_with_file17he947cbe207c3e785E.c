
  fn uu_uptime::uptime_with_file::he947cbe207c3e785(arg1: *mut c_void) -> i64

{
    let mut var_c8: i32;
    std::fs::metadata::h476baf29a2bbbec6(&var_c8, arg1);
    let mut var_118: *mut c_void;
    let mut var_108: *mut c_void;
    let mut var_f0_2: i64;
    let mut var_d8: *mut i64;
    
    if var_c8 != 2
    {
        let var_90: i32;
        let rax_1: i32 = 0xf000 & var_90;
        let mut rax_3: *mut c_void;
        
        if rax_1 == 0x1000
        {
            let mut rax_4: *mut c_void;
            let mut rdx_3: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_4;
            let var_110_4: i64 = rdx_3;
            var_d8 = &var_118;
            let var_d0_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            let var_100_4: i64 = 2;
            let var_e8_4: i64 = 0;
            let var_f8_4: *mut *mut i64 = &var_d8;
            let var_f0_4: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            rax_3 = &data_41a270;
            'label_4676c2:
            var_118 = rax_3;
            let var_110_5: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_uptime..UptimeError$u20$as$u20$core..fmt..Display$GT$::fmt::hf85dbf273cb999ab;
            var_108 = &data_508278;
            let var_100_5: i64 = 2;
            let var_e8_5: i64 = 0;
            let var_f8_5: *const *mut c_void = &var_118;
            var_f0_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            goto 'label_467711;
        }
        
        if rax_1 == 0x4000
        {
            let mut rax_2: *mut c_void;
            let mut rdx_2: i64;
            rax_2 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_2;
            let var_110_3: i64 = rdx_2;
            var_d8 = &var_118;
            let var_d0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            let var_100_3: i64 = 2;
            let var_e8_3: i64 = 0;
            let var_f8_3: *mut *mut i64 = &var_d8;
            let var_f0_3: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            rax_3 = &data_41a2e0;
            goto 'label_4676c2;
        }
        
        uu_uptime::print_time::h85d109f21a0e3885();
        uu_uptime::process_utmpx::hffb29050e36b1dfd(&var_108, arg1);
        let rdi_9: *mut c_void = var_108;
        
        if rdi_9 != 1
        {
            let mut rax_5: *mut c_void;
            let mut rdx_4: i64;
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_5;
            let var_110_6: i64 = rdx_4;
            var_d8 = &var_118;
            let var_d0_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            let var_100_7: i64 = 2;
            let var_e8_6: i64 = 0;
            let var_f8_7: *mut *mut i64 = &var_d8;
            let mut var_f0_5: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            var_108 = &data_5082a8;
            let var_100_8: i64 = 1;
            let var_f8_8: i64 = 8;
            var_f0_5 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            var_108 = &data_508298;
            let var_100_9: i64 = 1;
            let var_f8_9: i64 = 8;
            var_f0_5 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
        }
        else
        {
            let result: i64 = uu_uptime::print_uptime::h3abdc53142303b39(rdi_9);
            
            if result != 0
            {
                return result;
            }
        }
    }
    else
    {
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        let mut rax: *mut c_void;
        let mut rdx_1: i64;
        rax = uucore::util_name::h074417a1e6395129();
        var_118 = rax;
        let var_110_1: i64 = rdx_1;
        var_d8 = &var_118;
        let var_d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
        var_108 = &data_508258;
        let var_100_1: i64 = 2;
        let var_e8_1: i64 = 0;
        let var_f8_1: *mut *mut i64 = &var_d8;
        let var_f0_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        var_118 = nullptr;
        var_d8 = &var_118;
        let var_d0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$uu_uptime..UptimeError$u20$as$u20$core..fmt..Display$GT$::fmt::hf85dbf273cb999ab;
        var_108 = &data_508278;
        let var_100_2: i64 = 2;
        let var_e8_2: i64 = 0;
        let var_f8_2: *mut *mut i64 = &var_d8;
        var_f0_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        let var_c0: i64;
        core::ptr::drop_in_place$LT$uu_uptime..UptimeError$GT$::hab725a8e0766abee(var_118, var_c0);
        'label_467711:
        uu_uptime::print_time::h85d109f21a0e3885();
        var_108 = &data_508298;
        let var_100_6: i64 = 1;
        let var_f8_6: i64 = 8;
        var_f0_2 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_108);
    }
    uu_uptime::print_nusers::hc92747cb558417ff(1);
    uu_uptime::print_loadavg::h786739790e395d27();
    0
}
