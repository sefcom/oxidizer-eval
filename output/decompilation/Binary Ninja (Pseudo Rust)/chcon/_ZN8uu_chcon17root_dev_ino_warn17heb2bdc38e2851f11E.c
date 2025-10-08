
  fn uu_chcon::root_dev_ino_warn::heb2bdc38e2851f11(arg1: i64, arg2: u64) -> *mut c_void

{
    let mut var_a0: *mut c_void;
    let mut var_70: *mut *mut [i8; 0x11];
    let mut var_50: *mut i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he02cbea1a37bd162(arg1, arg2, "/std::fs::symlink_metadata: warn…", 1) != 0
    {
        let mut rax_1: *mut *mut [i8; 0x11];
        let mut rdx: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_70 = rax_1;
        let var_68: i64 = rdx;
        var_50 = &var_70;
        let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
        var_a0 = &data_4f04a0;
        let var_98: i64 = 2;
        let var_80: i64 = 0;
        let var_90: *mut *mut i64 = &var_50;
        let var_88: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
        var_70 = &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT::hbcb70d7a28ebeb93;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
        var_a0 = &data_4f04c0;
        let var_98_1: i64 = 2;
        let var_80_1: i64 = 0;
        let var_90_1: *const *mut *mut [i8; 0x11] = &var_70;
        let var_88_1: i64 = 1;
        return std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    }
    
    let mut rax_3: *mut *mut [i8; 0x11];
    let mut rdx_1: i64;
    rax_3 = uucore::util_name::h074417a1e6395129();
    var_70 = rax_3;
    let var_68_2: i64 = rdx_1;
    var_50 = &var_70;
    let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
    var_a0 = &data_4f04a0;
    let var_98_2: i64 = 2;
    let var_80_2: i64 = 0;
    let var_90_2: *mut *mut i64 = &var_50;
    let var_88_2: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    var_70 = 1;
    let var_68_3: i64 = arg1;
    let var_60_1: u64 = arg2;
    let var_58_1: i8 = 1;
    var_50 = &var_70;
    let var_48_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let var_40_1: *mut *mut [i8; 0x11] =
        &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT::hbcb70d7a28ebeb93;
    let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
    var_a0 = &data_4f04e0;
    let var_98_3: i64 = 3;
    let var_80_3: i64 = 0;
    let var_90_3: *mut *mut i64 = &var_50;
    let var_88_3: i64 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0)
}
