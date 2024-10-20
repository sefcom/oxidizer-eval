char ***__fastcall uu_dd::blocks::unblock(char ***a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rbx
  char **v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  char ***result; // rax
  __int64 v11; // [rsp+8h] [rbp-90h]
  char **v13; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int128 v16; // [rsp+38h] [rbp-60h]
  _QWORD v17[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( !a4 )
  {
    v13 = &anon_f1dd4ebaf33a3c0c2dfbf6f24dd0ff60_5_llvm_10667409745923771447;
    v14 = 1LL;
    v15 = 8LL;
    v16 = 0LL;
    core::panicking::panic_fmt(&v13, &off_1441B8);
  }
  v4 = a3;
  if ( a3 )
  {
    v6 = 1LL;
    v7 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      v11 = v8;
      v9 = a4;
      if ( v4 < a4 )
        v9 = v4;
      core::slice::raw::from_raw_parts::precondition_check(a2, 1LL, 1LL, v9);
      v4 -= v9;
      core::slice::raw::from_raw_parts::precondition_check(v9 + a2, 1LL, 1LL, v4);
      if ( !a2 )
        break;
      v13 = v7;
      v14 = v6;
      v15 = v11;
      *(_QWORD *)&v16 = a2;
      *((_QWORD *)&v16 + 1) = v9;
      uu_dd::blocks::unblock::{{closure}}(v17, 1LL, &v13, a2, v9);
      v7 = (char **)v17[0];
      v6 = v17[1];
      v8 = v17[2];
      a2 += v9;
      if ( !v4 )
        goto LABEL_11;
    }
    v8 = v11;
  }
  else
  {
    v6 = 1LL;
    v8 = 0LL;
    v7 = 0LL;
  }
LABEL_11:
  result = a1;
  *a1 = v7;
  a1[1] = (char **)v6;
  a1[2] = (char **)v8;
  return result;
}
