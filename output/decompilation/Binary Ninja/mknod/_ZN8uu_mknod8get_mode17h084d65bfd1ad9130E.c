
  int64_t* uu_mknod::get_mode::h084d65bfd1ad9130(int64_t* arg1, void* arg2)

{
    if (!arg2)
    {
        arg1[1] = 0x1b6;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t var_68;
        uucore::features::mode::parse_mode::h0c942428ddc01afa(&var_68, *(arg2 + 8), *(arg2 + 0x10));
        int32_t var_60;
        
        if (var_68 != -0x8000000000000000)
        {
            int64_t var_58;
            int64_t var_18_1 = var_58;
            int128_t var_28 = var_68;
            int64_t var_50;
            uu_mknod::get_mode::_$u7b$$u7b$closure$u7d$$u7d$::hedf9e9beb09a3d08(&var_50, &var_28);
            int64_t rax_4 = var_50;
            int32_t var_3c;
            int32_t var_30_1 = var_3c;
            int64_t var_44;
            int64_t var_38_1 = var_44;
            *(arg1 + 0x14) = var_3c;
            *(arg1 + 0xc) = var_44;
            *arg1 = rax_4;
            int32_t var_48;
            arg1[1] = var_48;
        }
        else if (var_60 <= 0x1ff)
        {
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
        else
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7e6cafe721babae1(arg1, "mode must specify only file perm…", 0x2b);
    }
    
    return arg1;
}
