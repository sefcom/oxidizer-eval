
  int128_t* uu_cp::handle_existing_dest::h1a418223b4b32809(int64_t* arg1, char* arg2, uint64_t arg3, char* arg4, uint64_t arg5, void* arg6, char arg7, int64_t* arg8)

{
    int128_t* result;
    int64_t var_128;
    void* const result_1;
    int64_t var_c8;
    int64_t* var_88;
    
    if (!uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(arg2, arg3, arg4, arg5, arg6, 
        arg7))
    {
        if (*(arg6 + 0x4d) != 2)
        {
            uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&result_1, *(arg6 + 0x3c), arg4, arg5, 
                *(arg6 + 0x47));
            result = result_1;
        }
        
        int64_t var_100;
        int64_t var_f0;
        int128_t var_e0;
        
        if (*(arg6 + 0x4d) != 2 && result != 0xd)
        {
            label_505d28:
            int64_t var_d0;
            arg1[7] = var_d0;
            *(arg1 + 0x28) = var_e0;
            *(arg1 + 0x18) = var_f0;
            *(arg1 + 8) = var_100;
            *arg1 = result;
        }
        else
        {
            int64_t var_60;
            uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&var_60, 
                *(arg6 + 0x4c), arg4, arg5, *(arg6 + 8), *(arg6 + 0x10));
            
            if (var_60 != -0x8000000000000000)
            {
                int128_t var_a8 = var_60;
                uint64_t var_50;
                
                if (uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg2, arg3, 
                    *var_a8[8], var_50, 1))
                {
                    var_c8 = 1;
                    char* var_c0_2 = arg4;
                    uint64_t var_b8_2 = arg5;
                    char var_b0_2 = 1;
                    var_128 = 1;
                    char* var_120_2 = arg2;
                    uint64_t var_118_2 = arg3;
                    char var_110_2 = 1;
                    var_88 = &var_c8;
                    int64_t (* var_80_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    int64_t* var_78_2 = &var_128;
                    int64_t (* var_70_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    result_1 = &data_5b5ed8;
                    int64_t var_100_2 = 3;
                    int64_t var_e8_2 = 0;
                    int64_t** var_f8_2 = &var_88;
                    int64_t var_f0_2 = 2;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_48, 
                        &result_1);
                    int64_t var_38;
                    arg1[3] = var_38;
                    *(arg1 + 8) = var_48;
                    *arg1 = 4;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                        &var_a8);
                }
                
                char rax_3 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg4, arg5);
                uu_cp::backup_dest::hb9d2dd191dda7572(&result_1, arg4, arg5, *var_a8[8], var_50, 
                    rax_3);
                void* const result_2 = result_1;
                var_128 = var_100;
                
                if (result_2 != 0xd)
                {
                    *(arg1 + 0x30) = var_e0;
                    int64_t var_e8;
                    *(arg1 + 0x20) = var_e8;
                    arg1[3] = var_f0;
                    *(arg1 + 8) = var_128;
                    *arg1 = result_2;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                        &var_a8);
                }
                
                var_c8 = var_128;
                int64_t var_b8_3 = var_f0;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_c8);
                result =
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_a8);
                
                if (!rax_3)
                    goto label_505d03;
                
                *arg1 = 0xd;
            }
            else
            {
                label_505d03:
                uu_cp::delete_dest_if_needed_and_allowed::h6af23b073bf255d0(&result_1, arg2, arg3, 
                    arg4, arg5, arg6, arg7, arg8);
                result = result_1;
                
                if (result != 0xd)
                    goto label_505d28;
                
                *arg1 = 0xd;
            }
        }
    }
    else
    {
        var_c8 = 1;
        char* var_c0_1 = arg2;
        uint64_t var_b8_1 = arg3;
        char var_b0_1 = 1;
        var_128 = 1;
        char* var_120_1 = arg4;
        uint64_t var_118_1 = arg5;
        char var_110_1 = 1;
        var_88 = &var_c8;
        int64_t (* var_80_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int64_t* var_78_1 = &var_128;
        int64_t (* var_70_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        result_1 = &data_5b5ea8;
        int64_t var_100_1 = 3;
        int64_t var_e8_1 = 0;
        int64_t** var_f8_1 = &var_88;
        int64_t var_f0_1 = 2;
        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &result_1);
        *arg1 = 4;
    }
    return result;
}
