
  int128_t* linera_summary::performance_summary::PerformanceSummary::format_comment_body::h16d31c5ddd863f84(int128_t* arg1, void* arg2, uint64_t arg3)

{
    char* r14 = *(arg2 + 0xc8);
    int64_t r15 = *(arg2 + 0xd0);
    char* var_90 = r14;
    int64_t var_88 = r15;
    int64_t rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r14, r15);
    
    if (!rax)
    {
        core::str::slice_error_fail::h1a2885084e28d077(r14, r15, 0, 7);
        /* no return */
    }
    
    int64_t var_80 = rax;
    int64_t var_78 = 7;
    int128_t var_178 = *(arg2 + 0x98);
    int128_t var_158 = *(arg2 + 0xb0);
    int128_t* var_110 = &var_178;
    int64_t (* var_108)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
    int128_t* var_100 = &var_158;
    int64_t (* var_f8)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
    int64_t* var_f0 = &var_90;
    int64_t (* var_e8)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
    void** const var_1d8 = &data_cf34f0;
    int64_t var_1d0 = 3;
    int64_t var_1b8 = 0;
    int128_t** var_1c8 = &var_110;
    int64_t var_1c0 = 3;
    int128_t var_140;
    uint64_t rdx =
        core::option::Option$LT$T$GT$::map_or_else::h175ba7e43b0bb732(&var_140, 0, arg3, &var_1d8);
    int128_t var_a8 = var_140;
    void** const* var_130;
    void** const* var_98 = var_130;
    var_110 = &data_cf35e8;
    int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
    int64_t* var_100_1 = &var_80;
    int64_t (* var_f8_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
    int128_t* var_f0_1 = &var_a8;
    int64_t (* var_e8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1d8 = &data_cf3520;
    int64_t var_1d0_1 = 4;
    int64_t var_1b8_1 = 0;
    int128_t** var_1c8_1 = &var_110;
    int64_t var_1c0_1 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h175ba7e43b0bb732(&var_140, 0, rdx, &var_1d8);
    int128_t var_198 = var_140;
    void** const* var_188 = var_130;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h93f1f9ac7e3243a2(&var_198, "### CI Runtime Comparison\n\n###…", "#### Workflow: \n\n| Job Name | …");
    int64_t rax_3 = *(arg2 + 0x118);
    int128_t* rcx_2;
    int128_t zmm0_3;
    
    if (!rax_3)
    {
        zmm0_3 = {0};
        rcx_2 = nullptr;
    }
    else
    {
        zmm0_3 = *(arg2 + 0x120);
        rcx_2 = 1;
    }
    
    var_110 = rcx_2;
    int64_t var_108_2 = 0;
    int64_t var_100_2 = rax_3;
    int64_t var_f8_2 = zmm0_3;
    int128_t* var_f0_2 = rcx_2;
    int64_t var_e8_2 = 0;
    int64_t var_e0 = rax_3;
    int128_t var_d8 = zmm0_3;
    
    while (true)
    {
        int64_t rax_4;
        uint64_t rdx_1;
        rax_4 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd83deec80123dc3(&var_110);
        
        if (!rax_4)
            break;
        
        int64_t var_b0 = rax_4;
        var_158 = &var_b0;
        *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h700141344a572bc4;
        var_1d8 = &data_cf3560;
        int64_t (* var_1d0_2)(int64_t* arg1, int64_t arg2) = 2;
        int64_t var_1b8_2 = 0;
        int128_t* var_1c8_2 = &var_158;
        int64_t var_1c0_2 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h175ba7e43b0bb732(&var_140, 0, rdx_1, &var_1d8);
        var_1d8 = var_140;
        void** const* var_1c8_3 = var_130;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h93f1f9ac7e3243a2(&var_198, var_1d0_2, var_130 + var_1d0_2);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1d8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h93f1f9ac7e3243a2(&var_198, "| Job Name | Base Runtime | PR R…", "| --- | --- | --- | --- |\n|  | …");
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h93f1f9ac7e3243a2(&var_198, "| --- | --- | --- | --- |\n|  | …", "|  |  |\nlinera-summary/src/perf…");
        int64_t rax_5 = *(rdx_1 + 0x10);
        
        if (rax_5)
        {
            int64_t rbp_2 = *(rdx_1 + 8);
            int64_t i = 0;
            int64_t var_b8_1 = rbp_2;
            
            do
            {
                var_1d8 = *(rbp_2 + i + 0x30);
                var_1d0_2 = 0;
                void var_70;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h03e4ad6daf6d25f3(&var_70, &var_1d8);
                var_1d8 = *(rbp_2 + i + 0x38);
                var_1d0_2 = 0;
                void var_58;
                uint64_t rdx_4 = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h03e4ad6daf6d25f3(&var_58, &var_1d8);
                var_178 = *(rbp_2 + i + 0x40);
                var_158 = &var_178;
                *var_158[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                var_1d8 = &data_cf35f8;
                int64_t var_1d0_3 = 2;
                char const* const var_1b8_3 = &data_57a789[0xaf];
                int64_t var_1b0_1 = 1;
                int128_t* var_1c8_4 = &var_158;
                int64_t var_1c0_3 = 1;
                uint64_t rdx_5 = core::option::Option$LT$T$GT$::map_or_else::h175ba7e43b0bb732(
                    &var_140, 0, rdx_4, &var_1d8);
                var_178 = var_140;
                void** const* var_168_1 = var_130;
                int128_t var_40 = *(rbp_2 + i + 8);
                var_1d8 = &var_40;
                var_1d0_2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59d07b40f15f706b;
                void* var_1c8_5 = &var_70;
                int64_t (* var_1c0_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                void* var_1b8_4 = &var_58;
                int64_t (* var_1b0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int128_t* var_1a8_1 = &var_178;
                int64_t (* var_1a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_140 = &data_cf3580;
                *var_140[8] = 5;
                int64_t var_120_1 = 0;
                var_130 = &var_1d8;
                int64_t var_128_1 = 4;
                core::option::Option$LT$T$GT$::map_or_else::h175ba7e43b0bb732(&var_158, 0, rdx_5, 
                    &var_140);
                var_1d8 = var_158;
                void* var_148;
                void* var_1c8_6 = var_148;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h93f1f9ac7e3243a2(&var_198, var_1d0_2, var_148 + var_1d0_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_178);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_58);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_70);
                i += 0x48;
                rbp_2 = var_b8_1;
            } while (rax_5 * 0x48 != i);
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_198, 0xa);
    }
    
    arg1[1] = var_188;
    *arg1 = var_198;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_a8);
    return arg1;
}
