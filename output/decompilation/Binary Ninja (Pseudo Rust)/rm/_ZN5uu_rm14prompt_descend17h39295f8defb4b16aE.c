
  fn uu_rm::prompt_descend::h39295f8defb4b16a() -> u64

{
    let mut rax: *mut i64;
    let mut rdx: i64;
    rax = uucore::util_name::h60d842bf27b05e82();
    let mut var_58: *mut i64 = rax;
    let var_50: i64 = rdx;
    let mut var_70: *mut i64 = &var_58;
    let var_68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
    let mut var_a0: *mut c_void = &data_527970;
    let var_98: i64 = 2;
    let var_80: i64 = 0;
    let var_90: *mut *mut i64 = &var_70;
    let var_88: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
    var_58 = 1;
    let rdi: i64;
    let var_50_1: i64 = rdi;
    let rsi: i64;
    let var_48: i64 = rsi;
    let var_40: i8 = 1;
    var_70 = &var_58;
    let var_68_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_a0 = &data_527bf8;
    let var_98_1: i64 = 2;
    let var_80_1: i64 = 0;
    let var_90_1: *mut *mut i64 = &var_70;
    let mut var_88_1: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
    var_a0 = &data_527b08;
    let var_98_2: i64 = 1;
    let var_90_2: i64 = 8;
    var_88_1 = {0};
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
    let mut var_38: *mut c_void = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_38);
    uucore::read_yes::hc350e858ab85cf03()
}
