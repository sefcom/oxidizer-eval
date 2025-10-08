
  uint64_t bat::preprocessor::try_parse_utf8_char::h1bda9850eb158fe9(char* arg1, int64_t arg2)

{
    int64_t rax_1;
    int64_t rdx_1;
    
    if (arg2)
        rax_1 = core::ops::function::FnOnce::call_once::h54c7237f01dba59c(arg1, 1);
    
    int64_t var_70;
    
    if (!arg2 || !rax_1)
        var_70 = 0;
    else
    {
        var_70 = rax_1;
        int64_t var_68_1 = rdx_1;
        int64_t var_60_1 = 1;
    }
    
    char* var_88 = arg1;
    int64_t var_80 = arg2;
    void var_89;
    void* var_78 = &var_89;
    void var_40;
    core::option::Option$LT$T$GT$::or_else::hfee0966e79903d38(&var_40, &var_70, &var_88);
    var_88 = arg1;
    int64_t var_80_1 = arg2;
    void* var_78_1 = &var_89;
    core::option::Option$LT$T$GT$::or_else::ha099be0b27fe940c(&var_70, &var_40, &var_88);
    var_88 = arg1;
    int64_t var_80_2 = arg2;
    void* var_78_2 = &var_89;
    int64_t var_58;
    core::option::Option$LT$T$GT$::or_else::h79e5d0e906669d4e(&var_58, &var_70, &var_88);
    
    if (var_58)
        return 
            bat::preprocessor::try_parse_utf8_char::_$u7b$$u7b$closure$u7d$$u7d$::h88b6350c93ea306c(
            &var_58);
    
    return 0x110000;
}
