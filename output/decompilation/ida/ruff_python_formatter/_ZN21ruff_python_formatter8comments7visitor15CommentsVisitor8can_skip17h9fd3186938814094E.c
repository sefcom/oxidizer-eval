bool __fastcall ruff_python_formatter::comments::visitor::CommentsVisitor::can_skip(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rax

  v2 = *(unsigned int **)core::option::Option<T>::get_or_insert_with(a1, a1 + 16);
  return !v2 || *v2 >= a2;
}