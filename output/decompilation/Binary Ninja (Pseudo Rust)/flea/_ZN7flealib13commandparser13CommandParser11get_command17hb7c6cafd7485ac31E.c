
  fn flealib::commandparser::CommandParser::get_command::hb7c6cafd7485ac31(arg1: *mut i128, arg2: i64, arg3: *mut c_void, arg4: i64) -> *mut i128

{
    let mut var_b8: i64;
    roxmltree::parse::parse::hf3aa1ef302061528(&var_b8, arg3, arg4, 0xffffffff, 0);
    let mut var_1c8: *mut c_void;
    let mut var_1b8: i32;
    let mut var_180: *mut i64;
    let mut var_140: i64;
    let var_138: *mut c_void;
    
    if !(0 + -(var_b8))
    {
        memcpy(&var_140, &var_b8, 0x88);
        let var_130: i64;
        
        if var_130 == 0
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(0, 0);
            /* no return */
        }
        
        var_1c8 = &var_140;
        var_1b8 = 1;
        roxmltree::Descendants::new::h4d86cf4878017524(&var_180, &var_1c8);
        core::iter::traits::iterator::Iterator::try_fold::haddb30a31b69cbae(&var_1c8, &var_180);
        let r13_1: *mut c_void = var_1c8;
        
        if r13_1 == 0
        {
            core::ptr::drop_in_place$LT$roxmltree..Document$GT$::h2a51f9358b50aec5(&var_140);
            
            if var_b8 == -0x8000000000000000
            {
                goto 'label_772ccc;
            }
            
            goto 'label_772ce7;
        }
        
        let mut rax_4: *mut c_void;
        let mut rdx_2: u64;
        rax_4 = roxmltree::Node::attribute::h591e30e868dc40e8(r13_1, var_138, 
            "name B\r\nLAltreprAhomChamyear  …", 4);
        
        if rax_4 == 0
        {
            rdx_2 = 0x1c;
        }
        
        let mut rsi_6: *mut c_void = "'name' attribute not exists.'val…";
        
        if rax_4 != 0
        {
            rsi_6 = rax_4;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_1c8, 
            rsi_6, rdx_2);
        let zmm0_2: i128 = var_1c8;
        let mut rax_6: *mut c_void;
        let mut rdx_3: u64;
        rax_6 = roxmltree::Node::attribute::h591e30e868dc40e8(r13_1, var_138, 
            "valueCommand xml corruptedComman…", 5);
        
        if rax_6 == 0
        {
            rdx_3 = 0x1d;
        }
        
        let mut rsi_8: *mut c_void = "'value' attribute not exists.\nv…";
        
        if rax_6 != 0
        {
            rsi_8 = rax_6;
        }
        
        let mut var_158: i128;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_158, 
            rsi_8, rdx_3);
        let mut var_1b0: i64;
        var_1b0 = var_158;
        var_1b8 = var_1b8;
        var_1c8 = zmm0_2;
        let var_1a8: i64;
        arg1[2] = var_1a8;
        let var_148: i64;
        *arg1.byte_offset(0x28) = var_148;
        arg1[1] = var_1b8;
        *arg1.byte_offset(0x18) = var_1b0;
        *arg1 = zmm0_2;
        core::ptr::drop_in_place$LT$roxmltree..Document$GT$::h2a51f9358b50aec5(&var_140);
        
        if var_b8 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_b8);
        }
    }
    else
    {
        'label_772ccc:
        core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_b8);
        'label_772ce7:
        roxmltree::parse::parse::hf3aa1ef302061528(&var_140, arg3, arg4, 0xffffffff, 0);
        
        if var_140 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_140);
        }
        else
        {
            let var_108: i64;
            let var_88_1: i64 = var_108;
            let var_118: i128;
            let var_98_1: i128 = var_118;
            let var_128: i128;
            let var_a8_1: i128 = var_128;
            var_b8 = var_138;
            var_180 = &var_b8;
            let var_178_1: fn(arg1: *mut [i8; 0xcd], arg2: *mut c_void) -> i64 = _$LT$roxmltree..parse..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h7bb52ed52cdcb4d8;
            var_1c8 = &data_b08f18;
            let var_1c0_1: i64 = 2;
            let var_1a8_1: i64 = 0;
            var_1b8 = &var_180;
            let var_1b0_1: i64 = 1;
            std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_1c8);
            core::ptr::drop_in_place$LT$roxmltree..parse..Error$GT$::h882013e7cdd3dd0a(&var_b8);
            
            if var_140 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_140);
            }
        }
        
        *arg1.byte_offset(8) = "Command xml corruptedCommandExec…";
        arg1[1] = 0x15;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
