
  uint64_t fuel_core_version::read_fuel_core_version::hefde22257e8a198e(int64_t* arg1, void* arg2)

{
    int64_t var_f8;
    std::fs::read_to_string::hbdd159fe26aefb0c(&var_f8, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h5e4fe01fcd78a6fd(arg2));
    int64_t r15 = var_f8;
    char* var_f0;
    char* r14 = var_f0;
    
    if (-(r15) == -0x8000000000000000)
    {
        uint64_t result = eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_std::hf5a463c72e0f64e7(
            r14, &data_52fc70);
        arg1[1] = result;
        *arg1 = 0;
        return result;
    }
    
    int64_t var_78;
    _$LT$toml..value..Value$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h8c79bbe4c73167c0(
        &var_78);
    int64_t rax_3 = var_78;
    int128_t var_70;
    int128_t var_60;
    
    if (rax_3 != 2)
    {
        int64_t var_20;
        int64_t var_a0_1 = var_20;
        int128_t var_30;
        int128_t var_b0_1 = var_30;
        int128_t var_40;
        int128_t var_c0_1 = var_40;
        int128_t var_50;
        int128_t var_d0_1 = var_50;
        var_f0 = var_70;
        int128_t var_e0_1 = var_60;
        var_f8 = rax_3;
        arg1[1] = eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_std::h9967a73e202d0302(&var_f8);
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h33e271254cf14df2(r15, r14);
    }
    
    var_78 = var_70;
    var_70 = var_60;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h33e271254cf14df2(r15, r14);
    fuel_core_version::find_dependency_version::h34d3c1ceae644609(&var_f8, &var_78);
    int64_t r14_1 = var_f8;
    
    if (r14_1 != -0x8000000000000000)
    {
        int64_t var_e8;
        semver::parse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$semver..Version$GT$::from_str::heb6ed03d782a6228(&var_f8, var_f0, var_e8);
        int64_t rax_6 = var_f8;
        
        if (!rax_6)
        {
            arg1[1] =
                eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_std::h8789ff419f3e2838(var_f0);
            *arg1 = 0;
        }
        else
        {
            int128_t var_e0;
            arg1[4] = *var_e0[8];
            *(arg1 + 0x10) = var_e8;
            *arg1 = rax_6;
            arg1[1] = var_f0;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h33e271254cf14df2(r14_1, var_f0);
    }
    else
    {
        arg1[1] = eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_adhoc::h2b349f5052a04513();
        *arg1 = 0;
    }
    
    return core::ptr::drop_in_place$LT$toml..value..Value$GT$::h471d934e4f761f26(&var_78);
}
