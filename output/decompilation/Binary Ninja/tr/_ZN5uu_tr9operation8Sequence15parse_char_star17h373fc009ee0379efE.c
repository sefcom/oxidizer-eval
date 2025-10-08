
  int64_t uu_tr::operation::Sequence::parse_char_star::h373fc009ee0379ef(int64_t* arg1)

{
    char const* const var_28 = "[*]*][:alnumalphablankcntrldigit…";
    int64_t var_20 = 1;
    char const* const var_18 = "*]*][:alnumalphablankcntrldigitg…";
    int64_t var_10 = 2;
    int32_t var_48;
    int64_t rax = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hc6dda4c82a13e3e7(&var_48, &var_28);
    int128_t var_38;
    
    if (var_48 != 3)
    {
        int128_t zmm0 = var_48;
        *(arg1 + 0x18) = var_38;
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
        return rax;
    }
    
    char rax_1 = *var_38[8];
    int128_t var_40;
    *(arg1 + 8) = var_40;
    arg1[3] = 0xc;
    arg1[4] = 2;
    *(arg1 + 0x21) = rax_1;
    *arg1 = 0;
    return rax_1;
}
