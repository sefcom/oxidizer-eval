__int64 __fastcall ruff_python_formatter::comments::visitor::CommentsVisitor::visit(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !(unsigned __int8)<ruff_python_formatter::comments::visitor::CommentsVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::enter_node() )
    ruff_python_ast::generated::AnyNodeRef::visit_source_order(a2, a3, a1);
  <ruff_python_formatter::comments::visitor::CommentsVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::leave_node(
    a1,
    a2,
    a3);
  return core::ptr::drop_in_place<ruff_python_formatter::comments::visitor::CommentsVisitor>(
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56));
}