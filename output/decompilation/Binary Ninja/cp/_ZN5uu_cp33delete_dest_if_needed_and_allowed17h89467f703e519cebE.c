
  void uu_cp::delete_dest_if_needed_and_allowed::h89467f703e519ceb(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5, void* arg6, char arg7, int64_t* arg8)

{
    if (*(arg6 + 0x54) >= 2)
    {
        *arg1 = -0x7ffffffffffffff4;
        return;
    }
    
    uint64_t rax = *(arg6 + 0x55);
    char var_188;
    int128_t var_180;
    int128_t var_150;
    
    if (rax == 2)
    {
        if (!*(arg6 + 0x50))
            *arg1 = -0x7ffffffffffffff4;
        else
        {
            char rax_2 = *(arg6 + 0x59);
            
            if (!((arg7 ^ 1) | rax_2))
                rax_2 = *(arg6 + 0x58);
            
            uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_188, arg2, 
                arg3, rax_2);
            int64_t var_1d8 = 1;
            int64_t var_1d0_1 = arg2;
            int64_t var_1c8_1 = arg3;
            char var_1c0_1 = 1;
            int64_t* var_218 = &var_1d8;
            int64_t (* var_210_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            char const (** const var_1b8)[0xcb] = &data_55ec38;
            int64_t var_1b0_1 = 1;
            int64_t var_198_1 = 0;
            int64_t** var_1a8_1 = &var_218;
            int64_t var_1a0_1 = 1;
            int128_t var_1f0;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_1f0, &var_1b8);
            
            if (!(var_188 & 1))
            {
                int128_t var_160;
                int128_t var_98_1 = var_160;
                int128_t var_88_1 = var_150;
                int128_t var_140;
                int128_t var_78_1 = var_140;
                int128_t var_130;
                int128_t var_68_1 = var_130;
                int128_t var_120;
                int128_t var_58_1 = var_120;
                int128_t var_110;
                int128_t var_48_1 = var_110;
                int128_t var_100;
                int128_t var_38_1 = var_100;
                core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&var_1f0);
                int64_t var_170;
                int64_t var_c8_1 = var_170;
                int128_t var_d8_1 = var_180;
                int128_t var_b8 = var_180;
                int64_t var_a8_1 = var_170;
                int64_t var_168;
                int64_t var_a0_1 = var_168;
                
                if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h13e176d417cda5ca(
                        arg8, &var_b8))
                    goto label_4a2f02;
                
                *arg1 = -0x7ffffffffffffff4;
            }
            else
            {
                int64_t var_1e0;
                arg1[3] = var_1e0;
                *(arg1 + 8) = var_1f0;
                *arg1 = -0x7ffffffffffffffe;
                arg1[4] = var_180;
            }
        }
    }
    else if (rax == 1)
    {
        label_4a2f02:
        rax = std::fs::remove_file::h19277b2d7a4f8643(arg4);
        
        if (!rax)
            *arg1 = -0x7ffffffffffffff4;
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = rax;
        }
    }
    else
    {
        int64_t r15_1 = arg4;
        char rax_1 = uucore::features::fs::is_symlink_loop::h04d1ad90472ac98a(arg4, arg5);
        arg4 = r15_1;
        
        if (rax_1)
            goto label_4a2f02;
        
        std::fs::metadata::h87a95e5fd9b91fc7(&var_188, arg4);
        
        if (var_188 != 2)
        {
            arg4 = r15_1;
            
            if (!(var_150 & 0x92))
                goto label_4a2f02;
            
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = var_180;
        }
    }
}
