
  fn uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(arg1: *mut i64) -> *mut i64

{
    let mut var_c0: i32;
    let rsi: i64;
    let mut result: *mut i64 = std::fs::metadata::h003d8cdbffde7c56(&var_c0, rsi);
    
    if var_c0 == 2
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_c0);
    }
    
    let var_88: i32;
    
    if var_88 < 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_16c: i32 = var_88 & 0xf7f;
        let mut var_168: *mut i32 = &var_16c;
        let var_160_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::hf46ebcb02778fa65;
        let mut var_148: i64 = 2;
        let var_138_1: i64 = 0;
        let mut result_1: *mut i64 = 4;
        let var_128_1: i64 = 0;
        let var_120_1: i64 = 0x800000020;
        let var_118_1: i8 = 3;
        let mut var_108: *mut c_void = &data_41e7f0;
        let var_100_1: i64 = 1;
        let var_e8_1: *mut i64 = &var_148;
        let var_e0_1: i64 = 1;
        let var_f8_1: *mut *mut i32 = &var_168;
        let var_f0_1: i64 = 1;
        let mut var_d8: i128;
        core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_d8, &var_108);
        var_168 = var_d8;
        uucore::features::fs::display_permissions_unix::ha124e9a87900f11e(&var_108, var_88, 0);
        let zmm0_2: i128 = var_168;
        var_148 = zmm0_2;
        result_1 = var_108;
        arg1[4] = var_128_1;
        arg1[5] = var_f8_1;
        let var_c8: i64;
        arg1[2] = var_c8;
        result = result_1;
        arg1[3] = result;
        *arg1 = zmm0_2;
    }
    
    result
}
