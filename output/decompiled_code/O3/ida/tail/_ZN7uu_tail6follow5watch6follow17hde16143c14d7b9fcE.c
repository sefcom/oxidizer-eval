__int64 __fastcall uu_tail::follow::watch::follow(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  int v4; // eax
  char v5; // cl
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // eax
  __int128 v12; // rax
  __int128 v13; // xmm0
  __int64 updated; // r12
  __int64 v15; // rbx
  __int64 v16; // r15
  char v17; // bl
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r15
  __int64 v20; // rax
  char v21; // r14
  __int64 v23; // rax
  char v24; // [rsp+Eh] [rbp-2CAh]
  char v25; // [rsp+Fh] [rbp-2C9h]
  unsigned __int128 v26; // [rsp+10h] [rbp-2C8h] BYREF
  _QWORD *v27; // [rsp+20h] [rbp-2B8h]
  __int64 v28; // [rsp+28h] [rbp-2B0h]
  __int128 v29; // [rsp+30h] [rbp-2A8h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-298h]
  __int64 v31; // [rsp+48h] [rbp-290h]
  __int64 v32; // [rsp+50h] [rbp-288h]
  _BYTE v33[48]; // [rsp+68h] [rbp-270h] BYREF
  _QWORD *v34; // [rsp+98h] [rbp-240h]
  unsigned int v35; // [rsp+A0h] [rbp-238h]
  int v36; // [rsp+A4h] [rbp-234h] BYREF
  char **v37; // [rsp+A8h] [rbp-230h]
  unsigned __int128 v38; // [rsp+B0h] [rbp-228h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-218h]
  __int128 v40; // [rsp+D0h] [rbp-208h]
  _QWORD *v41; // [rsp+E0h] [rbp-1F8h]
  _QWORD v42[2]; // [rsp+168h] [rbp-170h] BYREF
  __int64 v43; // [rsp+178h] [rbp-160h]
  __int64 v44; // [rsp+180h] [rbp-158h]
  unsigned __int128 v45; // [rsp+188h] [rbp-150h] BYREF
  __int64 v46; // [rsp+198h] [rbp-140h]
  __int128 v47; // [rsp+1A0h] [rbp-138h] BYREF
  _QWORD *v48; // [rsp+1B0h] [rbp-128h]
  unsigned __int128 v49; // [rsp+1B8h] [rbp-120h] BYREF
  __int64 v50; // [rsp+1C8h] [rbp-110h]
  _OWORD v51[2]; // [rsp+1D0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+1F0h] [rbp-E8h]
  _BYTE v53[56]; // [rsp+1F8h] [rbp-E0h] BYREF
  int v54; // [rsp+230h] [rbp-A8h]

  v28 = a1;
  v2 = a1 + 56;
  if ( (unsigned __int8)uu_tail::follow::files::FileHandling::no_files_remaining(a1 + 56, a2)
    && !(unsigned __int8)uu_tail::follow::files::FileHandling::only_stdin_remaining(v2) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v33);
    *(_QWORD *)&v39 = *(_QWORD *)&v33[16];
    v38 = *(_OWORD *)v33;
    DWORD2(v39) = 1;
    updated = alloc::boxed::Box<T>::new(&v38);
    goto LABEL_57;
  }
  v3 = v28;
  v4 = *(_DWORD *)(v28 + 136);
  v36 = v4;
  v5 = *(_BYTE *)(a2 + 76);
  v25 = *(_BYTE *)(a2 + 74);
  v44 = *(_QWORD *)(a2 + 48);
  v43 = a2;
  v35 = *(_DWORD *)(a2 + 56);
  v37 = &off_1BC1B8;
  v24 = v5;
  if ( v5 != 2 )
  {
LABEL_4:
    if ( v4 && (unsigned __int8)uu_tail::platform::unix::ProcessChecker::is_dead(&v36) )
    {
      updated = 0LL;
      goto LABEL_57;
    }
  }
LABEL_6:
  if ( (*(_BYTE *)(v3 + 142) & 1) != 0 && *(_BYTE *)(v3 + 140) )
  {
    v6 = *(_QWORD *)(v3 + 40) + 24LL * *(_QWORD *)(v3 + 48);
    *(_QWORD *)&v26 = *(_QWORD *)(v3 + 40);
    *((_QWORD *)&v26 + 1) = v6;
    while ( 1 )
    {
      v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v26);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
      std::fs::metadata(&v38, v8, v9);
      if ( (_DWORD)v38 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v38);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v38);
        v10 = uu_tail::follow::files::FileHandling::get(v2, v8, v9);
        std::fs::metadata(&v38, v8, v9);
        core::result::Result<T,E>::unwrap(v53, &v38);
        v11 = v54 & 0xF000;
        if ( (v11 == 4096 || v11 == 0x8000 || v11 == 0x2000) && !*(_QWORD *)(v10 + 200) )
        {
          *(_QWORD *)&v12 = uucore::util_name();
          *(_OWORD *)v33 = v12;
          *(_QWORD *)&v29 = v33;
          *((_QWORD *)&v29 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v38 = &unk_1BBE20;
          *((_QWORD *)&v38 + 1) = 2LL;
          *(_QWORD *)&v40 = 0LL;
          *(_QWORD *)&v39 = &v29;
          *((_QWORD *)&v39 + 1) = 1LL;
          std::io::stdio::_eprint(&v38);
          v13 = *(_OWORD *)(v10 + 184);
          *(_QWORD *)v33 = 0LL;
          *(_OWORD *)&v33[8] = v13;
          v33[24] = 1;
          *(_QWORD *)&v29 = v33;
          *((_QWORD *)&v29 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v38 = &unk_1BBF58;
          *((_QWORD *)&v38 + 1) = 2LL;
          *(_QWORD *)&v40 = 0LL;
          *(_QWORD *)&v39 = &v29;
          *((_QWORD *)&v39 + 1) = 1LL;
          std::io::stdio::_eprint(&v38);
          uu_tail::follow::files::FileHandling::update_metadata(v2, v8, v9, v53);
          updated = uu_tail::follow::files::FileHandling::update_reader(v2, v8, v9);
          if ( updated )
            goto LABEL_57;
          uu_tail::follow::files::FileHandling::tail_file(&v38, v2, v8, v9, v25 != 0);
          updated = v38;
          if ( (_QWORD)v38 )
            goto LABEL_57;
          if ( *(_DWORD *)v28 == 3 )
            goto LABEL_63;
          updated = uu_tail::follow::watch::WatcherRx::watch_with_parent(
                      *(_QWORD *)(v28 + 16),
                      *(_QWORD *)(v28 + 24),
                      v8,
                      v9);
          if ( updated )
            goto LABEL_57;
        }
      }
    }
    v3 = v28;
  }
  if ( *(_DWORD *)v3 == 3 )
  {
    v37 = &off_1BC1D0;
LABEL_63:
    core::option::unwrap_failed(v37);
  }
  std::sync::mpmc::Receiver<T>::recv_timeout(v33, v3, v44, v35);
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 8LL;
  v27 = 0LL;
  switch ( *(_QWORD *)v33 )
  {
    case 1LL:
      if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v33[8]) )
        goto LABEL_55;
      v30 = v34;
      v29 = *(_OWORD *)&v33[32];
      if ( v34 )
      {
        v15 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL);
        v16 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 16LL);
        if ( (unsigned __int8)uu_tail::follow::files::FileHandling::contains_key(v2, v15, v16) )
        {
          if ( *(_DWORD *)v3 == 3 )
            core::option::unwrap_failed(&off_1BC1E8);
          (*(void (__fastcall **)(unsigned __int128 *, _QWORD, __int64, __int64))(*(_QWORD *)(v3 + 24) + 32LL))(
            &v38,
            *(_QWORD *)(v3 + 16),
            v15,
            v16);
          core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&v38);
        }
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v29);
      v17 = 0;
      goto LABEL_36;
    case 5LL:
      *(_QWORD *)&v29 = &off_1BBEB0;
      *((_QWORD *)&v29 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_1BC160;
      *((_QWORD *)&v38 + 1) = 2LL;
      *(_QWORD *)&v40 = 0LL;
      *(_QWORD *)&v39 = &v29;
      *((_QWORD *)&v39 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v45, &v38);
      DWORD2(v39) = 1;
      v38 = v45;
      *(_QWORD *)&v39 = v46;
      v23 = alloc::boxed::Box<T>::new(&v38);
      goto LABEL_60;
    case 6LL:
      v39 = *(_OWORD *)&v33[24];
      *(_QWORD *)&v40 = *(_QWORD *)&v33[40];
      v38 = *(_OWORD *)&v33[8];
      if ( !*(_QWORD *)&v33[24]
        || !(unsigned __int8)uu_tail::follow::files::FileHandling::contains_key(
                               v2,
                               *(_QWORD *)(*((_QWORD *)&v38 + 1) + 8LL),
                               *(_QWORD *)(*((_QWORD *)&v38 + 1) + 16LL)) )
      {
        goto LABEL_34;
      }
      uu_tail::follow::watch::Observer::handle_event(&v29, v3, (__int64)&v38, v43);
      updated = *((_QWORD *)&v29 + 1);
      v18 = v29;
      v19 = v30;
      if ( (_QWORD)v29 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<notify::event::Event>(&v38);
        v21 = 0;
        v17 = 1;
        goto LABEL_47;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
      v26 = __PAIR128__(updated, v18);
      v27 = v19;
      v3 = v28;
LABEL_34:
      core::ptr::drop_in_place<notify::event::Event>(&v38);
      v17 = 1;
LABEL_36:
      if ( v24 != 2 && *(_BYTE *)(v3 + 141) )
      {
        uu_tail::follow::files::FileHandling::keys(&v38, v2);
        v52 = v40;
        v51[1] = v39;
        v51[0] = v38;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, v51);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
        v27 = (_QWORD *)v39;
        v26 = v38;
      }
      *(_QWORD *)&v29 = *((_QWORD *)&v26 + 1);
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&v26 + 1) + 24LL * (_QWORD)v27;
      break;
    case 7LL:
      v17 = 1;
      if ( !v33[8] )
        goto LABEL_36;
      LOBYTE(v42[0]) = 1;
      *(_QWORD *)&v29 = v42;
      *((_QWORD *)&v29 + 1) = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &off_1BC190;
      *((_QWORD *)&v38 + 1) = 1LL;
      *(_QWORD *)&v40 = 0LL;
      *(_QWORD *)&v39 = &v29;
      *((_QWORD *)&v39 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v49, &v38);
      DWORD2(v39) = 1;
      v38 = v49;
      *(_QWORD *)&v39 = v50;
      v23 = alloc::boxed::Box<T>::new(&v38);
LABEL_60:
      updated = v23;
      v21 = 0;
      v17 = 1;
      goto LABEL_47;
    default:
LABEL_55:
      v41 = v34;
      v40 = *(_OWORD *)&v33[32];
      v39 = *(_OWORD *)&v33[16];
      v38 = *(_OWORD *)v33;
      v42[0] = &v38;
      v42[1] = <notify::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v29 = &off_1BC180;
      *((_QWORD *)&v29 + 1) = 1LL;
      v32 = 0LL;
      v30 = v42;
      v31 = 1LL;
      core::option::Option<T>::map_or_else(&v47, &v29);
      LODWORD(v31) = 1;
      v29 = v47;
      v30 = v48;
      updated = alloc::boxed::Box<T>::new(&v29);
      core::ptr::drop_in_place<notify::error::Error>(&v38);
      v21 = 1;
      v17 = 0;
      goto LABEL_47;
  }
  do
  {
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
    if ( !v20 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
      v3 = v28;
      if ( (~v33[0] & 6) != 0 )
        core::ptr::drop_in_place<notify::error::ErrorKind>(v33);
      v4 = *(_DWORD *)(v3 + 136);
      if ( v24 != 2 )
        goto LABEL_4;
      goto LABEL_6;
    }
    uu_tail::follow::files::FileHandling::tail_file(&v38, v2, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16), v25 != 0);
    updated = v38;
  }
  while ( !(_QWORD)v38 );
  v21 = 0;
LABEL_47:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
  if ( (~v33[0] & 6) != 0 )
  {
    if ( !v21 )
      core::ptr::drop_in_place<notify::error::ErrorKind>(v33);
    if ( v17 )
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v33[32]);
  }
LABEL_57:
  core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(v28);
  return updated;
}
