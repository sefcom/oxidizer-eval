
  int64_t* uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = arg2[4];
    int64_t var_48;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(&var_48, arg2, 
        r15);
    int64_t rax;
    
    if (!var_48)
    {
        int32_t var_37;
        *(arg1 + 0x14) = var_37;
        *(arg1 + 0x11) = var_37;
        int64_t var_30;
        uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(arg2, r15 + var_30);
        rax = 0;
    }
    else
        rax = 1;
    
    int64_t var_40;
    arg1[1] = var_40;
    char var_38;
    arg1[2] = var_38;
    *arg1 = rax;
    return arg1;
}
