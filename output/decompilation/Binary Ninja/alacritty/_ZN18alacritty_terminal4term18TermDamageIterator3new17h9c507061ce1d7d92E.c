
  int64_t* alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rdi = 0;
    
    if (arg3 >= arg4)
        rdi = arg3 - arg4;
    
    int64_t rax_3;
    int64_t rdx;
    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0245a51238550835(rdi, arg2, arg3);
    *arg1 = rax_3;
    arg1[1] = rax_3 + rdx * 0x18;
    arg1[2] = arg4;
    return arg1;
}
