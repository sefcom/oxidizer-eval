
  fn uu_env::apply_change_directory::h505c531f1c72246e(arg1: *mut c_void) -> *mut i128

{
    let rbx: i64 = *arg1.byte_offset(0x78);
    let mut var_98: *mut *mut [i8; 0xc8];
    
    if *arg1.byte_offset(0x58) == 0 && rbx != 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_98, 
            "must specify command with --chdi…", 0x26);
        let var_80_1: i32 = 0x7d;
        return alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&var_98);
    }
    
    if rbx != 0
    {
        let r14_1: i64 = *arg1.byte_offset(0x80);
        let rax_2: i64 = std::env::set_current_dir::h4371552348ad9e0b(rbx);
        
        if rax_2 != 0
        {
            let mut var_a0: i64 = rax_2;
            let mut var_48: i64 = 1;
            let var_40_1: i64 = rbx;
            let var_38_1: i64 = r14_1;
            let var_30_1: i8 = 1;
            let mut var_68: *mut i64 = &var_48;
            let var_60_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_58_1: *mut i64 = &var_a0;
            let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_98 = &data_548bf8;
            let var_90_1: i64 = 2;
            let var_78_1: i64 = 0;
            let var_88_1: *mut *mut i64 = &var_68;
            let mut var_80: i32;
            var_80 = 2;
            let mut var_28: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_28, &var_98);
            let var_80_2: i32 = 0x7d;
            var_98 = var_28;
            let var_18: i64;
            let var_88_2: i64 = var_18;
            let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_98);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_a0);
            return result;
        }
    }
    
    nullptr
}
