
  int64_t fd::hyperlink::encode::h797a98853329df30(int64_t* arg1, char arg2, int64_t arg3)

{
    char var_41 = arg2;
    char rcx = arg2 - 0x30;
    uint32_t rsi = arg2;
    
    if (rcx >= 0xa && (arg2 & 0xdf) - 0x41 > 0x19)
    {
        uint64_t rax_1 = rsi - 0x2d;
        
        if (rax_1 <= 0x32)
            rcx = 7;
        
        if ((rax_1 > 0x32 || !TEST_BITQ(0x4000000002007, rax_1)) && rsi != 0x7e)
        {
            char* var_40 = &var_41;
            uint64_t (* var_38)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i8$GT$::fmt::hc03941a1f9bbbf93;
            char const (** const var_30)[0x2] = &data_8024e0;
            int64_t var_28 = 1;
            void* const var_10 = &data_47b3b8;
            int64_t var_8 = 1;
            char** var_20 = &var_40;
            int64_t var_18 = 1;
            return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(*arg1, arg1[1], &var_30);
        }
    }
    
    /* tailcall */
    return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_char::h5f5747e99125facc(
        arg1, rsi, arg3, rcx);
}
