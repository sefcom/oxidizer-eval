
  void* just::recipe::Recipe$LT$D$GT$::check_can_be_default_recipe::hbdbea57edf4aea7b(char* arg1, void* arg2)

{
    int32_t* rdi = *(arg2 + 0x50);
    void* result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(rdi, *(arg2 + 0x58) * 0xd0 + rdi);
    
    if (!result)
        result = 0x38;
    else
    {
        void* result_1 = result;
        int64_t rdx_1;
        result = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
        *(arg1 + 8) = result_1;
        *(arg1 + 0x10) = result;
        *(arg1 + 0x18) = rdx_1;
        result = 0xf;
    }
    
    *arg1 = result;
    return result;
}
