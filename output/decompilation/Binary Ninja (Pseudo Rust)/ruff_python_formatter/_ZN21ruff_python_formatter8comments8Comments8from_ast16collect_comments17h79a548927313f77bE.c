
  fn ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(arg1: i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut c_void) -> u64

{
    let rdi: i64 = *arg5.byte_offset(0x10);
    let mut var_100: i64;
    let mut var_f0: i64;
    let mut var_d0: i64;
    let mut var_c0: i64;
    let mut var_98: i128;
    let mut var_88: i128;
    let mut rax_1: i64;
    let mut rcx: i64;
    let mut rdx_1: i64;
    let mut rsi_1: i64;
    let mut zmm0: i128;
    
    if rdi == 0
    {
        var_88 = data_97c828;
        var_98 = *data_97c818;
        zmm0 = {0};
        rax_1 = 8;
        rcx = 4;
        rdx_1 = 0;
        rsi_1 = 0;
    }
    else
    {
        let r8: i64 = *arg5.byte_offset(8);
        let mut var_70: i64 = 0;
        let var_68_1: i64 = 4;
        let var_60_1: i128 = {0};
        let var_50_1: i64 = 8;
        let var_48_1: i64 = 0;
        let var_40_1: i128 = *data_97c818;
        let var_30_1: i128 = data_97c828;
        let var_20_1: *mut c_void = arg5;
        let var_18_1: i64 = arg3;
        let var_10_1: i64 = arg4;
        let var_b8_1: *mut i64 = &var_70;
        let var_b0_1: *mut *mut c_void = &data_97d488;
        let var_a8_1: i64 = arg3;
        let var_a0_1: i64 = arg4;
        var_d0 = 0;
        let var_c8_1: i64 = 8;
        var_c0 = 0;
        let var_e0_1: i64 = 0x5e;
        var_100 = 0;
        var_f0 = r8;
        let var_e8_1: i64 = r8 + (rdi << 3);
        ruff_python_formatter::comments::visitor::CommentsVisitor::visit::h0f17c00820667551(
            &var_100, arg1, arg2);
        rdx_1 = var_70;
        rcx = var_68_1;
        zmm0 = var_60_1;
        rax_1 = var_50_1;
        rsi_1 = var_48_1;
        var_98 = var_40_1;
        var_88 = var_30_1;
    }
    
    var_100 = rdx_1;
    let var_f8: i64 = rcx;
    var_f0 = zmm0;
    let var_e0_2: i64 = rax_1;
    let var_d8: i64 = rsi_1;
    var_d0 = var_98;
    var_c0 = var_88;
    ruff_python_formatter::comments::Comments::new::hbdb3ea4fa05ac4f8(&var_100)
}
