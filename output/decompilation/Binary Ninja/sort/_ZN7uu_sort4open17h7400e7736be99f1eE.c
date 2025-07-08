
  int64_t* uu_sort::open::h7400e7736be99f1e(int64_t* arg1, int64_t arg2)

{
    int64_t rax;
    uint64_t rdx_1;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he8fe143150012059(arg2);
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(rax, rdx_1, "-invalid suffix in -- argument i…", 1))
    {
        int32_t var_90;
        std::fs::File::open::h9456c693d56c0e76(&var_90, rax);
        
        if (!var_90)
        {
            int32_t var_8c;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hea03e04285d5c204(var_8c);
            arg1[2] = &data_5fff40;
            *arg1 = 0;
        }
        else
        {
            int64_t var_88;
            int64_t var_80_1 = var_88;
            int128_t var_78;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_78, rax, 
                rdx_1);
            int64_t var_68;
            int64_t var_40_1 = var_68;
            int128_t var_50_1 = var_78;
            int64_t var_58_1 = var_88;
            char var_60 = 2;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_60);
            arg1[2] = &data_5ff678;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hc855b7433b77958f(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        arg1[2] = &data_5fff98;
        *arg1 = 0;
    }
    
    return arg1;
}
