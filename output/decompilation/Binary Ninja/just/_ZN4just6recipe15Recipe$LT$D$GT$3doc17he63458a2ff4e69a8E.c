
  int64_t just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(void* arg1)

{
    int64_t rax = *(arg1 + 0xd8);
    int64_t rcx = *(arg1 + 0xe0);
    int64_t rsi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rsi = *(arg1 + 0xe8);
    
    int64_t var_60 = rdx;
    int64_t var_58 = 0;
    int64_t var_50 = rax;
    int64_t var_48 = rcx;
    int64_t var_40 = rdx;
    int64_t var_38 = 0;
    int64_t var_30 = rax;
    int64_t var_28 = rcx;
    int64_t var_20 = rsi;
    int64_t result;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_60);
        
        if (!rax_1)
        {
            if (*(arg1 + 0x60) == -0x8000000000000000)
                result = 0;
            else
                result = *(arg1 + 0x68);
            
            *(arg1 + 0x70);
            break;
        }
        
        if (*rax_1 == -0x7ffffffffffffffd)
        {
            if (rax_1[1] == -0x8000000000000000)
                return 0;
            
            result = rax_1[2];
            rax_1[3];
            break;
        }
    }
    
    return result;
}
