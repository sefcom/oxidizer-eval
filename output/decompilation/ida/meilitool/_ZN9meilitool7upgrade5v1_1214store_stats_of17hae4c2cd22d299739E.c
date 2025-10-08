__int64 __fastcall meilitool::upgrade::v1_12::store_stats_of(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[2]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+18h] [rbp-20h] BYREF

  v8[0] = a5;
  v8[1] = a6;
  heed::databases::database::Database<KC,DC,C,CDUP>::put(v9, a1, a2, a4, a3, a7);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v9, v8);
}