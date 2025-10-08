
  fn fuel_core_version::write_version_to_file::hb006b210003cc812(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut var_b8: i64 = arg1[2];
    let mut var_b0: i64 = arg1[3];
    let mut var_a8: i64 = arg1[4];
    let mut var_88: *mut i64 = &var_b8;
    let var_80: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let var_78: *mut i64 = &var_b0;
    let var_70: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let var_68: *mut i64 = &var_a8;
    let var_60: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_58: *mut *mut c_void = &data_52fb68;
    let var_50: i64 = 4;
    let var_38: i64 = 0;
    let var_48: *mut *mut i64 = &var_88;
    let var_40: i64 = 3;
    let mut var_a0: i64;
    core::option::Option$LT$T$GT$::map_or_else::h36fb9c365ec81203(&var_a0, &var_58);
    let r12: i64 = var_a0;
    let var_98: i64;
    let rax_3: *mut *mut [i8; 0xf7] = std::fs::write::h31e1ae25d698ad59(arg2, var_98);
    let mut result: u64;
    
    if rax_3 == 0
    {
        result = 0;
    }
    else
    {
        result = eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_std::hf5a463c72e0f64e7(rax_3, 
            &data_52fba8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h33e271254cf14df2(r12, var_98);
    core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(arg1);
    result
}
