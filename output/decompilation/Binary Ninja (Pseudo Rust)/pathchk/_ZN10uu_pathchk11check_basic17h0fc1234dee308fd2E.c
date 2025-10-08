
  fn uu_pathchk::check_basic::h0fc1234dee308fd2(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut r14: *mut c_void = arg1;
    let mut var_a0: i64;
    alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_a0, r14, arg2);
    let var_90: i64;
    let mut var_58: i64 = var_90;
    let var_98: i64;
    let mut var_d0: *const i8;
    let mut var_88: *mut *mut [i8; 0xa3];
    let mut var_40: *mut c_void;
    
    if var_90 > 0x100
    {
        var_40 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_d0 = &data_4176f0[0x28];
        let var_c8_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_c0_1: *mut i64 = &var_58;
        let var_b8_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_b0_1: *mut i64 = &var_a0;
        let var_a8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_4dea28;
        let var_80_1: i64 = 4;
        let var_68_1: i64 = 0;
        let var_78_1: *const *const i8 = &var_d0;
        let var_70_1: i64 = 3;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_40, &var_88));
    }
    else if var_90 == 0
    {
        var_88 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_d0 = &data_4dea68;
        let var_c8_2: i64 = 1;
        let var_c0_2: i64 = 8;
        let mut var_b8: i64;
        var_b8 = {0};
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_88, &var_d0));
    }
    else
    {
        let r15_1: *mut c_void = r14.byte_offset(arg2 * 0x18);
        let mut i: i8;
        
        do
        {
            let mut r12_1: *mut c_void = r14.byte_offset(0x18);
            
            if r14 == r15_1
            {
                r12_1 = r14;
            }
            
            if r14 == r15_1
            {
                let rbx_1: i32 = uu_pathchk::check_searchable::h0902f70b6adfdabe(var_98);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_a0, 
                    var_98);
                return rbx_1;
            }
            
            let rsi_2: i64 = *r14.byte_offset(0x10);
            let mut var_50: i64 = rsi_2;
            
            if rsi_2 > 0xe
            {
                let mut var_48: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                let rax_4: i64 = *r14.byte_offset(8);
                var_40 = nullptr;
                let var_38_1: i64 = rax_4;
                let var_30_1: i64 = rsi_2;
                let var_28_1: i8 = 1;
                var_d0 = &data_4177d0;
                let var_c8_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_c0_3: *mut i64 = &var_50;
                let var_b8_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_b0_2: *mut *mut c_void = &var_40;
                let var_a8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_88 = &data_4dea78;
                let var_80_2: i64 = 4;
                let var_68_2: i64 = 0;
                let var_78_2: *const *const i8 = &var_d0;
                let var_70_2: i64 = 3;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_48, &var_88));
                break;
            }
            
            i = uu_pathchk::check_portable_chars::h39a248ee7ea009b7(*r14.byte_offset(8), rsi_2);
            r14 = r12_1;
        } while i != 0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_a0, var_98);
    0
}
