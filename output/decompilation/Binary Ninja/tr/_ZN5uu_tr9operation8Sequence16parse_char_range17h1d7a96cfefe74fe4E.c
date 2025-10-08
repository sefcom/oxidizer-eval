
  uint32_t uu_tr::operation::Sequence::parse_char_range::h1d7a96cfefe74fe4(int64_t* arg1)

{
    int64_t r14 = 1;
    int32_t var_30;
    uint32_t result = _$LT$nom..internal..And$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hbd849b2fcb6d173d(&var_30);
    int128_t var_20;
    
    if (var_30 != 3)
    {
        int128_t zmm0 = var_30;
        *(arg1 + 0x18) = var_20;
        *(arg1 + 8) = zmm0;
    }
    else
    {
        result = *var_20[8];
        uint32_t rcx_1 = *var_20[9];
        int32_t rdi_1;
        rdi_1 = result <= rcx_1;
        uint32_t result_1 = (result << 8) + (rcx_1 << 0x10) + 1;
        
        if (result > rcx_1)
            result_1 = result;
        
        int128_t var_28;
        *(arg1 + 8) = var_28;
        arg1[3] = rdi_1 * 2 + 0xa;
        *(arg1 + 0x1c) = rcx_1;
        arg1[4] = result_1;
        r14 = 0;
    }
    *arg1 = r14;
    return result;
}
