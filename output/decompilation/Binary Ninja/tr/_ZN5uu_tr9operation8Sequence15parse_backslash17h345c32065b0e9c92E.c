
  int64_t* uu_tr::operation::Sequence::parse_backslash::h345c32065b0e9c92(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char const* const var_18 = "\src/uu/tr/src/operation.rs[*]*]…";
    int64_t var_10 = 1;
    int32_t var_38;
    int64_t* result = nom::sequence::preceded::_$u7b$$u7b$closure$u7d$$u7d$::h15123993b9b8fd57(
        &var_38, &var_18, arg2, arg3);
    int128_t var_28;
    
    if (var_38 != 3)
    {
        int128_t zmm0_1 = var_38;
        *(arg1 + 0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        int64_t* result_1;
        result = result_1;
        uint32_t rdx_1 = *var_28[8];
        uint64_t rsi_2 = rdx_1 - 0x61;
        
        if (rsi_2 <= 0x15)
            switch (rsi_2)
            {
                case 0:
                {
                    rdx_1 = 7;
                    break;
                }
                case 1:
                {
                    rdx_1 = 8;
                    break;
                }
                case 5:
                {
                    rdx_1 = 0xc;
                    break;
                }
                case 0xd:
                {
                    rdx_1 = 0xa;
                    break;
                }
                case 0x11:
                {
                    rdx_1 = 0xd;
                    break;
                }
                case 0x13:
                {
                    rdx_1 = 9;
                    break;
                }
                case 0x15:
                {
                    rdx_1 = 0xb;
                    break;
                }
            }
        
        arg1[1] = result;
        arg1[2] = var_28;
        arg1[3] = rdx_1;
        *arg1 = 3;
    }
    return result;
}
