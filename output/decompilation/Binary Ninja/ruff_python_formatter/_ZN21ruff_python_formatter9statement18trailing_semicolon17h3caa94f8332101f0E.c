
  int64_t ruff_python_formatter::statement::trailing_semicolon::h3caa94f8332101f0(int32_t* arg1, int64_t arg2, int64_t arg3, char* arg4, int64_t arg5)

{
    int64_t var_68 = arg2;
    int64_t var_60 = arg3;
    void var_58;
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_58, 
        _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_68), 
        arg4, arg5);
    char var_28 = 0;
    int64_t var_78;
    _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::had9a8a3d821e7462(&var_78, &var_58);
    int32_t result = 0;
    char var_70;
    
    if (var_70 == 0xd)
    {
        *(arg1 + 4) = var_78;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
