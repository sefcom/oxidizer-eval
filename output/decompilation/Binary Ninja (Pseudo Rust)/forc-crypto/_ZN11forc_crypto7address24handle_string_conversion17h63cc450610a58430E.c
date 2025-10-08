
  fn forc_crypto::address::handle_string_conversion::h63cc450610a58430(arg1: *mut i8, arg2: *mut i64) -> i64

{
    arg2[2];
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$$u5b$u8$u5d$$GT$$GT$::as_ref::h6c2a555f71a2b08a(arg2[1]);
    let mut var_48: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax, rdx);
    let var_40: i64;
    let var_38: i64;
    
    if var_48 == 1
    {
        var_48 = var_40;
        let var_40_1: i64 = var_38;
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h81b54189e9287e31(&var_48);
        *arg1 = 1;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(arg2);
    }
    
    let mut var_20: i64 = var_40;
    let var_18: i64 = var_38;
    _$LT$fuel_types..array_types..Address$u20$as$u20$core..str..traits..FromStr$GT$::from_str::he761938a00046dac(&var_48, var_40, var_38);
    let mut rax_3: u64;
    
    if var_48 != 1
    {
        let zmm0_2: i128 = *var_48[1];
        *arg1.byte_offset(0x11) = *var_38[1];
        *arg1.byte_offset(1) = zmm0_2;
        rax_3 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = forc_crypto::address::handle_string_conversion::_$u7b$$u7b$closure$u7d$$u7d$::hf4c96ad01e46689a(&var_20);
        rax_3 = 1;
    }
    
    *arg1 = rax_3;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(arg2)
}
