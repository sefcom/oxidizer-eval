
  int128_t* uu_cp::copy_source::h7730ca89bda1d16f(int128_t** arg1, void** arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, char arg7, void* arg8, char** arg9, int64_t* arg10, char** arg11)

{
    if (std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
        return uu_cp::copydir::copy_directory::hafe385d40a44c739(arg1, arg2, arg3, arg4, arg5, 
            arg6, arg8, arg9, arg10, arg11);
    
    char r8_1 = *(arg8 + 0x5c);
    void* result_1;
    uu_cp::construct_dest_path::h35c9b894b22c07c1(&result_1, arg3, arg4, arg5, arg6, arg7, 
        *(arg8 + 0x5a), r8_1);
    int128_t* result = result_1;
    int128_t var_d8;
    int128_t var_a8 = var_d8;
    uint64_t var_c8;
    int128_t var_c0;
    int64_t var_b0;
    
    if (result != -0x7ffffffffffffff4)
    {
        arg1[6] = var_b0;
        *(arg1 + 0x20) = var_c0;
        arg1[3] = var_c8;
        *(arg1 + 8) = var_a8;
        *arg1 = result;
        return result;
    }
    
    int128_t var_118 = var_a8;
    uint64_t var_108_1 = var_c8;
    int64_t* rax_2 = *var_118[8];
    uu_cp::copy_file::h2d5f479453081e34(&var_a8, arg2, arg3, arg4, rax_2, var_c8, arg8, arg9, 
        arg10, arg11, 1);
    int128_t** rcx_5 = arg1;
    
    if (!(r8_1 & 1))
        goto label_4a10e7;
    
    uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&result_1, arg3, arg4, rax_2);
    void var_50;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&var_50, &result_1);
    int64_t var_70;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&var_70, &var_50);
    int64_t rsi_7 = var_70;
    
    if (!rsi_7)
    {
        label_4a10d5:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_50);
        rcx_5 = arg1;
        label_4a10e7:
        int64_t var_78;
        rcx_5[6] = var_78;
        int128_t zmm0_2 = var_a8;
        int128_t var_88;
        *(rcx_5 + 0x20) = var_88;
        *(rcx_5 + 0x10) = var_c8;
        *rcx_5 = zmm0_2;
    }
    else
    {
        while (true)
        {
            int64_t var_f8;
            int64_t var_68;
            uucore::features::fs::canonicalize::h2a46952db6a00ca6(&var_f8, rsi_7, var_68, 0, 1);
            
            if (var_f8 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd1372b83dff59979(&var_f8);
            else
            {
                int64_t** var_f0;
                int64_t var_e8;
                int64_t* var_60;
                int64_t var_58;
                uu_cp::copy_attributes::h279b81c598780b21(&result_1, var_f0, var_e8, var_60, 
                    var_58, arg8 + 0x48);
                
                if (result_1 != -0x7ffffffffffffff4)
                {
                    arg1[6] = var_b0;
                    int128_t zmm0_3 = result_1;
                    *(arg1 + 0x20) = var_c0;
                    *(arg1 + 0x10) = var_d8;
                    *arg1 = zmm0_3;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_50);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h38297071204f1dde(&var_a8);
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&var_70, &var_50);
            rsi_7 = var_70;
            
            if (!rsi_7)
                goto label_4a10d5;
        }
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_118);
}
