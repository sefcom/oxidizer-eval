
  uint64_t uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(int32_t* arg1, int64_t* arg2)

{
    uint64_t result =
        uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
    int32_t rcx = 0xc;
    
    if (result - 0x30 <= 9)
    {
        int64_t r14_1 = arg2[4];
        int32_t var_2c = 0;
        char* rax;
        uint64_t rdx_1;
        rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(result, &var_2c);
        int128_t var_28;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_28, rax, rdx_1);
        *(arg1 + 8) = r14_1;
        *(arg1 + 0x10) = var_28;
        uint64_t result_1;
        result = result_1;
        *(arg1 + 0x20) = result;
        rcx = 7;
    }
    
    *arg1 = rcx;
    return result;
}
