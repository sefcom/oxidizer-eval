
  int64_t* bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h9587e6005b35f349(char* arg1, void* arg2, char* arg3, int64_t arg4, void* arg5)

{
    int32_t var_30;
    int64_t* result = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, arg3, arg4);
    
    if (var_30 != 1)
    {
        int64_t var_28;
        int64_t var_20;
        int64_t rdx_2;
        result =
            bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix::h54db9f7a9094d832(
            arg2, var_28, var_20);
        
        if (result)
            /* tailcall */
            return bat::syntax_mapping::SyntaxMapping::get_syntax_for::_$u7b$$u7b$closure$u7d$$u7d$::h5422123a2beb415c(arg1, arg5, result);
    }
    
    *(arg1 + 8) = 3;
    *arg1 = 0xd;
    return result;
}
