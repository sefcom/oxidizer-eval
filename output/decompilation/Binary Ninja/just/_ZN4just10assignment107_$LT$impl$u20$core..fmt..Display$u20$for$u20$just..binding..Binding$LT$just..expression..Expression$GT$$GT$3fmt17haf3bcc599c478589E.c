
  int64_t just::assignment::_$LT$impl$u20$core..fmt..Display$u20$for$u20$just..binding..Binding$LT$just..expression..Expression$GT$$GT$::fmt::haf3bcc599c478589(void* arg1, int64_t* arg2)

{
    int64_t rbx = *arg2;
    char const (** const var_68)[0x8f];
    int128_t var_50;
    char result;
    char rcx_1;
    
    if (*(arg1 + 0xce))
    {
        var_68 = &data_82db30;
        int64_t var_60_1 = 1;
        int64_t var_58_1 = 8;
        var_50 = {0};
        rcx_1 = core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, arg2[1], &var_68);
        result = 1;
    }
    
    if (!*(arg1 + 0xce) || !rcx_1)
    {
        int64_t r15_1;
        
        if (!*(arg1 + 0xcd))
        {
            r15_1 = arg2[1];
            label_656f91:
            void* var_38 = arg1 + 0x80;
            int64_t (* var_30_1)(void* arg1, int64_t* arg2) =
                _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
            void* var_28_1 = arg1;
            int64_t (* var_20_1)(int64_t* arg1, int64_t* arg2) = _$LT$just..expression..Expression$u20$as$u20$core..fmt..Display$GT$::fmt::h422026afbfafb456;
            var_68 = &data_82db50;
            int64_t var_60_3 = 2;
            *var_50[8] = 0;
            void** var_58_3 = &var_38;
            var_50 = 2;
            return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, r15_1, &var_68);
        }
        
        var_68 = &data_82db40;
        int64_t var_60_2 = 1;
        int64_t var_58_2 = 8;
        var_50 = {0};
        r15_1 = arg2[1];
        result = 1;
        
        if (!core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(rbx, r15_1, &var_68))
            goto label_656f91;
    }
    
    return result;
}
