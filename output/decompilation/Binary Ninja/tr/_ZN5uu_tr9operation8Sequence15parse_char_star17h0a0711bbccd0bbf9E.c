
  int64_t uu_tr::operation::Sequence::parse_char_star::h0a0711bbccd0bbf9(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char const* const var_28 = "[*]*]0[:alnumalphablankcntrldigi…";
    int64_t var_20 = 1;
    char const* const var_18 = "*]*]0[:alnumalphablankcntrldigit…";
    int64_t var_10 = 2;
    int32_t var_48;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::h05b95ced07dd6d44(&var_48, &var_28, 
        arg2, arg3);
    int64_t result;
    int128_t var_38;
    
    if (var_48 != 3)
    {
        int128_t zmm0 = var_48;
        *(arg1 + 0x18) = var_38;
        *(arg1 + 8) = zmm0;
        result = 1;
    }
    else
    {
        int128_t var_40;
        *(arg1 + 8) = var_40;
        arg1[3] = -0x7ffffffffffffff5;
        arg1[4] = 2;
        *(arg1 + 0x21) = *var_38[8];
        result = 0;
    }
    *arg1 = result;
    return result;
}
