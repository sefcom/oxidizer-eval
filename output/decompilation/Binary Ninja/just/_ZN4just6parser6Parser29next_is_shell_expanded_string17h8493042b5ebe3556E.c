
  void* just::parser::Parser::next_is_shell_expanded_string::h8493042b5ebe3556(void* arg1)

{
    int64_t rax = *(arg1 + 0x18);
    int64_t rcx = *(arg1 + 0x20);
    int64_t rdx = *(arg1 + 0x58);
    int64_t var_28 = rax;
    int64_t var_20 = rax + rcx * 0x48;
    int64_t var_18 = rdx;
    char var_10 = 0;
    void* rax_1 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h20ee6d2d274d07c4(&var_28, &var_10);
    
    if (rax_1 && just::parser::Parser::next_is_shell_expanded_string::_$u7b$$u7b$closure$u7d$$u7d$::hf8f95d614f703e87(rax_1))
    {
        void* result = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h20ee6d2d274d07c4(&var_28, &var_10);
        
        if (result)
        {
            result = *(result + 0x40) == 0x21;
            return result;
        }
    }
    
    return 0;
}
