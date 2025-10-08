
  void* alacritty_terminal::term::cell::Cell::set_underline_color::he7bfda775352a156(int64_t* arg1, int32_t arg2)

{
    if (arg2 == 3)
    {
        void* rax_1 = *arg1;
        
        if (!rax_1)
        {
            label_9bdc0e:
            int64_t rax_4 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..sync..Arc$LT$alacritty_terminal..term..cell..CellExtra$GT$$GT$$GT$::hf413cccff2c262a4(arg1);
            *arg1 = 0;
            return rax_4;
        }
        
        if (!*(rax_1 + 0x20) && !*(rax_1 + 0x28))
            goto label_9bdc0e;
    }
    
    uint32_t r14_1 = arg2 >> 8;
    core::option::Option$LT$T$GT$::get_or_insert_with::h59e35f958d1e08ef(arg1, 
        _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h2e8909fcdb9d2bb7());
    void* rax_3 = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::hd1b9ba4e0192b0c5(arg1);
    *(rax_3 + 0x20) = arg2;
    *(rax_3 + 0x23) = r14_1 >> 0x10;
    *(rax_3 + 0x21) = r14_1;
    return rax_3;
}
