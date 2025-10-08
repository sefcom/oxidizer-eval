
  fn rg::flags::config::parse::hc02adeccf0fa2bed(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h29fb4e4a214174b3(arg2);
    let mut var_a0: i64 = rax;
    let var_98: i64 = rdx;
    let mut var_b0: i8;
    let rdx_1: u64 = std::fs::File::open::h2111ba866cf95dc6(&var_b0, &var_a0);
    let var_ac: i32;
    
    if (var_b0 & 1) == 0
    {
        return rg::flags::config::parse_reader::h27fe71aea4262a25(arg1, var_ac);
    }
    let var_a8: i64;
    let mut var_b8: i64 = var_a8;
    let mut var_90: i64 = rax;
    let var_88_1: i64 = rdx;
    let mut var_80: *mut i64 = &var_90;
    let var_78_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
        _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
    let var_70_1: *mut i64 = &var_b8;
    let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    let mut var_60: *mut c_void = &data_7e5d10;
    let var_58_1: i64 = 2;
    let var_40_1: i64 = 0;
    let var_50_1: *mut *mut i64 = &var_80;
    let var_48_1: i64 = 2;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_30, 0, rdx_1, &var_60);
    arg1[1] = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_30);
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_b8)
}
