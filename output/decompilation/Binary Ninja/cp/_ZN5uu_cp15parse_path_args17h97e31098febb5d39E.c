
  int128_t* uu_cp::parse_path_args::h97e31098febb5d39(int128_t* arg1, int64_t* arg2, void* arg3)

{
    int128_t* result = arg1;
    int64_t r12 = arg2[2];
    int64_t* var_e0_1;
    int128_t var_d8;
    int64_t var_c8;
    int64_t var_b8;
    int128_t* result_1;
    int64_t var_90;
    int128_t var_78;
    int128_t zmm0_2;
    
    if (r12 != 1)
    {
        if (r12)
        {
            int64_t rax_4 = *(arg3 + 0x18);
            
            if (*(arg3 + 0x5a) & rax_4 == -0x8000000000000000)
            {
                if (r12 <= 2)
                    goto label_49fdcc;
                
                var_90 = arg2[1] + 0x30;
                int64_t (* var_88_2)(void* arg1, int64_t* arg2) =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                var_d8 = &data_55ea28;
                *var_d8[8] = 1;
                int64_t var_b8_2 = 0;
                int64_t* var_c8_2 = &var_90;
                int64_t var_c0_2 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, &var_d8);
                int64_t var_38;
                *(result + 0x18) = var_38;
                zmm0_2 = var_48;
                goto label_49fdae;
            }
            
            if (rax_4 != -0x8000000000000000)
                goto label_49fe1f;
            
            label_49fdcc:
            result_1 = result;
            r12 -= 1;
            arg2[2] = r12;
            int64_t rax_8 = arg2[1];
            int64_t rsi_2 = r12 * 3;
            int64_t rcx_1 = *(rax_8 + (rsi_2 << 3));
            
            if (rcx_1 == -0x8000000000000000)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_e0_1 = arg2;
            var_78 = rcx_1;
            var_78 = *(rax_8 + (rsi_2 << 3) + 8);
            
            if (*(arg3 + 0x5d))
                goto label_49fe53;
            
            goto label_49fec8;
        }
        
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(&var_d8, "missing file operandmissing dest…", 0x14);
        int64_t var_a8;
        result[3] = var_a8;
        int128_t zmm0_1 = var_d8;
        result[2] = var_b8;
        result[1] = var_c8;
        *result = zmm0_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8dd980832f2f5399(arg2);
    }
    else if (*(arg3 + 0x18) != -0x8000000000000000)
    {
        label_49fe1f:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_d8, *(arg3 + 0x20), *(arg3 + 0x28));
        result_1 = result;
        var_e0_1 = arg2;
        int64_t var_68 = var_c8;
        var_78 = var_d8;
        
        if (*(arg3 + 0x5d))
        {
            label_49fe53:
            void* r15_1 = var_e0_1[1];
            int64_t i_1 = r12 * 0x18;
            int64_t i;
            
            do
            {
                std::path::Path::components::hd0346d362206f2e9(&var_d8, *(r15_1 + 8), 
                    *(r15_1 + 0x10));
                char* rax_12;
                uint64_t rdx_3;
                rax_12 = std::path::Components::as_path::h1663bfb7bee69036(&var_d8);
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, 
                    rax_12, rdx_3);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(r15_1);
                int64_t var_80;
                *(r15_1 + 0x10) = var_80;
                *r15_1 = var_90;
                r15_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while (i != 0x18);
            goto label_49fec8;
        }
        
        label_49fec8:
        int64_t rax_14 = var_e0_1[2];
        int128_t zmm0 = *var_e0_1;
        var_d8 = zmm0;
        int64_t var_c0;
        var_c0 = var_78;
        result = result_1;
        *(result + 8) = zmm0;
        *(result + 0x18) = rax_14;
        result[2] = var_c0;
        *(result + 0x28) = var_b8;
        result[3] = var_68;
        *result = -0x7ffffffffffffff4;
    }
    else
    {
        var_90 = arg2[1];
        int64_t (* var_88_1)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_d8 = &data_55ea18;
        *var_d8[8] = 1;
        int64_t var_b8_1 = 0;
        int64_t* var_c8_1 = &var_90;
        int64_t var_c0_1 = 1;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, &var_d8);
        int64_t var_50;
        *(result + 0x18) = var_50;
        zmm0_2 = var_60;
        label_49fdae:
        *(result + 8) = zmm0_2;
        *result = -0x7ffffffffffffffd;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8dd980832f2f5399(arg2);
    }
    return result;
}
