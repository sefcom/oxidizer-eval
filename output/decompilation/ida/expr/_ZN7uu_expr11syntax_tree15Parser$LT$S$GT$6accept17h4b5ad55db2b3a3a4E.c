__int64 __fastcall uu_expr::syntax_tree::Parser<S>::accept(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // eax

  v3 = a1[2];
  LOBYTE(v2) = 3;
  if ( v3 < a1[1] )
  {
    v4 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
           *(_QWORD *)(*a1 + 24 * v3 + 8),
           *(_QWORD *)(*a1 + 24 * v3 + 16));
    v5 = uu_expr::syntax_tree::Parser<S>::parse_op::{{closure}}(a2, v4);
    if ( (_BYTE)v5 != 3 )
    {
      a1[2] = v3 + 1;
      return v5;
    }
  }
  return v2;
}