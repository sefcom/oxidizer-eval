
  int64_t uu_df::blocks::block_size_from_env::h0875cabe2802aae1()

{
    char const* const var_78 = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
    int64_t var_70 = 0xd;
    char const* const var_68 = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src…";
    int64_t var_60 = 0xa;
    char const* const var_58 = "BLOCKSIZEsrc/uu/df/src/columns.r…";
    int64_t var_50 = 9;
    int64_t var_48 = 0;
    int64_t var_40 = 3;
    int64_t var_b8;
    
    while (true)
    {
        int64_t rax_1 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf71787afda94e57(&var_78);
        
        if (!rax_1)
        {
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
            return 0;
        }
        
        std::env::var::hec353e942184343c(&var_b8, rax_1);
        
        if (!var_b8)
            break;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&var_b8);
    }
    
    uint64_t var_a0;
    uint64_t var_88_1 = var_a0;
    int128_t var_b0;
    int128_t var_98 = var_b0;
    int32_t var_38;
    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_38, *var_98[8], var_a0);
    int64_t rbp;
    rbp = var_38 == 3;
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hc8411f64556cc8d7(&var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4c5421f62a6f6c4d(&var_98);
    
    if (var_b8)
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&var_b8);
    
    int64_t result;
    result = rbp;
    core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
    return result;
}
