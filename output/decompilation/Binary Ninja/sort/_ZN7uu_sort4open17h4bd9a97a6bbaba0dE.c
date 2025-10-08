
  void* const uu_sort::open::h4bd9a97a6bbaba0d(int64_t* arg1, void* arg2)

{
    int64_t rax;
    uint64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h9bbe9820a9c439f2(arg2);
    void* const result;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(rax, rdx, "-", 1))
    {
        char var_90;
        std::fs::File::open::h1c06d42f5204a8cb(&var_90, rax);
        
        if (!(var_90 & 1))
        {
            int32_t var_8c;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7991c3b23d2b5824(var_8c);
            result = &data_58a300;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            int64_t var_88;
            int64_t var_80_1 = var_88;
            int128_t var_78;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_78, rax, 
                rdx);
            int64_t var_68;
            int64_t var_48_1 = var_68;
            int128_t var_58_1 = var_78;
            int64_t var_40_1 = var_88;
            int64_t var_60 = -0x7ffffffffffffffe;
            result = alloc::boxed::Box$LT$T$GT$::new::hc68d36133d8bdc56(&var_60);
            arg1[1] = result;
            arg1[2] = &data_58a378;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::he3342b0cfd370aaa(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        result = &data_58a3e0;
        arg1[2] = result;
        *arg1 = 0;
    }
    
    return result;
}
