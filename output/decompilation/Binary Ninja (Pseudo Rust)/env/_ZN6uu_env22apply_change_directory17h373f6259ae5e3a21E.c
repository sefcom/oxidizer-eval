
  fn uu_env::apply_change_directory::h373f6259ae5e3a21(arg1: *mut c_void) -> u64

{
    let rbx: i64 = *arg1.byte_offset(0x78);
    let mut var_98: *mut *mut c_void;
    
    if (rbx == 0 | *arg1.byte_offset(0x58) != 0) == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_98, "must specify command with --chdi…", 0x26);
        let var_80_2: i32 = 0x7d;
        return alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_98);
    }
    
    if rbx != 0
    {
        let r14_1: i64 = *arg1.byte_offset(0x80);
        let rax_1: i64 = std::env::set_current_dir::ha8bb603cfe1cfdee(rbx);
        
        if rax_1 != 0
        {
            let mut var_a0: i64 = rax_1;
            let mut var_48: i64 = 1;
            let var_40: i64 = rbx;
            let var_38: i64 = r14_1;
            let var_30: i8 = 1;
            let mut var_68: *mut i64 = &var_48;
            let var_60: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_58: *mut i64 = &var_a0;
            let var_50: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_510c88;
            let var_90: i64 = 2;
            let var_78: i64 = 0;
            let var_88: *mut *mut i64 = &var_68;
            let mut var_80: i32;
            var_80 = 2;
            let mut var_28: i128;
            core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_28, &var_98);
            let var_80_1: i32 = 0x7d;
            var_98 = var_28;
            let var_18: i64;
            let var_88_1: i64 = var_18;
            let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_98);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4de596a2959b6a4f(&var_a0);
            return result;
        }
    }
    
    0
}
