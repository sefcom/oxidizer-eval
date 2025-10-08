
  int64_t rg::flags::complete::powershell::generate::h627f818806070f85(int128_t* arg1)

{
    int64_t var_f0 = 0;
    char* var_e8 = 1;
    void* var_e0 = nullptr;
    int64_t* const var_60 = &data_7e9308;
    char const (** const var_58)[0xb8] = &data_7e9988;
    int64_t var_50 = 0;
    int64_t rax;
    int64_t* i_2;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d69f2644738cbfc(&var_60);
    char* rbx;
    void* const r14;
    
    if (!i_2)
    {
        rbx = 1;
        r14 = nullptr;
    }
    else
    {
        int64_t rbp_1 = rax;
        int64_t* i_1 = i_2;
        int64_t* i;
        
        do
        {
            int64_t rax_3;
            int64_t rdx;
            rax_3 = (*(i_1[1] + 0x58))(*i_1);
            void var_48;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_48, rax_3, rdx, 
                "' -r -f\'complete -c rg !SHORT! …", 1, "''[CompletionResult]::new('!DASH…", 2);
            int64_t** rax_5;
            uint64_t rdx_1;
            rax_5 = (*(i_1[1] + 0x30))(*i_1);
            int64_t** var_120 = rax_5;
            int64_t* var_108 = &var_120;
            int64_t (* var_100_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            char const (** const var_d8)[0xc1] = &data_7e5ee8;
            int64_t var_d0_1 = 1;
            int64_t var_b8_1 = 0;
            int64_t** var_c8_1 = &var_108;
            int64_t var_c0_1 = 1;
            int128_t var_138;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_1, 
                &var_d8);
            int128_t var_88 = var_138;
            char* rax_8;
            void* rdx_2;
            rax_8 = (*(i_1[1] + 0x30))(*i_1);
            
            if (rbp_1)
                alloc::string::String::push::h0ede46164189e411(&var_f0, 0xa);
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "      \n      !FLAGS!''[Completi…", "\n      !FLAGS!''[CompletionResu…");
            void* var_128;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                0xb, *var_88[8], var_128);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_1, 
                var_c8_1, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, rax_8, rdx_2);
            char* var_40;
            void* var_38;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, *var_138[8], 
                var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
            void* var_110;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, rdx_1, var_110 + rdx_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
            char rax_11;
            uint64_t rdx_7;
            rax_11 = (*(i_1[1] + 0x28))(*i_1);
            int128_t var_a8;
            
            if (rax_11 & 1)
            {
                uint32_t r15_2 = rdx_7;
                var_108 = r15_2;
                var_120 = &var_108;
                int64_t (* var_118_2)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_d8 = &data_7e5ef8;
                int64_t var_d0_2 = 1;
                int64_t var_b8_2 = 0;
                int64_t*** var_c8_2 = &var_120;
                int64_t var_c0_2 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_7, 
                    &var_d8);
                var_a8 = var_138;
                var_138 = 0;
                char* rax_13;
                uint64_t rdx_8;
                rax_13 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(r15_2, &var_138);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_d8, rax_13, rdx_8);
                var_108 = var_d8;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "\n      !FLAGS!''[CompletionResu…", "!FLAGS!''[CompletionResult]::new…");
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                    "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                    0xb, *var_a8[8], var_128);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_2, 
                    var_c8_2, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, var_100_1, var_c8_2);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, 
                    *var_138[8], var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_118_2, var_110 + var_118_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a8);
            }
            
            int64_t rax_18;
            uint64_t rdx_13;
            rax_18 = (*(i_1[1] + 0x40))(*i_1);
            
            if (rax_18)
            {
                var_a8 = rax_18;
                *var_a8[8] = rdx_13;
                var_120 = &var_a8;
                int64_t (* var_118_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
                var_d8 = &data_7e5ee8;
                int64_t var_d0_3 = 1;
                int64_t var_b8_3 = 0;
                int64_t*** var_c8_3 = &var_120;
                int64_t var_c0_3 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_13, 
                    &var_d8);
                var_108 = var_138;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "\n      !FLAGS!''[CompletionResu…", "!FLAGS!''[CompletionResult]::new…");
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                    "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                    0xb, var_100_1, var_128);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_3, 
                    var_c8_3, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, var_a8, *var_a8[8]);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, 
                    *var_138[8], var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_118_3, var_110 + var_118_3);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_48);
            int64_t rax_1;
            rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d69f2644738cbfc(&var_60);
            rbp_1 = rax_1;
            i_1 = i;
        } while (i);
        rbx = var_e8;
        r14 = var_e0;
    }
    
    int64_t rax_22;
    int64_t rdx_18;
    rax_22 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h7f68c1791d2d143b(
        "\nusing namespace System.Managem…", 0x334);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(arg1, rax_22, rdx_18, 
        "!FLAGS!''[CompletionResult]::new…", 7, rbx, r14);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_f0);
}
