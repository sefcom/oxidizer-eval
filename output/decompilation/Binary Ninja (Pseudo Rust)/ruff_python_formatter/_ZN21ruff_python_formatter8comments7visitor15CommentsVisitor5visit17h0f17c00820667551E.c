
  fn ruff_python_formatter::comments::visitor::CommentsVisitor::visit::h0f17c00820667551(arg1: *mut i32, arg2: i64, arg3: *mut i64) -> i64

{
    if _$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::enter_node::hb57eeaddc2dd4449(arg1, arg2, arg3) == 0
    {
        ruff_python_ast::generated::AnyNodeRef::visit_source_order::hae25fa21a3e417d8(arg2, arg3, 
            arg1);
    }
    
    _$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::leave_node::hb9d1ee9fca5e7a01(arg1, arg2, arg3);
    /* tailcall */
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$GT$::h15e5abbe3b6c83fc(*arg1.byte_offset(0x30), *arg1.byte_offset(0x38))
}
