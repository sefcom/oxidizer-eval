__int64 __fastcall meilitool::clear_task_queue(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v13; // [rsp+18h] [rbp-1C0h]
  __int64 v14; // [rsp+38h] [rbp-1A0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-198h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp-188h]
  __int64 v17; // [rsp+58h] [rbp-180h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-174h]
  unsigned int v19; // [rsp+68h] [rbp-170h]
  unsigned int v20; // [rsp+6Ch] [rbp-16Ch]
  unsigned int v21; // [rsp+70h] [rbp-168h]
  unsigned int v22; // [rsp+74h] [rbp-164h]
  unsigned int v23; // [rsp+78h] [rbp-160h]
  unsigned int v24; // [rsp+7Ch] [rbp-15Ch]
  __int128 v25; // [rsp+80h] [rbp-158h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+90h] [rbp-148h]
  __int128 v27; // [rsp+98h] [rbp-140h]
  __int64 v28; // [rsp+A8h] [rbp-130h]
  __int64 v29; // [rsp+B8h] [rbp-120h] BYREF
  char v30[8]; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-110h]
  __int64 v32; // [rsp+D8h] [rbp-100h] BYREF
  char v33; // [rsp+E0h] [rbp-F8h]
  __int64 v34; // [rsp+E8h] [rbp-F0h]
  __int64 v35; // [rsp+F0h] [rbp-E8h]
  __int64 v36; // [rsp+F8h] [rbp-E0h]
  __int64 v37; // [rsp+100h] [rbp-D8h]
  __int64 v38; // [rsp+108h] [rbp-D0h]
  __int64 v39; // [rsp+110h] [rbp-C8h]
  char v40[8]; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+120h] [rbp-B8h]
  __int64 v42; // [rsp+128h] [rbp-B0h]
  __int64 v43; // [rsp+130h] [rbp-A8h] BYREF
  __int128 *v44; // [rsp+138h] [rbp-A0h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+140h] [rbp-98h]
  __int128 v46; // [rsp+148h] [rbp-90h]
  __int64 v47; // [rsp+158h] [rbp-80h]
  __int128 v48; // [rsp+160h] [rbp-78h] BYREF
  __int64 *v49; // [rsp+170h] [rbp-68h]
  __int64 (__fastcall *v50)(); // [rsp+178h] [rbp-60h]
  __int64 (__fastcall *v51)(); // [rsp+180h] [rbp-58h] BYREF
  __int128 v52; // [rsp+188h] [rbp-50h]
  __int128 v53; // [rsp+198h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  std::path::Path::join(v40, v1, v2, aTasks_0, 5LL);
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)&v12[16] = 0;
  DWORD2(v13) = 0;
  *(_QWORD *)&v13 = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(&v25, v12, v40);
  v3 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v25, v41, v42);
  v5 = v4;
  if ( (v3 & 1) != 0 )
    goto LABEL_29;
  v14 = v4;
  *(_QWORD *)v12 = &off_526978;
  *(_QWORD *)&v12[8] = 1LL;
  *(_QWORD *)&v12[16] = 8LL;
  v13 = 0LL;
  std::io::stdio::_eprint(v12);
  heed::txn::RwTxn::new(v12, &v14);
  v25 = *(_OWORD *)&v12[8];
  v26 = (__int64 (__fastcall *)())v13;
  if ( *(_DWORD *)v12 == 1 )
  {
    *(_QWORD *)&v12[16] = v26;
    *(_OWORD *)v12 = v25;
    v5 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v12);
LABEL_28:
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v14);
    goto LABEL_29;
  }
  v16 = v26;
  v15 = v25;
  meilitool::try_opening_poly_database(v12, &v14, &v15, aAllTasks, 9LL);
  v5 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
  {
LABEL_27:
    core::ptr::drop_in_place<heed::txn::RwTxn>(&v15);
    goto LABEL_28;
  }
  v6 = *(_DWORD *)&v12[16];
  heed::databases::database::Database<KC,DC,C,CDUP>::len(v12, *(_QWORD *)&v12[8], *(unsigned int *)&v12[16], &v15);
  if ( *(_DWORD *)v12 != 5 )
  {
    v8 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v12);
    goto LABEL_25;
  }
  v43 = *(_QWORD *)&v12[8];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aStatus, 6LL);
  v7 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
  {
LABEL_26:
    v5 = v7;
    goto LABEL_27;
  }
  v24 = *(_DWORD *)&v12[16];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aKind_0, 4LL);
  v8 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
    goto LABEL_25;
  v39 = *(_QWORD *)&v12[8];
  v23 = *(_DWORD *)&v12[16];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aIndexTasks, 11LL);
  v8 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
    goto LABEL_25;
  v38 = *(_QWORD *)&v12[8];
  v22 = *(_DWORD *)&v12[16];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aCanceledBy, 11LL);
  v8 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
    goto LABEL_25;
  v37 = *(_QWORD *)&v12[8];
  v21 = *(_DWORD *)&v12[16];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aEnqueuedAt, 11LL);
  v8 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0 )
    goto LABEL_25;
  v36 = *(_QWORD *)&v12[8];
  v20 = *(_DWORD *)&v12[16];
  meilitool::try_opening_poly_database(v12, &v14, &v15, aStartedAt, 10LL);
  v8 = *(_QWORD *)&v12[8];
  if ( (v12[0] & 1) != 0
    || (v35 = *(_QWORD *)&v12[8],
        v19 = *(_DWORD *)&v12[16],
        meilitool::try_opening_poly_database(v12, &v14, &v15, aFinishedAt, 11LL),
        v8 = *(_QWORD *)&v12[8],
        (v12[0] & 1) != 0)
    || (v34 = *(_QWORD *)&v12[8],
        v18 = *(_DWORD *)&v12[16],
        (v8 = meilitool::try_clearing_poly_database(&v15, v5, v6, aAllTasks, 9LL)) != 0) )
  {
LABEL_25:
    v7 = v8;
    goto LABEL_26;
  }
  v7 = meilitool::try_clearing_poly_database(&v15, v7, v24, aStatus, 6LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v39, v23, aKind_0, 4LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v38, v22, aIndexTasks, 11LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v37, v21, aCanceledBy, 11LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v36, v20, aEnqueuedAt, 11LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v35, v19, aStartedAt, 10LL);
  if ( v7 )
    goto LABEL_26;
  v7 = meilitool::try_clearing_poly_database(&v15, v34, v18, aFinishedAt, 11LL);
  if ( v7 )
    goto LABEL_26;
  *(_QWORD *)&v12[16] = v16;
  *(_OWORD *)v12 = v15;
  heed::txn::RwTxn::commit(&v25, v12);
  v5 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
         &v25,
         "While committing the transactiontuple struct DocumentsBatchIndex in the fieldids weights mappingCannot find emb"
         "edder with name `could not convert slice to array(",
         32LL);
  if ( v5 )
    goto LABEL_28;
  *(_QWORD *)&v25 = &v43;
  *((_QWORD *)&v25 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)v12 = &off_526988;
  *(_QWORD *)&v12[8] = 2LL;
  *(_QWORD *)&v12[16] = &v25;
  v13 = 1uLL;
  std::io::stdio::_eprint(v12);
  *(_QWORD *)v12 = &off_5269A8;
  *(_QWORD *)&v12[8] = 1LL;
  *(_QWORD *)&v12[16] = 8LL;
  v13 = 0LL;
  std::io::stdio::_eprint(v12);
  v29 = 0LL;
  std::path::Path::join(v30, v1, v2, aUpdateFiles, 12LL);
  std::fs::read_dir(v12, v30);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
    &v25,
    *(_QWORD *)v12,
    *(unsigned int *)&v12[8],
    v31,
    *((_QWORD *)&v31 + 1));
  v5 = v25;
  if ( BYTE8(v25) == 2 )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(v30);
    goto LABEL_28;
  }
  v32 = v25;
  v33 = BYTE8(v25);
  v10 = 0LL;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v25, &v32);
    if ( (_DWORD)v25 != 1 )
      break;
    if ( *((_QWORD *)&v25 + 1) )
    {
      v44 = (__int128 *)*((_QWORD *)&v25 + 1);
      v45 = v26;
      v47 = v28;
      v46 = v27;
      std::fs::DirEntry::path(v12, &v44);
      v11 = std::fs::remove_file(v12);
      if ( v11 )
      {
        v17 = v11;
        std::fs::DirEntry::path(&v51, &v44);
        v53 = v52;
        *(_QWORD *)&v48 = &v53;
        *((_QWORD *)&v48 + 1) = <std::path::Display as core::fmt::Debug>::fmt;
        v49 = &v17;
        v50 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)v12 = &off_5269B8;
        *(_QWORD *)&v12[8] = 3LL;
        *(_QWORD *)&v12[16] = &v48;
        v13 = 2uLL;
        std::io::stdio::_eprint(v12);
        core::ptr::drop_in_place<std::path::PathBuf>(&v51);
        core::ptr::drop_in_place<std::io::error::Error>(&v17);
      }
      else
      {
        v29 = ++v10;
      }
      core::ptr::drop_in_place<std::fs::DirEntry>(&v44);
    }
    else
    {
      v51 = v26;
      v48 = v31;
      v44 = &v48;
      v45 = <std::path::Display as core::fmt::Debug>::fmt;
      *(_QWORD *)&v46 = &v51;
      *((_QWORD *)&v46 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)v12 = &off_5269E8;
      *(_QWORD *)&v12[8] = 3LL;
      *(_QWORD *)&v12[16] = &v44;
      v13 = 2uLL;
      std::io::stdio::_eprint(v12);
      core::ptr::drop_in_place<std::io::error::Error>(&v51);
    }
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v32);
  *(_QWORD *)&v25 = &v29;
  *((_QWORD *)&v25 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)v12 = &off_526A18;
  *(_QWORD *)&v12[8] = 2LL;
  *(_QWORD *)&v12[16] = &v25;
  v13 = 1uLL;
  std::io::stdio::_eprint(v12);
  core::ptr::drop_in_place<std::path::PathBuf>(v30);
  core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v14);
  v5 = 0LL;
LABEL_29:
  core::ptr::drop_in_place<std::path::PathBuf>(v40);
  core::ptr::drop_in_place<std::path::PathBuf>(a1);
  return v5;
}