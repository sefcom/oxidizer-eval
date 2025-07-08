
  void* const uu_sort::open::h555b4855251c8fd4(int64_t* arg1, void* arg2)

{
    int64_t rax;
    uint64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h969c1f4f28c13ced(arg2);
    void* const result;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(rax, rdx, "-", 1))
    {
        int32_t var_90;
        std::fs::File::open::h2552637d7afe39d9(&var_90, rax);
        
        if (!var_90)
        {
            int32_t var_8c;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcfd57132bb0abfed(var_8c);
            result = &data_5fbef8;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            int64_t var_88;
            int64_t var_80_1 = var_88;
            int128_t var_78;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_78, rax, 
                rdx);
            int64_t var_68;
            int64_t var_40_1 = var_68;
            int128_t var_50_1 = var_78;
            int64_t var_58_1 = var_88;
            char var_60 = 2;
            result = alloc::boxed::Box$LT$T$GT$::new::h5e2c0ba71893b6a1(&var_60);
            arg1[1] = result;
            arg1[2] = &data_5fbf88;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7f1df9b4eebae042(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        result = &data_5fbff8;
        arg1[2] = result;
        *arg1 = 0;
    }
    
    return result;
}
