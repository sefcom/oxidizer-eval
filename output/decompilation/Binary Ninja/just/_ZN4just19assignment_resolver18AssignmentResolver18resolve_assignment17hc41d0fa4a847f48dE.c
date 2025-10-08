
  int128_t* just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(int128_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t var_138 = arg3;
    uint64_t var_130 = arg4;
    int128_t* result =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(arg2[4], 
        arg2[5], arg3, arg4);
    
    if (!result)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, arg3, arg4);
        int64_t* rax = arg2[3];
        int64_t rax_1;
        uint64_t rdx_2;
        rax_1 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(
            *rax, rax[1], arg3, arg4);
        int64_t* var_1a8;
        void** const var_190;
        int64_t var_128;
        int128_t var_120;
        
        if (!rax_1)
        {
            var_1a8 = &var_138;
            int64_t (* var_1a0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_190 = &data_82db70;
            int64_t var_188_1 = 2;
            int64_t var_170_1 = 0;
            int64_t* var_180_1 = &var_1a8;
            int64_t var_178_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_120, 0, rdx_2, 
                &var_190);
            char var_80_1 = 0x23;
            int64_t var_c0 = 1;
            int64_t var_b8_1 = 0;
            int64_t var_b0_1 = 1;
            int128_t s;
            __builtin_memset(&s, 0, 0x28);
            var_128 = -0x7fffffffffffffd8;
            return just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_c0, 
                &var_128);
        }
        
        just::expression::Expression::variables::h421cbbeec48818c6(&var_1a8, rax_1);
        
        while (true)
        {
            void var_78;
            _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_78, &var_1a8);
            int64_t var_1a0;
            char var_38;
            
            if (var_38 == 0x25)
            {
                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                    var_1a8, var_1a0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h229911f973c84f56(&arg2[4], arg3, arg4);
                int64_t rax_10 = arg2[2];
                
                if (rax_10)
                    arg2[2] = rax_10 - 1;
                
                result = arg1;
                *(result + 0x48) = 0x25;
                break;
            }
            
            void* rax_2;
            uint64_t rdx_3;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
            void* var_1c0 = rax_2;
            
            if (!alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(
                arg2[4], arg2[5], rax_2, rdx_3) && !
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h10d5bbd0b5ef08d9(
                just::constants::constants::h3594f93ebbf36f97(), var_1c0, rdx_3))
            {
                int64_t var_180;
                int64_t var_170;
                int128_t var_160;
                int128_t var_150;
                
                if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(&var_1c0, arg2[1], arg2[2]))
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, var_1c0, rdx_3);
                    void** rax_12 = arg2[3];
                    int64_t rax_13 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_12, rax_12[1], var_1c0, rdx_3);
                    
                    if (!rax_13)
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "no entry found for keyattempted …");
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc8878f0d281318f9(&var_190, arg2[1], arg2[2]);
                    int128_t var_108_1 = var_1c0;
                    var_120 = var_190;
                    int64_t var_110_1 = var_180;
                    var_128 = -0x7fffffffffffffe8;
                    just::token::Token::error::h986494da066a4455(&var_190, rax_13 + 0x80, &var_128);
                    arg1[4] = var_150;
                    int128_t zmm0_4 = var_190;
                    arg1[3] = var_160;
                    arg1[2] = var_170;
                    arg1[1] = var_180;
                    *arg1 = zmm0_4;
                }
                else
                {
                    void** rax_7 = arg2[3];
                    int128_t* rax_9;
                    int128_t zmm0_2;
                    int128_t zmm1_1;
                    int128_t zmm2_1;
                    int128_t zmm3_1;
                    
                    if (!alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_7, rax_7[1], var_1c0, rdx_3))
                    {
                        var_120 = var_1c0;
                        var_128 = -0x7fffffffffffffcc;
                        just::token::Token::error::h986494da066a4455(&var_190, &var_78, &var_128);
                        rax_9 = arg1;
                        rax_9[4] = var_150;
                        zmm0_2 = var_190;
                        zmm1_1 = var_180;
                        zmm2_1 = var_170;
                        zmm3_1 = var_160;
                    }
                    else
                    {
                        just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(&var_128, arg2, var_1c0, rdx_3);
                        char var_e0;
                        
                        if (var_e0 == 0x25)
                            continue;
                        else
                        {
                            rax_9 = arg1;
                            int128_t var_e8;
                            rax_9[4] = var_e8;
                            zmm0_2 = var_128;
                            zmm1_1 = var_120;
                            int128_t var_108;
                            zmm2_1 = var_108;
                            int128_t var_f8;
                            zmm3_1 = var_f8;
                        }
                    }
                    
                    rax_9[3] = zmm3_1;
                    rax_9[2] = zmm2_1;
                    rax_9[1] = zmm1_1;
                    *rax_9 = zmm0_2;
                }
                return 
                    core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                    var_1a8, var_1a0);
            }
        }
    }
    else
        *(arg1 + 0x48) = 0x25;
    
    return result;
}
