
  int64_t uu_od::prn_char::format_ascii_dump::h58e8947baefac050(int128_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t result = 0;
    alloc::string::String::push::h0ede46164189e411(&var_48, 0x3e);
    
    if (arg3)
    {
        int64_t r13_1 = 0;
        
        do
        {
            uint32_t rax_1 = *(arg2 + r13_1);
            
            if (rax_1 - 0x20 >= 0x5f)
                alloc::string::String::push::h0ede46164189e411(&var_48, 0x2e);
            else
            {
                uint64_t rax_2 = rax_1 << 4;
                int64_t rsi = *(rax_2 + &uu_od::prn_char::C_CHARS::hf9c44c07aa090c89);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_48, rsi, *(rax_2 + 0x503010) + rsi);
            }
            
            r13_1 += 1;
        } while (arg3 != r13_1);
    }
    
    alloc::string::String::push::h0ede46164189e411(&var_48, 0x3c);
    arg1[1] = result;
    *arg1 = var_48;
    return result;
}
