
  int128_t* uu_env::apply_change_directory::h505c531f1c72246e(void* arg1)

{
    int64_t rbx = *(arg1 + 0x78);
    char const (** const var_98)[0xc8];
    
    if (!*(arg1 + 0x58) && rbx)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_98, 
            "must specify command with --chdi…", 0x26);
        int32_t var_80_1 = 0x7d;
        return alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&var_98);
    }
    
    if (rbx)
    {
        int64_t r14_1 = *(arg1 + 0x80);
        int64_t rax_2 = std::env::set_current_dir::h4371552348ad9e0b(rbx);
        
        if (rax_2)
        {
            int64_t var_a0 = rax_2;
            int64_t var_48 = 1;
            int64_t var_40_1 = rbx;
            int64_t var_38_1 = r14_1;
            char var_30_1 = 1;
            int64_t* var_68 = &var_48;
            int64_t (* var_60_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            int64_t* var_58_1 = &var_a0;
            int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_98 = &data_548bf8;
            int64_t var_90_1 = 2;
            int64_t var_78_1 = 0;
            int64_t** var_88_1 = &var_68;
            int32_t var_80;
            var_80 = 2;
            int128_t var_28;
            core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_28, &var_98);
            int32_t var_80_2 = 0x7d;
            var_98 = var_28;
            int64_t var_18;
            int64_t var_88_2 = var_18;
            int128_t* result = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_98);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_a0);
            return result;
        }
    }
    
    return nullptr;
}
