
  int64_t uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(int32_t* arg1, int64_t* arg2)

{
    int64_t var_20;
    uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&var_20, arg2);
    int32_t result;
    
    if (!var_20)
        result = 8;
    else
    {
        int64_t var_18;
        *(arg1 + 8) = var_18;
        *(arg1 + 0x10) = var_18;
        char var_10;
        arg1[6] = var_10;
        result = 5;
    }
    
    *arg1 = result;
    return result;
}
