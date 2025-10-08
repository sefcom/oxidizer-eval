
  int64_t* just::function::just_executable::he6c6ddd88a3826c1(int64_t* arg1)

{
    int64_t var_70;
    uint64_t rdx = std::env::current_exe::h5073ac412771085b(&var_70);
    int64_t var_68;
    int128_t var_58;
    
    if (!(0 + -(var_70)))
    {
        var_58 = var_70;
        uint64_t var_60;
        uint64_t var_48_1 = var_60;
        char* r15_1 = *var_58[8];
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_70, r15_1, var_60);
        
        if (var_70 != 1)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, var_68, var_60);
            int64_t rax_2 = var_70;
            *(arg1 + 0x10) = var_68;
            arg1[1] = rax_2;
            *arg1 = 0;
        }
        else
        {
            just::which::which::_$u7b$$u7b$closure$u7d$$u7d$::h1924a8d8338b238e(&var_70, r15_1, 
                var_60);
            arg1[3] = var_60;
            *(arg1 + 8) = var_70;
            *arg1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    }
    else
    {
        just::function::just_executable::_$u7b$$u7b$closure$u7d$$u7d$::he401451eae134fec(&var_58, 
            var_68, rdx);
        int64_t var_48;
        int64_t var_28_1 = var_48;
        int128_t zmm0_1 = var_58;
        int128_t var_38_1 = zmm0_1;
        arg1[3] = var_48;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 1;
    }
    return arg1;
}
