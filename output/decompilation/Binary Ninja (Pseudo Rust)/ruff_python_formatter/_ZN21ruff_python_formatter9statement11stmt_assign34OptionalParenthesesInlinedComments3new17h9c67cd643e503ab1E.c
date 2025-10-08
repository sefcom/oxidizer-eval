
  fn ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::new::h9c67cd643e503ab1(arg1: *mut i64, arg2: *mut c_void, arg3: *mut *mut [i8; 0x9b], arg4: i64, arg5: *mut c_void)

{
    let mut var_a0: *mut *mut [i8; 0x9b];
    let mut rax: i8;
    let mut r14_1: *mut *mut [i8; 0x9b];
    let mut r15_1: i64;
    
    if *arg2.byte_offset(8) == 0
    {
        r14_1 = *arg2.byte_offset(0x20);
        r15_1 = *arg2.byte_offset(0x28);
        var_a0 = r14_1;
        let var_98_1: *mut c_void = r14_1.byte_offset(r15_1 * 0xc);
        rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h33a3afc225c216c0(&var_a0);
    }
    
    if *arg2.byte_offset(8) != 0 || rax != 0
    {
        *arg1 = 0;
        return;
    }
    
    var_a0 = arg3;
    let var_98_2: i64 = arg4;
    let mut rax_3: i64;
    let mut rdx: i64;
    rax_3 =
        ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(
        arg5.byte_offset(0x10), &var_a0);
    let rax_4: i64 =
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h24ad1b489d553524(rax_3, rdx);
    
    if rax_4 > rdx
    {
        var_a0 = &data_97adf0;
        let var_98_3: i64 = 1;
        let var_90: i64 = 8;
        let var_88: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
        /* no return */
    }
    
    let mut var_70: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
        rax_3, rdx, rax_4);
    let r12_4: i64 = var_70;
    let rax_5: i64 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h24ad1b489d553524(
        r14_1, r15_1);
    
    if rax_5 > r15_1
    {
        var_a0 = &data_97adf0;
        let var_98_4: i64 = 1;
        let var_90_1: i64 = 8;
        let var_88_1: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
        /* no return */
    }
    
    let mut var_50: i128;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_50, 
        r14_1, r15_1, rax_5);
    *arg1 = var_50;
    arg1[2] = r12_4;
    let var_68: i64;
    arg1[3] = var_68;
}
