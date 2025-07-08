
  int64_t uu_csplit::patterns::validate_line_numbers::hf11a42b855ce2ce0(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 * 0x38 + arg2;
    int64_t result_1;
    core::iter::traits::iterator::Iterator::try_fold::he4ea7283460072b7(&result_1, &var_40);
    int64_t result = result_1;
    
    if (result != 0xc)
    {
        int64_t var_10;
        arg1[4] = var_10;
        int128_t var_20;
        *(arg1 + 0x10) = var_20;
        int64_t var_28;
        arg1[1] = var_28;
    }
    
    *arg1 = result;
    return result;
}
