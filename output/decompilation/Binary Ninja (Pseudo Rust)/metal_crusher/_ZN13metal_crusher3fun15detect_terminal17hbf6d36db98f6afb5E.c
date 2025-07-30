
  fn metal_crusher::fun::detect_terminal::hbf6d36db98f6afb5() -> *const i8

{
    let mut var_168: *const i8 = "kgxghosttykonsolealacrittygnome-…";
    let var_160: i64 = 3;
    let var_158: *const i8 = "ghosttykonsolealacrittygnome-ter…";
    let var_150: i64 = 7;
    let var_148: *const i8 = "konsolealacrittygnome-terminalxt…";
    let var_140: i64 = 7;
    let var_138: *const i8 = "alacrittygnome-terminalxtermpkil…";
    let var_130: i64 = 9;
    let var_128: *const i8 = "gnome-terminalxtermpkill -n naut…";
    let var_120: i64 = 0xe;
    let var_118: *const i8 = "xtermpkill -n nautiluspkill -n n…";
    let var_110: i64 = 5;
    let var_108: i64 = 0;
    let var_100: i64 = 6;
    
    loop
    {
        let mut result_2: *mut i8;
        let mut rdx_1: i64;
        result_2 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf76594f8d4e56c08(&var_168);
        
        if result_2 == 0
        {
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$6_usize$GT$$GT$::hb72d9e67272cfa2f();
            return "sh-c/usr/bin/kgxghosttykonsoleal…";
        }
        
        let mut result_1: *mut i8 = result_2;
        let var_1a0_1: i64 = rdx_1;
        let mut var_178: *mut i64 = &result_1;
        let var_170_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0847ff0da4c1d6d7;
        let mut var_e0: *mut *mut c_void = &data_9966c8;
        let var_d8_1: i64 = 1;
        let var_c0_1: i64 = 0;
        let var_d0_1: *mut *mut i64 = &var_178;
        let var_c8_1: i64 = 1;
        let mut var_f8: i128;
        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_f8, &var_e0);
        let mut var_198: i128 = var_f8;
        let var_e8: i64;
        let var_188_1: i64 = var_e8;
        std::fs::metadata::h0f112b0c82c2b173(&var_e0, *var_198[8]);
        let rbp_1: i32 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd0cd0de30ef23329(&var_e0);
        
        if rbp_1 != 2
        {
            let result: *const i8 = result_1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_198);
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$6_usize$GT$$GT$::hb72d9e67272cfa2f();
            return result;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_198);
    }
}
