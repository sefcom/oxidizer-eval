
  int64_t fd::cli::parse_millis::h0d0f5cf5382a6144(char* arg1, char* arg2, int64_t arg3)

{
    char var_18;
    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_18, arg2, arg3);
    
    if (var_18 == 1)
    {
        char var_17;
        *arg1 = var_17;
        *(arg1 + 8) = 0x3b9aca00;
        return var_17;
    }
    
    int64_t var_10;
    uint64_t rdx_1 = var_10 / 0x3e8;
    int32_t rax_5 = (var_10 - rdx_1 * 0x3e8) * 0xf4240;
    *arg1 = rdx_1;
    *(arg1 + 8) = rax_5;
    return rax_5;
}
