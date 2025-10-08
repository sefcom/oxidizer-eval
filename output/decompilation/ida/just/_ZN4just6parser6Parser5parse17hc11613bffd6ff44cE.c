__int64 __fastcall just::parser::Parser::parse(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int128 v12; // [rsp+0h] [rbp-D8h]
  __int128 v13; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int128 v15; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-98h]
  __int64 v17; // [rsp+48h] [rbp-90h]
  __int64 v18; // [rsp+50h] [rbp-88h]
  __int64 v19; // [rsp+58h] [rbp-80h]
  __int64 v20; // [rsp+60h] [rbp-78h]
  __int128 v21; // [rsp+68h] [rbp-70h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  __int128 v24; // [rsp+88h] [rbp-50h]
  __int64 v25; // [rsp+98h] [rbp-40h]
  __int64 v26; // [rsp+A8h] [rbp-30h]
  int v27; // [rsp+B0h] [rbp-28h]

  *(_QWORD *)&v12 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, a3, a4);
  v22 = 0LL;
  v21 = v12;
  v27 = a2;
  v15 = v13;
  v16 = v14;
  v23 = a5;
  v24 = 0LL;
  v17 = a6;
  v18 = a7;
  v25 = 0LL;
  v26 = 0LL;
  v19 = a8;
  v20 = a9;
  return just::parser::Parser::parse_ast(a1, &v15);
}