
  int64_t uu_env::string_expander::StringExpander::put_one_char::h2fb61a7ef56ce790(int64_t* arg1, int32_t arg2)

{
    int32_t var_2c = 0;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(arg2, &var_2c);
    void var_28;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_28, rax_1, 
        rdx);
    return uu_env::string_expander::StringExpander::put_string::h9dc86166bab9a39e(arg1, &var_28);
}
