
  int64_t* uu_env::string_parser::StringParser::peek_chunk::h29c563cfd7ddf009(int64_t* arg1, int64_t* arg2)

{
    int64_t var_28;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(&var_28, arg2, 
        arg2[4]);
    int64_t rax;
    
    if (!var_28)
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
