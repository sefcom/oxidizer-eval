
  int64_t uu_env::string_expander::StringExpander::put_one_char::h09d64e56b18d506a(int64_t* arg1, int32_t arg2)

{
    int32_t var_2c = 0;
    char* rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(arg2, &var_2c);
    void var_28;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_28, rax_1, rdx);
    return uu_env::string_expander::StringExpander::put_string::hfe19c27602ea80b0(arg1, &var_28);
}
