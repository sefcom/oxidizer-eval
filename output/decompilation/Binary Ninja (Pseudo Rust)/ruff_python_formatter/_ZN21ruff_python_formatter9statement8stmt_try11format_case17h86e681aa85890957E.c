
  fn ruff_python_formatter::statement::stmt_try::format_case::h86e681aa85890957(arg1: *mut i64, arg2: *mut c_void, arg3: i8, arg4: *mut i64, arg5: i64, arg6: i64, arg7: i8, arg8: i64) -> i64

{
    let mut r12: i64 = arg6;
    let mut rbp: i64 = arg5;
    let r14: u64 = arg3;
    let mut r13: *mut c_void = arg2;
    
    if r14 == 0
    {
        goto 'label_71fcd7;
    }
    
    let mut rax: i64;
    
    if r14 != 1
    {
        r13 = arg2.byte_offset(0x48);
        rax = *r13.byte_offset(0x10);
        
        if rax != 0
        {
            goto 'label_71fcf5;
        }
        
        goto 'label_71fe1d;
    }
    
    r13 = arg2.byte_offset(0x30);
    'label_71fcd7:
    rax = *r13.byte_offset(0x10);
    let mut result: i64;
    let mut rax_9: *mut i64;
    
    if rax == 0
    {
        'label_71fe1d:
        rax_9 = arg4;
        'label_71ff0d:
        arg1[1] = rax_9;
        arg1[2] = rbp;
        arg1[3] = r12;
        result = 0;
    }
    else
    {
        'label_71fcf5:
        let rdx_1: *mut i64 = (*r13.byte_offset(8)).byte_offset(rax << 7).byte_offset(-0x80);
        let rax_2: i64 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h49c74675994d1cd0(rbp, 
            r12, rdx_1);
        let mut var_148: *mut *mut [i8; 0x9b];
        
        if rax_2 > r12
        {
            var_148 = &data_97adf0;
            let var_140_2: i64 = 1;
            let var_138_2: i64 = 8;
            let var_130_1: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_148);
            /* no return */
        }
        
        let mut var_70: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
            rbp, r12, rax_2);
        let r12_1: i64 = var_70;
        let var_68: i64;
        let rax_5: i64 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h454e79186506d216(r12_1, 
            var_68);
        
        if rax_5 > var_68
        {
            var_148 = &data_97adf0;
            let var_140_3: i64 = 1;
            let var_138_3: i64 = 8;
            let var_130_2: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_148);
            /* no return */
        }
        
        let mut var_50: i64;
        let mut rdx_4: i64 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(
            &var_50, r12_1, var_68, rax_5);
        let rsi_4: i64 = var_50;
        let r14_1: u64 = r14 << 3;
        let r12_2: *mut *mut [i8; 0x9b] = *(r14_1 + &data_48d620);
        let rax_6: i64 = *(r14_1 + &data_48d638);
        let mut var_d8: *mut c_void = *(&data_48d610).byte_offset(r14 << 2) + &data_48d610;
        let var_d0_1: i64 = rax_6;
        let mut rax_7: i64;
        
        if arg4 == 0
        {
            rax_7 = 0x5e;
        }
        else
        {
            rax_7 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg4);
        }
        
        var_148 = r12_2;
        let var_140_1: *mut c_void = arg2;
        let var_138_1: i64 = rsi_4;
        let mut var_130: i128;
        let var_48: i64;
        var_130 = var_48;
        *var_130[8] = rax_7;
        let var_120_1: i64 = rdx_4;
        let var_118_1: *mut *mut c_void = &var_d8;
        let var_110_1: *mut c_void = &data_97c890;
        let var_40: i64;
        let var_108_1: i64 = var_40;
        let var_38: i64;
        let var_100_1: i64 = var_38;
        let mut var_90: *mut c_void = r13;
        let var_78_1: i8 = arg7;
        let var_88_1: i64 = var_40;
        let var_80_1: i64 = var_38;
        let mut var_b0: *mut i64 = &var_148;
        let var_a8_1: *mut c_void = &data_97e140;
        let var_a0_1: *mut *mut c_void = &var_90;
        let var_98_1: *mut c_void = &data_97e160;
        let mut var_c8: i32;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_c8, arg8, &var_b0, 2);
        let var_58: i64;
        r12 = var_58;
        let var_60: i64;
        rbp = var_60;
        rax_9 = rdx_1;
        
        if var_c8 == 4
        {
            goto 'label_71ff0d;
        }
        
        let var_b8: i64;
        arg1[3] = var_b8;
        *arg1.byte_offset(8) = var_c8;
        result = 1;
    }
    *arg1 = result;
    result
}
