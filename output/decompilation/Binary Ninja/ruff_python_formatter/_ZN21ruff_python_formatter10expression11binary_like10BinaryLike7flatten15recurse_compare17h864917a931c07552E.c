
  uint64_t ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, char* arg7, int64_t arg8, void** arg9)

{
    uint64_t rax_1;
    int64_t rdx;
    rax_1 = smallvec::SmallVec$LT$A$GT$::try_reserve::h1e9b0af026a914f8(arg9, (arg1[4] << 1) + 1);
    smallvec::infallible::heb4b400111f45abd(rax_1);
    int64_t var_b0 = *arg1;
    int64_t var_a8 = arg2;
    int64_t var_a0 = arg3;
    void** const var_b8 = nullptr;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_b8, arg6, arg7, arg8, arg9);
    uint64_t result = arg1[4];
    uint64_t result_1 = result;
    int64_t rcx_1 = arg1[2];
    int64_t var_58 = rcx_1;
    
    if (result != rcx_1)
    {
        var_b8 = &data_97d4a8;
        int64_t var_b0_3 = 1;
        int64_t var_a8_3 = 8;
        var_a0 = {0};
        core::panicking::assert_failed::h449f2a7fe5426575(0, &result_1, &var_58, &var_b8);
        /* no return */
    }
    
    if (!result)
        return result;
    
    int64_t rsi_3 = arg1[1];
    int64_t rcx_2 = arg1[3];
    core::iter::traits::iterator::Iterator::zip::hd5bd690253e7c151(&var_b8, rsi_3, 
        result + rsi_3 - 1, rcx_2, result - 1);
    char* i;
    int64_t rdx_7;
    i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::haf805d6695fcc6f5(&var_b8);
    
    if (i)
    {
        int64_t r15_1 = rdx_7;
        
        do
        {
            int64_t var_48_1 = 4;
            int64_t var_40_1 = 0;
            char var_38_1 = 1;
            char var_37_1 = *i;
            int64_t var_50 = 3;
            smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_50);
            int64_t var_48_2 = r15_1;
            var_50 = 1;
            ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_50, arg6, arg7, arg8, arg9);
            int64_t rdx_9;
            i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::haf805d6695fcc6f5(&var_b8);
            r15_1 = rdx_9;
        } while (i);
    }
    
    int64_t var_b0_1 = 4;
    int64_t var_a8_1 = 0;
    var_a0 = 1;
    *var_a0[1] = *(result + rsi_3 - 1);
    var_b8 = 3;
    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_b8);
    int64_t var_b0_2 = (result - 1) * 0x50 + rcx_2;
    int64_t var_a8_2 = arg4;
    int64_t var_a0_1 = arg5;
    var_b8 = 2;
    return 
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_b8, arg6, arg7, arg8, arg9);
}
