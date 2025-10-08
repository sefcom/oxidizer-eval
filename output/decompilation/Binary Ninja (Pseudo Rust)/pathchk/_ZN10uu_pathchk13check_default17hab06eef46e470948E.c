
  fn uu_pathchk::check_default::hab06eef46e470948(arg1: i64, arg2: i64) -> u64

{
    let mut var_140: i64;
    alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_140, arg1, arg2);
    let var_130: i64;
    let mut rax: i64 = var_130;
    let mut var_c8: i64 = rax;
    let mut rbx_1: i32;
    let var_138: i64;
    let mut var_128: *mut c_void;
    let mut var_118: i64;
    let mut var_f8: *mut *mut [i8; 0xa3];
    let mut var_c0: *mut c_void;
    
    if rax <= 0x1000
    {
        if rax != 0
        {
            goto 'label_45645a;
        }
        
        std::fs::symlink_metadata::h514eccbfabb43f9e(&var_c0, &var_140);
        let rdi_4: *mut c_void = var_c0;
        let var_b8: i64;
        
        if rdi_4 != 2
        {
            rax = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h59adaa044fe599ec(rdi_4, var_b8);
            'label_45645a:
            let mut var_120: i64;
            
            if arg2 == 0
            {
                'label_456488:
                var_120 = rax;
                rbx_1 = uu_pathchk::check_searchable::h0902f70b6adfdabe(var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                    var_138);
            }
            else
            {
                let mut rcx_2: i64 = 0;
                
                loop
                {
                    rax = *(arg1 + rcx_2 + 0x10);
                    
                    if rax > 0x1000
                    {
                        var_120 = rax;
                        var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        let rcx_3: i64 = *(arg1 + rcx_2 + 8);
                        var_118 = 0;
                        let var_110_2: i64 = rcx_3;
                        let var_108_2: i64 = rax;
                        let var_100_2: i8 = 1;
                        var_c0 = &data_41703c;
                        let var_b8_3: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                        let var_b0_3: *mut i64 = &var_120;
                        let var_a8_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        let var_a0_2: *mut i64 = &var_118;
                        let var_98_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_f8 = &data_4dea78;
                        let var_f0_2: i64 = 4;
                        let var_d8_2: i64 = 0;
                        let var_e8_2: *const *mut c_void = &var_c0;
                        let var_e0_2: i64 = 3;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_128, &var_f8));
                        break;
                    }
                    
                    rcx_2 += 0x18;
                    
                    if arg2 * 0x18 == rcx_2
                    {
                        goto 'label_456488;
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                    var_138);
                rbx_1 = 0;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h59adaa044fe599ec(2, var_b8);
            var_f8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_c0 = &data_4dead8;
            let var_b8_2: i64 = 1;
            let var_b0_2: i64 = 8;
            let mut var_a8: i64;
            var_a8 = {0};
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_f8, &var_c0));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                var_138);
            rbx_1 = 0;
        }
    }
    else
    {
        var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_118 = 0;
        let var_110_1: i64 = var_138;
        let var_108_1: i64 = rax;
        let var_100_1: i8 = 1;
        var_c0 = &data_41703c;
        let var_b8_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        let var_b0_1: *mut i64 = &var_c8;
        let var_a8_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_a0_1: *mut i64 = &var_118;
        let var_98_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_4dea28;
        let var_f0_1: i64 = 4;
        let var_d8_1: i64 = 0;
        let var_e8_1: *const *mut c_void = &var_c0;
        let var_e0_1: i64 = 3;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_128, &var_f8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, var_138);
        rbx_1 = 0;
    }
    rbx_1
}
