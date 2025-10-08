
  uint64_t uu_join::parse_field_number::h7876c58ca785f0e6(int64_t* arg1, char* arg2, int64_t arg3)

{
    char var_a8;
    uint64_t result = core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
        &var_a8, arg2, arg3);
    int64_t var_a0;
    
    if (var_a8 == 1)
    {
        char var_a7;
        
        if (var_a7 != 2)
            goto label_46ebf1;
        
        arg1[1] = -1;
        *arg1 = 0;
    }
    else if (!var_a0)
    {
        label_46ebf1:
        int64_t var_88 = 0;
        char* var_80_1 = arg2;
        int64_t var_78_1 = arg3;
        char var_70_1 = 1;
        int64_t* var_98 = &var_88;
        int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        void** const var_68 = &data_4fe598;
        int64_t var_60_1 = 1;
        int64_t var_48_1 = 0;
        int64_t** var_58_1 = &var_98;
        int64_t var_50_1 = 1;
        void var_38;
        core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_38, &var_68);
        int32_t var_20_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_38);
        *arg1 = result;
        arg1[1] = &data_4fe360;
    }
    else
    {
        result = var_a0 - 1;
        arg1[1] = result;
        *arg1 = 0;
    }
    return result;
}
