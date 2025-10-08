
  int32_t* uu_env::split_iterator::split::hb91d0c6281405deb(int32_t* arg1, int64_t arg2)

{
    int128_t var_68;
    uu_env::split_iterator::SplitIterator::new::h95a2d9123d89c82e(&var_68, arg2);
    int32_t var_90;
    uu_env::split_iterator::SplitIterator::split::hfc15653a1cb24dc8(&var_90, &var_68);
    int32_t rax = var_90;
    int128_t var_8c;
    
    if (rax != 0xc)
    {
        var_68 = var_8c;
        *(arg1 + 0x10) = var_8c;
        *(arg1 + 4) = var_68;
        int64_t var_70;
        *(arg1 + 0x20) = var_70;
    }
    else
    {
        int64_t var_78;
        int128_t var_5c;
        *var_5c[8] = var_78;
        var_68 = var_8c;
        *(arg1 + 0x18) = var_78;
        *(arg1 + 8) = var_8c;
    }
    *arg1 = rax;
    return arg1;
}
