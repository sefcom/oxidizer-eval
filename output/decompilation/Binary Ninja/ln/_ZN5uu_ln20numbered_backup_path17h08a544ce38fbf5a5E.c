
  int64_t uu_ln::numbered_backup_path::h08a544ce38fbf5a5(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_130 = 1;
    int128_t var_120;
    
    while (true)
    {
        int64_t* var_108 = &var_130;
        uint64_t (* var_100_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        char const (** const var_e0)[0xa2] = &data_4f6218;
        int64_t var_d8_1 = 2;
        int64_t var_c0_1 = 0;
        int64_t** var_d0_1 = &var_108;
        int64_t var_c8_1 = 1;
        void var_f8;
        core::option::Option$LT$T$GT$::map_or_else::h600e3d9d768361ad(&var_f8, &var_e0);
        int64_t var_f0;
        int64_t var_e8;
        uu_ln::simple_backup_path::hf92f6b12668c10c1(&var_120, arg2, arg3, var_f0, var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf70cab9980d1377(&var_f8);
        int64_t var_118;
        std::fs::metadata::h3a5d957c4cc0d9ad(&var_e0, var_118);
        int32_t rbx_1 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haadcf12438c9539e(&var_e0);
        
        if (rbx_1 == 2)
            break;
        
        var_130 += 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_120);
    }
    
    int64_t result;
    arg1[1] = result;
    *arg1 = var_120;
    return result;
}
