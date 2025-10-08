
  int64_t uu_tr::operation::Sequence::parse_backslash::h851374cdd0702be7(int64_t* arg1)

{
    int32_t var_28;
    int64_t rax = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::h55052947dcf7abe7(&var_28);
    int128_t var_18;
    
    if (var_28 != 3)
    {
        int128_t zmm0 = var_28;
        *(arg1 + 0x10) = var_18;
        *arg1 = zmm0;
        return rax;
    }
    
    uint32_t rdx_2 = *var_18[8];
    uint64_t rsi_3 = rdx_2 - 0x61;
    
    if (rsi_3 <= 0x15)
        switch (rsi_3)
        {
            case 0:
            {
                rdx_2 = 7;
                break;
            }
            case 1:
            {
                rdx_2 = 8;
                break;
            }
            case 5:
            {
                rdx_2 = 0xc;
                break;
            }
            case 0xd:
            {
                rdx_2 = 0xa;
                break;
            }
            case 0x11:
            {
                rdx_2 = 0xd;
                break;
            }
            case 0x13:
            {
                rdx_2 = 9;
                break;
            }
            case 0x15:
            {
                rdx_2 = 0xb;
                break;
            }
        }
    
    int64_t var_20;
    arg1[1] = var_20;
    arg1[2] = var_18;
    arg1[3] = rdx_2;
    *arg1 = 3;
    return var_20;
}
