
  int64_t just::lexer::Lexer::is_identifier::h7647ec4ff2f9f03d(int64_t arg1, int64_t arg2)

{
    uint64_t rbx_1 = arg2 + arg1;
    int64_t var_28 = arg1;
    uint64_t var_20 = rbx_1;
    char rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_28, rbx_1);
    
    if (rax & 1)
    {
        if (rdx - 0x61 < 0x1a)
        {
            label_670e25:
            var_28 = arg1;
            uint64_t var_20_1 = rbx_1;
            int64_t var_18_1 = 1;
            int64_t rsi = 1;
            
            while (true)
            {
                int64_t result;
                
                if (rsi)
                {
                    var_18_1 = 0;
                    result = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_28, rsi);
                }
                
                if (!rsi || !result)
                {
                    int32_t rdx_1;
                    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_28, 
                        &var_28);
                    
                    if (result & 1)
                    {
                        if (rdx_1 - 0x61 >= 0x1a)
                        {
                            int32_t rax_3;
                            
                            if (rdx_1 >= 0x41)
                                rax_3 = rdx_1 < 0x5b;
                            
                            if (rdx_1 < 0x41 || !(rdx_1 == 0x5f | rax_3))
                            {
                                int32_t rax_2;
                                rax_2 = rdx_1 - 0x30 < 0xa;
                                
                                if (!(rdx_1 == 0x2d | rax_2))
                                    break;
                            }
                        }
                        
                        rsi = var_18_1;
                        continue;
                    }
                }
                
                result = 1;
                return result;
            }
        }
        else if (rdx >= 0x41)
        {
            int32_t rax_1;
            rax_1 = rdx >= 0x5b;
            
            if (!(rax_1 & rdx != 0x5f))
                goto label_670e25;
        }
    }
    
    return 0;
}
