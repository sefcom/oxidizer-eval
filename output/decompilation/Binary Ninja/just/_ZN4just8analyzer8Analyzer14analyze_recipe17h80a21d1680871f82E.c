
  int64_t just::analyzer::Analyzer::analyze_recipe::h80a21d1680871f82(int128_t* arg1, void* arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    void* var_b0 = nullptr;
    int64_t var_a0 = 0;
    int64_t rax = *(arg2 + 0x58);
    int128_t var_100;
    int64_t var_98;
    
    if (rax)
    {
        int64_t rbx_1 = rax * 0xd0;
        int128_t* r15_2 = *(arg2 + 0x50) + 0x80;
        rbp = 0;
        
        while (true)
        {
            void* rax_1;
            uint64_t rdx_1;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
            int64_t var_a8;
            
            if (alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(
                var_b0, var_a8, rax_1, rdx_1))
            {
                void* rax_19;
                int64_t rdx_14;
                rax_19 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                void* rax_20;
                int64_t rdx_15;
                rax_20 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
                void* var_90_2 = rax_19;
                int64_t var_88_2 = rdx_14;
                void* var_80_1 = rax_20;
                int64_t var_78_1 = rdx_15;
                var_98 = -0x7fffffffffffffe4;
                just::token::Token::error::h986494da066a4455(&var_100, r15_2, &var_98);
                break;
            }
            
            void* rax_3;
            uint64_t rdx_3;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h229911f973c84f56(
                &var_b0, rax_3, rdx_3);
            bool rax_4 = r15_2[-8] != 0x12;
            
            if ((~rbp | rax_4) & 1)
                rbp |= rax_4;
            else if (*(r15_2 + 0x49) != 2)
            {
                void* rax_5;
                int64_t rdx_4;
                rax_5 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
                void* var_90_1 = rax_5;
                int64_t var_88_1 = rdx_4;
                var_98 = -0x7fffffffffffffcf;
                just::token::Token::error::h986494da066a4455(&var_100, r15_2, &var_98);
                break;
            }
            
            r15_2 = &r15_2[0xd];
            int64_t temp0_1 = rbx_1;
            rbx_1 -= 0xd0;
            
            if (temp0_1 == 0xd0)
                goto label_655b87;
        }
        
        goto label_655e29;
    }
    
    label_655b87:
    void* r15_3 = *(arg2 + 8);
    int64_t i = *(arg2 + 0x10) << 5;
    char rax_7 = *(arg2 + 0xfe);
    
    if (!(rax_7 & 1))
    {
        void* rbx_3 = i + r15_3;
        char rax_8 = 0;
        
        while (true)
        {
            rbp = r15_3 != rbx_3;
            
            if (r15_3 == rbx_3)
                break;
            
            if (!(rax_8 & 1) && *(r15_3 + 0x10))
            {
                int32_t* r12_1 = *(r15_3 + 8);
                
                if (*r12_1 == 0x12)
                {
                    void* rax_9;
                    int64_t rdx_6;
                    rax_9 = just::token::Token::lexeme::h66587cdf67f63270(&r12_1[2]);
                    var_98 = 0;
                    char* rax_10;
                    uint64_t rdx_7;
                    rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_98);
                    char rax_11 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                        rax_9, rdx_6, rax_10, rdx_7);
                    char rax_13;
                    
                    if (!rax_11)
                    {
                        var_98 = 0;
                        char* rax_12;
                        uint64_t rdx_9;
                        rax_12 =
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(9, &var_98);
                        rax_13 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_9, rdx_6, rax_12, rdx_9);
                    }
                    
                    if (rax_11 || rax_13)
                    {
                        var_98 = -0x7fffffffffffffdd;
                        just::token::Token::error::h986494da066a4455(&var_100, &r12_1[2], &var_98);
                        goto label_655e29;
                    }
                }
            }
            
            int32_t r14_2;
            r14_2 = rbp;
            rax_8 =
                just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_3 + 8), *(r15_3 + 0x10));
            r15_3 += r14_2 << 5;
        }
    }
    else
    {
        while (i)
        {
            i -= 0x20;
            just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_3 + 8), *(r15_3 + 0x10));
            r15_3 += 0x20;
        }
    }
    
    int64_t* rax_15;
    
    if (!(rax_7 & 1))
        rax_15 = just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg2 + 0xd8, 4);
    
    if (rax_7 & 1 || !rax_15)
        *(arg1 + 0x48) = 0x25;
    else
    {
        void* rax_16;
        int64_t rcx_6;
        int64_t rdx_12;
        int64_t r8_1;
        rax_16 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
        _$LT$just..attribute..Attribute$u20$as$u20$core..clone..Clone$GT$::clone::hf7be862012ab759c(
            &var_100, rax_15, rdx_12, rcx_6, r8_1);
        char const* const var_50_1 = "Recipesrc/argument_parser.rs:: […";
        int64_t var_48_1 = 6;
        void* var_40_1 = rax_16;
        int64_t var_38_1 = rdx_12;
        var_98 = var_100;
        int128_t var_f0;
        int64_t var_88;
        var_88 = var_f0;
        int128_t var_e0;
        int64_t var_78;
        var_78 = var_e0;
        int128_t var_d0;
        int128_t var_68_1 = var_d0;
        int128_t var_c0;
        int64_t var_58_1 = var_c0;
        just::token::Token::error::h986494da066a4455(&var_100, arg2 + 0x90, &var_98);
        label_655e29:
        arg1[4] = var_c0;
        int128_t zmm0_1 = var_100;
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0_1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$$RF$str$GT$$GT$::h72207aaaf59d4549(&var_b0);
}
