
  int64_t ruff_python_formatter::comments::visitor::CommentsVisitor::visit::h0f17c00820667551(int32_t* arg1, int64_t arg2, int64_t* arg3)

{
    if (!_$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::enter_node::hb57eeaddc2dd4449(arg1, arg2, arg3))
        ruff_python_ast::generated::AnyNodeRef::visit_source_order::hae25fa21a3e417d8(arg2, arg3, 
            arg1);
    
    _$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::leave_node::hb9d1ee9fca5e7a01(arg1, arg2, arg3);
    /* tailcall */
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..visitor..CommentsVisitor$GT$::h15e5abbe3b6c83fc(*(arg1 + 0x30), *(arg1 + 0x38));
}
