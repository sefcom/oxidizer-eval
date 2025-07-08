
  void uu_cp::delete_dest_if_needed_and_allowed::h6af23b073bf255d0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5, void* arg6, char arg7, int64_t* arg8)

{
    if (*(arg6 + 0x3c) >= 2)
    {
        *arg1 = 0xd;
        return;
    }
    
    uint64_t rax = *(arg6 + 0x3d);
    int64_t var_168;
    int128_t var_160;
    int128_t var_130;
    
    if (rax == 2)
    {
        if (!*(arg6 + 0x38))
            *arg1 = 0xd;
        else
        {
            char temp0_1 = *(arg6 + 0x41);
            rax = temp0_1;
            
            if (!temp0_1 && arg7)
                rax = *(arg6 + 0x40);
            
            uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_168, arg2, 
                arg3, rax);
            int64_t var_1f8 = 1;
            int64_t var_1f0_1 = arg2;
            int64_t var_1e8_1 = arg3;
            char var_1e0_1 = 1;
            int64_t* var_228 = &var_1f8;
            int64_t (* var_220_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            char const (** const var_258)[0xa4] = &data_5b5f08;
            int64_t var_250_1 = 1;
            int64_t var_238_1 = 0;
            int64_t** var_248_1 = &var_228;
            int64_t var_240_1 = 1;
            int128_t var_270;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_270, &var_258);
            int64_t var_260;
            int64_t var_248_2 = var_260;
            var_258 = var_270;
            
            if (!var_168)
            {
                core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&var_258);
                int128_t var_b8 = var_160;
                int64_t var_150;
                int64_t var_a8_1 = var_150;
                int64_t var_148;
                int64_t var_a0_1 = var_148;
                int128_t var_140;
                int128_t var_98_1 = var_140;
                int128_t var_88_1 = var_130;
                int128_t var_120;
                int128_t var_78_1 = var_120;
                int128_t var_110;
                int128_t var_68_1 = var_110;
                int128_t var_100;
                int128_t var_58_1 = var_100;
                int128_t var_f0;
                int128_t var_48_1 = var_f0;
                int128_t var_e0;
                int128_t var_38_1 = var_e0;
                
                if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(
                        arg8, &var_b8))
                    goto label_506257;
                
                *arg1 = 0xd;
            }
            else
            {
                arg1[3] = var_260;
                *(arg1 + 8) = var_270;
                *arg1 = 3;
                arg1[4] = var_160;
            }
        }
    }
    else if (rax == 1)
    {
        label_506257:
        rax = std::fs::remove_file::h38159f05e7b4dc34(arg4);
        
        if (!rax)
            *arg1 = 0xd;
        else
        {
            *arg1 = 2;
            arg1[1] = rax;
        }
    }
    else
    {
        int64_t r15_1 = arg4;
        char rax_1 = uucore::features::fs::is_symlink_loop::h6176a52fb38b92f8(arg4, arg5);
        arg4 = r15_1;
        
        if (rax_1)
            goto label_506257;
        
        std::fs::metadata::h003d8cdbffde7c56(&var_168, arg4);
        
        if (var_168 != 2)
        {
            arg4 = r15_1;
            
            if (!(var_130 & 0x92))
                goto label_506257;
            
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 2;
            arg1[1] = var_160;
        }
    }
}
