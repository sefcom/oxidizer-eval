
  int128_t* uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t var_38 = 0;
    alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x3e);
    int64_t var_30 = arg2;
    int64_t var_28 = arg3 + arg2;
    
    for (char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&var_30); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&var_30))
    {
        uint32_t rax = *i;
        
        if (rax - 0x20 >= 0x5f)
            alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x2e);
        else
        {
            uint64_t rax_1 = rax << 4;
            int64_t rdi_4 = *(rax_1 + &uu_od::prn_char::C_CHARS::h05ab81629a83a794);
            int64_t rax_2;
            uint64_t rdx;
            rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(rdi_4, 
                *(rax_1 + 0x5428a0) + rdi_4);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_48, rax_2, rdx);
        }
    }
    
    alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x3c);
    arg1[1] = var_38;
    *arg1 = var_48;
    return arg1;
}
