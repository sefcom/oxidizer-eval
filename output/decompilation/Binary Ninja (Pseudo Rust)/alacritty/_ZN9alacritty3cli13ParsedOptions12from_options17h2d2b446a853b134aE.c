
  fn alacritty::cli::ParsedOptions::from_options::h2d2b446a853b134a(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_158: i64 = 0;
    let result: i64 = 8;
    let var_148: i64 = 0;
    
    if arg3 != 0
    {
        let mut i: *mut c_void = arg2;
        
        do
        {
            let mut i_1: *mut c_void = i;
            let mut var_88: i32;
            toml::de::from_str::hb249a18d92861147(&var_88, *i.byte_offset(8), *i.byte_offset(0x10));
            let mut var_138: *mut *mut [i8; 0x88];
            let mut var_128: *mut *mut *mut c_void;
            let mut var_e8: i128;
            let mut var_d8: i128;
            let mut var_c8: i128;
            let var_78: i128;
            
            if var_88 != 2
            {
                let var_38: i64;
                let var_98_1: i64 = var_38;
                let var_48: i128;
                let var_a8_1: i128 = var_48;
                let var_58: i128;
                let var_b8_1: i128 = var_58;
                let var_68: i128;
                var_c8 = var_68;
                var_d8 = var_78;
                var_e8 = var_88;
                let mut var_108: *mut *mut c_void = &i_1;
                let var_100_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                let var_f8_1: *mut i128 = &var_e8;
                let var_f0_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$toml..de..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h5637888e57e7e273;
                var_138 = &data_c81658;
                let var_130_1: i64 = 3;
                let var_118_1: i64 = 0;
                var_128 = &var_108;
                let var_120_1: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                core::ptr::drop_in_place$LT$toml..de..error..Error$GT$::h4158bf9df3d9fe37(&var_e8);
            }
            else
            {
                var_128 = var_78;
                let var_80: i128;
                var_138 = var_80;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_88, i_1);
                var_c8 = var_128;
                let var_d0_1: i128 = var_138;
                var_e8 = var_88;
                var_d8 = var_78;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3daab237eee37720(&var_158, &var_e8);
            }
            i += 0x18;
        } while i != arg2.byte_offset(arg3 * 0x18);
    }
    
    arg1[2] = var_148;
    *arg1 = var_158;
    arg1[1] = result;
    result
}
