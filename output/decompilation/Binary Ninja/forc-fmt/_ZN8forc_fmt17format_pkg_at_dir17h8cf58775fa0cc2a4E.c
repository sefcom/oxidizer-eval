
  uint64_t forc_fmt::format_pkg_at_dir::h8cf58775fa0cc2a4(char arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_90;
    sway_utils::helpers::find_parent_dir_with_file::hcc7b19d4dc2e8189(&var_90);
    void** const var_108;
    
    if (0 + -(var_90))
    {
        var_108 = &data_c0a450;
        int64_t var_100_1 = 1;
        int64_t var_f8_3 = 8;
        int128_t var_f0_1 = {0};
        return anyhow::__private::format_err::h09b344f6a077676a(&var_108);
    }
    
    int64_t var_88;
    uint64_t var_80;
    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
        &var_108, var_88, var_80);
    uint64_t var_f8;
    uint64_t var_a8_1 = var_f8;
    int128_t var_b8 = var_108;
    int128_t var_78;
    std::path::Path::join::hc5b6364c54a49269(&var_78, *var_b8[8], var_f8, 
        "Forc.tomlmissing field `workspac…");
    uint64_t var_f8_1 = var_80;
    var_108 = var_90;
    void var_48;
    sway_utils::helpers::get_sway_files::h6d3fcb30d96264e7(&var_48, &var_108);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3bf6c9e6ad652326(&var_108, &var_48);
    int64_t var_60;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h128b359458db2cd2(&var_60, &var_108);
    uint32_t rbp_1 = arg1;
    uint64_t result;
    char var_d0;
    char var_cf;
    uint64_t result_1;
    char rbx_1;
    
    if (var_60 != -0x8000000000000000)
    {
        rbx_1 = 0;
        
        while (true)
        {
            forc_fmt::format_file::haa7995617547e0cf(&var_d0, rbp_1, &var_60, arg4);
            
            if (var_d0 == 1)
            {
                result = result_1;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hacad36253799282a(&var_108);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_78);
                break;
            }
            
            rbx_1 |= var_cf;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h128b359458db2cd2(&var_60, &var_108);
            
            if (var_60 == -0x8000000000000000)
                goto label_7d5395;
        }
    }
    else
    {
        rbx_1 = 0;
        label_7d5395:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hacad36253799282a(&var_108);
        int64_t var_68;
        int64_t var_f8_2 = var_68;
        var_108 = var_78;
        forc_fmt::format_manifest::hcc9f299bdf5e80ef(&var_d0, rbp_1, &var_108);
        
        if (var_d0 != 1)
        {
            if (!(arg1 & 1) || !((rbx_1 | var_cf) & 1))
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_b8);
                return 0;
            }
            
            var_108 = &data_c0a3e0;
            int64_t var_100_2 = 1;
            int64_t var_f8_4 = 8;
            int128_t var_f0_2 = {0};
            result = anyhow::__private::format_err::h09b344f6a077676a(&var_108);
        }
        else
            result = result_1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_b8);
    return result;
}
