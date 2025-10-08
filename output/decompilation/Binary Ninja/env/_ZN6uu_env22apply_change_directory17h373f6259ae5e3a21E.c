
  uint64_t uu_env::apply_change_directory::h373f6259ae5e3a21(void* arg1)

{
    int64_t rbx = *(arg1 + 0x78);
    void** const var_98;
    
    if (!(!rbx | *(arg1 + 0x58)))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_98, "must specify command with --chdi…", 0x26);
        int32_t var_80_2 = 0x7d;
        return alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_98);
    }
    
    if (rbx)
    {
        int64_t r14_1 = *(arg1 + 0x80);
        int64_t rax_1 = std::env::set_current_dir::ha8bb603cfe1cfdee(rbx);
        
        if (rax_1)
        {
            int64_t var_a0 = rax_1;
            int64_t var_48 = 1;
            int64_t var_40 = rbx;
            int64_t var_38 = r14_1;
            char var_30 = 1;
            int64_t* var_68 = &var_48;
            int64_t (* var_60)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int64_t* var_58 = &var_a0;
            int64_t (* var_50)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_510c88;
            int64_t var_90 = 2;
            int64_t var_78 = 0;
            int64_t** var_88 = &var_68;
            int32_t var_80;
            var_80 = 2;
            int128_t var_28;
            core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_28, &var_98);
            int32_t var_80_1 = 0x7d;
            var_98 = var_28;
            int64_t var_18;
            int64_t var_88_1 = var_18;
            uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_98);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4de596a2959b6a4f(&var_a0);
            return result;
        }
    }
    
    return 0;
}
