
  int64_t just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(char* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_108 = 0;
    int64_t var_100 = 1;
    int64_t result = 0;
    int64_t var_d0 = arg3;
    int64_t var_c8 = (arg4 << 7) + arg3;
    int64_t var_c0 = 0;
    int64_t rax;
    int32_t* i;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he3b34ff9b5c4663a(&var_d0);
    
    if (i)
    {
        int64_t rbx_1 = rax;
        
        do
        {
            char* rdi_7;
            char var_98;
            int64_t var_90;
            int64_t var_88;
            
            if (*i != 0x12)
            {
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_98, arg2, 
                    i);
                char rax_5 = var_98;
                
                if (rax_5 != 0x38)
                {
                    int64_t var_38;
                    *(arg1 + 0x60) = var_38;
                    int128_t var_48;
                    *(arg1 + 0x50) = var_48;
                    int128_t var_58;
                    *(arg1 + 0x40) = var_58;
                    int128_t var_68;
                    *(arg1 + 0x30) = var_68;
                    int128_t var_78;
                    *(arg1 + 0x20) = var_78;
                    *(arg1 + 0x10) = var_88;
                    int128_t var_97;
                    *(arg1 + 1) = var_97;
                    *arg1 = rax_5;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_108);
                }
                
                int128_t var_a9;
                int64_t var_80;
                *var_a9[8] = var_80;
                int128_t var_e8 = var_90;
                int64_t rdx_5 = *var_a9[8];
                int64_t var_d8_1 = rdx_5;
                int64_t rsi_4 = *var_e8[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_108, rsi_4, rdx_5 + rsi_4);
                rdi_7 = &var_e8;
            }
            else
            {
                void* rax_2;
                int64_t rdx_1;
                rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&i[2]);
                alloc::str::_$LT$impl$u20$str$GT$::replace::h89cd4697c7693803(&var_98, rax_2, 
                    rdx_1, "{{{{Q", 4, "{{missing parameter without defa…", 2);
                int64_t rsi_1 = var_90;
                int64_t rdx_4;
                
                if (!(arg5 & !rbx_1))
                    rdx_4 = var_88 + rsi_1;
                else
                {
                    int64_t rax_4;
                    int64_t rdx_3;
                    rax_4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h646b688298f76263(
                        rsi_1, var_88);
                    rsi_1 = rax_4;
                    rdx_4 = rdx_3 + rax_4;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_108, rsi_1, rdx_4);
                rdi_7 = &var_98;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(rdi_7);
            int64_t rax_1;
            rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he3b34ff9b5c4663a(&var_d0);
            rbx_1 = rax_1;
        } while (i);
    }
    
    *(arg1 + 0x18) = result;
    *(arg1 + 8) = var_108;
    *arg1 = 0x38;
    return result;
}
