
  int64_t just::parser::Parser::cook_string::hac60a0f07317bc6b(uint64_t arg1, int128_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_128 = 0;
    int64_t var_120 = 1;
    int64_t var_118 = 0;
    int64_t var_198 = -0x7fffffffffffffff;
    int64_t var_110 = arg3;
    int64_t var_108 = arg4 + arg3;
    char rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_110, arg1);
    
    if (!(rax & 1))
    {
        label_67e231:
        *(arg1 + 0x10) = var_118;
        *arg1 = var_128;
        *(arg1 + 0x48) = 0x25;
        return core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
    }
    
    int64_t rax_2 = var_198 ^ 0x8000000000000000;
    int64_t rcx_1 = 3;
    
    if (rax_2 < 3)
        rcx_1 = rax_2;
    
    char* var_190;
    int64_t var_188;
    int128_t var_178;
    int128_t var_168;
    int128_t var_158;
    int128_t var_148;
    int128_t var_138;
    int64_t var_100;
    
    switch (rcx_1)
    {
        case 0:
        {
            label_67e2bc:
            uint64_t rax_7 = rdx - 0x5c;
            
            if (rax_7 > 0x19)
            {
                if (rdx == 0xa)
                    goto label_67e495;
                
                if (rdx != 0x22)
                    goto label_67e318;
                
                goto label_67e2ee;
            }
            
            int32_t rsi_1 = 0xa;
            
            switch (rax_7)
            {
                case 0:
                {
                    label_67e2ee:
                    rsi_1 = rdx;
                    goto label_67e2fc;
                }
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x17:
                {
                    label_67e318:
                    int32_t var_f8_1 = rdx;
                    var_100 = -0x7fffffffffffffd6;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    label_67e271:
                    *(arg1 + 0x40) = var_138;
                    int128_t zmm0_1 = var_178;
                    *(arg1 + 0x30) = var_148;
                    *(arg1 + 0x20) = var_158;
                    *(arg1 + 0x10) = var_168;
                    *arg1 = zmm0_1;
                    break;
                }
                case 0x12:
                {
                    goto label_67e2fc;
                }
                case 0x16:
                {
                    rsi_1 = 0xd;
                    label_67e2fc:
                    alloc::string::String::push::h0ede46164189e411(&var_128, rsi_1);
                    label_67e495:
                    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                    var_198 = -0x7fffffffffffffff;
                    goto label_67e34d;
                }
                case 0x18:
                {
                    rsi_1 = 9;
                    goto label_67e2fc;
                }
                case 0x19:
                {
                    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                    var_198 = -0x7ffffffffffffffe;
                    goto label_67e34d;
                }
            }
            break;
        }
        case 1:
        {
            label_67e377:
            
            if (rdx != 0x5c)
            {
                alloc::string::String::push::h0ede46164189e411(&var_128, rdx);
                goto label_67e34d;
            }
            
            core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
            var_198 = -0x8000000000000000;
            goto label_67e34d;
        }
        case 2:
        {
            while (true)
            {
                if (rdx != 0x7b)
                {
                    int32_t var_f8_2 = rdx;
                    var_100 = -0x7fffffffffffffc6;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto label_67e271;
                }
                
                core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                var_198 = 0;
                var_190 = 1;
                var_188 = 0;
                label_67e34d:
                char rax_10;
                rax_10 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_110, arg1);
                
                if (!(rax_10 & 1))
                {
                    if (var_198 == -0x7fffffffffffffff)
                        goto label_67e231;
                    
                    var_100 = -0x7fffffffffffffc2;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto label_67e271;
                }
                
                int64_t rax_12 = var_198 ^ 0x8000000000000000;
                int64_t rcx_2 = 3;
                
                if (rax_12 < 3)
                    rcx_2 = rax_12;
                
                switch (rcx_2)
                {
                    case 0:
                    {
                        goto label_67e2bc;
                    }
                    case 1:
                    {
                        goto label_67e377;
                    }
                    case 2:
                    {
                        continue;
                    }
                    case 3:
                    {
                        break;
                        break;
                    }
                }
            }
            
            goto label_67e398;
        }
        case 3:
        {
            label_67e398:
            int32_t var_f8;
            
            if (rdx != 0x7d)
            {
                uint64_t rax_19;
                
                if (rdx - 0x30 >= 0xa)
                    rax_19 = rdx - 0x41;
                
                if (rdx - 0x30 >= 0xa && (rax_19 > 0x25 || !TEST_BITQ(0x3f0000003f, rax_19)))
                {
                    int32_t var_f8_3 = rdx;
                    var_100 = -0x7fffffffffffffc7;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto label_67e271;
                }
                
                alloc::string::String::push::h0ede46164189e411(&var_198, rdx);
                
                if (var_188 < 7)
                    goto label_67e34d;
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_178, &var_198);
                int64_t var_e8_2 = var_168;
                var_f8 = var_178;
                var_100 = -0x7fffffffffffffc4;
                just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                goto label_67e271;
            }
            
            if (!var_188)
            {
                var_100 = -0x7fffffffffffffc5;
                just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                goto label_67e271;
            }
            
            int32_t rax_16 = core::result::Result$LT$T$C$E$GT$::unwrap::hc3cafd2616de95be(
                core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(var_190, 
                var_188));
            
            if ((rax_16 ^ 0xd800) - 0x110000 > 0xffef07ff)
            {
                label_67e48d:
                alloc::string::String::push::h0ede46164189e411(&var_128, rax_16);
                goto label_67e495;
            }
            
            int128_t var_48;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_48, &var_198);
            int64_t var_38;
            int64_t var_e8_1 = var_38;
            var_f8 = var_48;
            var_100 = -0x7fffffffffffffc3;
            just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
            rax_16 = var_178;
            char rcx_7 = *var_138[8];
            
            if (rcx_7 == 0x25)
                goto label_67e48d;
            
            *(arg1 + 0x44) = *var_138[4];
            *(arg1 + 0x34) = var_148;
            *(arg1 + 0x24) = var_158;
            *(arg1 + 0x14) = var_168;
            int128_t var_174;
            *(arg1 + 4) = var_174;
            *(arg1 + 0x49) = *var_138[9];
            *(arg1 + 0x4c) = *var_138[0xc];
            *arg1 = rax_16;
            *(arg1 + 0x48) = rcx_7;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(
        &var_198);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_128);
}
