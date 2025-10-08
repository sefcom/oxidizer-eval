__int64 __fastcall meilitool::upgrade::v1_10::update_index_stats(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  double v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // [rsp+Bh] [rbp-16Dh]
  _QWORD v13[2]; // [rsp+10h] [rbp-168h] BYREF
  __int128 v14; // [rsp+20h] [rbp-158h]
  __int64 v15; // [rsp+30h] [rbp-148h]
  _BYTE v16[7]; // [rsp+40h] [rbp-138h] BYREF
  char v17; // [rsp+47h] [rbp-131h]
  __int64 v18; // [rsp+48h] [rbp-130h]
  __int128 v19; // [rsp+50h] [rbp-128h]
  __int128 v20; // [rsp+60h] [rbp-118h]
  __int64 v21; // [rsp+70h] [rbp-108h]
  __int128 v22; // [rsp+78h] [rbp-100h]
  __int64 v23; // [rsp+88h] [rbp-F0h]
  _BYTE v24[7]; // [rsp+90h] [rbp-E8h] BYREF
  char v25; // [rsp+97h] [rbp-E1h]
  __int64 v26; // [rsp+98h] [rbp-E0h]
  __int128 v27; // [rsp+A0h] [rbp-D8h]
  __int128 v28; // [rsp+B0h] [rbp-C8h]
  __int64 v29; // [rsp+C0h] [rbp-B8h]
  __int128 v30; // [rsp+C8h] [rbp-B0h]
  __int64 v31; // [rsp+D8h] [rbp-A0h]
  __int128 v32; // [rsp+E0h] [rbp-98h]
  _BYTE v33[128]; // [rsp+F8h] [rbp-80h] BYREF

  v13[0] = a3;
  v13[1] = a4;
  heed::databases::database::Database<KC,DC,C,CDUP>::get(v16, a1, a2, a6);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v33, v16, v13);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v24, v33);
  if ( v25 == 2 )
    return v26;
  v12 = *(_DWORD *)&v24[3];
  LOBYTE(v12) = v24[3];
  v32 = v27;
  v9 = *(double *)&v28;
  v14 = v30;
  v15 = v31;
  if ( (v25 & 1) != 0 )
    return 0LL;
  v23 = v15;
  v22 = v14;
  *(_DWORD *)v16 = *(_DWORD *)v24;
  *(_DWORD *)&v16[3] = v12;
  v19 = v32;
  v20 = v28;
  v21 = v29;
  v17 = v25;
  v18 = v26;
  heed::databases::database::Database<KC,DC,C,CDUP>::put(v33, a1, a2, a6, a5, v16);
  v10 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v33, v13, v9);
  v11 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v10);
  core::ptr::drop_in_place<meilitool::upgrade::v1_9::IndexStats>(v16);
  result = v11;
  if ( !v11 )
    return 0LL;
  return result;
}