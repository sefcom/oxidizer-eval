
  fn uu_env::debug_print_args::hc6b0deb8b4ab006f(arg1: i64, arg2: i64) -> i64

{
    let mut var_b8: *mut *mut [i8; 0xaa] = &data_5489e8;
    let var_b0: i64 = 1;
    let var_a8: i64 = 8;
    let mut var_a0: i128 = {0};
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b8);
    let mut var_88: i64 = arg1;
    let var_80: i64 = arg1 + arg2 * 0x18;
    let var_78: i64 = 0;
    let mut result: i64;
    let mut i: *mut c_void;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9a3611afc387125(&var_88);
    
    while i != 0
    {
        let mut result_1: i64 = result;
        let zmm0_1: i128 = *i.byte_offset(8);
        let mut var_50: i64 = 1;
        let var_48_1: i128 = zmm0_1;
        let var_38_1: i8 = 1;
        let mut var_70: *mut i64 = &result_1;
        let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        let var_60_1: *mut i64 = &var_50;
        let var_58_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b8 = &data_5489f8;
        let var_b0_1: i64 = 3;
        *var_a0[8] = 0;
        let var_a8_1: *mut *mut i64 = &var_70;
        var_a0 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b8);
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9a3611afc387125(&var_88);
    }
    
    result
}
