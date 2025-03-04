__int64 __fastcall uu_expr::syntax_tree::Parser::accept(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r15
  unsigned int v4; // eax

  v3 = a1[2];
  LOBYTE(v2) = 3;
  if ( v3 < a1[1] )
  {
    v4 = uu_expr::syntax_tree::Parser::parse_op::{{closure}}(
           a2,
           *(_QWORD *)(*a1 + 16 * v3),
           *(_QWORD *)(*a1 + 16 * v3 + 8));
    if ( (_BYTE)v4 != 3 )
    {
      a1[2] = v3 + 1;
      return v4;
    }
  }
  return v2;
}
