_OWORD *__fastcall uu_expr::syntax_tree::Parser::next(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  _OWORD *result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdi
  const void *v8; // r15
  signed __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  void *v12; // r12

  v3 = a2[1];
  v4 = a2[2];
  if ( v4 < v3 )
  {
    result = (_OWORD *)*a2;
    a2[2] = v4 + 1;
    *(_OWORD *)(a1 + 8) = result[v4];
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  v6 = v4 - 1;
  if ( v6 >= v3 )
    core::panicking::panic_bounds_check(v6, a2[1], &off_16A948);
  v7 = 16 * v6;
  v8 = *(const void **)(*a2 + v7);
  v9 = *(_QWORD *)(*a2 + v7 + 8);
  if ( !v9 )
  {
    v12 = &dword_0 + 1;
    goto LABEL_9;
  }
  if ( v9 < 0 )
  {
    v10 = 0LL;
LABEL_12:
    alloc::raw_vec::handle_error(v10, v9);
  }
  v10 = 1LL;
  v11 = _rust_alloc(v9, 1LL);
  if ( !v11 )
    goto LABEL_12;
  v12 = (void *)v11;
LABEL_9:
  result = memcpy(v12, v8, v9);
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 24) = v9;
  return result;
}
