__int64 __fastcall meilitool::upgrade::v1_10::update_date_format(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h]
  int v10; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  _BYTE v13[64]; // [rsp+28h] [rbp-40h] BYREF

  v8 = a1;
  v9 = a2;
  meilitool::try_opening_poly_database(v13, a3, a4, "main.", 4LL);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v10, v13, &v8);
  if ( v10 == 1 )
    return v11;
  v6 = v11;
  v7 = v12;
  result = meilitool::upgrade::v1_10::date_round_trip(a4, a1, a2, v11, v12, &unk_1522A6);
  if ( !result )
    return meilitool::upgrade::v1_10::date_round_trip(a4, v8, v9, v6, v7, &unk_1522B0);
  return result;
}