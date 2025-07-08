
  int128_t** uu_sort::get_rlimit::h790b745a9692d371(int128_t** arg1)

{
    int128_t rlimits = {0};
    int128_t* rax_1;
    void** const rcx;
    
    if (!getrlimit(RLIMIT_NOFILE, &rlimits))
    {
        rcx = rlimits;
        rax_1 = nullptr;
    }
    else
    {
        void var_30;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_30, 
            "Failed to fetch rlimit0.0.28Disp…", 0x16);
        int32_t var_18_1 = 2;
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&var_30);
        rcx = &data_5ffc90;
    }
    
    arg1[1] = rcx;
    *arg1 = rax_1;
    return arg1;
}
