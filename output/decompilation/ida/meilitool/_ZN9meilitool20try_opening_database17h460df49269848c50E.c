__int64 __fastcall meilitool::try_opening_database(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v4; // [rsp+18h] [rbp-80h] BYREF
  __int64 v5; // [rsp+20h] [rbp-78h]
  __int64 v6; // [rsp+28h] [rbp-70h]
  _QWORD v7[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v8[3]; // [rsp+48h] [rbp-50h] BYREF
  int v9; // [rsp+60h] [rbp-38h]
  _BYTE v10[48]; // [rsp+68h] [rbp-30h] BYREF

  v3[0] = aIndexStats;
  v3[1] = 11LL;
  v8[0] = a2;
  v9 = 0;
  v8[1] = aIndexStats;
  v8[2] = 11LL;
  heed::databases::database::DatabaseOpenOptions<T,KC,DC,C,CDUP>::open(v10, v8);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v4, v10, v3);
  result = v5;
  if ( v4 == 2 )
  {
    a1[1] = v5;
    *a1 = 1LL;
  }
  else
  {
    v7[0] = v4;
    v7[1] = v5;
    v7[2] = v6;
    return anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
             a1,
             v7,
             v3);
  }
  return result;
}