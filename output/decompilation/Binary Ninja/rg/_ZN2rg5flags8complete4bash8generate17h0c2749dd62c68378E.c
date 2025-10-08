
  int64_t rg::flags::complete::bash::generate::h0c2749dd62c68378(int128_t* arg1)

{
    int64_t var_a0 = 0;
    char* var_98 = 1;
    void* var_90 = nullptr;
    
    for (int64_t i = 0; i != 0x680; i += 0x10)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "--<PATTERN> <PATH>...\n        !…", "<PATTERN> <PATH>...\n        !FL…");
        int64_t r12_1 = *(i + &data_7e9308);
        int64_t r13_1 = *(i + &data_7e9310);
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = (*(r13_1 + 0x30))(r12_1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, rax_1, rdx_1 + rax_1);
        alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        char rax_2;
        char rdx_3;
        rax_2 = (*(r13_1 + 0x28))(r12_1);
        
        if (rax_2 & 1)
        {
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x2d);
            alloc::string::String::push::h0ede46164189e411(&var_a0, rdx_3);
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        }
        
        int64_t rax_3;
        int64_t rdx_4;
        rax_3 = (*(r13_1 + 0x40))(r12_1);
        
        if (rax_3)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "--<PATTERN> <PATH>...\n        !…", "<PATTERN> <PATH>...\n        !FL…");
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, rax_3, rdx_4 + rax_3);
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        }
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "<PATTERN> <PATH>...\n        !FL…", "\n        !FLAG!)\n          COM…");
    int64_t var_b8 = 0;
    char* var_b0 = 1;
    void* var_a8 = nullptr;
    uint32_t* var_128;
    char* var_120_1;
    int64_t** var_118;
    int128_t var_108;
    int64_t** var_f8;
    int128_t var_e8;
    int64_t** var_d8;
    
    for (int64_t i_1 = 0; i_1 != 0x680; i_1 += 0x10)
    {
        int64_t r13_4 = *(i_1 + &data_7e9308);
        void* r12_3 = *(i_1 + &data_7e9310);
        int64_t rbx = *(r12_3 + 0x68);
        int128_t var_58;
        int64_t** var_48;
        
        if (!rbx(r13_4))
        {
            int64_t rax_7;
            uint64_t rdx_9;
            rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(
                "\n        !FLAG!)\n          COM…", 0x5e);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_e8, rax_7, rdx_9);
            var_48 = var_d8;
            var_58 = var_e8;
        }
        else
        {
            int64_t rax_4;
            int64_t rdx_7;
            rax_4 = rbx(r13_4);
            alloc::str::join_generic_copy::hccb370bfa740ad62(&var_e8, rax_4, rdx_7, 
                " \n        !FLAG!)\n          CO…", 1);
            var_f8 = var_d8;
            var_108 = var_e8;
            int64_t rax_6;
            int64_t rdx_8;
            rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(
                "\n        !FLAG!)\n          COM…", 0x6d);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_58, rax_6, rdx_8, 
                "!CHOICES!!FLAG!# Usage: __rg_con…", 9, *var_108[8], var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
        }
        
        uint32_t* rax_9;
        char* rdx_10;
        rax_9 = (*(r12_3 + 0x30))(r13_4);
        var_128 = rax_9;
        var_120_1 = rdx_10;
        int64_t* var_88 = &var_128;
        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_e8 = &data_7e5ee8;
        *var_e8[8] = 1;
        int64_t var_c8_1 = 0;
        var_d8 = &var_88;
        int64_t var_d0_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_10, &var_e8);
        var_88 = var_108;
        int64_t** var_78_1 = var_f8;
        int64_t rbx_1 = *var_58[8];
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
            "!FLAG!# Usage: __rg_contains_opt…", 6, var_80_1, var_f8);
        int64_t rsi_8 = *var_e8[8];
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_8, var_d8 + rsi_8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
        char rax_11;
        uint64_t rdx_14;
        rax_11 = (*(r12_3 + 0x28))(r13_4);
        uint32_t var_68;
        
        if (rax_11 & 1)
        {
            var_68 = rdx_14;
            var_128 = &var_68;
            var_120_1 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_e8 = &data_7e5ef8;
            *var_e8[8] = 1;
            int64_t var_c8_2 = 0;
            var_d8 = &var_128;
            int64_t var_d0_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_14, 
                &var_e8);
            var_128 = var_108;
            var_118 = var_f8;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
                "!FLAG!# Usage: __rg_contains_opt…", 6, var_120_1, var_f8);
            int64_t rsi_10 = *var_e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_10, var_d8 + rsi_10);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        }
        
        int64_t rax_14;
        uint64_t rdx_18;
        rax_14 = (*(r12_3 + 0x40))(r13_4);
        
        if (rax_14)
        {
            var_68 = rax_14;
            uint64_t var_60_1 = rdx_18;
            var_128 = &var_68;
            var_120_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_e8 = &data_7e5ee8;
            *var_e8[8] = 1;
            int64_t var_c8_3 = 0;
            var_d8 = &var_128;
            int64_t var_d0_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_18, 
                &var_e8);
            var_128 = var_108;
            var_118 = var_f8;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
                "!FLAG!# Usage: __rg_contains_opt…", 6, var_120_1, var_f8);
            int64_t rsi_12 = *var_e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_12, var_d8 + rsi_12);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_58);
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_108, 
        "\n_rg() {\n  local i cur prev op…", 0x279, "!OPTS!!CASES!!CHOICES!!FLAG!# Us…", 6, var_98, 
        var_90);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_128, *var_108[8], var_f8, 
        "!CASES!!CHOICES!!FLAG!# Usage: _…", 7, var_b0, var_a8);
    int64_t rax_18;
    uint64_t rdx_23;
    rax_18 =
        core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h7f68c1791d2d143b(var_120_1, var_118);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_e8, rax_18, rdx_23);
    arg1[1] = var_d8;
    *arg1 = var_e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_b8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a0);
}
