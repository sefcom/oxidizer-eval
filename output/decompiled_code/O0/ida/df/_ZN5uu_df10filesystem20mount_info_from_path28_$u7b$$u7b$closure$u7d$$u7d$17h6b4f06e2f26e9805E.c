        int a6)
{
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-38h]
  int v8[2]; // [rsp+8h] [rbp-30h]
  _QWORD *v9; // [rsp+10h] [rbp-28h]
  int v10[2]; // [rsp+18h] [rbp-20h]
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+30h] [rbp-8h]

  std::fs::canonicalize((int)v11, a3 + 24, a3, a4, a5, a6, v7, a3, a1, a1, *(struct _Unwind_Exception **)v11, v12);
  result = *(_QWORD *)v10;
  *v9 = *(_QWORD *)v8;
  v9[1] = *(_QWORD *)v11;
  v9[2] = v12;
  v9[3] = v13;
  return result;
}
