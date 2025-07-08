
  int64_t uu_du::StatPrinter::convert_size::he529e362fc7c1e00(int128_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_10 = arg3;
    int64_t rax = *(arg2 + 0x20);
    
    if (!rax)
        /* tailcall */
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(arg1, arg3, 2);
    
    if (rax == 1)
        /* tailcall */
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(arg1, arg3, 1);
    
    int64_t* rsi_4;
    
    if (!*(arg2 + 0x49))
    {
        int64_t rcx_3 = *(arg2 + 0x28);
        
        if (!rcx_3)
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        uint64_t rax_7;
        uint64_t rdx_3;
        
        if (!((arg3 | rcx_3) >> 0x20))
        {
            int32_t rax_8 = arg3;
            int32_t temp2_2 = rcx_3;
            rax_7 = COMBINE(0, rax_8) / temp2_2;
            rdx_3 = COMBINE(0, rax_8) % temp2_2;
        }
        else
        {
            int64_t rdx_2 = 0;
            int32_t temp2_1 = rcx_3;
            rax_7 = COMBINE(rdx_2, arg3) / temp2_1;
            rdx_3 = COMBINE(rdx_2, arg3) % temp2_1;
        }
        
        int64_t var_8 = rax_7 + 1;
        rsi_4 = &var_8;
    }
    else
        rsi_4 = &var_10;
    
    return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h2f753f516b2c872e(arg1, rsi_4);
}
