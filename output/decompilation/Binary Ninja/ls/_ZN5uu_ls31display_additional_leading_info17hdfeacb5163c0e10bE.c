
  int64_t uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int64_t var_78 = 0;
    int64_t var_70 = 1;
    int64_t result = 0;
    int128_t var_c8;
    int64_t** var_b8;
    int128_t var_a8;
    int64_t** var_98;
    int64_t* var_60;
    int128_t* var_50;
    
    if (*(arg5 + 0xe9))
    {
        int32_t* rax_1 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2);
        
        if (!rax_1)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_a8, "? ,\n,   \t?????????+bd-cannot a…", 1);
            var_b8 = var_98;
            var_c8 = var_a8;
        }
        else
            uu_ls::get_inode::h2901925630e3969f(&var_c8, *(rax_1 + 0x28));
        
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_50, *var_c8[8]);
        var_60 = &var_50;
        int64_t (* var_58_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_a8 = &data_6125e8;
        *var_a8[8] = 2;
        int64_t var_88_1 = 0;
        var_98 = &var_60;
        int64_t var_90_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
    }
    
    if (*(arg5 + 0xea))
    {
        int32_t* rax_4 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2);
        
        if (rax_4)
        {
            char rbp_2 = *(arg5 + 0xf1);
            uu_ls::display_size::hba9b1cbdd7c6b199(&var_c8, 
                uu_ls::get_block_size::h2a7c975a8304f17e(rax_4[0xe], *(rax_4 + 0x60), 
                    *(arg5 + 0xd8), rbp_2), 
                rbp_2);
            
            if (*(arg5 + 0xf8) != 4)
                goto label_52943a;
            
            goto label_529381;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_a8, 
            "? ,\n,   \t?????????+bd-cannot a…", 1);
        var_b8 = var_98;
        var_c8 = var_a8;
        
        if (*(arg5 + 0xf8) == 4)
        {
            label_529381:
            var_50 = &var_c8;
            int64_t (* var_48_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_a8 = &data_6125e8;
            *var_a8[8] = 2;
            int64_t var_88_2 = 0;
            int128_t** var_98_1 = &var_50;
            int64_t var_90_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
        }
        else
        {
            label_52943a:
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_50, *var_c8[8]);
            var_60 = &var_50;
            int64_t (* var_58_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_a8 = &data_6125e8;
            *var_a8[8] = 2;
            int64_t var_88_3 = 0;
            int64_t** var_98_2 = &var_60;
            int64_t var_90_3 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_78, &var_a8));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_78;
    return result;
}
