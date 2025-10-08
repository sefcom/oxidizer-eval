
  int64_t* uu_chgrp::parse_gid_and_uid::h336a3dfca8844a81(int64_t* arg1, void* arg2, uint64_t arg3 @ rbp)

{
    uint64_t var_8 = arg3;
    void** const var_c8;
    uu_chgrp::get_dest_gid::h4d05a3664157cc82(&var_c8, arg2);
    int64_t var_c0;
    uint128_t var_b8;
    
    if (-(var_c0) != -0x8000000000000000)
    {
        uint128_t var_58_1 = var_c8;
        int64_t r15_1 = var_b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(
            &var_c8, arg2, "fromkindAuto/", 4);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7(
            "fromkindAuto/", 4, &var_c8);
        int32_t rax_3;
        
        if (!rax_2)
        {
            rax_3 = 0;
            label_46001b:
            *arg1 = var_c0;
            *(arg1 + 8) = var_b8;
            arg1[3] = var_58_1;
            arg1[4] = 0;
            arg1[5] = rax_3;
            *(arg1 + 0x2c) = arg3;
        }
        else
        {
            void* var_98 = rax_2;
            int64_t var_90;
            uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(&var_90, *(rax_2 + 8), *(rax_2 + 0x10));
            int64_t r13_1 = var_90;
            int64_t var_88;
            
            if (r13_1 == -0x8000000000000000)
            {
                arg3 = var_88;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$alloc..string..String$GT$$GT$::h006ca93ec0283182(-0x8000000000000000, var_88);
                rax_3 = 2;
                goto label_46001b;
            }
            
            void** var_78 = &var_98;
            int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd0a34de72fe2a3f1;
            var_c8 = &data_4f4910;
            int64_t var_c0_1 = 2;
            int64_t var_a8_1 = 0;
            var_b8 = &var_78;
            *var_b8[8] = 1;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(&var_48, &var_c8);
            *var_b8[8] = 1;
            var_c8 = var_48;
            int64_t var_38;
            var_b8 = var_38;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h80792f8261bee4f9(&var_c8);
            arg1[2] = &data_4f4898;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$alloc..string..String$GT$$GT$::h006ca93ec0283182(r13_1, var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(var_c0, r15_1);
        }
    }
    else
    {
        *(arg1 + 8) = var_b8;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
