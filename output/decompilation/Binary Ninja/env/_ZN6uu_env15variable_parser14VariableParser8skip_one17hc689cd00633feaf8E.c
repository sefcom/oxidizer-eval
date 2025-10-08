
  int64_t* uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(int32_t* arg1, int64_t* arg2)

{
    int32_t var_20;
    int64_t* rax =
        uu_env::string_parser::StringParser::consume_chunk::h727b81068f6a78cb(&var_20, arg2);
    
    if (var_20 != 1)
    {
        *arg1 = 0xc;
        return rax;
    }
    
    int64_t var_18;
    *(arg1 + 8) = var_18;
    *(arg1 + 0x10) = var_18;
    char var_10;
    arg1[6] = var_10;
    *arg1 = 0xb;
    return var_18;
}
