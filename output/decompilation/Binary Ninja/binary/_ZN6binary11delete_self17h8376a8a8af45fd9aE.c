
  uint64_t binary::delete_self::h8376a8a8af45fd9a()

{
    int128_t var_78;
    std::env::current_exe::hba8dd19674473539(&var_78);
    int128_t var_40;
    core::result::Result$LT$T$C$E$GT$::unwrap::hfe1546b7d02f4ad7(&var_40, &var_78);
    void* const var_a0;
    int64_t var_60;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        int128_t var_18 = var_40;
        int128_t* var_28 = &var_18;
        uint64_t (* var_20_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
        var_78 = &data_1ce6ff8;
        *var_78[8] = 1;
        int64_t var_58_1 = 0;
        int128_t** var_68_1 = &var_28;
        var_60 = 1;
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7040);
        var_a0 = &data_1b0013d;
        int64_t var_98_1 = 6;
        void* const var_90_1 = &data_1b0013d;
        int64_t var_88_1 = 6;
        int64_t var_80_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_78, 3, &var_a0);
    }
    
    int64_t var_30;
    int64_t var_68_2 = var_30;
    var_78 = var_40;
    void* rax_3 = std::fs::remove_file::h3e7926510a6b8c03(&var_78);
    var_a0 = rax_3;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_a0);
    uint64_t result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
    
    if (!rax_3)
    {
        if (result > 2)
        {
            var_78 = &data_1ce7018;
            *var_78[8] = 1;
            int64_t var_68_4 = 8;
            var_60 = {0};
            int64_t rax_5 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7058);
            var_a0 = &data_1b0013d;
            int64_t var_98_3 = 6;
            void* const var_90_3 = &data_1b0013d;
            int64_t var_88_3 = 6;
            int64_t var_80_3 = rax_5;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_78, 3, &var_a0);
        }
    }
    else if (result)
    {
        var_78 = &data_1ce7008;
        *var_78[8] = 1;
        int64_t var_68_3 = 8;
        var_60 = {0};
        int64_t rax_4 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7070);
        var_a0 = &data_1b0013d;
        int64_t var_98_2 = 6;
        void* const var_90_2 = &data_1b0013d;
        int64_t var_88_2 = 6;
        int64_t var_80_2 = rax_4;
        return log::__private_api::log::h450dfdf51a11f9e0(&var_78, 1, &var_a0);
    }
    
    return result;
}
