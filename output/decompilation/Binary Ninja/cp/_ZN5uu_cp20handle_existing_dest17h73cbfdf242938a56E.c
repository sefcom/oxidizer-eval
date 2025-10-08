
  int128_t* uu_cp::handle_existing_dest::h73cbfdf242938a56(int64_t* arg1, char* arg2, uint64_t arg3, char* arg4, uint64_t arg5, void* arg6, char arg7, int64_t* arg8)

{
    int128_t* result;
    void* const result_1;
    int64_t var_100;
    int64_t* var_e0;
    int64_t* var_b8;
    
    if (!uu_cp::is_forbidden_to_copy_to_same_file::h5b788622660e3e62(arg2, arg3, arg4, arg5, arg6, 
        arg7))
    {
        result = *(arg6 + 0x66);
        
        if (result == 1)
        {
            if (*(arg6 + 0x5f))
            {
                var_100 = 1;
                char* var_f8_2 = arg4;
                uint64_t var_f0_2 = arg5;
                char var_e8_2 = 1;
                var_e0 = &var_100;
                int64_t (* var_d8_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_1 = &data_55eb08;
                int64_t var_130_2 = 2;
                int64_t var_118_2 = 0;
                int64_t** var_128_2 = &var_e0;
                int64_t var_120_2 = 1;
                result = std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            }
            
            *arg1 = -0x7ffffffffffffff9;
            arg1[1] = 0;
        }
        else
        {
            int64_t var_130;
            int64_t var_120;
            int128_t var_110;
            
            if (result == 2)
            {
                label_4a297f:
                int64_t var_98;
                uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_98, 
                    *(arg6 + 0x65), arg4, arg5, *(arg6 + 8), *(arg6 + 0x10));
                
                if (var_98 != -0x8000000000000000)
                {
                    int64_t var_90;
                    uint64_t var_88;
                    void* const result_2;
                    void* r14_3;
                    
                    if (uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(arg2, 
                        arg3, var_90, var_88, 1))
                    {
                        var_e0 = 1;
                        char* var_d8_3 = arg4;
                        uint64_t var_d0_2 = arg5;
                        char var_c8_2 = 1;
                        var_100 = 1;
                        char* var_f8_3 = arg2;
                        uint64_t var_f0_3 = arg3;
                        char var_e8_3 = 1;
                        var_b8 = &var_e0;
                        int64_t (* var_b0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        int64_t* var_a8_2 = &var_100;
                        int64_t (* var_a0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_1 = &data_55ec08;
                        int64_t var_130_3 = 3;
                        int64_t var_118_3 = 0;
                        int64_t** var_128_3 = &var_b8;
                        int64_t var_120_3 = 2;
                        void var_48;
                        r14_3 = &var_48;
                        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                            &result_1);
                        result_2 = -0x8000000000000003;
                        label_4a2c40:
                        arg1[3] = *(r14_3 + 0x10);
                        *(arg1 + 8) = *r14_3;
                        *arg1 = result_2;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_98);
                    }
                    
                    char rax_2 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, arg5);
                    uu_cp::backup_dest::hdc34a5fbd97a8cc7(&result_1, arg4, arg5, var_90, var_88, 
                        rax_2);
                    result_2 = result_1;
                    int128_t var_68 = var_130;
                    int64_t var_58_1 = var_120;
                    
                    if (result_2 != -0x7ffffffffffffff4)
                    {
                        arg1[6] = *var_110[8];
                        int64_t var_118;
                        *(arg1 + 0x20) = var_118;
                        r14_3 = &var_68;
                        goto label_4a2c40;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_68);
                    result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                        &var_98);
                    
                    if (!rax_2)
                        goto label_4a29c7;
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
                else
                {
                    label_4a29c7:
                    uu_cp::delete_dest_if_needed_and_allowed::h89467f703e519ceb(&result_1, arg2, 
                        arg3, arg4, arg5, arg6, arg7, arg8);
                    result = result_1;
                    
                    if (result != -0x7ffffffffffffff4)
                        goto label_4a2a85;
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
            }
            else
            {
                uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(&result_1, *(arg6 + 0x54), arg4, 
                    arg5, *(arg6 + 0x5f));
                result = result_1;
                
                if (result == -0x7ffffffffffffff4)
                    goto label_4a297f;
                
                label_4a2a85:
                *(arg1 + 0x28) = var_110;
                *(arg1 + 0x18) = var_120;
                *(arg1 + 8) = var_130;
                *arg1 = result;
            }
        }
    }
    else
    {
        var_e0 = 1;
        char* var_d8_1 = arg2;
        uint64_t var_d0_1 = arg3;
        char var_c8_1 = 1;
        var_100 = 1;
        char* var_f8_1 = arg4;
        uint64_t var_f0_1 = arg5;
        char var_e8_1 = 1;
        var_b8 = &var_e0;
        int64_t (* var_b0_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        int64_t* var_a8_1 = &var_100;
        int64_t (* var_a0_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        result_1 = &data_55ebd8;
        int64_t var_130_1 = 3;
        int64_t var_118_1 = 0;
        int64_t** var_128_1 = &var_b8;
        int64_t var_120_1 = 2;
        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &result_1);
        *arg1 = -0x7ffffffffffffffd;
    }
    return result;
}
