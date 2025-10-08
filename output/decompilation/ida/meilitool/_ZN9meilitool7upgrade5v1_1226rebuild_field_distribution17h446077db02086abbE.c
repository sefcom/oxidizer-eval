__int64 __fastcall meilitool::upgrade::v1_12::rebuild_field_distribution(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v6; // rdx
  char v8; // [rsp+Fh] [rbp-119h] BYREF
  __int128 v9; // [rsp+10h] [rbp-118h] BYREF
  __int64 v10; // [rsp+20h] [rbp-108h]
  __int64 v11; // [rsp+28h] [rbp-100h] BYREF
  __int128 v12; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-E8h]
  _BYTE v14[24]; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+68h] [rbp-C0h]
  __int64 v16; // [rsp+78h] [rbp-B0h]
  char *v17; // [rsp+80h] [rbp-A8h]
  __int128 *v18; // [rsp+88h] [rbp-A0h]
  __int64 *v19; // [rsp+90h] [rbp-98h]
  __int64 v20; // [rsp+98h] [rbp-90h]
  __int64 v21; // [rsp+A0h] [rbp-88h]
  __int64 *v22; // [rsp+A8h] [rbp-80h]
  char v23[8]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-68h]
  __int64 v25; // [rsp+C8h] [rbp-60h]
  __int64 v26; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-50h] BYREF
  int v28; // [rsp+E0h] [rbp-48h]
  __int128 v29; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-30h]

  std::path::Path::join(v23, a1, a2, aTasks_0, 5LL);
  *(_QWORD *)v14 = 0LL;
  *(_DWORD *)&v14[16] = 0;
  DWORD2(v15) = 0;
  *(_QWORD *)&v15 = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(&v9, v14, v23);
  v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v9, v24, v25);
  v4 = v3;
  if ( (v2 & 1) == 0 )
  {
    v11 = v3;
    heed::txn::RwTxn::new(v14, &v11);
    v9 = *(_OWORD *)&v14[8];
    v10 = v15;
    if ( *(_DWORD *)v14 == 1 )
    {
      *(_QWORD *)&v14[16] = v10;
      *(_OWORD *)v14 = v9;
      v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v14);
LABEL_12:
      core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v11);
      goto LABEL_13;
    }
    v13 = v10;
    v12 = v9;
    meilitool::try_opening_database(v14, &v11, &v12);
    v4 = *(_QWORD *)&v14[8];
    if ( (v14[0] & 1) == 0 )
    {
      v5 = *(_DWORD *)&v14[16];
      meilitool::try_opening_database(v14, &v11, &v12);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v9, v14, v24, v25);
      v6 = *((_QWORD *)&v9 + 1);
      if ( (v9 & 1) == 0 )
      {
        v27 = *((_QWORD *)&v9 + 1);
        v28 = v10;
        heed::databases::database::Database<KC,DC,C,CDUP>::len(v14, v4, v5, &v12);
        if ( (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v14) & 1) == 0 )
        {
          v26 = v6;
          heed::databases::database::Database<KC,DC,C,CDUP>::iter(&v9, v4, v5, &v12);
          if ( (_DWORD)v9 == 5 )
          {
            core::iter::traits::iterator::Iterator::collect(&v29, *((_QWORD *)&v9 + 1), (unsigned __int8)v10);
            *(_QWORD *)&v9 = <alloc::sync::Arc<T> as core::default::Default>::default();
            v8 = 0;
            v17 = &v8;
            v18 = &v9;
            v15 = v29;
            v16 = v30;
            v19 = &v26;
            v20 = a1;
            v21 = a2;
            v22 = &v27;
            *(_OWORD *)v14 = v12;
            *(_QWORD *)&v14[16] = v13;
            v4 = std::thread::scoped::scope(v14);
            core::ptr::drop_in_place<milli::progress::Progress>(&v9);
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v11);
            goto LABEL_13;
          }
          *(_DWORD *)&v14[20] = HIDWORD(v10);
          *(_DWORD *)&v14[17] = *(_DWORD *)((char *)&v10 + 1);
          *(_OWORD *)v14 = v9;
          v14[16] = v10;
          v6 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v14);
        }
      }
      v4 = v6;
    }
    core::ptr::drop_in_place<heed::txn::RwTxn>(&v12);
    goto LABEL_12;
  }
LABEL_13:
  core::ptr::drop_in_place<std::path::PathBuf>(v23);
  return v4;
}