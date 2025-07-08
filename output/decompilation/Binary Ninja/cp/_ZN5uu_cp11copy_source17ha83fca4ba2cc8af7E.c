
  int64_t* uu_cp::copy_source::ha83fca4ba2cc8af7(int128_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, char arg7, int64_t* arg8, int64_t* arg9, int64_t* arg10, int64_t* arg11)

{
    if (std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4))
        return uu_cp::copydir::copy_directory::h28c1a7346111a6c9(arg1, arg2, arg3, arg4, arg5, 
            arg6, arg8, arg9, arg10, arg11, 1);
    
    char r11_1 = *(arg8 + 0x44);
    void* result_1;
    uu_cp::construct_dest_path::hfc66a1b24656cf26(&result_1, arg3, arg4, arg5, arg6, arg7, 
        *(arg8 + 0x42), r11_1);
    int64_t* result = result_1;
    int128_t var_d0;
    int128_t var_98 = var_d0;
    uint64_t var_c0;
    int128_t var_b8;
    int128_t var_a8;
    
    if (result != 0xd)
    {
        arg1[3] = var_a8;
        arg1[2] = var_b8;
        *(arg1 + 0x18) = var_c0;
        *(arg1 + 8) = var_98;
        *arg1 = result;
        return result;
    }
    
    int128_t var_138 = var_98;
    uint64_t var_128_1 = var_c0;
    uu_cp::copy_file::h3a721c0b700148ba(&var_98, arg2, arg3, arg4, *var_138[8], var_c0, arg8, arg9, 
        arg10, arg11, 1);
    int128_t* rax_2 = arg1;
    
    if (!r11_1)
        goto label_50430b;
    
    uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&result_1, arg3, arg4, *var_138[8]);
    void var_50;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_50, &result_1);
    int64_t var_f8;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_f8, &var_50);
    int64_t rsi_7 = var_f8;
    
    if (!rsi_7)
    {
        label_504303:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_50);
        rax_2 = arg1;
        label_50430b:
        int128_t zmm0_2 = var_98;
        int128_t var_68;
        rax_2[3] = var_68;
        int128_t var_78;
        rax_2[2] = var_78;
        rax_2[1] = var_c0;
        *rax_2 = zmm0_2;
    }
    else
    {
        while (true)
        {
            int64_t var_150;
            int64_t var_f0;
            uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_150, rsi_7, var_f0, 0, 1);
            
            if (var_150 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
            else
            {
                int64_t var_140;
                int64_t var_108_1 = var_140;
                int128_t var_118 = var_150;
                void* var_e8;
                int64_t var_e0;
                uu_cp::copy_attributes::h0ca124c6c7245f78(&result_1, *var_118[8], var_140, var_e8, 
                    var_e0, &arg8[6]);
                
                if (result_1 != 0xd)
                {
                    int128_t zmm0_4 = result_1;
                    arg1[3] = var_a8;
                    arg1[2] = var_b8;
                    arg1[1] = var_d0;
                    *arg1 = zmm0_4;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_118);
                    
                    if (var_150 == -0x8000000000000000)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
                    
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_50);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h24b7025726004fbd(&var_98);
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_118);
                
                if (var_150 == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_f8, &var_50);
            rsi_7 = var_f8;
            
            if (!rsi_7)
                goto label_504303;
        }
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_138);
}
