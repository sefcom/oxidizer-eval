
  uint64_t ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, char* arg7, int64_t arg8, void** arg9)

{
    uint64_t result;
    int64_t rdx;
    result = smallvec::SmallVec$LT$A$GT$::try_reserve::h1e9b0af026a914f8(arg9, 
        (*(arg1 + 0x10) << 1) + -ffffffffffffffff);
    smallvec::infallible::heb4b400111f45abd(result);
    int64_t r15 = *(arg1 + 0x10);
    
    if (r15)
    {
        int64_t rbp_1 = *(arg1 + 8);
        int64_t var_68_1 = rbp_1;
        int64_t var_60_1 = arg2;
        int64_t var_58_1 = arg3;
        int64_t var_70 = 0;
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
            &var_70, arg6, arg7, arg8, arg9);
        int64_t var_68_2 = 4;
        int64_t var_60_2 = 0;
        var_58_1 = 2;
        *var_58_1[1] = *(arg1 + 0x24);
        var_70 = 3;
        result = smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_70);
        
        if (r15 != 1)
        {
            int64_t r15_2 = r15 * 0x50;
            int64_t rbp_2 = rbp_1 + 0x50;
            int64_t* r8_1 = arg9;
            
            if (rbp_2 != r15_2 + rbp_1 - 0x50)
            {
                int64_t i_1 = r15_2 - 0xa0;
                int64_t i;
                
                do
                {
                    int64_t var_68_3 = rbp_2;
                    rbp_2 += 0x50;
                    var_70 = 1;
                    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_70, arg6, arg7, arg8, r8_1);
                    int64_t var_68_4 = 4;
                    int64_t var_60_3 = 0;
                    var_58_1 = 2;
                    *var_58_1[1] = *(arg1 + 0x24);
                    var_70 = 3;
                    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(r8_1, &var_70);
                    i = i_1;
                    i_1 -= 0x50;
                } while (i != 0x50);
            }
            
            int64_t var_68_5 = r15_2 + rbp_1 - 0x50;
            int64_t var_60_4 = arg4;
            int64_t var_58_2 = arg5;
            var_70 = 2;
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_70, arg6, arg7, arg8, r8_1);
        }
    }
    
    return result;
}
