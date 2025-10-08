
  int64_t uu_uptime::uptime_with_file::he947cbe207c3e785(void* arg1)

{
    int32_t var_c8;
    std::fs::metadata::h476baf29a2bbbec6(&var_c8, arg1);
    void* const var_118;
    void* const var_108;
    int64_t var_f0_2;
    int64_t* var_d8;
    
    if (var_c8 != 2)
    {
        int32_t var_90;
        int32_t rax_1 = 0xf000 & var_90;
        void* const rax_3;
        
        if (rax_1 == 0x1000)
        {
            void* rax_4;
            int64_t rdx_3;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_4;
            int64_t var_110_4 = rdx_3;
            var_d8 = &var_118;
            int64_t (* var_d0_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            int64_t var_100_4 = 2;
            int64_t var_e8_4 = 0;
            int64_t** var_f8_4 = &var_d8;
            int64_t var_f0_4 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            rax_3 = &data_41a270;
            label_4676c2:
            var_118 = rax_3;
            int64_t (* var_110_5)(int64_t* arg1, int64_t* arg2) = _$LT$uu_uptime..UptimeError$u20$as$u20$core..fmt..Display$GT$::fmt::hf85dbf273cb999ab;
            var_108 = &data_508278;
            int64_t var_100_5 = 2;
            int64_t var_e8_5 = 0;
            void* const* var_f8_5 = &var_118;
            var_f0_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            goto label_467711;
        }
        
        if (rax_1 == 0x4000)
        {
            void* rax_2;
            int64_t rdx_2;
            rax_2 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_2;
            int64_t var_110_3 = rdx_2;
            var_d8 = &var_118;
            int64_t (* var_d0_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            int64_t var_100_3 = 2;
            int64_t var_e8_3 = 0;
            int64_t** var_f8_3 = &var_d8;
            int64_t var_f0_3 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            rax_3 = &data_41a2e0;
            goto label_4676c2;
        }
        
        uu_uptime::print_time::h85d109f21a0e3885();
        uu_uptime::process_utmpx::hffb29050e36b1dfd(&var_108, arg1);
        void* const rdi_9 = var_108;
        
        if (rdi_9 != 1)
        {
            void* rax_5;
            int64_t rdx_4;
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_5;
            int64_t var_110_6 = rdx_4;
            var_d8 = &var_118;
            int64_t (* var_d0_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
            var_108 = &data_508258;
            int64_t var_100_7 = 2;
            int64_t var_e8_6 = 0;
            int64_t** var_f8_7 = &var_d8;
            int64_t var_f0_5 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            var_108 = &data_5082a8;
            int64_t var_100_8 = 1;
            int64_t var_f8_8 = 8;
            var_f0_5 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            var_108 = &data_508298;
            int64_t var_100_9 = 1;
            int64_t var_f8_9 = 8;
            var_f0_5 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
        }
        else
        {
            int64_t result = uu_uptime::print_uptime::h3abdc53142303b39(rdi_9);
            
            if (result)
                return result;
        }
    }
    else
    {
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        void* rax;
        int64_t rdx_1;
        rax = uucore::util_name::h074417a1e6395129();
        var_118 = rax;
        int64_t var_110_1 = rdx_1;
        var_d8 = &var_118;
        int64_t (* var_d0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha14c2c1e029bb3b2;
        var_108 = &data_508258;
        int64_t var_100_1 = 2;
        int64_t var_e8_1 = 0;
        int64_t** var_f8_1 = &var_d8;
        int64_t var_f0_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        var_118 = nullptr;
        var_d8 = &var_118;
        int64_t (* var_d0_2)(int64_t* arg1, int64_t* arg2) =
            _$LT$uu_uptime..UptimeError$u20$as$u20$core..fmt..Display$GT$::fmt::hf85dbf273cb999ab;
        var_108 = &data_508278;
        int64_t var_100_2 = 2;
        int64_t var_e8_2 = 0;
        int64_t** var_f8_2 = &var_d8;
        var_f0_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        int64_t var_c0;
        core::ptr::drop_in_place$LT$uu_uptime..UptimeError$GT$::hab725a8e0766abee(var_118, var_c0);
        label_467711:
        uu_uptime::print_time::h85d109f21a0e3885();
        var_108 = &data_508298;
        int64_t var_100_6 = 1;
        int64_t var_f8_6 = 8;
        var_f0_2 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_108);
    }
    uu_uptime::print_nusers::hc92747cb558417ff(1);
    uu_uptime::print_loadavg::h786739790e395d27();
    return 0;
}
