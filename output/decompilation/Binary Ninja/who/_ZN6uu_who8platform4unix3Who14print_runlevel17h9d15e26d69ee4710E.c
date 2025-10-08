
  int64_t uu_who::platform::unix::Who::print_runlevel::h9d15e26d69ee4710(void* arg1, void* arg2)

{
    int32_t rax = *(arg2 + 4);
    int16_t rcx = rax + 0xff;
    
    if (rax >= 0)
        rcx = rax;
    
    uint32_t rbp = *rcx[1];
    uint32_t var_b0 = rax;
    uint32_t* var_60 = &var_b0;
    int64_t (* var_58)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    void** const var_90 = &data_4fef58;
    int64_t var_88 = 1;
    int64_t var_70 = 0;
    uint32_t** var_80 = &var_60;
    int64_t var_78 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_48, &var_90);
    int64_t rax_2;
    rax_2 = rbp == 0x4e;
    int32_t var_ac = rax_2 * 5 + 0x4e;
    int32_t* var_a8 = &var_ac;
    int64_t (* var_a0)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_90 = &data_4fef68;
    int64_t var_88_1 = 1;
    int64_t var_70_1 = 0;
    int32_t** var_80_1 = &var_a8;
    int64_t var_78_1 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_60, &var_90);
    var_a8 = var_60;
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_90, arg2);
    bool rax_6 = core::unicode::unicode_data::cc::lookup::h279dc51266654208(rbp);
    int64_t var_50;
    int64_t rax_7 = var_50;
    
    if (rax_6)
        rax_7 = 0;
    
    int64_t (* r10)(int32_t* arg1, int64_t* arg2) = 1;
    
    if (!rax_6)
        r10 = var_a0;
    
    int64_t var_c0 = 0;
    int64_t var_d0 = rax_7;
    int64_t var_e0 = 0;
    int64_t var_f0 = 0;
    int32_t** var_100 = var_80_1;
    int64_t var_40;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, var_40, var_88_1, 
        1, 1, r10, 1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_a8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_48);
}
