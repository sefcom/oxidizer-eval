
  uint64_t uu_join::get_field_number::ha34d3b07c5e6ef90(uint64_t* arg1, char arg2, int64_t arg3, char arg4, int64_t arg5)

{
    if (!(arg2 & 1))
    {
        int64_t rax_2 = 0;
        
        if (arg4 & 1)
            rax_2 = arg5;
        
        arg1[1] = rax_2;
        *arg1 = 0;
        return rax_2;
    }
    
    bool rax = arg3 != arg5;
    
    if (!(arg4 & rax))
    {
        arg1[1] = arg3;
        *arg1 = 0;
        return rax;
    }
    
    int64_t var_90 = arg3 + 1;
    int64_t var_88 = arg5 + 1;
    int64_t* var_80 = &var_90;
    uint64_t (* var_78)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    int64_t* var_70 = &var_88;
    uint64_t (* var_68)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    void** const var_60 = &data_4fe578;
    int64_t var_58 = 2;
    int64_t var_40 = 0;
    int64_t** var_50 = &var_80;
    int64_t var_48 = 2;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_30, &var_60);
    int32_t var_18 = 1;
    uint64_t rax_1 = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_30);
    *arg1 = rax_1;
    arg1[1] = &data_4fe360;
    return rax_1;
}
