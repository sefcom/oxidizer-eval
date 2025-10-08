
  fn ruff_python_formatter::comments::visitor::collect_comments::h2ba573daa01cb1e8(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_88: i64 = 0;
    let var_80: i64 = 8;
    let result: i64 = 0;
    let var_28: *mut i64 = &var_88;
    let var_20: *mut *mut c_void = &data_97d438;
    let var_18: i64 = arg3;
    let var_10: i64 = arg4;
    let var_40: i64 = 0;
    let var_38: i64 = 8;
    let var_30: i64 = 0;
    let var_50: i64 = 0x5e;
    let mut var_70: i64 = 0;
    let var_60: i64 = arg5;
    let var_58: i64 = arg5 + (arg6 << 3);
    let mut rax_1: i64;
    rax_1 = 0 + -(*arg2);
    ruff_python_formatter::comments::visitor::CommentsVisitor::visit::h0f17c00820667551(&var_70, 
        rax_1, &arg2[rax_1]);
    arg1[1] = result;
    *arg1 = var_88;
    result
}
