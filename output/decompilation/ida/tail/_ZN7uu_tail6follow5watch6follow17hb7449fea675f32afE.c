__int64 __fastcall uu_tail::follow::watch::follow(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  unsigned int v3; // ebp
  __int64 v4; // r12
  unsigned int v5; // eax
  char v6; // bp
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 i; // r14
  int v11; // ebx
  _QWORD *v12; // rbx
  int v13; // eax
  __int128 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 updated; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rbx
  _QWORD *v24; // rbp
  unsigned __int64 v25; // r14
  __int64 v26; // rbp
  char v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char **v45; // rdi
  char v46; // [rsp+Fh] [rbp-2B9h]
  unsigned __int8 v47; // [rsp+1Fh] [rbp-2A9h]
  char v48; // [rsp+20h] [rbp-2A8h]
  __int64 v49; // [rsp+28h] [rbp-2A0h]
  char v50; // [rsp+28h] [rbp-2A0h]
  unsigned __int128 v51; // [rsp+30h] [rbp-298h] BYREF
  _QWORD *v52; // [rsp+40h] [rbp-288h]
  int v53; // [rsp+54h] [rbp-274h]
  __int128 v54; // [rsp+58h] [rbp-270h] BYREF
  __int128 v55; // [rsp+68h] [rbp-260h]
  __int128 v56; // [rsp+78h] [rbp-250h] BYREF
  __int64 v57; // [rsp+88h] [rbp-240h]
  unsigned __int128 v58; // [rsp+90h] [rbp-238h] BYREF
  _QWORD *v59; // [rsp+A0h] [rbp-228h]
  __int64 v60; // [rsp+A8h] [rbp-220h]
  __int64 v61; // [rsp+B0h] [rbp-218h]
  unsigned int v62; // [rsp+C4h] [rbp-204h]
  unsigned int v63; // [rsp+C8h] [rbp-200h]
  unsigned int v64; // [rsp+CCh] [rbp-1FCh]
  __int128 dest; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-1E8h]
  __int128 v67; // [rsp+F0h] [rbp-1D8h]
  __int64 v68; // [rsp+100h] [rbp-1C8h]
  _QWORD v69[2]; // [rsp+188h] [rbp-140h] BYREF
  __int64 v70; // [rsp+198h] [rbp-130h]
  __int128 v71; // [rsp+1A0h] [rbp-128h] BYREF
  __int64 v72; // [rsp+1B0h] [rbp-118h]
  unsigned __int128 v73; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD *v74; // [rsp+1C8h] [rbp-100h]
  __int128 v75; // [rsp+1D0h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+1E0h] [rbp-E8h]
  _QWORD v77[7]; // [rsp+1E8h] [rbp-E0h] BYREF
  int v78; // [rsp+220h] [rbp-A8h]

  v2 = (__int64 *)(a1 + 56);
  v3 = *(unsigned __int8 *)(a2 + 72);
  if ( (unsigned __int8)uu_tail::follow::files::FileHandling::no_files_remaining(a1 + 56, v3)
    && !uu_tail::follow::files::FileHandling::only_stdin_remaining((__int64)v2) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v54, aNoFilesRemaini, 18LL);
    *(_QWORD *)&v66 = v55;
    dest = v54;
    DWORD2(v66) = 1;
    updated = alloc::boxed::Box<T>::new(&dest, aNoFilesRemaini, v28, v29, v30, v31);
    goto LABEL_58;
  }
  v62 = v3;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 136);
  v6 = *(_BYTE *)(a2 + 76);
  v47 = *(_BYTE *)(a2 + 74);
  v70 = *(_QWORD *)(a2 + 48);
  v64 = *(_DWORD *)(a2 + 56);
  v63 = v5;
  v46 = v6;
  if ( v6 != 2 )
  {
LABEL_4:
    if ( v5 && (unsigned __int8)uu_tail::platform::unix::ProcessChecker::is_dead(v63) )
    {
      updated = 0LL;
      goto LABEL_58;
    }
  }
  while ( 2 )
  {
    v7 = *(_BYTE *)(v4 + 142);
    v53 = v47;
    if ( v7 != 2 && (v7 & 1) != 0 && *(_BYTE *)(a1 + 140) == 1 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 40);
        v49 = 24 * v8;
        for ( i = 0LL; v49 != i; i += 24LL )
        {
          std::fs::metadata(&dest);
          v11 = dest;
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
          if ( v11 != 2 )
          {
            v12 = (_QWORD *)uu_tail::follow::files::FileHandling::get((__int64)v2);
            std::fs::metadata(&dest);
            core::result::Result<T,E>::unwrap(v77, &dest);
            v13 = v78 & 0xF000;
            if ( (v13 == 4096 || v13 == 0x8000 || v13 == 0x2000) && !v12[25] )
            {
              *(_QWORD *)&v14 = uucore::util_name(v77, &dest);
              v54 = v14;
              *(_QWORD *)&v58 = &v54;
              *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&dest = &unk_1734A0;
              *((_QWORD *)&dest + 1) = 2LL;
              *(_QWORD *)&v67 = 0LL;
              *(_QWORD *)&v66 = &v58;
              *((_QWORD *)&v66 + 1) = 1LL;
              std::io::stdio::_eprint(&dest);
              v15 = v12[23];
              v16 = v12[24];
              *(_QWORD *)&v54 = 0LL;
              *((_QWORD *)&v54 + 1) = v15;
              *(_QWORD *)&v55 = v16;
              BYTE8(v55) = 1;
              *(_QWORD *)&v58 = &v54;
              *((_QWORD *)&v58 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&dest = &unk_1735D0;
              *((_QWORD *)&dest + 1) = 2LL;
              *(_QWORD *)&v67 = 0LL;
              *(_QWORD *)&v66 = &v58;
              *((_QWORD *)&v66 + 1) = 1LL;
              std::io::stdio::_eprint(&dest);
              uu_tail::follow::files::FileHandling::update_metadata(
                (__int64)v2,
                *(_QWORD *)(v9 + i + 8),
                *(_QWORD *)(v9 + i + 16),
                v77);
              updated = uu_tail::follow::files::FileHandling::update_reader(
                          (__int64)v2,
                          *(_QWORD *)(v9 + i + 8),
                          *(_QWORD *)(v9 + i + 16));
              if ( updated )
                goto LABEL_58;
              uu_tail::follow::files::FileHandling::tail_file(
                (__int64 *)&dest,
                v2,
                *(_QWORD *)(v9 + i + 8),
                *(_QWORD *)(v9 + i + 16),
                v53);
              updated = dest;
              if ( (_QWORD)dest )
                goto LABEL_58;
              if ( *(_DWORD *)a1 == 3 )
              {
                v45 = &off_1738A8;
LABEL_68:
                core::option::unwrap_failed(v45);
              }
              updated = uu_tail::follow::watch::WatcherRx::watch_with_parent(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          *(_QWORD *)(v9 + i + 8),
                          *(_QWORD *)(v9 + i + 16));
              if ( updated )
                goto LABEL_58;
            }
          }
        }
      }
    }
    if ( *(_QWORD *)a1 == 3LL )
    {
      v45 = &off_1738C0;
      goto LABEL_68;
    }
    std::sync::mpmc::Receiver<T>::recv_timeout(&v54, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), v70, v64);
    *(_QWORD *)&v51 = 0LL;
    *((_QWORD *)&v51 + 1) = 8LL;
    v52 = 0LL;
    v50 = v54;
    switch ( (__int64)v54 )
    {
      case 1LL:
        if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v54 + 1)) )
          goto LABEL_59;
        if ( v57 )
        {
          v22 = *((_QWORD *)&v56 + 1);
          if ( uu_tail::follow::files::FileHandling::contains_key((__int64)v2) )
          {
            if ( *(_DWORD *)a1 == 3 )
              core::option::unwrap_failed(&off_1738D8);
            (*(void (__fastcall **)(__int128 *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 24) + 32LL))(
              &dest,
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(v22 + 8),
              *(_QWORD *)(v22 + 16));
            core::ptr::drop_in_place<core::result::Result<bool,notify::error::Error>>(&dest);
          }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v56);
        v23 = 8LL;
        v24 = 0LL;
        v48 = 0;
        if ( v46 == 2 )
          goto LABEL_43;
        goto LABEL_41;
      case 5LL:
        *(_QWORD *)&v58 = &off_173510;
        *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_173850;
        *((_QWORD *)&dest + 1) = 2LL;
        *(_QWORD *)&v67 = 0LL;
        *(_QWORD *)&v66 = &v58;
        *((_QWORD *)&v66 + 1) = 1LL;
        core::option::Option<T>::map_or_else(&v71, &dest, v18, v19, v20, v21);
        DWORD2(v66) = 1;
        dest = v71;
        *(_QWORD *)&v66 = v72;
        updated = alloc::boxed::Box<T>::new(&dest, &dest, v37, v38, v39, v40);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
        v48 = 1;
        goto LABEL_54;
      case 6LL:
        v23 = 8LL;
        if ( *((_QWORD *)&v55 + 1) && uu_tail::follow::files::FileHandling::contains_key((__int64)v2) )
        {
          uu_tail::follow::watch::Observer::handle_event(&dest, a1, (__int64)&v54 + 8, v62);
          v23 = *((_QWORD *)&dest + 1);
          v25 = dest;
          v24 = (_QWORD *)v66;
          if ( __OFSUB__(-(__int64)dest, 1LL) )
          {
            core::ptr::drop_in_place<notify_types::event::Event>((char *)&v54 + 8);
LABEL_66:
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
            updated = v23;
            goto LABEL_58;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
          v51 = __PAIR128__(v23, v25);
          v52 = v24;
        }
        else
        {
          v24 = 0LL;
        }
        core::ptr::drop_in_place<notify_types::event::Event>((char *)&v54 + 8);
        v48 = 1;
        if ( v46 != 2 )
        {
LABEL_41:
          if ( *(_BYTE *)(a1 + 141) )
          {
            uu_tail::follow::files::FileHandling::keys((__int64)&dest, (__int64)v2);
            core::iter::traits::iterator::Iterator::collect(&v58, &dest);
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
            v24 = v59;
            v52 = v59;
            v51 = v58;
            v23 = *((_QWORD *)&v58 + 1);
          }
        }
LABEL_43:
        v26 = v23 + 24LL * (_QWORD)v24;
LABEL_44:
        if ( v23 == v26 || !v23 )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
          v4 = a1;
          if ( (~v50 & 6) != 0 )
            core::ptr::drop_in_place<notify::error::ErrorKind>(&v54);
          v5 = *(_DWORD *)(a1 + 136);
          if ( v46 != 2 )
            goto LABEL_4;
          continue;
        }
        uu_tail::follow::files::FileHandling::tail_file(
          (__int64 *)&dest,
          v2,
          *(_QWORD *)(v23 + 8),
          *(_QWORD *)(v23 + 16),
          v53);
        updated = dest;
        v23 += 24LL;
        if ( !(_QWORD)dest )
          goto LABEL_44;
        v27 = 1;
LABEL_52:
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v51);
        if ( (~v50 & 6) != 0 )
        {
          if ( v27 )
LABEL_54:
            core::ptr::drop_in_place<notify::error::ErrorKind>(&v54);
          if ( v48 )
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v56);
        }
LABEL_58:
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a1);
        return updated;
      case 7LL:
        if ( !BYTE8(v54) )
        {
          v48 = 1;
          v23 = 8LL;
          v24 = 0LL;
          if ( v46 != 2 )
            goto LABEL_41;
          goto LABEL_43;
        }
        LOBYTE(v69[0]) = BYTE8(v54);
        *(_QWORD *)&v58 = v69;
        *((_QWORD *)&v58 + 1) = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_173880;
        *((_QWORD *)&dest + 1) = 1LL;
        *(_QWORD *)&v67 = 0LL;
        *(_QWORD *)&v66 = &v58;
        *((_QWORD *)&v66 + 1) = 1LL;
        core::option::Option<T>::map_or_else(&v75, &dest, v18, v19, v20, v21);
        DWORD2(v66) = 1;
        dest = v75;
        *(_QWORD *)&v66 = v76;
        v23 = alloc::boxed::Box<T>::new(&dest, &dest, v41, v42, v43, v44);
        goto LABEL_66;
      default:
LABEL_59:
        v68 = v57;
        v67 = v56;
        v66 = v55;
        dest = v54;
        v69[0] = &dest;
        v69[1] = <notify::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v58 = &off_173870;
        *((_QWORD *)&v58 + 1) = 1LL;
        v61 = 0LL;
        v59 = v69;
        v60 = 1LL;
        core::option::Option<T>::map_or_else(&v73, &v58, v18, v19, v20, v21);
        LODWORD(v60) = 1;
        v58 = v73;
        v59 = v74;
        updated = alloc::boxed::Box<T>::new(&v58, &v58, v33, v34, v35, v36);
        core::ptr::drop_in_place<notify::error::Error>(&dest);
        v27 = 0;
        v48 = 0;
        goto LABEL_52;
    }
  }
}