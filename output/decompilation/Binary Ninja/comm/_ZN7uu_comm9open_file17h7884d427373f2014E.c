
  int64_t* uu_comm::open_file::h7884d427373f2014(int64_t* arg1, int64_t arg2, uint64_t arg3, char arg4)

{
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5723b3bfa7d363aa(arg2, arg3, "-(uutils coreutils) 0.0.30Compar…", 1))
    {
        int32_t var_d0;
        std::fs::metadata::h0373c3893bc9c36e(&var_d0, arg2);
        int32_t var_98;
        
        if (var_d0 == 2)
        {
            label_4583e1:
            void* var_c8;
            *arg1 = var_c8;
            arg1[6] = 0xb;
        }
        else if ((0xf000 & var_98) != 0x4000)
        {
            std::fs::File::open::h4d8fb62fce9f1fe2(&var_d0, arg2);
            
            if (var_d0 == 1)
                goto label_4583e1;
            
            int32_t var_cc;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h1ec4c3de20b2cd65(
                arg1, var_cc);
            arg1[6] = arg4;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_d0, "Is a directory-(uutils coreutils…", 0xe);
            *arg1 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                alloc::boxed::Box$LT$T$GT$::new::h79f3710bfd0c8f7e(&var_d0), &data_4e0de8);
            arg1[6] = 0xb;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        *arg1 = 0;
        arg1[1] = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        arg1[6] = arg4;
    }
    
    return arg1;
}
