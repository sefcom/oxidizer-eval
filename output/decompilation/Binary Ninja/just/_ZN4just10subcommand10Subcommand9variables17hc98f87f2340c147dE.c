
  void* just::subcommand::Subcommand::variables::hc98f87f2340c147d(void* arg1)

{
    int64_t rax_1 = *(arg1 + 0x280);
    int64_t rcx = *(arg1 + 0x288);
    int64_t rsi = rax_1;
    char const (** rdx)[0x1];
    rdx = rax_1;
    
    if (rax_1)
        rsi = *(arg1 + 0x290);
    
    char const (** const var_c0)[0x1] = rdx;
    int64_t var_b8 = 0;
    int64_t var_b0 = rax_1;
    int64_t var_a8 = rcx;
    char const (** var_a0)[0x1] = rdx;
    int64_t var_98 = 0;
    int64_t var_90 = rax_1;
    int64_t var_88 = rcx;
    int64_t var_80 = rsi;
    int64_t var_78 = 0;
    int64_t var_d8;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08848c209115bb0a(&var_d8, &var_c0);
    int64_t i;
    
    while (i)
    {
        char const (** const var_70)[0x90];
        int64_t var_58;
        
        if (var_d8)
        {
            var_70 = &data_82f150;
            int64_t var_68_2 = 1;
            int64_t var_60_2 = 8;
            var_58 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_70);
        }
        
        int64_t var_c8;
        int64_t var_40 = var_c8 + 0x80;
        int64_t (* var_38_1)(void* arg1, int64_t* arg2) =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_70 = &data_465db0;
        int64_t var_68_1 = 1;
        int64_t var_50_1 = 0;
        int64_t* var_60_1 = &var_40;
        var_58 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_70);
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08848c209115bb0a(&var_d8, &var_c0);
    }
    
    var_c0 = &data_82dbf8;
    int64_t var_b8_1 = 1;
    int64_t var_b0_1 = 8;
    var_a8 = {0};
    return std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
}
