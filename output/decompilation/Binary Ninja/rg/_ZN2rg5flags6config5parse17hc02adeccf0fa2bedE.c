
  int64_t rg::flags::config::parse::hc02adeccf0fa2bed(int64_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h29fb4e4a214174b3(arg2);
    int64_t var_a0 = rax;
    int64_t var_98 = rdx;
    char var_b0;
    uint64_t rdx_1 = std::fs::File::open::h2111ba866cf95dc6(&var_b0, &var_a0);
    int32_t var_ac;
    
    if (!(var_b0 & 1))
        return rg::flags::config::parse_reader::h27fe71aea4262a25(arg1, var_ac);
    int64_t var_a8;
    int64_t var_b8 = var_a8;
    int64_t var_90 = rax;
    int64_t var_88_1 = rdx;
    int64_t* var_80 = &var_90;
    uint64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
        _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
    int64_t* var_70_1 = &var_b8;
    int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    void* const var_60 = &data_7e5d10;
    int64_t var_58_1 = 2;
    int64_t var_40_1 = 0;
    int64_t** var_50_1 = &var_80;
    int64_t var_48_1 = 2;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_30, 0, rdx_1, &var_60);
    arg1[1] = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_30);
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_b8);
}
