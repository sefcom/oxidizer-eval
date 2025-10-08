__int64 __fastcall meilitool::upgrade::v1_12::convert_update_files(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  char v16; // [rsp+0h] [rbp-568h]
  __int16 v17; // [rsp+6h] [rbp-562h] BYREF
  _BYTE v18[7]; // [rsp+8h] [rbp-560h] BYREF
  __int64 v19; // [rsp+Fh] [rbp-559h]
  char v20; // [rsp+17h] [rbp-551h]
  _BYTE v21[24]; // [rsp+18h] [rbp-550h] BYREF
  __int64 v22; // [rsp+30h] [rbp-538h] BYREF
  char v23; // [rsp+38h] [rbp-530h]
  int v24; // [rsp+40h] [rbp-528h] BYREF
  __int16 v25; // [rsp+44h] [rbp-524h]
  char v26; // [rsp+46h] [rbp-522h]
  __int64 v27; // [rsp+47h] [rbp-521h]
  char v28; // [rsp+4Fh] [rbp-519h]
  __int128 v29; // [rsp+58h] [rbp-510h] BYREF
  __int64 v30; // [rsp+68h] [rbp-500h]
  __int128 v31; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-4E8h]
  _BYTE v33[48]; // [rsp+90h] [rbp-4D8h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-4A8h]
  __int64 v35; // [rsp+D0h] [rbp-498h]
  __int64 v36; // [rsp+D8h] [rbp-490h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-488h]
  __int128 v38; // [rsp+E8h] [rbp-480h]
  _BYTE v39[24]; // [rsp+F8h] [rbp-470h] BYREF
  __int64 v40; // [rsp+110h] [rbp-458h] BYREF
  __int64 v41; // [rsp+118h] [rbp-450h]
  _OWORD v42[16]; // [rsp+120h] [rbp-448h] BYREF
  __int128 v43; // [rsp+220h] [rbp-348h] BYREF
  __int128 v44; // [rsp+230h] [rbp-338h]
  __int128 v45; // [rsp+240h] [rbp-328h]
  __int128 v46; // [rsp+250h] [rbp-318h]
  _QWORD v47[2]; // [rsp+260h] [rbp-308h] BYREF
  char v48; // [rsp+270h] [rbp-2F8h]
  _BYTE v49[15]; // [rsp+271h] [rbp-2F7h]
  __int128 v50; // [rsp+280h] [rbp-2E8h] BYREF
  __int128 v51; // [rsp+290h] [rbp-2D8h]
  __int128 v52; // [rsp+2A0h] [rbp-2C8h]
  __int128 v53; // [rsp+2B0h] [rbp-2B8h]
  __int128 v54; // [rsp+2C0h] [rbp-2A8h]
  __int128 v55; // [rsp+2D0h] [rbp-298h]
  _QWORD v56[2]; // [rsp+2E0h] [rbp-288h] BYREF
  char v57; // [rsp+2F0h] [rbp-278h]
  _BYTE v58[248]; // [rsp+300h] [rbp-268h] BYREF
  __int64 v59; // [rsp+3F8h] [rbp-170h] BYREF
  __int128 v60; // [rsp+400h] [rbp-168h]
  __int128 v61; // [rsp+410h] [rbp-158h]
  __int64 v62; // [rsp+420h] [rbp-148h]
  _BYTE v63[24]; // [rsp+428h] [rbp-140h] BYREF
  __int128 v64; // [rsp+440h] [rbp-128h]
  _BYTE dest[232]; // [rsp+450h] [rbp-118h] BYREF

  std::path::Path::join(v39, a1, a2, aUpdateFiles, 12LL);
  file_store::FileStore::new(v42, v39);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v58, v42, v39);
  v2 = *(_QWORD *)&v58[8];
  if ( !__OFSUB__(-*(_QWORD *)v58, 1LL) )
  {
    v29 = *(_OWORD *)v58;
    v30 = *(_QWORD *)&v58[16];
    file_store::FileStore::all_uuids(v42, &v29);
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v58, v42);
    v2 = *(_QWORD *)v58;
    if ( v58[8] != 2 )
    {
      v22 = *(_QWORD *)v58;
      v23 = v58[8];
      while ( 1 )
      {
        core::iter::traits::iterator::Iterator::try_fold(v42, &v22);
        if ( *(_QWORD *)&v42[0] == 5LL )
          break;
        v62 = *((_QWORD *)&v42[2] + 1);
        v61 = *(_OWORD *)((char *)&v42[1] + 8);
        v60 = *(_OWORD *)((char *)v42 + 8);
        v59 = *(_QWORD *)&v42[0];
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v42, &v59);
        if ( LOBYTE(v42[0]) == 1 )
        {
          v2 = *((_QWORD *)&v42[0] + 1);
          goto LABEL_34;
        }
        *(_DWORD *)&v18[3] = DWORD1(v42[0]);
        *(_DWORD *)v18 = *(_DWORD *)((char *)v42 + 1);
        v19 = *((_QWORD *)&v42[0] + 1);
        v20 = v42[1];
        v24 = *(_DWORD *)((char *)v42 + 1);
        v25 = DWORD1(v42[0]) >> 8;
        v26 = BYTE7(v42[0]);
        v27 = *((_QWORD *)&v42[0] + 1);
        v28 = v42[1];
        file_store::FileStore::get_update_path(v21, &v29, v18);
        file_store::FileStore::get_update(v42, &v29, v18);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v58, v42, &v24);
        if ( (v58[0] & 1) != 0 )
        {
          v2 = *(_QWORD *)&v58[8];
          goto LABEL_33;
        }
        v3 = *(_DWORD *)&v58[4];
        *((_QWORD *)&v42[2] + 1) = 6LL;
        *((_QWORD *)&v42[0] + 1) = aTmp;
        *(_QWORD *)&v42[1] = 4LL;
        *((_QWORD *)&v42[1] + 1) = 1LL;
        *(_QWORD *)&v42[2] = 0LL;
        LOWORD(v42[3]) = 0;
        LODWORD(v42[0]) = 0;
        tempfile::Builder::tempfile_in(v56, v42, v39);
        if ( v57 == 2 )
        {
          *(_QWORD *)&v58[8] = v56[0];
          *(_QWORD *)v58 = 0x8000000000000000LL;
        }
        else
        {
          std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v42, v56);
          *(_OWORD *)&v58[48] = v42[3];
          *(_OWORD *)&v58[32] = v42[2];
          *(_OWORD *)&v58[16] = v42[1];
          *(_OWORD *)v58 = v42[0];
        }
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v50, v58, v21);
        v2 = *((_QWORD *)&v50 + 1);
        if ( (_QWORD)v50 == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<std::fs::File>(v3);
          goto LABEL_33;
        }
        v46 = v53;
        v45 = v52;
        v44 = v51;
        v43 = v50;
        milli::documents::reader::DocumentsBatchReader<R>::from_reader(v42);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v58, v42, v21);
        v2 = *(_QWORD *)&v58[8];
        if ( *(_QWORD *)v58 == 3LL )
          goto LABEL_32;
        memcpy(dest, &v58[16], sizeof(dest));
        v64 = *(_OWORD *)v58;
        milli::documents::reader::DocumentsBatchReader<R>::into_cursor_and_fields_index(v42);
        memcpy(v58, v42, 0x98uLL);
        v55 = *(_OWORD *)((char *)&v42[14] + 8);
        v54 = *(_OWORD *)((char *)&v42[13] + 8);
        v53 = *(_OWORD *)((char *)&v42[12] + 8);
        v52 = *(_OWORD *)((char *)&v42[11] + 8);
        v51 = *(_OWORD *)((char *)&v42[10] + 8);
        v50 = *(_OWORD *)((char *)&v42[9] + 8);
        while ( 2 )
        {
          milli::documents::reader::DocumentsBatchCursor<R>::next_document(v42, v58);
          anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v33, v42, v21);
          v2 = *(_QWORD *)&v33[8];
          v16 = 1;
          if ( (v33[0] & 1) != 0 )
            goto LABEL_31;
          if ( *(_QWORD *)&v33[8] )
          {
            v4 = *(_QWORD *)&v33[16];
            v5 = std::thread::local::LocalKey<T>::with();
            indexmap::map::IndexMap<K,V,S>::with_capacity_and_hasher(v42, v5);
            v36 = v2;
            v37 = v4;
            *(_QWORD *)&v38 = 0LL;
            while ( 1 )
            {
              core::iter::adapters::fuse::and_then_or_clear(&v31, &v36);
              v6 = *((_QWORD *)&v31 + 1);
              if ( !*((_QWORD *)&v31 + 1) )
                break;
              v17 = v31;
              v7 = v32;
              v8 = milli::documents::DocumentsBatchIndex::name(&v50);
              anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
                v33,
                v8,
                v9,
                &v17,
                v21);
              v2 = *(_QWORD *)&v33[8];
              v10 = *(_QWORD *)v33;
              if ( !*(_QWORD *)v33 )
                goto LABEL_30;
              *(_QWORD *)v33 = v6;
              *(_QWORD *)&v33[8] = v7;
              *(_OWORD *)&v33[16] = 0LL;
              serde_json::de::from_trait(&v40, v33);
              if ( !v40 )
              {
                v14 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v41);
                goto LABEL_29;
              }
              indexmap::map::IndexMap<K,V,S>::insert_full(v33, v42, v10, v2, v40, v41);
            }
            v11 = serde_json::ser::to_writer(&v43, *((_QWORD *)&v42[0] + 1), *(_QWORD *)&v42[1]);
            if ( !v11 )
            {
              core::ptr::drop_in_place<indexmap::map::IndexMap<&str,&serde_json::raw::RawValue>>(v42);
              continue;
            }
            v14 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v11);
LABEL_29:
            v2 = v14;
LABEL_30:
            core::ptr::drop_in_place<indexmap::map::IndexMap<&str,&serde_json::raw::RawValue>>(v42);
            goto LABEL_31;
          }
          break;
        }
        v42[3] = v46;
        v42[2] = v45;
        v42[1] = v44;
        v42[0] = v43;
        std::io::buffered::bufwriter::BufWriter<W>::into_inner(v33, v42);
        if ( *(_QWORD *)v33 == 0x8000000000000000LL )
        {
          v32 = *(_OWORD *)&v33[24];
          v31 = *(_OWORD *)&v33[8];
        }
        else
        {
          v42[3] = v34;
          v42[2] = *(_OWORD *)&v33[32];
          v42[1] = *(_OWORD *)&v33[16];
          v42[0] = *(_OWORD *)v33;
          v13 = v35;
          *(_QWORD *)&v42[4] = v35;
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<tempfile::file::NamedTempFile>>(v42);
          *(_QWORD *)&v31 = v13;
          LOBYTE(v32) = 2;
        }
        *(_QWORD *)v33 = v21;
        *(_QWORD *)&v33[8] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        *(_QWORD *)&v42[0] = &off_526368;
        *((_QWORD *)&v42[0] + 1) = 1LL;
        *(_QWORD *)&v42[2] = 0LL;
        *(_QWORD *)&v42[1] = v33;
        *((_QWORD *)&v42[1] + 1) = 1LL;
        core::option::Option<T>::map_or_else(v63, 0LL, v12, v42);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v36, &v31, v63);
        v2 = v36;
        if ( (_BYTE)v38 == 2 )
        {
          v16 = 0;
LABEL_31:
          core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&v50);
          core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(v58);
          if ( v16 )
LABEL_32:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<tempfile::file::NamedTempFile>>(&v43);
LABEL_33:
          core::ptr::drop_in_place<std::path::PathBuf>(v21);
LABEL_34:
          core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,file_store::FileStore::all_uuids::{{closure}}>>(&v22);
          goto LABEL_35;
        }
        *(_QWORD *)&v49[7] = *((_QWORD *)&v38 + 1);
        *(_QWORD *)v49 = *(_QWORD *)((char *)&v38 + 1);
        v47[0] = v36;
        v47[1] = v37;
        v48 = v38;
        tempfile::file::NamedTempFile<F>::persist(v42, v47, v21);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v33, v42, v21);
        if ( (v33[0] & 1) != 0 )
        {
          v2 = *(_QWORD *)&v33[8];
          v16 = 0;
          goto LABEL_31;
        }
        core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)&v33[4]);
        core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&v50);
        core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(v58);
        core::ptr::drop_in_place<std::path::PathBuf>(v21);
      }
      core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::result::Result<uuid::Uuid,file_store::Error>>>(v42);
      core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,file_store::FileStore::all_uuids::{{closure}}>>(&v22);
      v2 = 0LL;
    }
LABEL_35:
    core::ptr::drop_in_place<file_store::FileStore>(&v29);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v39);
  return v2;
}