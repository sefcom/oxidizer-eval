
  fn uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(arg1: i8) -> *mut i32

{
    let mut rax: *mut *mut c_void;
    let mut rdx_1: i64;
    rax = uucore::util_name::h60d842bf27b05e82();
    let mut var_50: *mut *mut c_void = rax;
    let var_48: i64 = rdx_1;
    let mut var_60: *mut i64 = &var_50;
    let var_58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    let mut var_90: *mut c_void = &data_548978;
    let var_88: i64 = 2;
    let var_70: i64 = 0;
    let var_80: *mut *mut i64 = &var_60;
    let var_78: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    var_50 = 1;
    let rsi: i64;
    let var_48_1: i64 = rsi;
    let rdx: i64;
    let var_40: i64 = rdx;
    let var_38: i8 = 1;
    var_60 = &var_50;
    let var_58_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_90 = &data_548a28;
    let var_88_1: i64 = 2;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i64 = &var_60;
    let var_78_1: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    
    if arg1 == 0
    {
        let mut rax_1: *mut *mut c_void;
        let mut rdx_2: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_50 = rax_1;
        let var_48_2: i64 = rdx_2;
        var_60 = &var_50;
        let var_58_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
        var_90 = &data_548978;
        let var_88_2: i64 = 2;
        let var_70_2: i64 = 0;
        let var_80_2: *mut *mut i64 = &var_60;
        let var_78_2: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        var_50 = &data_548a68;
        let var_48_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
        var_90 = &data_548a48;
        let var_88_3: i64 = 2;
        let var_70_3: i64 = 0;
        let var_80_3: *const *mut *mut c_void = &var_50;
        let var_78_3: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    }
    
    uucore::mods::error::ExitCode::new::he6e429e301480307(0x7f)
}
