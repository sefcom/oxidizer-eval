__int64 __fastcall meilitool::upgrade::v1_10::date_round_trip(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int v6; // ebx
  int v8; // r14d
  _BYTE v10[7]; // [rsp+8h] [rbp-80h] BYREF
  char v11; // [rsp+Fh] [rbp-79h]
  __int64 v12; // [rsp+10h] [rbp-78h]
  _BYTE v13[7]; // [rsp+18h] [rbp-70h]
  _QWORD v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[72]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a6;
  v8 = a4;
  v14[0] = a2;
  v14[1] = a3;
  v15[0] = a6;
  v15[1] = 10LL;
  heed::databases::database::Database<KC,DC,C,CDUP>::get(v16, a4, a5, a1, a6, 10LL);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v10, v16, v15, v14);
  if ( v11 == 2 )
    return v12;
  *(_DWORD *)&v13[3] = *(_DWORD *)&v10[3];
  *(_DWORD *)v13 = *(_DWORD *)v10;
  if ( (v11 & 1) != 0 )
    return 0LL;
  *(_DWORD *)&v10[3] = *(_DWORD *)&v13[3];
  *(_DWORD *)v10 = *(_DWORD *)v13;
  heed::databases::database::Database<KC,DC,C,CDUP>::put((unsigned int)v16, v8, a5, a1, v6, 10, (__int64)v10);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v16, v15, v14);
}