
  fn uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(arg1: i8) -> u64

{
    let mut rax: *mut *mut c_void;
    let mut rdx_1: i64;
    rax = uucore::util_name::h074417a1e6395129();
    let mut var_50: *mut *mut c_void = rax;
    let var_48: i64 = rdx_1;
    let mut var_60: *mut i64 = &var_50;
    let var_58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
    let mut var_90: *mut c_void = &data_510958;
    let var_88: i64 = 2;
    let var_70: i64 = 0;
    let var_80: *mut *mut i64 = &var_60;
    let var_78: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    var_50 = 1;
    let rsi: i64;
    let var_48_1: i64 = rsi;
    let rdx: i64;
    let var_40: i64 = rdx;
    let var_38: i8 = 1;
    var_60 = &var_50;
    let var_58_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_90 = &data_510a00;
    let var_88_1: i64 = 2;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i64 = &var_60;
    let var_78_1: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    
    if (arg1 & 1) == 0
    {
        let mut rax_1: *mut *mut c_void;
        let mut rdx_2: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_1;
        let var_48_2: i64 = rdx_2;
        var_60 = &var_50;
        let var_58_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
        var_90 = &data_510958;
        let var_88_2: i64 = 2;
        let var_70_2: i64 = 0;
        let var_80_2: *mut *mut i64 = &var_60;
        let var_78_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = &data_510a40;
        let var_48_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
        var_90 = &data_510a20;
        let var_88_3: i64 = 2;
        let var_70_3: i64 = 0;
        let var_80_3: *const *mut *mut c_void = &var_50;
        let var_78_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    
    uucore::mods::error::ExitCode::new::hdcf0963f6fc7caed(0x7f)
}
