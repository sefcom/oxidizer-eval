__int64 __fastcall meilitool::try_opening_poly_database(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v7; // [rsp+18h] [rbp-80h] BYREF
  __int64 v8; // [rsp+20h] [rbp-78h]
  __int64 v9; // [rsp+28h] [rbp-70h]
  _QWORD v10[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-50h] BYREF
  int v12; // [rsp+60h] [rbp-38h]
  _BYTE v13[48]; // [rsp+68h] [rbp-30h] BYREF

  v6[0] = a4;
  v6[1] = a5;
  v11[0] = a2;
  v12 = 0;
  v11[1] = a4;
  v11[2] = a5;
  heed::databases::database::DatabaseOpenOptions<T,KC,DC,C,CDUP>::open(v13, v11);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v7, v13, v6);
  result = v8;
  if ( v7 == 2 )
  {
    a1[1] = v8;
    *a1 = 1LL;
  }
  else
  {
    v10[0] = v7;
    v10[1] = v8;
    v10[2] = v9;
    return anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
             a1,
             v10,
             v6);
  }
  return result;
}