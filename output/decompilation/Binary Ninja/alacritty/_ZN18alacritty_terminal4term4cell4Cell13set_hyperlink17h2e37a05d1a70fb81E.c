
  int64_t alacritty_terminal::term::cell::Cell::set_hyperlink::h2e37a05d1a70fb81(int64_t* arg1, int64_t arg2)

{
    int64_t var_20 = arg2;
    
    if (!arg2)
    {
        int64_t rax_3 = *arg1;
        
        if (!rax_3)
        {
            label_9bdc87:
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..sync..Arc$LT$alacritty_terminal..term..cell..CellExtra$GT$$GT$$GT$::hf413cccff2c262a4(arg1);
            *arg1 = 0;
            return core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..cell..Hyperlink$GT$$GT$::h66f3a51a1b2347fb(&var_20);
        }
        
        if (!*(rax_3 + 0x20) && *(rax_3 + 0x30) == 3)
            goto label_9bdc87;
    }
    
    core::option::Option$LT$T$GT$::get_or_insert_with::h59e35f958d1e08ef(arg1, 
        _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h2e8909fcdb9d2bb7());
    int64_t var_18 = arg2;
    void* rax_2 = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::hd1b9ba4e0192b0c5(arg1);
    int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..cell..Hyperlink$GT$$GT$::h66f3a51a1b2347fb(rax_2 + 0x18);
    *(rax_2 + 0x18) = arg2;
    return result;
}
