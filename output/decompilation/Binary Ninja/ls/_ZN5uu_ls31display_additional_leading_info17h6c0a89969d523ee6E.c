
  int64_t uu_ls::display_additional_leading_info::h6c0a89969d523ee6(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, void* arg5, void* arg6)

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
    
    if (*(arg5 + 0xf1))
    {
        void* rax_1 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg6);
        
        if (!rax_1)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_a8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
            var_b8 = var_98;
            var_c8 = var_a8;
        }
        else
            uu_ls::get_inode::hac559b2c8c4109af(&var_c8, *(rax_1 + 0x28));
        
        uu_ls::pad_left::h9cc9c358e56c676a(&var_50, *var_c8[8], var_b8, arg3);
        var_60 = &var_50;
        int64_t (* var_58_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_a8 = &data_686678;
        *var_a8[8] = 2;
        int64_t var_88_1 = 0;
        var_98 = &var_60;
        int64_t var_90_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    if (*(arg5 + 0xf2))
    {
        void* rax_4 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg6);
        
        if (rax_4)
        {
            char rbp_2 = *(arg5 + 0xf9);
            uu_ls::display_size::hb2e480a0d8619531(&var_c8, 
                uu_ls::get_block_size::hab622dcab93c70df(*(rax_4 + 0x38), *(rax_4 + 0x60), 
                    *(arg5 + 0xd8), rbp_2), 
                rbp_2);
            
            if (*(arg5 + 0x100) != 4)
                goto label_59c37a;
            
            goto label_59c2c1;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_a8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
        var_b8 = var_98;
        var_c8 = var_a8;
        
        if (*(arg5 + 0x100) == 4)
        {
            label_59c2c1:
            var_50 = &var_c8;
            int64_t (* var_48_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a8 = &data_686678;
            *var_a8[8] = 2;
            int64_t var_88_2 = 0;
            int128_t** var_98_1 = &var_50;
            int64_t var_90_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
        }
        else
        {
            label_59c37a:
            uu_ls::pad_left::h9cc9c358e56c676a(&var_50, *var_c8[8], var_b8, arg4);
            var_60 = &var_50;
            int64_t (* var_58_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a8 = &data_686678;
            *var_a8[8] = 2;
            int64_t var_88_3 = 0;
            int64_t** var_98_2 = &var_60;
            int64_t var_90_3 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd1412c45ded2be83(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::he85952e7563119ae(&var_78, &var_a8));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_50);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_78;
    return result;
}
