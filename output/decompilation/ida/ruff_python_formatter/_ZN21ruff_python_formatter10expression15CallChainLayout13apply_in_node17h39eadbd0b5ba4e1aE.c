char __fastcall ruff_python_formatter::expression::CallChainLayout::apply_in_node(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(__int64); // r15
  __int64 v7; // rax
  int v8; // ecx
  int **v9; // r14
  __int64 v10; // r12
  __int64 *v11; // rax

  if ( a1 )
    return a1;
  v6 = *(__int64 (__fastcall **)(__int64))(a4 + 48);
  v7 = v6(a3);
  v8 = *(unsigned __int8 *)(v7 + 32);
  if ( v8 != 3 )
  {
    a1 = 2;
    if ( v8 != 2 || !*(_DWORD *)(v7 + 36) )
      return a1;
  }
  v9 = (int **)<T as core::convert::Into<U>>::into(a2);
  v10 = *(_QWORD *)(*(_QWORD *)(v6(a3) + 16) + 96LL);
  v11 = (__int64 *)v6(a3);
  return ruff_python_formatter::expression::CallChainLayout::from_expression(
           16LL,
           v9,
           *(_QWORD *)(v10 + 8),
           *(_QWORD *)(v10 + 16),
           *v11,
           v11[1]);
}