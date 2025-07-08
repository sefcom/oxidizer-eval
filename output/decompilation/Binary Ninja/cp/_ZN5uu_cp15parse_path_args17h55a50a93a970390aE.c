
  int128_t* uu_cp::parse_path_args::h55a50a93a970390a(int128_t* arg1, int64_t* arg2, void* arg3)

{
    int64_t rax = arg2[2];
    int128_t var_f8;
    int64_t var_e8;
    int64_t var_d8;
    int64_t var_b0;
    int128_t var_98;
    int128_t zmm0_2;
    
    if (rax != 1)
    {
        if (rax)
        {
            int64_t rsi_1 = *(arg3 + 0x18);
            
            if (rax >= 3 && *(arg3 + 0x42) && rsi_1 == -0x8000000000000000)
            {
                var_b0 = arg2[1] + 0x30;
                int64_t (* var_a8_2)(void* arg1, void* arg2) =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h3d0eaa2c1dec7bf2;
                var_f8 = &data_5b5ca0;
                *var_f8[8] = 1;
                int64_t var_d8_2 = 0;
                int64_t* var_e8_2 = &var_b0;
                int64_t var_e0_2 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_48, &var_f8);
                int64_t var_38;
                *(arg1 + 0x18) = var_38;
                zmm0_2 = var_48;
                goto label_502f1c;
            }
            
            if (rsi_1 != -0x8000000000000000)
                goto label_502f86;
            
            arg2[2] = rax - 1;
            int64_t rsi_3 = arg2[1];
            int64_t rdi_4 = (rax - 1) * 3;
            int64_t rax_7 = *(rsi_3 + (rdi_4 << 3));
            var_f8 = *(rsi_3 + (rdi_4 << 3) + 8);
            
            if (rax_7 == -0x8000000000000000)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            var_98 = rax_7;
            var_98 = var_f8;
            
            if (*(arg3 + 0x45))
                goto label_502fbf;
            
            goto label_503066;
        }
        
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&var_f8, "missing file operandmissing dest…", 0x14);
        int128_t zmm0_1 = var_f8;
        int128_t var_c8;
        arg1[3] = var_c8;
        arg1[2] = var_d8;
        arg1[1] = var_e8;
        *arg1 = zmm0_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hb2e11a2d80af38bc(arg2);
    }
    else if (*(arg3 + 0x18) != -0x8000000000000000)
    {
        label_502f86:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_f8, arg3 + 0x18);
        int64_t var_88 = var_e8;
        var_98 = var_f8;
        
        if (*(arg3 + 0x45))
        {
            label_502fbf:
            int64_t rax_9;
            int64_t rdx_1;
            rax_9 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h629b9e0cc446ffb0(arg2);
            int64_t var_70 = rax_9;
            int64_t var_68_1 = rdx_1;
            int128_t* i_2 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f1c76058c483b11(&var_70);
            
            if (i_2)
            {
                int128_t* i_1 = i_2;
                int128_t* i;
                
                do
                {
                    std::path::Path::components::h4f3217acf0fc8653(&var_f8, *(i_1 + 8), i_1[1]);
                    char* rax_10;
                    uint64_t rdx_3;
                    rax_10 = std::path::Components::as_path::h22183dd583c1f97a(&var_f8);
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_b0, 
                        rax_10, rdx_3);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(i_1);
                    int64_t var_a0;
                    i_1[1] = var_a0;
                    *i_1 = var_b0;
                    i = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f1c76058c483b11(&var_70);
                    i_1 = i;
                } while (i);
            }
            
            goto label_503066;
        }
        
        label_503066:
        int64_t rax_12 = arg2[2];
        int128_t zmm0 = *arg2;
        var_f8 = zmm0;
        int64_t var_e0;
        var_e0 = var_98;
        *(arg1 + 8) = zmm0;
        *(arg1 + 0x18) = rax_12;
        arg1[2] = var_e0;
        *(arg1 + 0x28) = var_d8;
        arg1[3] = var_88;
        *arg1 = 0xd;
    }
    else
    {
        var_b0 = arg2[1];
        int64_t (* var_a8_1)(void* arg1, void* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h3d0eaa2c1dec7bf2;
        var_f8 = &data_5b5c90;
        *var_f8[8] = 1;
        int64_t var_d8_1 = 0;
        int64_t* var_e8_1 = &var_b0;
        int64_t var_e0_1 = 1;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_60, &var_f8);
        int64_t var_50;
        *(arg1 + 0x18) = var_50;
        zmm0_2 = var_60;
        label_502f1c:
        *(arg1 + 8) = zmm0_2;
        *arg1 = 4;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hb2e11a2d80af38bc(arg2);
    }
    return arg1;
}
