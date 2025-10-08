
  int64_t* uu_env::string_parser::StringParser::peek_chunk::hf5c7644aaf7843cb(int64_t* arg1, int64_t* arg2)

{
    char var_28;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h90aefca5fb8ee726(&var_28, arg2, 
        arg2[4]);
    int64_t rax;
    
    if (!(var_28 & 1))
    {
        int128_t var_20;
        *(arg1 + 8) = var_20;
        rax = 1;
    }
    else
        rax = 0;
    
    *arg1 = rax;
    return arg1;
}
