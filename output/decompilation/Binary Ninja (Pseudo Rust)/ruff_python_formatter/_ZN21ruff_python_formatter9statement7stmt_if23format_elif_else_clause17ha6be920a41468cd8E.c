
  fn ruff_python_formatter::statement::stmt_if::format_elif_else_clause::ha6be920a41468cd8(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64) -> *mut i64

{
    let mut var_120: *mut c_void = arg2;
    let mut var_e8: *mut c_void = arg2.byte_offset(0x18);
    let rax_1: *mut c_void = (*(arg3[1] + 0x30))(*arg3);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_1.byte_offset(0x10));
    let rbx_1: *mut c_void = *rax_1.byte_offset(0x10);
    let mut var_118: *mut c_void = rbx_1;
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = ruff_python_formatter::comments::Comments::dangling::hb5267ccf96b17255(rbx_1);
    let mut var_d0: i64 = 0x57;
    let var_c8: *mut c_void = arg2;
    let mut rax_3: i64;
    let mut rdx_1: i64;
    rax_3 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        rbx_1.byte_offset(0x10), &var_d0);
    let mut var_e0: *mut i64 = &var_120;
    let var_d8: *mut i64 = &var_e8;
    var_d0 = 6;
    let var_c8_1: *mut c_void = arg2;
    let var_c0: i64 = rax_3;
    let var_b8: i64 = rdx_1;
    let rcx: i64;
    let var_b0: i64 = rcx;
    let r8: i64;
    let var_a8: i64 = r8;
    let var_a0: *mut *mut i64 = &var_e0;
    let var_98: *mut c_void = &data_97ee20;
    let var_90: i64 = rax_2;
    let var_88: i64 = rdx;
    let mut var_80: *mut c_void = arg2;
    let r9: i8;
    let var_68: i8 = r9;
    let var_78: i64 = rax_2;
    let var_70: i64 = rdx;
    let mut rcx_1: i32 = 0;
    
    if *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
        byte_offset(0xc) == 1
    {
        let var_10c_1: i32 = *var_120.byte_offset(0x6c);
        rcx_1 = 1;
    }
    
    let mut var_110: i32 = rcx_1;
    let mut var_60: *mut i64 = &var_d0;
    let var_58: *mut c_void = &data_97e140;
    let var_50: *mut i64 = &var_80;
    let var_48: *mut c_void = &data_97e160;
    let var_40: *mut i32 = &var_110;
    let var_38: *mut c_void = &data_97e810;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg3, &var_60, 3);
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_118)
}
