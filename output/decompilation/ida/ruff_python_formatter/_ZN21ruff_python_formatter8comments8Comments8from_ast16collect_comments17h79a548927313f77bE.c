__int64 __fastcall ruff_python_formatter::comments::Comments::from_ast::collect_comments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int128 v16; // [rsp+8h] [rbp-100h] BYREF
  __int128 v17; // [rsp+18h] [rbp-F0h]
  __int64 v18; // [rsp+28h] [rbp-E0h]
  __int64 v19; // [rsp+30h] [rbp-D8h]
  __int128 v20; // [rsp+38h] [rbp-D0h]
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v22)(); // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int128 v25; // [rsp+70h] [rbp-98h]
  __int128 v26; // [rsp+80h] [rbp-88h]
  unsigned __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int128 v32; // [rsp+C8h] [rbp-40h]
  __int128 v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  __int64 v36; // [rsp+F8h] [rbp-10h]

  v8 = *(_QWORD *)(a5 + 16);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a5 + 8);
    v27 = 0LL;
    v28 = 4LL;
    v29 = 0LL;
    v30 = 8LL;
    v31 = 0LL;
    v32 = *(_OWORD *)&off_57C818;
    v33 = xmmword_57C828;
    v34 = a5;
    v35 = a3;
    v36 = a4;
    *((_QWORD *)&v21 + 1) = &v27;
    v22 = &off_57D488;
    v23 = a3;
    v24 = a4;
    *(_QWORD *)&v20 = 0LL;
    *((_QWORD *)&v20 + 1) = 8LL;
    *(_QWORD *)&v21 = 0LL;
    v18 = 94LL;
    *(_QWORD *)&v16 = 0LL;
    *(_QWORD *)&v17 = v9;
    *((_QWORD *)&v17 + 1) = v9 + 8 * v8;
    ruff_python_formatter::comments::visitor::CommentsVisitor::visit((__int64)&v16, a1, a2);
    v10 = v27;
    v11 = v28;
    v12 = v29;
    v13 = v30;
    v14 = v31;
    v25 = v32;
    v26 = v33;
  }
  else
  {
    v26 = xmmword_57C828;
    v25 = *(_OWORD *)&off_57C818;
    v12 = 0LL;
    v13 = 8LL;
    v11 = 4LL;
    v10 = 0LL;
    v14 = 0LL;
  }
  v16 = __PAIR128__(v11, v10);
  v17 = v12;
  v18 = v13;
  v19 = v14;
  v20 = v25;
  v21 = v26;
  return ruff_python_formatter::comments::Comments::new((__int128 *)&v16, a5);
}