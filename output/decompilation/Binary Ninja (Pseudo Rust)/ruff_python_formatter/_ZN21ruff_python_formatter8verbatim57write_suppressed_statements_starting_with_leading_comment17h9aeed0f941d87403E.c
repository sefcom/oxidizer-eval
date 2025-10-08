
  fn ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_leading_comment::h9aeed0f941d87403(arg1: *mut i32, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> *mut i64

{
    let rbp: i64 = *arg4;
    let rbx: i64 = *(arg4[1] + 0x30);
    let rax_1: *mut c_void = rbx(rbp);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_1.byte_offset(0x10));
    let r13_1: *mut c_void = *rax_1.byte_offset(0x10);
    let mut var_110: *mut c_void = r13_1;
    let rax_2: *mut i64 = rbx(rbp);
    let rbp_1: i64 = *rax_2;
    let rbx_1: i64 = rax_2[1];
    let mut rax_3: *mut i64;
    let mut rdx: i64;
    rax_3 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(arg2);
    let mut var_108: *mut i64 = rax_3;
    let var_100: i64 = rdx;
    let mut rax_4: i64;
    let mut rdx_1: i64;
    rax_4 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        r13_1.byte_offset(0x10), &var_108);
    let mut var_c0: i64 = rax_4;
    let var_b0: i64 = rbp_1;
    let var_a8: i64 = rbx_1;
    let var_a0: i8 = 0;
    _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_108, &var_c0);
    
    if var_108 == 4
    {
        core::option::expect_failed::h3f620cfb8545dc61("Suppressed node to have leading …");
        /* no return */
    }
    
    let var_d8: i64;
    let var_38: i64 = var_d8;
    let var_e8: i128;
    let var_48: i128 = var_e8;
    let mut var_f8: i128;
    let var_58: i128 = var_f8;
    let mut var_68: i128 = var_108;
    ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts::heb5db1db35eb0c7e(&var_108, &var_68);
    let r13_3: *mut c_void = var_f8;
    let var_78: i128 = var_108;
    let mut var_80: i64 = 1;
    let mut var_c8: *mut c_void = r13_3;
    var_108 = &var_80;
    let var_100_1: *mut c_void = &data_97cb70;
    var_f8 = &var_c8;
    *var_f8[8] = &data_97cb30;
    let mut var_98: i32;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_98, arg4, &var_108, 2);
    
    if var_98 != 4
    {
        let var_88: i64;
        *arg1.byte_offset(0x10) = var_88;
        *arg1 = var_98;
    }
    else
    {
        *r13_3.byte_offset(8) = 1;
        ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(arg1, 
            r13_3, arg2, var_c0, rdx_1, arg3, arg4);
    }
    
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_110)
}
