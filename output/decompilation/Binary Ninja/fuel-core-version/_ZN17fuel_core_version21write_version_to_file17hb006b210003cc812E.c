
  uint64_t fuel_core_version::write_version_to_file::hb006b210003cc812(int64_t* arg1, int64_t* arg2)

{
    int64_t var_b8 = arg1[2];
    int64_t var_b0 = arg1[3];
    int64_t var_a8 = arg1[4];
    int64_t* var_88 = &var_b8;
    uint64_t (* var_80)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    int64_t* var_78 = &var_b0;
    uint64_t (* var_70)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    int64_t* var_68 = &var_a8;
    uint64_t (* var_60)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    void** const var_58 = &data_52fb68;
    int64_t var_50 = 4;
    int64_t var_38 = 0;
    int64_t** var_48 = &var_88;
    int64_t var_40 = 3;
    int64_t var_a0;
    core::option::Option$LT$T$GT$::map_or_else::h36fb9c365ec81203(&var_a0, &var_58);
    int64_t r12 = var_a0;
    int64_t var_98;
    char const (** rax_3)[0xf7] = std::fs::write::h31e1ae25d698ad59(arg2, var_98);
    uint64_t result;
    
    if (!rax_3)
        result = 0;
    else
        result = eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_std::hf5a463c72e0f64e7(rax_3, 
            &data_52fba8);
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h33e271254cf14df2(r12, var_98);
    core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(arg1);
    return result;
}
