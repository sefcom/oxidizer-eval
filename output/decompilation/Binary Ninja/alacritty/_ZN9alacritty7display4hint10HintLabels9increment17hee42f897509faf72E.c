
  int64_t* alacritty::display::hint::HintLabels::increment::hee42f897509faf72(void* arg1)

{
    int64_t* result = *(arg1 + 0x28);
    
    if (!result)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    int64_t* result_2 = *(arg1 + 0x20);
    int64_t rdx = *result_2;
    int64_t rsi = *(arg1 + 0x30);
    
    if (rdx < rsi)
    {
        *result_2 = rdx + 1;
        return result;
    }
    
    *result_2 = 0;
    int64_t r14_1 = *(arg1 + 0x10);
    void* rax = &result_2[result];
    int64_t* result_1 = result_2;
    int64_t var_28_1 = 1;
    int64_t rsi_1 = rsi + 1;
    int64_t rax_1 = 1;
    label_847f5b:
    var_28_1 = 0;
    result = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h08e8c2d962a0de09(&result_1, rax_1);
    
    if (result)
    {
        while (true)
        {
            int64_t rcx_2 = *result + 1;
            
            if (rcx_2 != r14_1)
            {
                *result = rcx_2;
                return result;
            }
            
            *result = rsi_1;
            rax_1 = var_28_1;
            
            if (rax_1)
                goto label_847f5b;
            
            result = result_1;
            
            if (result == rax)
                break;
            
            result_1 = &result[1];
        }
    }
    
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::push::hbb074ecf83bd895a(arg1 + 0x18, rsi_1);
}
