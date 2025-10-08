__int64 __fastcall ruff_python_formatter::comments::visitor::collect_comments(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 v8; // [rsp+10h] [rbp-78h]
  _QWORD v9[14]; // [rsp+18h] [rbp-70h] BYREF

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 8LL;
  v8 = 0LL;
  v9[9] = &v7;
  v9[10] = &off_57D438;
  v9[11] = a3;
  v9[12] = a4;
  v9[6] = 0LL;
  v9[7] = 8LL;
  v9[8] = 0LL;
  v9[4] = 94LL;
  v9[0] = 0LL;
  v9[2] = a5;
  v9[3] = a5 + 8 * a6;
  ruff_python_formatter::comments::visitor::CommentsVisitor::visit(v9, __OFSUB__(0LL, *a2), &a2[__OFSUB__(0LL, *a2)]);
  result = v8;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}