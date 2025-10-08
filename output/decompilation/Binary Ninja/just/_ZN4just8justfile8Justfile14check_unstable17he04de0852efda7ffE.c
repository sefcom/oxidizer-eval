
  uint64_t just::justfile::Justfile::check_unstable::he04de0852efda7ff(char* arg1, void* arg2, char arg3)

{
    int64_t rax = *(arg2 + 0x2d0);
    int64_t rcx = *(arg2 + 0x2d8);
    int64_t rsi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rsi = *(arg2 + 0x2e0);
    
    int64_t var_d0 = rdx;
    int64_t var_c8 = 0;
    int64_t var_b8 = rcx;
    int64_t var_a8 = 0;
    int64_t var_98 = rcx;
    char* rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h34eefe8dabb71698(&var_d0);
    uint64_t result;
    
    if (!rax_1 || arg3 & 1 || *(arg2 + 0x1eb))
    {
        int64_t rax_2 = *(arg2 + 0x2a0);
        int64_t rcx_1 = *(arg2 + 0x2a8);
        int64_t rsi_1 = rax_2;
        
        if (rax_2)
            rsi_1 = *(arg2 + 0x2b0);
        
        int64_t rdx_1;
        rdx_1 = rax_2;
        int64_t var_68 = rdx_1;
        int64_t var_60_1 = 0;
        int64_t var_58_1 = rax_2;
        int64_t var_50_1 = rcx_1;
        int64_t var_48_1 = rdx_1;
        int64_t var_40_1 = 0;
        int64_t var_38_1 = rax_2;
        int64_t var_30_1 = rcx_1;
        int64_t var_28_1 = rsi_1;
        int64_t rdx_2;
        result = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_68);
        
        if (!result)
        {
            label_66ec01:
            *arg1 = 0x38;
        }
        else
        {
            while (true)
            {
                just::justfile::Justfile::check_unstable::he04de0852efda7ff(&var_d0, rdx_2, arg3);
                
                if (var_d0 != 0x38)
                {
                    uint64_t result_1;
                    result = result_1;
                    *(arg1 + 0x60) = result;
                    int128_t var_80;
                    *(arg1 + 0x50) = var_80;
                    *(arg1 + 0x40) = rsi;
                    int128_t zmm0_1 = var_d0;
                    *(arg1 + 0x30) = rax;
                    *(arg1 + 0x20) = rdx;
                    *(arg1 + 0x10) = rax;
                    *arg1 = zmm0_1;
                    break;
                }
                
                result = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_68);
                
                if (!result)
                    goto label_66ec01;
            }
        }
    }
    else
    {
        result = *rax_1;
        *arg1 = 0x36;
        arg1[1] = result;
    }
    
    return result;
}
