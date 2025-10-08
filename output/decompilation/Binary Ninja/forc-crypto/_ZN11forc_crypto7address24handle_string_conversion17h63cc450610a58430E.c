
  int64_t forc_crypto::address::handle_string_conversion::h63cc450610a58430(char* arg1, int64_t* arg2)

{
    arg2[2];
    char* rax;
    int64_t rdx;
    rax = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$$u5b$u8$u5d$$GT$$GT$::as_ref::h6c2a555f71a2b08a(arg2[1]);
    int32_t var_48;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax, rdx);
    int64_t var_40;
    int64_t var_38;
    
    if (var_48 == 1)
    {
        var_48 = var_40;
        int64_t var_40_1 = var_38;
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h81b54189e9287e31(&var_48);
        *arg1 = 1;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(arg2);
    }
    
    int64_t var_20 = var_40;
    int64_t var_18 = var_38;
    _$LT$fuel_types..array_types..Address$u20$as$u20$core..str..traits..FromStr$GT$::from_str::he761938a00046dac(&var_48, var_40, var_38);
    uint64_t rax_3;
    
    if (var_48 != 1)
    {
        int128_t zmm0_2 = *var_48[1];
        *(arg1 + 0x11) = *var_38[1];
        *(arg1 + 1) = zmm0_2;
        rax_3 = 0;
    }
    else
    {
        *(arg1 + 8) = forc_crypto::address::handle_string_conversion::_$u7b$$u7b$closure$u7d$$u7d$::hf4c96ad01e46689a(&var_20);
        rax_3 = 1;
    }
    
    *arg1 = rax_3;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(arg2);
}
