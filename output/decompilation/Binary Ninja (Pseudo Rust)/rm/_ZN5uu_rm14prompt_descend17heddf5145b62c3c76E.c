
  fn uu_rm::prompt_descend::heddf5145b62c3c76() -> u64

{
    let mut rax: *mut *mut i64;
    let mut rdx: i64;
    rax = uucore::util_name::h074417a1e6395129();
    let mut var_50: *mut *mut i64 = rax;
    let var_48: i64 = rdx;
    let mut var_60: *mut i64 = &var_50;
    let var_58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
    let mut var_a0: *mut c_void = &data_4ea4a0;
    let var_98: i64 = 2;
    let var_80: i64 = 0;
    let var_90: *mut *mut i64 = &var_60;
    let var_88: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    var_50 = 1;
    let rdi: i64;
    let var_48_1: i64 = rdi;
    let rsi: i64;
    let var_40: i64 = rsi;
    let var_38: i8 = 1;
    var_60 = &var_50;
    let var_58_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_a0 = &data_4ea768;
    let var_98_1: i64 = 2;
    let var_80_1: i64 = 0;
    let var_90_1: *mut *mut i64 = &var_60;
    let mut var_88_1: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    var_a0 = &data_4ea630;
    let var_98_2: i64 = 1;
    let var_90_2: i64 = 8;
    var_88_1 = {0};
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&var_a0);
    uucore::read_yes::h67cb9532536454c0()
}
