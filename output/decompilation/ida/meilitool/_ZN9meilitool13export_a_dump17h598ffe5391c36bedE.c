__int64 __fastcall meilitool::export_a_dump(__int64 a1, __int64 a2, unsigned __int8 a3, __int32 *a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // r13
  char v11; // al
  __int64 v12; // rdx
  char v13; // bp
  __int64 dir_all; // rax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  char v22; // bp
  int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // edx
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-1390h]
  char v40; // [rsp+8h] [rbp-1390h]
  __int64 v42; // [rsp+10h] [rbp-1388h]
  __int64 v43; // [rsp+10h] [rbp-1388h]
  __int64 v44; // [rsp+18h] [rbp-1380h] BYREF
  int v45; // [rsp+24h] [rbp-1374h] BYREF
  int v46; // [rsp+28h] [rbp-1370h] BYREF
  int v47; // [rsp+2Ch] [rbp-136Ch] BYREF
  int v48; // [rsp+30h] [rbp-1368h] BYREF
  int v49; // [rsp+34h] [rbp-1364h] BYREF
  __int128 v50; // [rsp+38h] [rbp-1360h] BYREF
  __int64 v51; // [rsp+48h] [rbp-1350h]
  unsigned __int64 v52; // [rsp+50h] [rbp-1348h]
  __int64 v53; // [rsp+58h] [rbp-1340h]
  unsigned __int32 v54; // [rsp+64h] [rbp-1334h]
  unsigned int v55; // [rsp+68h] [rbp-1330h]
  unsigned int v56; // [rsp+6Ch] [rbp-132Ch]
  __int128 v57; // [rsp+70h] [rbp-1328h] BYREF
  __int64 v58; // [rsp+80h] [rbp-1318h]
  __int128 v59; // [rsp+90h] [rbp-1308h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-12F8h]
  __int128 v61; // [rsp+B0h] [rbp-12E8h]
  __int128 v62; // [rsp+C0h] [rbp-12D8h]
  __int128 v63; // [rsp+D0h] [rbp-12C8h]
  __int128 v64; // [rsp+E0h] [rbp-12B8h]
  __int64 v65; // [rsp+F0h] [rbp-12A8h]
  _BYTE v66[56]; // [rsp+100h] [rbp-1298h] BYREF
  __int128 v67; // [rsp+140h] [rbp-1258h] BYREF
  __int128 v68; // [rsp+150h] [rbp-1248h]
  __m128 v69; // [rsp+160h] [rbp-1238h]
  __int64 v70; // [rsp+170h] [rbp-1228h] BYREF
  char v71; // [rsp+178h] [rbp-1220h]
  _OWORD v72[10]; // [rsp+180h] [rbp-1218h] BYREF
  __int128 v73; // [rsp+220h] [rbp-1178h] BYREF
  __int64 v74; // [rsp+230h] [rbp-1168h]
  __int64 v75; // [rsp+238h] [rbp-1160h] BYREF
  __int64 v76; // [rsp+240h] [rbp-1158h]
  unsigned __int64 v77; // [rsp+248h] [rbp-1150h]
  _OWORD dest[63]; // [rsp+250h] [rbp-1148h] BYREF
  __int64 v79; // [rsp+640h] [rbp-D58h] BYREF
  unsigned int v80; // [rsp+648h] [rbp-D50h]
  unsigned __int8 v81; // [rsp+64Ch] [rbp-D4Ch]
  unsigned __int16 v82; // [rsp+64Dh] [rbp-D4Bh]
  _BYTE v83[40]; // [rsp+650h] [rbp-D48h] BYREF
  char v84[8]; // [rsp+678h] [rbp-D20h] BYREF
  __int64 v85; // [rsp+680h] [rbp-D18h]
  __int64 v86; // [rsp+688h] [rbp-D10h]
  char v87[8]; // [rsp+690h] [rbp-D08h] BYREF
  __int64 v88; // [rsp+698h] [rbp-D00h]
  __int64 v89; // [rsp+6A0h] [rbp-CF8h]
  char v90[8]; // [rsp+6A8h] [rbp-CF0h] BYREF
  __int64 v91; // [rsp+6B0h] [rbp-CE8h]
  __int64 v92; // [rsp+6B8h] [rbp-CE0h]
  _BYTE v93[48]; // [rsp+6C0h] [rbp-CD8h] BYREF
  __int128 v94; // [rsp+6F0h] [rbp-CA8h]
  __int128 v95; // [rsp+700h] [rbp-C98h]
  __int128 v96; // [rsp+710h] [rbp-C88h]
  __int128 v97; // [rsp+720h] [rbp-C78h] BYREF
  __int128 v98; // [rsp+730h] [rbp-C68h] BYREF
  __int128 v99; // [rsp+740h] [rbp-C58h]
  __int128 v100; // [rsp+750h] [rbp-C48h]
  __int128 v101; // [rsp+760h] [rbp-C38h]
  __int64 v102; // [rsp+770h] [rbp-C28h]
  __int64 v103; // [rsp+778h] [rbp-C20h]
  _BYTE src[992]; // [rsp+780h] [rbp-C18h] BYREF
  __int128 v105; // [rsp+B60h] [rbp-838h] BYREF
  __int64 v106; // [rsp+B70h] [rbp-828h]
  __int128 v107; // [rsp+B78h] [rbp-820h]
  __int128 v108; // [rsp+B90h] [rbp-808h] BYREF
  __int128 v109; // [rsp+BA0h] [rbp-7F8h]
  __int128 v110; // [rsp+BB0h] [rbp-7E8h] BYREF
  __int64 v111; // [rsp+BC0h] [rbp-7D8h]
  char v112[8]; // [rsp+BD0h] [rbp-7C8h] BYREF
  __int128 v113; // [rsp+BD8h] [rbp-7C0h]
  _BYTE v114[56]; // [rsp+BE8h] [rbp-7B0h] BYREF
  __int128 v115; // [rsp+C20h] [rbp-778h]
  _OWORD v116[35]; // [rsp+C30h] [rbp-768h] BYREF
  _OWORD v117[4]; // [rsp+E60h] [rbp-538h] BYREF
  __int128 v118; // [rsp+EA0h] [rbp-4F8h]
  __int128 v119; // [rsp+EB0h] [rbp-4E8h] BYREF
  _OWORD v120[35]; // [rsp+EC0h] [rbp-4D8h] BYREF
  _BYTE v121[24]; // [rsp+10F0h] [rbp-2A8h] BYREF
  _QWORD v122[9]; // [rsp+1108h] [rbp-290h] BYREF
  __int128 v123; // [rsp+1150h] [rbp-248h]
  _BYTE v124[232]; // [rsp+1160h] [rbp-238h] BYREF
  _BYTE v125[288]; // [rsp+1248h] [rbp-150h] BYREF

  *((_QWORD *)&dest[17] + 1) = 0LL;
  v53 = a2;
  v5 = std::time::SystemTime::now();
  time::interop::offsetdatetime_systemtime::<impl core::convert::From<std::time::SystemTime> for time::offset_date_time::OffsetDateTime>::from(
    &v79,
    v5);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  std::path::Path::join(v112, v6, v7, aInstanceUid_0, 12LL);
  std::fs::read_to_string(v120, v112);
  if ( __OFSUB__(0LL, *(_QWORD *)&v120[0]) )
  {
    *(_QWORD *)&v72[0] = *((_QWORD *)&v120[0] + 1);
    v116[0] = v113;
    *(_QWORD *)src = v116;
    *(_QWORD *)&src[8] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&src[16] = v72;
    *(_QWORD *)&src[24] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &off_526B08;
    *((_QWORD *)&dest[0] + 1) = 3LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = src;
    *((_QWORD *)&dest[1] + 1) = 2LL;
    std::io::stdio::_eprint(dest);
    core::ptr::drop_in_place<std::io::error::Error>(v72);
    v8 = 0;
  }
  else
  {
    v9 = core::str::<impl str>::trim_matches(*((_QWORD *)&v120[0] + 1), *(_QWORD *)&v120[1]);
    uuid::parser::<impl core::convert::TryFrom<&str> for uuid::Uuid>::try_from(v116, v9);
    if ( LODWORD(v116[0]) == 9 )
    {
      v118 = *(_OWORD *)((char *)v116 + 4);
      v8 = 1;
    }
    else
    {
      *(_OWORD *)&src[16] = v116[1];
      *(_OWORD *)src = v116[0];
      *(_QWORD *)&v72[0] = src;
      *((_QWORD *)&v72[0] + 1) = <uuid::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &off_526AE8;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = v72;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      v8 = 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(v120);
  }
  LOBYTE(v116[0]) = v8;
  *(_OWORD *)((char *)v116 + 1) = v118;
  dump::writer::DumpWriter::new(dest, v116);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(src, dest);
  v10 = *(_QWORD *)src;
  if ( src[16] == 2 )
    goto LABEL_33;
  *(_DWORD *)((char *)&v51 + 1) = *(_DWORD *)&src[17];
  HIDWORD(v51) = *(_DWORD *)&src[20];
  v50 = *(_OWORD *)src;
  LOBYTE(v51) = src[16];
  std::path::Path::join(src, v6, v7, aUpdateFiles, 12LL);
  file_store::FileStore::new(dest, src);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(src, dest);
  v10 = *(_QWORD *)&src[8];
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
LABEL_32:
    core::ptr::drop_in_place<dump::writer::DumpWriter>(&v50);
    goto LABEL_33;
  }
  v73 = *(_OWORD *)src;
  v74 = *(_QWORD *)&src[16];
  std::path::Path::join(v84, v6, v7, aTasks_0, 5LL);
  *(_QWORD *)&dest[0] = 0LL;
  LODWORD(dest[1]) = 0;
  LODWORD(dest[2]) = 0;
  *((_QWORD *)&dest[1] + 1) = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(src, dest, v84);
  v11 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(src, v85, v86);
  v10 = v12;
  if ( (v11 & 1) != 0 )
  {
    v13 = 1;
    goto LABEL_31;
  }
  v44 = v12;
  *(_QWORD *)&dest[0] = &off_526B38;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  dest[1] = 8uLL;
  std::io::stdio::_eprint(dest);
  std::path::Path::join(v87, v6, v7, aAuth, 4LL);
  dir_all = std::fs::create_dir_all(v87);
  v10 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(dir_all);
  v13 = 1;
  if ( !v10 )
  {
    meilisearch_auth::store::open_auth_store_env(dest, v88, v89);
    v15 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(dest);
    v10 = v16;
    v13 = 1;
    if ( (v15 & 1) == 0 )
    {
      meilisearch_auth::AuthController::new(dest, v16, &unk_153068);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(src, dest, v6, v7);
      v10 = *(_QWORD *)&src[8];
      if ( *(_QWORD *)src == 0x8000000000000001LL )
      {
        v13 = 1;
        goto LABEL_30;
      }
      v117[3] = *(_OWORD *)&src[48];
      v117[2] = *(_OWORD *)&src[32];
      v117[1] = *(_OWORD *)&src[16];
      v117[0] = *(_OWORD *)src;
      dump::writer::DumpWriter::create_keys(dest, &v50);
      *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
      *(_OWORD *)&src[16] = *(_OWORD *)((char *)&dest[1] + 8);
      if ( LODWORD(dest[0]) == 1 )
      {
        dest[1] = *(_OWORD *)&src[16];
        dest[0] = *(_OWORD *)src;
        v17 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_17:
        v10 = v17;
        v13 = 1;
LABEL_29:
        core::ptr::drop_in_place<meilisearch_auth::AuthController>(v117);
        goto LABEL_30;
      }
      v109 = *(_OWORD *)&src[16];
      v108 = *(_OWORD *)src;
      v46 = 0;
      meilisearch_auth::AuthController::list_keys(dest, v117);
      v110 = *(_OWORD *)((char *)dest + 8);
      v111 = *((_QWORD *)&dest[1] + 1);
      if ( *(_QWORD *)&dest[0] != 3LL )
      {
        *((_QWORD *)&dest[1] + 1) = v111;
        *(_OWORD *)((char *)dest + 8) = v110;
        v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_28:
        v13 = 1;
        core::ptr::drop_in_place<dump::writer::KeyWriter>(&v108);
        goto LABEL_29;
      }
      v52 = 0x8000000000000001LL;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v72, &v110);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v72);
      if ( *(_QWORD *)src != 0x8000000000000000LL )
      {
        while ( 1 )
        {
          memcpy(dest, src, 0xA0uLL);
          dump::writer::KeyWriter::push_key(v120, &v108, dest);
          if ( LODWORD(v120[0]) != 13 )
            break;
          ++v46;
          core::ptr::drop_in_place<meilisearch_types::keys::Key>(dest);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v72);
          if ( *(_QWORD *)src == 0x8000000000000000LL )
            goto LABEL_22;
        }
        v116[1] = v120[1];
        *(_OWORD *)((char *)v116 + 4) = *(_OWORD *)((char *)v120 + 4);
        LODWORD(v116[0]) = v120[0];
        v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v116);
        core::ptr::drop_in_place<meilisearch_types::keys::Key>(dest);
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilisearch_types::keys::Key>>(v72);
        goto LABEL_28;
      }
LABEL_22:
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilisearch_types::keys::Key>>(v72);
      dest[1] = v109;
      dest[0] = v108;
      dump::writer::KeyWriter::flush(src, dest);
      if ( *(_DWORD *)src != 13 )
      {
        dest[1] = *(_OWORD *)&src[16];
        *(_OWORD *)((char *)dest + 4) = *(_OWORD *)&src[4];
        LODWORD(dest[0]) = *(_DWORD *)src;
        v17 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
        goto LABEL_17;
      }
      *(_QWORD *)src = &v46;
      *(_QWORD *)&src[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&dest[0] = &off_526B48;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = src;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)&dest[0] = &off_526B68;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      dest[1] = 8uLL;
      std::io::stdio::_eprint(dest);
      heed::txn::RoTxn<T>::new(dest, &v44);
      *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
      *(_QWORD *)&src[16] = *((_QWORD *)&dest[1] + 1);
      if ( LODWORD(dest[0]) == 1 )
      {
        *(_QWORD *)&dest[1] = *(_QWORD *)&src[16];
        dest[0] = *(_OWORD *)src;
        v17 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
        goto LABEL_17;
      }
      v58 = *(_QWORD *)&src[16];
      v57 = *(_OWORD *)src;
      meilitool::try_opening_database(dest, &v44, &v57);
      v10 = *((_QWORD *)&dest[0] + 1);
      v13 = 1;
      if ( (dest[0] & 1) != 0 )
      {
LABEL_38:
        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v57);
        goto LABEL_29;
      }
      v69.m128_i32[0] = dest[1];
      meilitool::try_opening_database(dest, &v44, &v57);
      v19 = *((_QWORD *)&dest[0] + 1);
      if ( (dest[0] & 1) != 0
        || (v39 = *((_QWORD *)&dest[0] + 1),
            v56 = dest[1],
            meilitool::try_opening_database(dest, &v44, &v57),
            v19 = *((_QWORD *)&dest[0] + 1),
            (dest[0] & 1) != 0) )
      {
        v10 = v19;
        goto LABEL_38;
      }
      v103 = *((_QWORD *)&dest[0] + 1);
      v55 = dest[1];
      *(_QWORD *)&dest[0] = &off_526B78;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      dest[1] = 8uLL;
      std::io::stdio::_eprint(dest);
      dump::writer::DumpWriter::create_tasks_queue(dest, &v50);
      *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
      *(_OWORD *)&src[16] = *(_OWORD *)((char *)&dest[1] + 8);
      if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
      {
LABEL_40:
        dest[1] = *(_OWORD *)&src[16];
        dest[0] = *(_OWORD *)src;
        v20 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_41:
        v10 = v20;
        v13 = 1;
        goto LABEL_38;
      }
      *(_OWORD *)&v114[40] = *(_OWORD *)((char *)&dest[2] + 8);
      *(_OWORD *)&v114[8] = *(_OWORD *)src;
      *(_OWORD *)&v114[24] = *(_OWORD *)&src[16];
      *(_QWORD *)v114 = *(_QWORD *)&dest[0];
      v45 = 0;
      v47 = 0;
      heed::databases::database::Database<KC,DC,C,CDUP>::iter(src, v10, v69.m128_u32[0], &v57);
      if ( *(_DWORD *)src != 5 )
      {
        DWORD1(dest[1]) = *(_DWORD *)&src[20];
        *(_DWORD *)((char *)&dest[1] + 1) = *(_DWORD *)&src[17];
        dest[0] = *(_OWORD *)src;
        LOBYTE(dest[1]) = src[16];
        v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_87:
        v13 = 1;
        core::ptr::drop_in_place<dump::writer::TaskWriter>(v114);
        goto LABEL_38;
      }
      *(_QWORD *)&v67 = *(_QWORD *)&src[8];
      BYTE8(v67) = src[16];
      v69.m128_i32[0] = *a4;
      v54 = a4[1];
      while ( 1 )
      {
        <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(dest, &v67);
        if ( *((_QWORD *)&dest[0] + 1) == 16LL )
        {
          *(_QWORD *)&src[16] = *(_QWORD *)&dest[2];
          *(_OWORD *)src = dest[1];
          v24 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
          goto LABEL_74;
        }
        if ( DWORD2(dest[0]) == 17 )
          break;
        memcpy(&v120[2], (char *)&dest[2] + 8, 0x208uLL);
        *((_QWORD *)&v120[1] + 1) = *(_QWORD *)&dest[2];
        *(_OWORD *)((char *)v120 + 8) = dest[1];
        *(_QWORD *)&v120[0] = *((_QWORD *)&dest[0] + 1);
        v21 = *(_QWORD *)&v120[18];
        if ( *(_QWORD *)&v120[18] == 0x8000000000000000LL )
          v105 = dest[22];
        v22 = BYTE4(v120[34]);
        if ( ((BYTE4(v120[34]) == 0) & a3) != 0 )
        {
          core::ptr::drop_in_place<meilisearch_types::tasks::Task>(v120);
        }
        else
        {
          memcpy(src, v120, 0x228uLL);
          <dump::TaskDump as core::convert::From<meilisearch_types::tasks::Task>>::from(v116, src);
          dump::writer::TaskWriter::push_task(v72, v114, v116);
          *(_OWORD *)v93 = *(_OWORD *)((char *)v72 + 8);
          *(_OWORD *)&v93[16] = *(_OWORD *)((char *)&v72[1] + 8);
          if ( *(_QWORD *)&v72[0] == 0x8000000000000000LL )
          {
            *(_OWORD *)&src[16] = *(_OWORD *)&v93[16];
            *(_OWORD *)src = *(_OWORD *)v93;
            v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
            core::ptr::drop_in_place<dump::TaskDump>(v116);
            goto LABEL_86;
          }
          *(_OWORD *)&v66[40] = *(_OWORD *)((char *)&v72[2] + 8);
          *(_OWORD *)&v66[24] = *(_OWORD *)&v93[16];
          *(_OWORD *)&v66[8] = *(_OWORD *)v93;
          *(_QWORD *)v66 = *(_QWORD *)&v72[0];
          core::ptr::drop_in_place<dump::TaskDump>(v116);
          if ( v21 == 0x8000000000000000LL )
          {
            v97 = v105;
            if ( !v22 )
            {
              *(_OWORD *)src = v105;
              file_store::FileStore::get_update(v116, &v73, src);
              v23 = DWORD2(v116[0]);
              if ( *(_QWORD *)&v116[0] != 4LL )
              {
                *(_DWORD *)&src[44] = HIDWORD(v116[2]);
                *(_OWORD *)&src[28] = *(_OWORD *)((char *)&v116[1] + 12);
                *(_OWORD *)&src[12] = *(_OWORD *)((char *)v116 + 12);
                *(_QWORD *)src = *(_QWORD *)&v116[0];
                *(_DWORD *)&src[8] = DWORD2(v116[0]);
                v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
                goto LABEL_85;
              }
              if ( (unsigned __int8)core::tuple::<impl core::cmp::PartialOrd for (V,U,T)>::lt(v69.m128_u32[0], v54) )
              {
                *(_QWORD *)src = &off_526B88;
                *(_QWORD *)&src[8] = 1LL;
                *(_QWORD *)&src[16] = 8LL;
                *(_OWORD *)&src[24] = 0LL;
                std::io::stdio::_eprint(src);
                milli::documents::reader::DocumentsBatchReader<R>::from_reader(src);
                anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                  v116,
                  src,
                  &v97);
                v10 = *((_QWORD *)&v116[0] + 1);
                if ( *(_QWORD *)&v116[0] != 3LL )
                {
                  memcpy(v124, &v116[1], sizeof(v124));
                  v123 = v116[0];
                  milli::documents::reader::DocumentsBatchReader<R>::into_cursor_and_fields_index(src);
                  memcpy(v72, src, 0x98uLL);
                  v96 = *(_OWORD *)&src[232];
                  v95 = *(_OWORD *)&src[216];
                  v94 = *(_OWORD *)&src[200];
                  *(_OWORD *)&v93[32] = *(_OWORD *)&src[184];
                  *(_OWORD *)&v93[16] = *(_OWORD *)&src[168];
                  *(_OWORD *)v93 = *(_OWORD *)&src[152];
                  while ( 1 )
                  {
                    milli::documents::reader::DocumentsBatchCursor<R>::next_document(src, v72);
                    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                      v116,
                      src,
                      &v97);
                    v10 = *((_QWORD *)&v116[0] + 1);
                    if ( (v116[0] & 1) != 0 )
                      break;
                    if ( !*((_QWORD *)&v116[0] + 1) )
                    {
                      core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(v93);
                      core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(v72);
                      goto LABEL_70;
                    }
                    milli::documents::obkv_to_object(v116, *((_QWORD *)&v116[0] + 1), *(_QWORD *)&v116[1], v93);
                    v61 = *(_OWORD *)((char *)v116 + 8);
                    v62 = *(_OWORD *)((char *)&v116[1] + 8);
                    v63 = *(_OWORD *)((char *)&v116[2] + 8);
                    v64 = *(_OWORD *)((char *)&v116[3] + 8);
                    v65 = *((_QWORD *)&v116[4] + 1);
                    if ( *(_QWORD *)&v116[0] != 93LL )
                    {
                      memcpy(&src[80], &v116[5], 0xF0uLL);
                      *(_OWORD *)&src[8] = v61;
                      *(_OWORD *)&src[24] = v62;
                      *(_OWORD *)&src[40] = v63;
                      *(_OWORD *)&src[56] = v64;
                      *(_QWORD *)&src[72] = v65;
                      *(_QWORD *)src = *(_QWORD *)&v116[0];
                      v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
                      break;
                    }
                    v98 = v61;
                    v99 = v62;
                    v100 = v63;
                    v101 = v64;
                    v102 = v65;
                    dump::writer::UpdateFile::push_document(v83, v66, &v98);
                    if ( *(_DWORD *)v83 != 13 )
                    {
                      *(_OWORD *)&src[16] = *(_OWORD *)&v83[16];
                      *(_OWORD *)&src[4] = *(_OWORD *)&v83[4];
                      *(_DWORD *)src = *(_DWORD *)v83;
                      v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
                      core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v98);
                      break;
                    }
                    core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v98);
                  }
                  core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(v93);
                  core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(v72);
                }
LABEL_85:
                core::ptr::drop_in_place<dump::writer::UpdateFile>(v66);
LABEL_86:
                core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v67);
                goto LABEL_87;
              }
              *(_QWORD *)src = &off_526B98;
              *(_QWORD *)&src[8] = 1LL;
              *(_QWORD *)&src[16] = 8LL;
              *(_OWORD *)&src[24] = 0LL;
              std::io::stdio::_eprint(src);
              *((_QWORD *)&v116[1] + 1) = 0x8000000000000000LL;
              v116[3] = 1uLL;
              DWORD2(v116[4]) = v23;
              LOBYTE(v116[5]) = 0;
              *(_QWORD *)&v116[0] = 0LL;
              *((_QWORD *)&v116[0] + 1) = 1LL;
              *(_QWORD *)&v116[1] = 0LL;
              WORD4(v116[5]) = 0x8000;
              serde_json::de::Deserializer<R>::into_iter(src, v116);
              while ( 1 )
              {
                <serde_json::de::StreamDeserializer<R,T> as core::iter::traits::iterator::Iterator>::next(v122, src);
                if ( v122[0] == v52 )
                  break;
                anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                  v116,
                  v122,
                  &v97);
                v10 = *((_QWORD *)&v116[0] + 1);
                if ( *(_QWORD *)&v116[0] == 0x8000000000000000LL )
                  goto LABEL_81;
                *(_QWORD *)&v72[4] = *(_QWORD *)&v116[4];
                v72[3] = v116[3];
                v72[2] = v116[2];
                v72[1] = v116[1];
                v72[0] = v116[0];
                dump::writer::UpdateFile::push_document(v93, v66, v72);
                if ( *(_DWORD *)v93 != 13 )
                {
                  v116[1] = *(_OWORD *)&v93[16];
                  *(_OWORD *)((char *)v116 + 4) = *(_OWORD *)&v93[4];
                  LODWORD(v116[0]) = *(_DWORD *)v93;
                  v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v116);
                  core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(v72);
LABEL_81:
                  core::ptr::drop_in_place<serde_json::de::StreamDeserializer<serde_json::read::IoRead<std::fs::File>,serde_json::map::Map<alloc::string::String,serde_json::value::Value>>>(src);
                  goto LABEL_85;
                }
                core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(v72);
              }
              core::ptr::drop_in_place<serde_json::de::StreamDeserializer<serde_json::read::IoRead<std::fs::File>,serde_json::map::Map<alloc::string::String,serde_json::value::Value>>>(src);
LABEL_70:
              *(_QWORD *)&src[48] = *(_QWORD *)&v66[48];
              *(_OWORD *)&src[32] = *(_OWORD *)&v66[32];
              *(_OWORD *)&src[16] = *(_OWORD *)&v66[16];
              *(_OWORD *)src = *(_OWORD *)v66;
              dump::writer::UpdateFile::flush(v116, src);
              if ( LODWORD(v116[0]) == 13 )
              {
                ++v47;
                ++v45;
                continue;
              }
              *(_OWORD *)&src[16] = v116[1];
              *(_OWORD *)&src[4] = *(_OWORD *)((char *)v116 + 4);
              *(_DWORD *)src = v116[0];
              v24 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
LABEL_74:
              v10 = v24;
              goto LABEL_86;
            }
          }
          ++v45;
          core::ptr::drop_in_place<dump::writer::UpdateFile>(v66);
        }
      }
      core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v67);
      *(_QWORD *)&dest[3] = *(_QWORD *)&v114[48];
      dest[2] = *(_OWORD *)&v114[32];
      dest[1] = *(_OWORD *)&v114[16];
      dest[0] = *(_OWORD *)v114;
      dump::writer::TaskWriter::flush(src, dest);
      if ( *(_DWORD *)src != 13 )
      {
LABEL_78:
        dest[1] = *(_OWORD *)&src[16];
        *(_OWORD *)((char *)dest + 4) = *(_OWORD *)&src[4];
        LODWORD(dest[0]) = *(_DWORD *)src;
        v20 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
        goto LABEL_41;
      }
      *(_QWORD *)src = &v45;
      *(_QWORD *)&src[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&src[16] = &v47;
      *(_QWORD *)&src[24] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&dest[0] = &off_526BA8;
      *((_QWORD *)&dest[0] + 1) = 3LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = src;
      *((_QWORD *)&dest[1] + 1) = 2LL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)&dest[0] = &off_526BD8;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      dest[1] = 8uLL;
      std::io::stdio::_eprint(dest);
      dump::writer::DumpWriter::create_batches_queue(dest, &v50);
      *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
      *(_OWORD *)&src[16] = *(_OWORD *)((char *)&dest[1] + 8);
      if ( LODWORD(dest[0]) == 1 )
        goto LABEL_40;
      v68 = *(_OWORD *)&src[16];
      v67 = *(_OWORD *)src;
      v48 = 0;
      heed::databases::database::Database<KC,DC,C,CDUP>::iter(src, v39, v56, &v57);
      if ( *(_DWORD *)src != 5 )
      {
        DWORD1(dest[1]) = *(_DWORD *)&src[20];
        *(_DWORD *)((char *)&dest[1] + 1) = *(_DWORD *)&src[17];
        dest[0] = *(_OWORD *)src;
        LOBYTE(dest[1]) = src[16];
        v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_127:
        v13 = 1;
        core::ptr::drop_in_place<dump::writer::KeyWriter>(&v67);
        goto LABEL_38;
      }
      *(_QWORD *)&v72[0] = *(_QWORD *)&src[8];
      BYTE8(v72[0]) = src[16];
      while ( 1 )
      {
        <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(dest, v72);
        if ( *((_QWORD *)&dest[0] + 1) == 2LL )
        {
          *(_QWORD *)&src[16] = *(_QWORD *)&dest[2];
          *(_OWORD *)src = dest[1];
          v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
LABEL_126:
          core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(v72);
          goto LABEL_127;
        }
        if ( DWORD2(dest[0]) == 3 )
          break;
        memcpy(&src[32], (char *)&dest[2] + 8, 0x3C0uLL);
        *(_OWORD *)&src[8] = dest[1];
        *(_QWORD *)&src[24] = *(_QWORD *)&dest[2];
        *(_QWORD *)src = *((_QWORD *)&dest[0] + 1);
        dump::writer::BatchWriter::push_batch(v120, &v67, src);
        if ( LODWORD(v120[0]) != 13 )
        {
          v116[1] = v120[1];
          *(_OWORD *)((char *)v116 + 4) = *(_OWORD *)((char *)v120 + 4);
          LODWORD(v116[0]) = v120[0];
          v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v116);
          core::ptr::drop_in_place<meilisearch_types::batches::Batch>(src);
          goto LABEL_126;
        }
        ++v48;
        core::ptr::drop_in_place<meilisearch_types::batches::Batch>(src);
      }
      core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(v72);
      dest[1] = v68;
      dest[0] = v67;
      dump::writer::KeyWriter::flush(src, dest);
      if ( *(_DWORD *)src != 13 )
        goto LABEL_78;
      *(_QWORD *)src = &v48;
      *(_QWORD *)&src[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&dest[0] = &off_526BE8;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = src;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)&dest[0] = &off_526C08;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      dest[1] = 8uLL;
      std::io::stdio::_eprint(dest);
      v49 = 0;
      heed::databases::database::Database<KC,DC,C,CDUP>::iter(src, v103, v55, &v57);
      if ( *(_DWORD *)src != 5 )
      {
        DWORD1(dest[1]) = *(_DWORD *)&src[20];
        *(_DWORD *)((char *)&dest[1] + 1) = *(_DWORD *)&src[17];
        dest[0] = *(_OWORD *)src;
        LOBYTE(dest[1]) = src[16];
        v20 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
        goto LABEL_41;
      }
      v70 = *(_QWORD *)&src[8];
      v71 = src[16];
      while ( 2 )
      {
        <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v105, &v70);
        if ( (_DWORD)v105 != 1 )
        {
          core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v70);
          *(_QWORD *)src = &v49;
          *(_QWORD *)&src[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
          *(_QWORD *)&dest[0] = &off_526C18;
          *((_QWORD *)&dest[0] + 1) = 2LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = src;
          *((_QWORD *)&dest[1] + 1) = 1LL;
          std::io::stdio::_eprint(dest);
          *(_QWORD *)&dest[0] = &off_526C38;
          *((_QWORD *)&dest[0] + 1) = 1LL;
          dest[1] = 8uLL;
          std::io::stdio::_eprint(dest);
          time::formatting::formattable::sealed::Sealed::format(dest, v80, v79, (v81 << 8) + (v82 << 16) + 1);
          core::result::Result<T,E>::unwrap(v72, dest);
          v35 = *(_QWORD *)(v53 + 8);
          v36 = *(_QWORD *)(v53 + 16);
          *(_QWORD *)src = v72;
          *(_QWORD *)&src[8] = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&dest[0] = &unk_526D08;
          *((_QWORD *)&dest[0] + 1) = 2LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = src;
          *((_QWORD *)&dest[1] + 1) = 1LL;
          core::option::Option<T>::map_or_else(v121, 0LL, v37, dest);
          std::path::Path::join(v120, v35, v36, v121);
          std::fs::File::create(dest, v120);
          if ( LODWORD(dest[0]) == 1 )
          {
            v13 = 1;
            v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&dest[0] + 1));
          }
          else
          {
            *(_QWORD *)&v116[1] = v51;
            v116[0] = v50;
            std::io::buffered::bufwriter::BufWriter<W>::with_capacity(dest, DWORD1(dest[0]));
            dump::writer::DumpWriter::persist_to(src, v116, dest);
            if ( *(_DWORD *)src == 13 )
            {
              *(_OWORD *)src = *(_OWORD *)((char *)v120 + 8);
              *(_QWORD *)&v116[0] = src;
              *((_QWORD *)&v116[0] + 1) = <std::path::Display as core::fmt::Debug>::fmt;
              *(_QWORD *)&dest[0] = &off_526D28;
              *((_QWORD *)&dest[0] + 1) = 2LL;
              *(_QWORD *)&dest[2] = 0LL;
              *(_QWORD *)&dest[1] = v116;
              *((_QWORD *)&dest[1] + 1) = 1LL;
              std::io::stdio::_eprint(dest);
              core::ptr::drop_in_place<std::path::PathBuf>(v120);
              core::ptr::drop_in_place<alloc::string::String>(v72);
              core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v57);
              core::ptr::drop_in_place<meilisearch_auth::AuthController>(v117);
              core::ptr::drop_in_place<std::path::PathBuf>(v87);
              core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v44);
              core::ptr::drop_in_place<std::path::PathBuf>(v84);
              core::ptr::drop_in_place<file_store::FileStore>(&v73);
              v10 = 0LL;
              goto LABEL_33;
            }
            dest[1] = *(_OWORD *)&src[16];
            *(_OWORD *)((char *)dest + 4) = *(_OWORD *)&src[4];
            LODWORD(dest[0]) = *(_DWORD *)src;
            v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
            v13 = 0;
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v120);
          core::ptr::drop_in_place<alloc::string::String>(v72);
          goto LABEL_38;
        }
        v25 = *((_QWORD *)&v105 + 1);
        v42 = v106;
        if ( !*((_QWORD *)&v105 + 1) )
        {
          *(_OWORD *)((char *)dest + 8) = v107;
          *(_QWORD *)&dest[0] = v106;
          v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
          goto LABEL_143;
        }
        v119 = v107;
        std::path::Path::join(src, v6, v7, aIndexes, 7LL);
        v26 = *(_QWORD *)&src[8];
        v27 = *(_QWORD *)&src[16];
        <T as alloc::string::SpecToString>::spec_to_string(dest, &v119);
        std::path::Path::join(v90, v26, v27, dest);
        core::ptr::drop_in_place<std::path::PathBuf>(src);
        *(_QWORD *)&v120[0] = 0LL;
        LODWORD(v120[1]) = 0;
        DWORD2(v120[1]) = 0;
        LODWORD(v120[2]) = 0;
        milli::index::Index::new(dest);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(src, dest, v91, v92);
        v10 = *(_QWORD *)&src[8];
        if ( !*(_QWORD *)src )
        {
LABEL_142:
          core::ptr::drop_in_place<std::path::PathBuf>(v90);
LABEL_143:
          core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v70);
          v13 = 1;
          goto LABEL_38;
        }
        memcpy(&v116[1], &src[16], 0x1C0uLL);
        v116[0] = *(_OWORD *)src;
        milli::index::Index::read_txn(dest, v116);
        *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
        *(_QWORD *)&src[16] = *((_QWORD *)&dest[1] + 1);
        if ( LODWORD(dest[0]) == 1 )
        {
          *(_QWORD *)&dest[1] = *(_QWORD *)&src[16];
          dest[0] = *(_OWORD *)src;
          v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
          goto LABEL_141;
        }
        v60 = *(_QWORD *)&src[16];
        v59 = *(_OWORD *)src;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, v25, v42);
        *(_QWORD *)&v72[1] = *(_QWORD *)&dest[1];
        v72[0] = dest[0];
        milli::index::Index::primary_key(dest, v116, &v59);
        if ( LODWORD(dest[0]) == 5 )
        {
          if ( *((_QWORD *)&dest[0] + 1) )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
              dest,
              *((_QWORD *)&dest[0] + 1),
              *(_QWORD *)&dest[1]);
            *(_QWORD *)&v120[1] = *(_QWORD *)&dest[1];
            v120[0] = dest[0];
          }
          else
          {
            *(_QWORD *)&v120[0] = 0x8000000000000000LL;
          }
          milli::index::Index::created_at(src, v116, &v59);
          v115 = *(_OWORD *)&src[8];
          if ( *(_QWORD *)src == 93LL )
          {
            milli::index::Index::updated_at(src, v116, &v59);
            v61 = *(_OWORD *)&src[8];
            if ( *(_QWORD *)src == 93LL )
            {
              v95 = v61;
              *(_OWORD *)v93 = v72[0];
              *(_QWORD *)&v93[16] = *(_QWORD *)&v72[1];
              *(_QWORD *)&v93[40] = *(_QWORD *)&v120[1];
              *(_OWORD *)&v93[24] = v120[0];
              v94 = v115;
              dump::writer::DumpWriter::create_index(dest, &v50, v25, v42, v93);
              *(_OWORD *)src = *(_OWORD *)((char *)dest + 8);
              *(_OWORD *)&src[16] = *(_OWORD *)((char *)&dest[1] + 8);
              if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
              {
                dest[1] = *(_OWORD *)&src[16];
                dest[0] = *(_OWORD *)src;
                v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                goto LABEL_139;
              }
              *(_OWORD *)&v83[24] = *(_OWORD *)&src[16];
              *(_OWORD *)&v83[8] = *(_OWORD *)src;
              *(_QWORD *)v83 = *(_QWORD *)&dest[0];
              milli::index::Index::fields_ids_map(dest, v116, &v59);
              if ( LOWORD(dest[3]) == 2 )
              {
                *(_QWORD *)&src[16] = *(_QWORD *)&dest[1];
                *(_OWORD *)src = dest[0];
                v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                goto LABEL_138;
              }
              *(_OWORD *)&src[32] = dest[2];
              *(_OWORD *)&src[16] = dest[1];
              *(_OWORD *)src = dest[0];
              *(_WORD *)&v66[54] = WORD3(dest[3]);
              *(_DWORD *)&v66[50] = *(_DWORD *)((char *)&dest[3] + 2);
              *(_OWORD *)v66 = dest[0];
              *(_OWORD *)&v66[16] = dest[1];
              *(_OWORD *)&v66[32] = dest[2];
              *(_WORD *)&v66[48] = dest[3];
              v28 = *((_QWORD *)&dest[1] + 1);
              v29 = 0LL;
              v30 = *((_QWORD *)&dest[1] + 1);
              if ( *((_QWORD *)&dest[1] + 1) )
                v30 = *(_QWORD *)&v66[40];
              LOBYTE(v29) = *((_QWORD *)&dest[1] + 1) != 0LL;
              dest[0] = v29;
              *(_QWORD *)&dest[1] = *((_QWORD *)&dest[1] + 1);
              *((_QWORD *)&dest[1] + 1) = *(_QWORD *)&v66[32];
              dest[2] = v29;
              *(_QWORD *)&dest[3] = v28;
              *((_QWORD *)&dest[3] + 1) = *(_QWORD *)&v66[32];
              *(_QWORD *)&dest[4] = v30;
              core::iter::traits::iterator::Iterator::collect(&v75, dest);
              milli::index::Index::all_documents(src, v116, &v59);
              memcpy(v72, &src[8], 0x90uLL);
              if ( *(_QWORD *)src == 93LL )
              {
                memcpy(v120, v72, 0x90uLL);
                v43 = v76;
                v52 = v77;
                while ( 1 )
                {
                  if ( (<roaring::bitmap::iter::IntoIter as core::iter::traits::iterator::Iterator>::next(v120) & 1) == 0 )
                    goto LABEL_122;
                  milli::index::Index::iter_documents::{{closure}}(
                    dest,
                    *(_QWORD *)&v120[8],
                    *((_QWORD *)&v120[8] + 1),
                    v31);
                  v32 = *(_QWORD *)&dest[1];
                  v69 = (__m128)*((unsigned __int64 *)&dest[0] + 1);
                  v33 = *((_QWORD *)&dest[1] + 1);
                  memcpy(v125, &dest[2], sizeof(v125));
                  if ( *(_QWORD *)&dest[0] != 93LL )
                    break;
                  milli::obkv_to_json(src, v43, v52, v66, *(_QWORD *)&dest[1], *((_QWORD *)&dest[1] + 1));
                  v61 = *(_OWORD *)&src[8];
                  v62 = *(_OWORD *)&src[24];
                  v63 = *(_OWORD *)&src[40];
                  v64 = *(_OWORD *)&src[56];
                  v65 = *(_QWORD *)&src[72];
                  if ( *(_QWORD *)src != 93LL )
                  {
                    memcpy(&dest[5], &src[80], 0xF0uLL);
                    *(_OWORD *)((char *)dest + 8) = v61;
                    *(_OWORD *)((char *)&dest[1] + 8) = v62;
                    *(_OWORD *)((char *)&dest[2] + 8) = v63;
                    *(_OWORD *)((char *)&dest[3] + 8) = v64;
                    *((_QWORD *)&dest[4] + 1) = v65;
                    *(_QWORD *)&dest[0] = *(_QWORD *)src;
                    v34 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                    goto LABEL_133;
                  }
                  v98 = v61;
                  v99 = v62;
                  v100 = v63;
                  v101 = v64;
                  v102 = v65;
                  dump::writer::IndexWriter::push_document(src, v83, &v98);
                  if ( *(_DWORD *)src != 13 )
                  {
                    dest[1] = *(_OWORD *)&src[16];
                    *(_OWORD *)((char *)dest + 4) = *(_OWORD *)&src[4];
                    LODWORD(dest[0]) = *(_DWORD *)src;
                    v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                    core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v98);
                    goto LABEL_135;
                  }
                  core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v98);
                }
                if ( *(_QWORD *)&dest[0] != 94LL )
                {
                  memcpy(&dest[2], v125, 0x120uLL);
                  _mm_storel_ps((double *)dest + 1, v69);
                  *(_QWORD *)&dest[1] = v32;
                  *((_QWORD *)&dest[1] + 1) = v33;
                  v34 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
LABEL_133:
                  v10 = v34;
LABEL_135:
                  core::ptr::drop_in_place<core::iter::adapters::map::Map<roaring::bitmap::iter::IntoIter,milli::index::Index::iter_documents<roaring::bitmap::RoaringBitmap>::{{closure}}>>(v120);
                  goto LABEL_136;
                }
LABEL_122:
                core::ptr::drop_in_place<core::iter::adapters::map::Map<roaring::bitmap::iter::IntoIter,milli::index::Index::iter_documents<roaring::bitmap::RoaringBitmap>::{{closure}}>>(v120);
                meilisearch_types::settings::settings(dest);
                memcpy(v120, (char *)dest + 8, 0x140uLL);
                if ( *(_QWORD *)&dest[0] != 3LL )
                {
                  memcpy(&src[328], (char *)&dest[20] + 8, 0x198uLL);
                  memcpy(&src[8], v120, 0x140uLL);
                  *(_QWORD *)src = *(_QWORD *)&dest[0];
                  *(_QWORD *)&dest[2] = *(_QWORD *)&v83[32];
                  dest[1] = *(_OWORD *)&v83[16];
                  dest[0] = *(_OWORD *)v83;
                  dump::writer::IndexWriter::settings(v120, dest, src);
                  if ( LODWORD(v120[0]) == 13 )
                  {
                    ++v49;
                    core::ptr::drop_in_place<meilisearch_types::settings::Settings<meilisearch_types::settings::Checked>>(src);
                    core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v75, v43);
                    core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(v66);
                    core::ptr::drop_in_place<dump::IndexMetadata>(v93);
                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v59);
                    core::ptr::drop_in_place<milli::index::Index>(v116);
                    core::ptr::drop_in_place<std::path::PathBuf>(v90);
                    continue;
                  }
                  dest[1] = v120[1];
                  *(_OWORD *)((char *)dest + 4) = *(_OWORD *)((char *)v120 + 4);
                  LODWORD(dest[0]) = v120[0];
                  v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                  v40 = 0;
                  core::ptr::drop_in_place<meilisearch_types::settings::Settings<meilisearch_types::settings::Checked>>(src);
LABEL_137:
                  core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v75, v43);
                  core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(v66);
                  if ( !v40 )
                  {
LABEL_139:
                    core::ptr::drop_in_place<dump::IndexMetadata>(v93);
LABEL_140:
                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v59);
LABEL_141:
                    core::ptr::drop_in_place<milli::index::Index>(v116);
                    goto LABEL_142;
                  }
LABEL_138:
                  core::ptr::drop_in_place<dump::writer::IndexWriter>(v83);
                  goto LABEL_139;
                }
                memcpy(dest, v120, 0x140uLL);
                v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
              }
              else
              {
                memcpy((char *)&dest[9] + 8, &src[152], 0xA8uLL);
                memcpy((char *)dest + 8, v72, 0x90uLL);
                *(_QWORD *)&dest[0] = *(_QWORD *)src;
                v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
                v43 = v76;
              }
LABEL_136:
              v40 = 1;
              goto LABEL_137;
            }
            memcpy((char *)&dest[1] + 8, &src[24], 0x128uLL);
            *(_OWORD *)((char *)dest + 8) = v61;
            *(_QWORD *)&dest[0] = *(_QWORD *)src;
            v38 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
          }
          else
          {
            memcpy((char *)&dest[1] + 8, &src[24], 0x128uLL);
            *(_OWORD *)((char *)dest + 8) = v115;
            *(_QWORD *)&dest[0] = *(_QWORD *)src;
            v38 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
          }
          v10 = v38;
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v120);
        }
        else
        {
          v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
        }
        break;
      }
      core::ptr::drop_in_place<alloc::string::String>(v72);
      goto LABEL_140;
    }
  }
LABEL_30:
  core::ptr::drop_in_place<std::path::PathBuf>(v87);
  core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v44);
LABEL_31:
  core::ptr::drop_in_place<std::path::PathBuf>(v84);
  core::ptr::drop_in_place<file_store::FileStore>(&v73);
  if ( v13 )
    goto LABEL_32;
LABEL_33:
  core::ptr::drop_in_place<std::path::PathBuf>(v112);
  core::ptr::drop_in_place<std::path::PathBuf>(v53);
  core::ptr::drop_in_place<std::path::PathBuf>(a1);
  return v10;
}