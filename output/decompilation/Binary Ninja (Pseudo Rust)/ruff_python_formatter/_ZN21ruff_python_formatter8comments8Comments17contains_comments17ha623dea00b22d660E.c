
  fn ruff_python_formatter::comments::Comments::contains_comments::ha623dea00b22d660(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rdi: *mut c_void = *arg1;
    let mut var_20: *mut i64 = 0x3d;
    let mut var_18: i8 = arg2;
    let mut result: i64;
    result = 1;
    
    if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        rdi.byte_offset(0x40), &var_20) != 0
    {
        return result;
    }
    
    var_20 = arg1;
    var_18 = 0;
    ruff_python_ast::generated::AnyNodeRef::visit_source_order::h412f3303938f1097(arg2, &var_20);
    var_18
}
