__int64 __fastcall meilitool::try_clearing_poly_database(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[2]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+18h] [rbp-20h] BYREF

  v6[0] = a4;
  v6[1] = a5;
  heed::databases::database::Database<KC,DC,C,CDUP>::clear(v7, a2, a3, a1);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v7, v6);
}