
  fn uu_env::debug_print_args::h9262afd3814fa2d4(arg1: i64, arg2: i64) -> i64

{
    let mut var_b8: *mut *mut c_void = &data_5109a8;
    let var_b0: i64 = 1;
    let var_a8: i64 = 8;
    let mut var_a0: i128 = {0};
    std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
    let mut var_88: i64 = arg1;
    let var_80: i64 = arg1 + arg2 * 0x18;
    let var_78: i64 = 0;
    let mut result: i64;
    let mut i: *mut c_void;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_88);
    
    while i != 0
    {
        let mut result_1: i64 = result;
        let rax_2: i64 = *i.byte_offset(8);
        let rcx_1: i64 = *i.byte_offset(0x10);
        let mut var_50: i64 = 1;
        let var_48_1: i64 = rax_2;
        let var_40_1: i64 = rcx_1;
        let var_38_1: i8 = 1;
        let mut var_70: *mut i64 = &result_1;
        let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_60_1: *mut i64 = &var_50;
        let var_58_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_b8 = &data_5109b8;
        let var_b0_1: i64 = 3;
        *var_a0[8] = 0;
        let var_a8_1: *mut *mut i64 = &var_70;
        var_a0 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_88);
    }
    
    result
}
