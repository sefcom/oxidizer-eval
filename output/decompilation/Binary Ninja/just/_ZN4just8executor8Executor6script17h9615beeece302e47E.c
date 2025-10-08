
  int64_t just::executor::Executor::script::h9615beeece302e47(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    int64_t var_b0 = 0;
    int64_t var_a8 = 1;
    int64_t result = 0;
    int64_t r15_2 = (arg5 << 5) + arg4;
    int64_t var_70 = arg4;
    int64_t var_68 = r15_2;
    char var_60 = 0;
    int64_t rax = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3e47d29e0f7959a7(&var_70);
    void* i_6;
    int64_t rdx_1;
    void* i_5;
    
    if (arg2)
    {
        i_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h558ebd0999430957(rax, arg6, arg7);
        i_5 = i_6;
        i_6 = !rdx_1;
    }
    
    int64_t i_1;
    
    if (arg2 && !(!i_5 | i_6))
    {
        void* r15_5 = rdx_1 * 0x18 + i_5;
        void* i_3 = i_5 + 0x18;
        i_1 = 0;
        void* i;
        
        do
        {
            i = i_3;
            
            if (just::shebang::Shebang::include_shebang_line::hfb1111885aa0823a(arg2, arg3))
            {
                int64_t rsi_5 = *(i_5 + 8);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_b0, rsi_5, *(i_5 + 0x10) + rsi_5);
            }
            
            alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
            i_1 += 1;
            i_3 = i + 0x18;
            
            if (i == r15_5)
                i_3 = i;
            
            if (i == r15_5)
                break;
            
            i_5 = i;
        } while (i);
    }
    else
        i_1 = 0;
    
    core::iter::traits::iterator::Iterator::zip::h8b9e58f090f14a2c(&var_70, arg4, r15_2, arg6, 
        arg7);
    int64_t i_2 = i_1;
    int64_t i_4 = i_1;
    void* rbx_1;
    void* r15_3;
    
    for (; i_1; i_1 = i_2)
    {
        i_2 = 0;
        void* rax_1;
        void* rdx_5;
        rax_1 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::nth::haeea1dad52411e3c(&var_70, i_1);
        r15_3 = rax_1;
        rbx_1 = rdx_5;
        
        if (!rax_1)
            goto label_667ee1;
        
        label_667e50:
        
        if (i_4 < *(r15_3 + 0x18))
        {
            label_667e5e:
            alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
            i_4 += 1;
            
            if (i_4 < *(r15_3 + 0x18))
                goto label_667e5e;
        }
        
        int64_t rsi_2 = *(rbx_1 + 8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_b0, rsi_2, *(rbx_1 + 0x10) + rsi_2);
        alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
        i_4 += 1;
    }
    
    void* rax_2;
    void* rdx_6;
    rax_2 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h4686d31f18b82adf(&var_70);
    r15_3 = rax_2;
    rbx_1 = rdx_6;
    
    if (rax_2)
        goto label_667e50;
    
    label_667ee1:
    arg1[1] = result;
    *arg1 = var_b0;
    return result;
}
