
  int64_t just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(uint64_t arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_80 = arg3;
    int64_t var_78 = arg4 + arg3;
    char result;
    uint64_t rdx;
    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_80, arg1);
    
    if (!(result & 1))
    {
        label_6709ee:
        *(arg1 + 0x48) = 0x25;
    }
    else
    {
        while (true)
        {
            int128_t var_70;
            result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_70, arg2, rdx);
            char var_28;
            
            if (var_28 != 0x25)
            {
                int128_t var_30;
                *(arg1 + 0x40) = var_30;
                int128_t zmm0_1 = var_70;
                int128_t var_40;
                *(arg1 + 0x30) = var_40;
                int128_t var_50;
                *(arg1 + 0x20) = var_50;
                int128_t var_60;
                *(arg1 + 0x10) = var_60;
                *arg1 = zmm0_1;
                break;
            }
            
            result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_80, arg1);
            
            if (!(result & 1))
                goto label_6709ee;
        }
    }
    
    return result;
}
