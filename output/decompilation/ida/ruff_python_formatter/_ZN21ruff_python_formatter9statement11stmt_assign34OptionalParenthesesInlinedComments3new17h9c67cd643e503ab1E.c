void __fastcall ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::new(
        _QWORD *a1,
        _QWORD *a2,
        char **a3,
        __int64 a4,
        __int64 a5)
{
  char **v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  char **v17; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-98h]
  __int64 v19; // [rsp+18h] [rbp-90h]
  __int128 v20; // [rsp+20h] [rbp-88h]
  _QWORD v21[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v22[5]; // [rsp+58h] [rbp-50h] BYREF

  if ( a2[1]
    || (v9 = a2[5],
        v17 = (char **)a2[4],
        v8 = v17,
        v18 = (__int64)v17 + 12 * v9,
        (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v17, a2)) )
  {
    *a1 = 0LL;
  }
  else
  {
    v17 = a3;
    v18 = a4;
    v10 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(a5 + 16));
    v12 = v11;
    v13 = core::slice::<impl [T]>::partition_point(v10, v11);
    if ( v13 > v12 )
    {
      v17 = &off_57ADF0;
      v18 = 1LL;
      v19 = 8LL;
      v20 = 0LL;
      core::panicking::panic_fmt(&v17, &off_57EC08);
    }
    core::slice::<impl [T]>::split_at_unchecked(v21, v10, v12, v13);
    v14 = v21[0];
    v15 = v21[1];
    v16 = core::slice::<impl [T]>::partition_point(v8, v9);
    if ( v16 > v9 )
    {
      v17 = &off_57ADF0;
      v18 = 1LL;
      v19 = 8LL;
      v20 = 0LL;
      core::panicking::panic_fmt(&v17, &off_57EC20);
    }
    core::slice::<impl [T]>::split_at_unchecked(v22, v8, v9, v16);
    *(_OWORD *)a1 = v22[0];
    a1[2] = v14;
    a1[3] = v15;
  }
}