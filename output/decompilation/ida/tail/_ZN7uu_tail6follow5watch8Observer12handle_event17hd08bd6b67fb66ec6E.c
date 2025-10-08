__int64 __fastcall uu_tail::follow::watch::Observer::handle_event(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  char v11; // al
  _DWORD *mut_metadata; // rax
  int v13; // ecx
  __int64 v14; // rsi
  __int128 v15; // rax
  __int64 v16; // rsi
  __int128 v17; // rax
  __int128 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int128 v27; // rax
  __int128 v28; // rax
  __int128 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int128 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  __int64 v42; // rbx
  __int128 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 v46; // r14
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rsi
  __int128 v52; // rax
  __int128 v53; // rax
  _QWORD *v54; // rcx
  __int128 v56; // rax
  int v57; // ecx
  __int128 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // r14
  _OWORD *v61; // rcx
  char **v62; // rdi
  _QWORD *v63; // [rsp+8h] [rbp-3B0h]
  _BYTE *v64; // [rsp+10h] [rbp-3A8h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+18h] [rbp-3A0h]
  _BYTE v66[24]; // [rsp+20h] [rbp-398h] BYREF
  char v67; // [rsp+38h] [rbp-380h]
  _OWORD v68[13]; // [rsp+40h] [rbp-378h] BYREF
  _QWORD *v69; // [rsp+118h] [rbp-2A0h]
  char v70[8]; // [rsp+120h] [rbp-298h] BYREF
  __int128 v71; // [rsp+128h] [rbp-290h]
  __int128 v72; // [rsp+138h] [rbp-280h] BYREF
  __int64 v73; // [rsp+148h] [rbp-270h]
  _OWORD src[11]; // [rsp+150h] [rbp-268h] BYREF
  _QWORD dest[22]; // [rsp+200h] [rbp-1B8h] BYREF
  _QWORD v76[33]; // [rsp+2B0h] [rbp-108h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  if ( !v4 )
    core::option::unwrap_failed(&off_173710);
  v69 = a1;
  v8 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v72 = 0LL;
  *((_QWORD *)&v72 + 1) = 8LL;
  v73 = 0LL;
  v63 = (_QWORD *)(a2 + 56);
  v9 = uu_tail::follow::files::FileHandling::get(a2 + 56) + 176;
  <alloc::string::String as core::clone::Clone>::clone(v70, v9);
  v10 = *(unsigned __int8 *)(a3 + 32);
  if ( v10 == 2 )
  {
    if ( *(_BYTE *)(a3 + 33) == 3 )
      goto LABEL_84;
    goto LABEL_34;
  }
  if ( v10 == 3 )
  {
    v20 = *(unsigned __int8 *)(a3 + 33);
    switch ( v20 )
    {
      case 1:
        if ( *(_BYTE *)(a3 + 34) )
          goto LABEL_84;
        break;
      case 2:
        if ( (*(_BYTE *)(a3 + 34) & 5) != 0 )
          goto LABEL_84;
        break;
      case 3:
        v21 = *(unsigned __int8 *)(a3 + 34);
        if ( v21 != 1 )
        {
          if ( v21 == 3 )
          {
            if ( ((*(_BYTE *)(a2 + 142) ^ (*(_BYTE *)(a2 + 142) != 2)) & 1) == 0 )
              goto LABEL_84;
            v44 = v8 + 24 * v4;
            if ( v44 == 24 )
            {
              v62 = &off_173770;
              goto LABEL_92;
            }
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68, *(_QWORD *)(v44 - 16), *(_QWORD *)(v44 - 8));
            *(_QWORD *)&src[1] = *(_QWORD *)&v68[1];
            src[0] = v68[0];
            alloc::vec::Vec<T,A>::push(&v72, src, &off_173788);
            uu_tail::follow::files::FileHandling::remove(v68);
            uu_tail::follow::files::PathData::from_other_with_path(
              v76,
              (__int64 *)v68,
              *(_QWORD *)(v44 - 16),
              *(_QWORD *)(v44 - 8));
            if ( __OFSUB__(0LL, *v63) )
              core::option::unwrap_failed(&off_1737A0);
            v45 = *(_QWORD *)(v44 - 16);
            v46 = *(_QWORD *)(v44 - 8);
            v47 = <std::path::PathBuf as core::cmp::PartialEq>::eq(
                    *(_QWORD *)(a2 + 64),
                    *(_QWORD *)(a2 + 72),
                    *(_QWORD *)(v8 + 8),
                    *(_QWORD *)(v8 + 16));
            uu_tail::follow::files::FileHandling::insert(v63, v45, v46, (__int64)v76, v47);
            if ( *(_DWORD *)a2 == 3 )
            {
              v62 = &off_1737B8;
              goto LABEL_92;
            }
            v48 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
              v48,
              &off_172F18);
            if ( *(_DWORD *)a2 == 3 )
            {
              v62 = &off_1737D0;
              goto LABEL_92;
            }
            v49 = uu_tail::follow::watch::WatcherRx::watch_with_parent(
                    *(_QWORD *)(a2 + 16),
                    *(_QWORD *)(a2 + 24),
                    *(_QWORD *)(v44 - 16),
                    *(_QWORD *)(v44 - 8));
            if ( !v49 )
              goto LABEL_84;
            v51 = v69;
            v69[1] = v49;
            v51[2] = v50;
            *v51 = 0x8000000000000000LL;
LABEL_70:
            core::ptr::drop_in_place<alloc::string::String>(v70);
            return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v72);
          }
          if ( v21 != 2 )
            goto LABEL_84;
          goto LABEL_6;
        }
        break;
      default:
        goto LABEL_84;
    }
LABEL_34:
    std::fs::metadata(src);
    if ( LODWORD(src[0]) == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
      goto LABEL_84;
    }
    memcpy(dest, src, sizeof(dest));
    v23 = dest[7] & 0xF000;
    if ( v23 == 0x8000 || v23 == 0x2000 )
    {
      v24 = *(_QWORD *)(v8 + 8);
      v25 = v63;
      v26 = uu_tail::follow::files::FileHandling::get((__int64)v63);
      if ( *(_DWORD *)v26 == 2 )
        goto LABEL_39;
LABEL_53:
      v41 = *(_DWORD *)(v26 + 56) & 0xF000;
      if ( v41 == 4096 || v41 == 0x2000 || v41 == 0x8000 )
      {
        if ( *(_QWORD *)(v26 + 200) )
        {
          v42 = v26;
          if ( (unsigned __int8)<notify_types::event::EventKind as core::cmp::PartialEq>::eq(a3 + 32, &unk_24E4B)
            || *(_BYTE *)(a2 + 141) && *(_QWORD *)(v42 + 40) != dest[5] )
          {
            *(_QWORD *)&v43 = uucore::util_name(a3 + 32, &unk_24E4B);
            *(_OWORD *)v66 = v43;
            v64 = v66;
            v65 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[0] = &unk_1734A0;
            *((_QWORD *)&v68[0] + 1) = 2LL;
            *(_QWORD *)&v68[1] = &v64;
            *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
            std::io::stdio::_eprint(v68);
            *(_QWORD *)v66 = 0LL;
            *(_OWORD *)&v66[8] = v71;
            v67 = 1;
            v64 = v66;
            v65 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[0] = &unk_1735F0;
            *((_QWORD *)&v68[0] + 1) = 2LL;
            *(_QWORD *)&v68[1] = &v64;
            *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
            std::io::stdio::_eprint(v68);
            *(_QWORD *)&v28 = uu_tail::follow::files::FileHandling::update_reader(
                                (__int64)v63,
                                *(_QWORD *)(v8 + 8),
                                *(_QWORD *)(v8 + 16));
          }
          else
          {
            <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v68, v42, dest);
            v28 = v68[0];
            if ( *(_QWORD *)&v68[0] )
              goto LABEL_69;
            if ( (BYTE8(v68[0]) & 1) == 0 )
              goto LABEL_76;
            *(_QWORD *)&v56 = uucore::util_name(v68, v42);
            *(_OWORD *)v66 = v56;
            v64 = v66;
            v65 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[0] = &unk_1734A0;
            *((_QWORD *)&v68[0] + 1) = 2LL;
            *(_QWORD *)&v68[1] = &v64;
            *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
            std::io::stdio::_eprint(v68);
            *(_QWORD *)v66 = v70;
            *(_QWORD *)&v66[8] = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[0] = &unk_173610;
            *((_QWORD *)&v68[0] + 1) = 2LL;
            *(_QWORD *)&v68[1] = v66;
            *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
            std::io::stdio::_eprint(v68);
            *(_QWORD *)&v28 = uu_tail::follow::files::FileHandling::update_reader(
                                (__int64)v63,
                                *(_QWORD *)(v8 + 8),
                                *(_QWORD *)(v8 + 16));
          }
        }
        else
        {
          *(_QWORD *)&v52 = uucore::util_name(v25, v24);
          *(_OWORD *)v66 = v52;
          v64 = v66;
          v65 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v68[0] = &unk_1734A0;
          *((_QWORD *)&v68[0] + 1) = 2LL;
          *(_QWORD *)&v68[1] = &v64;
          *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
          std::io::stdio::_eprint(v68);
          *(_QWORD *)v66 = 0LL;
          *(_OWORD *)&v66[8] = v71;
          v67 = 1;
          v64 = v66;
          v65 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v68[0] = &unk_1735D0;
          *((_QWORD *)&v68[0] + 1) = 2LL;
          *(_QWORD *)&v68[1] = &v64;
          *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
          std::io::stdio::_eprint(v68);
          *(_QWORD *)&v28 = uu_tail::follow::files::FileHandling::update_reader(
                              (__int64)v63,
                              *(_QWORD *)(v8 + 8),
                              *(_QWORD *)(v8 + 16));
        }
      }
      else
      {
        *(_QWORD *)&v53 = uucore::util_name(v25, v24);
        *(_OWORD *)v66 = v53;
        v64 = v66;
        v65 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_1734A0;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        *(_QWORD *)v66 = 0LL;
        *(_OWORD *)&v66[8] = v71;
        v67 = 1;
        v64 = v66;
        v65 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_1735B0;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        *(_QWORD *)&v28 = uu_tail::follow::files::FileHandling::update_reader(
                            (__int64)v63,
                            *(_QWORD *)(v8 + 8),
                            *(_QWORD *)(v8 + 16));
      }
      if ( (_QWORD)v28 )
        goto LABEL_69;
LABEL_76:
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      *(_QWORD *)&v66[16] = *(_QWORD *)&v68[1];
      *(_OWORD *)v66 = v68[0];
      alloc::vec::Vec<T,A>::push(&v72, v66, &off_173728);
      goto LABEL_83;
    }
    v24 = *(_QWORD *)(v8 + 8);
    v25 = v63;
    v26 = uu_tail::follow::files::FileHandling::get((__int64)v63);
    if ( *(_DWORD *)v26 == 2 )
    {
      if ( v23 == 4096 )
      {
LABEL_39:
        *(_QWORD *)&v27 = uucore::util_name(v25, v24);
        *(_OWORD *)v66 = v27;
        v64 = v66;
        v65 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_1734A0;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        *(_QWORD *)v66 = 0LL;
        *(_OWORD *)&v66[8] = v71;
        v67 = 1;
        v64 = v66;
        v65 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_1735D0;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        *(_QWORD *)&v28 = uu_tail::follow::files::FileHandling::update_reader(
                            (__int64)v63,
                            *(_QWORD *)(v8 + 8),
                            *(_QWORD *)(v8 + 16));
        if ( !(_QWORD)v28 )
        {
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
          *(_QWORD *)&v66[16] = *(_QWORD *)&v68[1];
          *(_OWORD *)v66 = v68[0];
          alloc::vec::Vec<T,A>::push(&v72, v66, &off_173758);
LABEL_83:
          v59 = *(_QWORD *)(v8 + 8);
          v60 = *(_QWORD *)(v8 + 16);
          memcpy(v68, dest, 0xB0uLL);
          uu_tail::follow::files::FileHandling::update_metadata((__int64)v63, v59, v60, v68);
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
          goto LABEL_84;
        }
LABEL_69:
        v54 = v69;
        *(_OWORD *)(v69 + 1) = v28;
        *v54 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
        goto LABEL_70;
      }
      if ( (a4 & 1) == 0 )
        goto LABEL_83;
      if ( ((*(_BYTE *)(a2 + 142) ^ (*(_BYTE *)(a2 + 142) != 2)) & 1) != 0 )
      {
        *(_QWORD *)&v36 = uucore::util_name(v63, v24);
        *(_OWORD *)v66 = v36;
        v64 = v66;
        v65 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_1734A0;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        *(_QWORD *)v66 = 0LL;
        *(_OWORD *)&v66[8] = v71;
        v67 = 1;
        v64 = v66;
        v65 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[0] = &unk_173650;
        *((_QWORD *)&v68[0] + 1) = 2LL;
        *(_QWORD *)&v68[1] = &v64;
        *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
        std::io::stdio::_eprint(v68);
        if ( *(_DWORD *)a2 == 3 )
          core::option::unwrap_failed(&off_173740);
        (*(void (__fastcall **)(_OWORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a2 + 24) + 32LL))(
          v68,
          *(_QWORD *)(a2 + 16),
          *(_QWORD *)(v8 + 8),
          *(_QWORD *)(v8 + 16));
        core::ptr::drop_in_place<core::result::Result<bool,notify::error::Error>>(v68);
        uu_tail::follow::files::FileHandling::remove(v68);
        core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v68, v63);
        if ( !(unsigned __int8)uu_tail::follow::files::FileHandling::no_files_remaining((__int64)v63, a4) )
          goto LABEL_83;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v66, aNoFilesRemaini, 18LL);
        *(_QWORD *)&v68[1] = *(_QWORD *)&v66[16];
        v68[0] = *(_OWORD *)v66;
        DWORD2(v68[1]) = 1;
        *(_QWORD *)&v28 = alloc::boxed::Box<T>::new(v68, aNoFilesRemaini, v37, v38, v39, v40);
        *((_QWORD *)&v28 + 1) = &off_172F18;
        goto LABEL_69;
      }
    }
    else
    {
      if ( v23 == 4096 )
        goto LABEL_53;
      v57 = *(_DWORD *)(v26 + 56) & 0xF000;
      if ( v57 != 4096 && v57 != 0x8000 && v57 != 0x2000 )
        goto LABEL_83;
      if ( *(_QWORD *)(v26 + 200) )
      {
        uu_tail::follow::files::FileHandling::reset_reader((__int64)v63);
        goto LABEL_83;
      }
    }
    *(_QWORD *)&v58 = uucore::util_name(v63, v24);
    *(_OWORD *)v66 = v58;
    v64 = v66;
    v65 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68[0] = &unk_1734A0;
    *((_QWORD *)&v68[0] + 1) = 2LL;
    *(_QWORD *)&v68[1] = &v64;
    *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
    std::io::stdio::_eprint(v68);
    *(_QWORD *)v66 = 0LL;
    *(_OWORD *)&v66[8] = v71;
    v67 = 1;
    v64 = v66;
    v65 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v68[0] = &unk_173630;
    *((_QWORD *)&v68[0] + 1) = 2LL;
    *(_QWORD *)&v68[1] = &v64;
    *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
    std::io::stdio::_eprint(v68);
    goto LABEL_83;
  }
  if ( v10 != 4 || *(_BYTE *)(a3 + 33) >= 2u )
    goto LABEL_84;
LABEL_6:
  v11 = *(_BYTE *)(a2 + 142);
  if ( (v11 & 1) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      mut_metadata = uu_tail::follow::files::FileHandling::get_mut_metadata((__int64)v63);
      if ( mut_metadata )
      {
        v13 = mut_metadata[14] & 0xF000;
        if ( v13 == 4096 || v13 == 0x8000 || v13 == 0x2000 )
        {
          v14 = *(_QWORD *)(v8 + 8);
          if ( *(_QWORD *)(uu_tail::follow::files::FileHandling::get((__int64)v63) + 200) )
          {
            *(_QWORD *)&v15 = uucore::util_name(v63, v14);
            src[0] = v15;
            *(_QWORD *)v66 = src;
            *(_QWORD *)&v66[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[0] = &unk_1734A0;
            *((_QWORD *)&v68[0] + 1) = 2LL;
            *(_QWORD *)&v68[1] = v66;
            *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
            std::io::stdio::_eprint(v68);
            *(_QWORD *)v66 = 0LL;
            *(_OWORD *)&v66[8] = v71;
            v67 = 1;
            *(_QWORD *)&v68[0] = v66;
            *((_QWORD *)&v68[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[1] = &off_173810;
            *((_QWORD *)&v68[1] + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v68[2] = &off_173800;
            *((_QWORD *)&v68[2] + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &unk_173670;
            *((_QWORD *)&src[0] + 1) = 4LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v68;
            *((_QWORD *)&src[1] + 1) = 3LL;
            std::io::stdio::_eprint(src);
          }
        }
      }
      if ( !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(
                               *(_QWORD *)(v8 + 8),
                               *(_QWORD *)(v8 + 16)) )
        goto LABEL_44;
      v16 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v8, v16, *(_QWORD *)(a2 + 48)) )
        goto LABEL_44;
      *(_QWORD *)&v17 = uucore::util_name(v8, v16);
      src[0] = v17;
      *(_QWORD *)v66 = src;
      *(_QWORD *)&v66[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v68[0] = &unk_1734A0;
      *((_QWORD *)&v68[0] + 1) = 2LL;
      *(_QWORD *)&v68[1] = v66;
      *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
      std::io::stdio::_eprint(v68);
      *(_QWORD *)&v68[0] = &off_1736B0;
      *((_QWORD *)&v68[0] + 1) = 1LL;
      v68[1] = 8uLL;
      std::io::stdio::_eprint(v68);
      *(_QWORD *)&v18 = uucore::util_name(v68, v16);
      src[0] = v18;
      *(_QWORD *)v66 = src;
      *(_QWORD *)&v66[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v68[0] = &unk_1734A0;
      *((_QWORD *)&v68[0] + 1) = 2LL;
      *(_QWORD *)&v68[1] = v66;
      *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
      std::io::stdio::_eprint(v68);
      *(_QWORD *)&src[0] = &off_173510;
      *((_QWORD *)&src[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v68[0] = &unk_1736C0;
      *((_QWORD *)&v68[0] + 1) = 2LL;
      *(_QWORD *)&v68[1] = src;
      *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
      std::io::stdio::_eprint(v68);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      *(_QWORD *)&src[1] = *(_QWORD *)&v68[1];
      src[0] = v68[0];
      alloc::vec::Vec<T,A>::push(a2 + 32, src, &off_173820);
      if ( *(_DWORD *)a2 != 3 )
      {
        v19 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
          v19,
          &off_172F18);
LABEL_44:
        uu_tail::follow::files::FileHandling::reset_reader((__int64)v63);
        goto LABEL_84;
      }
      v62 = &off_173838;
LABEL_92:
      core::option::unwrap_failed(v62);
    }
    *(_QWORD *)&v29 = uucore::util_name(v70, v9);
    src[0] = v29;
    *(_QWORD *)v66 = src;
    *(_QWORD *)&v66[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68[0] = &unk_1734A0;
    *((_QWORD *)&v68[0] + 1) = 2LL;
    *(_QWORD *)&v68[1] = v66;
    *(_OWORD *)((char *)&v68[1] + 8) = 1uLL;
    std::io::stdio::_eprint(v68);
    *(_QWORD *)&src[0] = v70;
    *((_QWORD *)&src[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[1] = &off_173800;
    *((_QWORD *)&src[1] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v68[0] = &unk_1736E0;
    *((_QWORD *)&v68[0] + 1) = 3LL;
    *(_QWORD *)&v68[1] = src;
    *(_OWORD *)((char *)&v68[1] + 8) = 2uLL;
    std::io::stdio::_eprint(v68);
    if ( uu_tail::follow::files::FileHandling::files_remaining((__int64)v63) || *(_BYTE *)(a2 + 141) != 1 )
      goto LABEL_44;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, aNoFilesRemaini, 18LL);
    *(_QWORD *)&v68[1] = *(_QWORD *)&src[1];
    v68[0] = src[0];
    DWORD2(v68[1]) = 1;
    v34 = alloc::boxed::Box<T>::new(v68, aNoFilesRemaini, v30, v31, v32, v33);
    v35 = v69;
    v69[1] = v34;
    v35[2] = &off_172F18;
    *v35 = 0x8000000000000000LL;
    goto LABEL_70;
  }
  if ( (v11 & 1) != 0 || v11 == 2 || *(_BYTE *)(a2 + 140) != 1 )
    goto LABEL_84;
  if ( *(_DWORD *)a2 == 3 )
  {
    v62 = &off_1737E8;
    goto LABEL_92;
  }
  v22 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
    v22,
    &off_172F18);
  uu_tail::follow::files::FileHandling::remove(v68);
  core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v68, v63);
LABEL_84:
  v61 = v69;
  v69[2] = v73;
  *v61 = v72;
  return core::ptr::drop_in_place<alloc::string::String>(v70);
}