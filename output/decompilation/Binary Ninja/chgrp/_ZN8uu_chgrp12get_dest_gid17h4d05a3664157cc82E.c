
  int64_t uu_chgrp::get_dest_gid::h4d05a3664157cc82(int32_t* arg1, void* arg2)

{
    int64_t var_118 = 0;
    int64_t var_110 = 1;
    int64_t var_108 = 0;
    int32_t var_d8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(&var_d8, 
        arg2, "referenceGROUPfailed to get attr…", 9);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7(
        "referenceGROUPfailed to get attr…", 9, &var_d8);
    int32_t result;
    int32_t r12_1;
    int32_t var_100;
    int32_t result_1;
    
    if (!rax)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(
            &var_d8, arg2, "GROUPfailed to get attributes of…", 5);
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7(
            "GROUPfailed to get attributes of…", 5, &var_d8);
        char* r14_1;
        uint64_t r15_1;
        
        if (!rax_3)
        {
            r14_1 = 1;
            r15_1 = 0;
        }
        else
        {
            r14_1 = *(rax_3 + 8);
            r15_1 = *(rax_3 + 0x10);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6ad19bc768aeb8f7(&var_d8, r14_1, r15_1);
        int64_t var_c8;
        var_108 = var_c8;
        var_118 = var_d8;
        r12_1 = 0;
        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(0, 1);
        
        if (r15_1)
        {
            uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(&var_100, r14_1, r15_1);
            
            if (!(0 + -(var_100)))
            {
                int64_t var_f0;
                int64_t var_c8_1 = var_f0;
                var_d8 = var_100;
                int32_t var_c0_1 = 1;
                *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h80792f8261bee4f9(&var_d8);
                *(arg1 + 0x18) = &data_4f4898;
                *(arg1 + 8) = -0x8000000000000000;
                /* tailcall */
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(
                    var_118, var_110);
            }
            
            result = result_1;
            r12_1 = 1;
        }
    }
    else
    {
        std::fs::metadata::h7f84c2225e5a3fec(&var_d8, rax);
        int32_t rax_2;
        
        if (var_d8 != 2)
        {
            int32_t var_fc_1 = 1;
            gid_t var_98;
            int32_t var_f8 =
                uu_chgrp::get_dest_gid::_$u7b$$u7b$closure$u7d$$u7d$::h2a08498cce2049c6(&var_118, 
                var_98);
            rax_2 = 0;
        }
        else
        {
            int64_t var_d0;
            result_1 = var_d0;
            rax_2 = 1;
        }
        
        var_100 = rax_2;
        *(rax + 8);
        *(rax + 0x10);
        int64_t var_e8;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha9d3aa68c90c43ca(&var_e8, &var_100);
        int64_t rax_5 = var_e8;
        int32_t var_e0;
        
        if (rax_5)
        {
            *(arg1 + 0x10) = rax_5;
            *(arg1 + 0x18) = var_e0;
            *(arg1 + 8) = -0x8000000000000000;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(
                var_118, var_110);
        }
        
        r12_1 = var_e0;
        int32_t result_2;
        result = result_2;
    }
    *(arg1 + 0x18) = var_108;
    *(arg1 + 8) = var_118;
    *arg1 = r12_1;
    arg1[1] = result;
    return result;
}
