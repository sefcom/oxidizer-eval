__int64 __fastcall ruff_python_formatter::statement::stmt_function_def::format_function_header(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int128 v6; // xmm0
  char v8; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B0h] BYREF
  const char *v10; // [rsp+10h] [rbp-A8h] BYREF
  void *v11; // [rsp+18h] [rbp-A0h] BYREF
  int v12; // [rsp+20h] [rbp-98h]
  char v13; // [rsp+24h] [rbp-94h]
  __int128 v14; // [rsp+28h] [rbp-90h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-80h]
  __int64 *v16; // [rsp+40h] [rbp-78h]
  __int64 *v17; // [rsp+48h] [rbp-70h]
  void *v18; // [rsp+50h] [rbp-68h]
  __int64 v19; // [rsp+58h] [rbp-60h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF
  __int64 v22; // [rsp+78h] [rbp-40h]
  __int128 v23; // [rsp+80h] [rbp-38h] BYREF
  __int64 v24; // [rsp+90h] [rbp-28h]

  v19 = a3;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(a2[1] + 48LL))(*a2);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v4 + 16));
  v9 = *(_QWORD *)(v4 + 16);
  if ( *(_BYTE *)(a3 + 124) )
  {
    v10 = aAsync;
    v11 = &byte_5;
    *(_QWORD *)&v14 = &v10;
    *((_QWORD *)&v14 + 1) = &unk_57C890;
    v15 = (__int64 *)&v8;
    v16 = (__int64 *)&unk_57CBF0;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v21, a2, &v14, 2LL);
    if ( (_DWORD)v21 != 4 )
    {
      *(_QWORD *)(a1 + 16) = v22;
      v6 = v21;
      goto LABEL_10;
    }
  }
  v10 = aDef;
  v11 = &dword_0 + 3;
  v20 = a3 + 48;
  *(_QWORD *)&v14 = &v10;
  *((_QWORD *)&v14 + 1) = &unk_57C890;
  v15 = (__int64 *)&v8;
  v16 = (__int64 *)&unk_57CBF0;
  v17 = &v20;
  v18 = &unk_57A988;
  <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v23, a2, &v14, 3LL);
  if ( (_DWORD)v23 != 4 )
  {
    *(_QWORD *)(a1 + 16) = v24;
    v6 = v23;
LABEL_10:
    *(_OWORD *)a1 = v6;
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v9);
  }
  v5 = *(_QWORD *)(a3 + 104);
  if ( v5 )
  {
    v10 = *(const char **)(a3 + 104);
    ruff_python_formatter::FormatNodeRule::fmt(&v14, &v11, v5, a2);
    if ( (_DWORD)v14 != 4 )
    {
      *(_QWORD *)(a1 + 16) = v15;
      v6 = v14;
      goto LABEL_10;
    }
  }
  *(_QWORD *)&v14 = a3 + 88;
  *((_QWORD *)&v14 + 1) = a3 + 112;
  v15 = &v9;
  v16 = &v19;
  v10 = (const char *)&v14;
  v11 = &unk_57ED78;
  v12 = 0;
  v13 = 0;
  <ruff_formatter::builders::Group<Context> as ruff_formatter::Format<Context>>::fmt(a1, &v10, a2);
  return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v9);
}