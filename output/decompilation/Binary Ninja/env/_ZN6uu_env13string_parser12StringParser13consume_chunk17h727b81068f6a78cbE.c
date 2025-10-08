
  int64_t* uu_env::string_parser::StringParser::consume_chunk::h727b81068f6a78cb(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = arg2[4];
    int32_t var_48;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h90aefca5fb8ee726(&var_48, arg2, 
        r15);
    int64_t rax;
    
    if (var_48 != 1)
    {
        int32_t var_37;
        *(arg1 + 0x14) = var_37;
        *(arg1 + 0x11) = var_37;
        int64_t var_30;
        uu_env::string_parser::StringParser::set_pointer::h0708f02e2329cb25(arg2, r15 + var_30);
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
