__int64 meilitool::main()
{
  __int64 v0; // rbx
  __int128 v3; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v4; // [rsp+10h] [rbp-E8h]
  __int128 v5; // [rsp+20h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-C8h]
  _BYTE v7[4]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v8; // [rsp+44h] [rbp-B4h]
  __int64 v9; // [rsp+48h] [rbp-B0h]
  __int128 v10; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-98h]
  _BYTE v12[12]; // [rsp+74h] [rbp-84h] BYREF
  __int128 v13; // [rsp+80h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-68h]
  __int128 v15; // [rsp+98h] [rbp-60h]
  __int128 v16; // [rsp+A8h] [rbp-50h]
  __int128 v17; // [rsp+B8h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-30h]

  clap_builder::derive::Parser::parse(&v13);
  v11 = v14;
  v10 = v13;
  v6 = v18;
  v5 = v17;
  v4 = v16;
  v3 = v15;
  meilisearch_types::versioning::get_version(&v13, *((_QWORD *)&v13 + 1));
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v7, &v13, aWhileCheckingT, 31LL);
  if ( (v7[0] & 1) != 0 )
  {
    v0 = v9;
    switch ( (char)v3 )
    {
      case 0:
        break;
      case 1:
        core::ptr::drop_in_place<std::path::PathBuf>((char *)&v3 + 8);
        break;
      case 2:
      case 3:
      case 4:
        goto LABEL_3;
      case 5:
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>((char *)&v3 + 8);
        core::ptr::drop_in_place<alloc::vec::Vec<meilitool::IndexPart>>(v5, *((_QWORD *)&v5 + 1));
        break;
    }
  }
  else
  {
    *(_DWORD *)v12 = v8;
    *(_QWORD *)&v12[4] = v9;
    switch ( (char)v3 )
    {
      case 0:
        return meilitool::clear_task_queue(&v10);
      case 1:
        return meilitool::export_a_dump(&v10, (char *)&v3 + 8, BYTE1(v3), v12);
      case 2:
        return meilitool::export_documents(&v10, (char *)&v3 + 8, BYTE1(v3), v5, *((_QWORD *)&v5 + 1));
      case 3:
        meilisearch_types::versioning::parse_version(&v13, v4, *((_QWORD *)&v4 + 1));
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
          v7,
          &v13,
          aWhileParsingTa,
          97LL);
        if ( (v7[0] & 1) == 0 )
        {
          v14 = v11;
          v13 = v10;
          *(_QWORD *)&v15 = *(_QWORD *)v12;
          *((_QWORD *)&v15 + 1) = __PAIR64__(v8, *(unsigned int *)&v12[8]);
          *(_QWORD *)&v16 = v9;
          v0 = meilitool::upgrade::OfflineUpgrade::upgrade((__int64)&v13);
          core::ptr::drop_in_place<alloc::string::String>((char *)&v3 + 8);
          return v0;
        }
        v0 = v9;
LABEL_3:
        core::ptr::drop_in_place<alloc::string::String>((char *)&v3 + 8);
        break;
      case 4:
        v0 = meilitool::compact_index(&v10, v4, *((_QWORD *)&v4 + 1));
        core::ptr::drop_in_place<alloc::string::String>((char *)&v3 + 8);
        return v0;
      case 5:
        v0 = meilitool::hair_dryer(&v10, v4, *((_QWORD *)&v4 + 1), v6);
        core::ptr::drop_in_place<alloc::vec::Vec<meilitool::IndexPart>>(v5, *((_QWORD *)&v5 + 1));
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>((char *)&v3 + 8);
        return v0;
    }
  }
  core::ptr::drop_in_place<std::path::PathBuf>(&v10);
  return v0;
}