
  int32_t* uu_env::split_iterator::split::h2ad0ba729ee8da1c(int32_t* arg1, int64_t arg2)

{
    void var_68;
    uu_env::split_iterator::SplitIterator::new::hd02f70765700e24e(&var_68, arg2);
    int32_t var_90;
    uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(&var_90, &var_68);
    int32_t rax = var_90;
    int128_t var_8c;
    
    if (rax != 8)
    {
        *(arg1 + 0x10) = var_8c;
        *(arg1 + 4) = var_8c;
        int64_t var_70;
        *(arg1 + 0x20) = var_70;
    }
    else
    {
        int128_t var_ac;
        int64_t var_78;
        *var_ac[8] = var_78;
        int128_t var_b8 = var_8c;
        *(arg1 + 0x18) = var_78;
        *(arg1 + 8) = var_8c;
    }
    *arg1 = rax;
    return arg1;
}
