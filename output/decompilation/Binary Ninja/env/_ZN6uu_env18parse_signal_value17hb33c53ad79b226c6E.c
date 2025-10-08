
  int64_t uu_env::parse_signal_value::hb33c53ad79b226c6(uint64_t* arg1, int128_t* arg2, uint64_t arg3)

{
    void var_88;
    alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::hf8ab82a15f19393f(&var_88, arg2, arg3);
    int128_t* var_80;
    uint64_t var_78;
    char rax;
    int64_t rdx;
    rax = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(var_80, var_78);
    int64_t var_60 = 0;
    int128_t* var_58 = arg2;
    uint64_t var_50 = arg3;
    char var_48 = 1;
    int64_t* var_70 = &var_60;
    int64_t (* var_68)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    void* const var_b8 = &data_510868;
    int64_t var_b0 = 2;
    int64_t var_98 = 0;
    int64_t** var_a8 = &var_70;
    int64_t var_a0 = 1;
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_40, &var_b8);
    var_a0 = 0x7d;
    var_b8 = var_40;
    int64_t var_30;
    int64_t var_a8_1 = var_30;
    uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_b8);
    
    if (!(rax & rdx))
    {
        *arg1 = rax_2;
        arg1[1] = &data_5108a8;
    }
    else
    {
        arg1[1] = rdx;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hd10305c58afc2d26(rax_2, &data_5108a8);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_88);
}
