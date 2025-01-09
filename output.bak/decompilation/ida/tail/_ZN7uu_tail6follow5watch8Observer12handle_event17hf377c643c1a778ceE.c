__int64 __fastcall uu_tail::follow::watch::Observer::handle_event(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // eax
  char v11; // al
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  _DWORD *mut_metadata; // rax
  int v16; // ecx
  __int128 v17; // rax
  __int64 v18; // rsi
  __int128 v19; // rax
  __int128 v20; // rax
  __int64 v21; // rax
  int v22; // r15d
  _QWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int128 v26; // rax
  __int64 updated; // rax
  __int64 (__fastcall **v28)(); // rdx
  char v29; // al
  __int128 v30; // rax
  __int128 v31; // rax
  int v32; // ecx
  __int64 v33; // r15
  __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // r14
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int128 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int128 v45; // rax
  __int128 v46; // rax
  _QWORD *v47; // rcx
  int v49; // ecx
  __int128 v50; // rax
  _OWORD *v51; // rcx
  __int128 v52; // rax
  char **v53; // rdi
  __int64 v54; // [rsp+8h] [rbp-310h]
  __int64 v55; // [rsp+10h] [rbp-308h]
  _QWORD *v56; // [rsp+18h] [rbp-300h]
  _BYTE *v57; // [rsp+20h] [rbp-2F8h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+28h] [rbp-2F0h]
  _BYTE v59[24]; // [rsp+30h] [rbp-2E8h] BYREF
  char v60; // [rsp+48h] [rbp-2D0h]
  _BYTE v61[216]; // [rsp+50h] [rbp-2C8h] BYREF
  _QWORD *v62; // [rsp+128h] [rbp-1F0h]
  char v63[8]; // [rsp+130h] [rbp-1E8h] BYREF
  __int128 v64; // [rsp+138h] [rbp-1E0h]
  __int128 v65; // [rsp+148h] [rbp-1D0h] BYREF
  __int64 v66; // [rsp+158h] [rbp-1C0h]
  _BYTE src[216]; // [rsp+160h] [rbp-1B8h] BYREF
  _QWORD dest[28]; // [rsp+238h] [rbp-E0h] BYREF

  v62 = a1;
  v4 = *(_QWORD *)(a3 + 16);
  if ( !v4 )
    core::option::unwrap_failed(&off_1BC098);
  v8 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v65 = 0LL;
  *((_QWORD *)&v65 + 1) = 8LL;
  v66 = 0LL;
  v56 = (_QWORD *)(a2 + 56);
  v54 = *(_QWORD *)(v8 + 8);
  v55 = *(_QWORD *)(v8 + 16);
  v9 = uu_tail::follow::files::FileHandling::get(a2 + 56) + 176;
  <alloc::string::String as core::clone::Clone>::clone(v63, v9);
  v10 = *(unsigned __int8 *)(a3 + 32);
  if ( v10 == 2 )
  {
    if ( *(_BYTE *)(a3 + 33) == 3 )
      goto LABEL_84;
    goto LABEL_34;
  }
  if ( v10 != 3 )
  {
    if ( v10 != 4 || *(_BYTE *)(a3 + 33) >= 2u )
      goto LABEL_84;
    goto LABEL_6;
  }
  v13 = *(unsigned __int8 *)(a3 + 33);
  if ( v13 == 1 )
  {
    if ( *(_BYTE *)(a3 + 34) )
      goto LABEL_84;
    goto LABEL_34;
  }
  if ( v13 == 2 )
  {
    if ( (*(_BYTE *)(a3 + 34) & 5) != 0 )
      goto LABEL_84;
    goto LABEL_34;
  }
  if ( v13 != 3 )
    goto LABEL_84;
  v14 = *(unsigned __int8 *)(a3 + 34);
  if ( v14 == 1 )
  {
LABEL_34:
    std::fs::metadata(src, v54, v55);
    if ( *(_DWORD *)src == 2 )
    {
LABEL_83:
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
      goto LABEL_84;
    }
    memcpy(dest, src, 0xB0uLL);
    v22 = dest[7] & 0xF000;
    if ( v22 == 0x2000 || v22 == 0x8000 )
    {
      v23 = v56;
      v24 = v54;
      v25 = uu_tail::follow::files::FileHandling::get((__int64)v56);
      if ( *(_DWORD *)v25 == 2 )
        goto LABEL_38;
LABEL_51:
      v32 = *(_DWORD *)(v25 + 56) & 0xF000;
      if ( v32 == 4096 || v32 == 0x2000 || v32 == 0x8000 )
      {
        if ( *(_QWORD *)(v25 + 200) )
        {
          v33 = v25;
          if ( (unsigned __int8)<notify::event::EventKind as core::cmp::PartialEq>::eq(a3 + 32)
            || *(_BYTE *)(a2 + 141) && *(_QWORD *)(v33 + 40) != dest[5] )
          {
            *(_QWORD *)&v42 = uucore::util_name(a3 + 32, v24);
            *(_OWORD *)v59 = v42;
            v57 = v59;
            v58 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v61 = &unk_1BBE20;
            *(_QWORD *)&v61[8] = 2LL;
            *(_QWORD *)&v61[16] = &v57;
            *(_OWORD *)&v61[24] = 1uLL;
            std::io::stdio::_eprint(v61);
            *(_QWORD *)v59 = 0LL;
            *(_OWORD *)&v59[8] = v64;
            v60 = 1;
            v57 = v59;
            v58 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v61 = &unk_1BBF78;
            *(_QWORD *)&v61[8] = 2LL;
            *(_QWORD *)&v61[16] = &v57;
            *(_OWORD *)&v61[24] = 1uLL;
            std::io::stdio::_eprint(v61);
            updated = uu_tail::follow::files::FileHandling::update_reader((__int64)v56, v54, v55);
          }
          else
          {
            <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v61, v33, dest);
            updated = *(_QWORD *)v61;
            if ( *(_QWORD *)v61 )
            {
              v28 = *(__int64 (__fastcall ***)())&v61[8];
              goto LABEL_71;
            }
            if ( !v61[8] )
            {
LABEL_81:
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v61, v8);
              *(_QWORD *)&v59[16] = *(_QWORD *)&v61[16];
              *(_OWORD *)v59 = *(_OWORD *)v61;
              alloc::vec::Vec<T,A>::push(&v65, v59);
              goto LABEL_82;
            }
            *(_QWORD *)&v50 = uucore::util_name(v61, v33);
            *(_OWORD *)v59 = v50;
            v57 = v59;
            v58 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v61 = &unk_1BBE20;
            *(_QWORD *)&v61[8] = 2LL;
            *(_QWORD *)&v61[16] = &v57;
            *(_OWORD *)&v61[24] = 1uLL;
            std::io::stdio::_eprint(v61);
            *(_QWORD *)v59 = v63;
            *(_QWORD *)&v59[8] = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v61 = &unk_1BBF98;
            *(_QWORD *)&v61[8] = 2LL;
            *(_QWORD *)&v61[16] = v59;
            *(_OWORD *)&v61[24] = 1uLL;
            std::io::stdio::_eprint(v61);
            updated = uu_tail::follow::files::FileHandling::update_reader((__int64)v56, v54, v55);
          }
        }
        else
        {
          *(_QWORD *)&v45 = uucore::util_name(v23, v24);
          *(_OWORD *)v59 = v45;
          v57 = v59;
          v58 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v61 = &unk_1BBE20;
          *(_QWORD *)&v61[8] = 2LL;
          *(_QWORD *)&v61[16] = &v57;
          *(_OWORD *)&v61[24] = 1uLL;
          std::io::stdio::_eprint(v61);
          *(_QWORD *)v59 = 0LL;
          *(_OWORD *)&v59[8] = v64;
          v60 = 1;
          v57 = v59;
          v58 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v61 = &unk_1BBF58;
          *(_QWORD *)&v61[8] = 2LL;
          *(_QWORD *)&v61[16] = &v57;
          *(_OWORD *)&v61[24] = 1uLL;
          std::io::stdio::_eprint(v61);
          updated = uu_tail::follow::files::FileHandling::update_reader((__int64)v56, v54, v55);
        }
      }
      else
      {
        *(_QWORD *)&v46 = uucore::util_name(v23, v24);
        *(_OWORD *)v59 = v46;
        v57 = v59;
        v58 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBE20;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        *(_QWORD *)v59 = 0LL;
        *(_OWORD *)&v59[8] = v64;
        v60 = 1;
        v57 = v59;
        v58 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBF38;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        updated = uu_tail::follow::files::FileHandling::update_reader((__int64)v56, v54, v55);
      }
      if ( updated )
        goto LABEL_71;
      goto LABEL_81;
    }
    v23 = v56;
    v24 = v54;
    v25 = uu_tail::follow::files::FileHandling::get((__int64)v56);
    if ( *(_DWORD *)v25 == 2 )
    {
      if ( v22 == 4096 )
      {
LABEL_38:
        *(_QWORD *)&v26 = uucore::util_name(v23, v24);
        *(_OWORD *)v59 = v26;
        v57 = v59;
        v58 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBE20;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        *(_QWORD *)v59 = 0LL;
        *(_OWORD *)&v59[8] = v64;
        v60 = 1;
        v57 = v59;
        v58 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBF58;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        updated = uu_tail::follow::files::FileHandling::update_reader((__int64)v56, v54, v55);
        if ( !updated )
          goto LABEL_81;
LABEL_71:
        v47 = v62;
        v62[1] = updated;
        v47[2] = v28;
        *v47 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
        goto LABEL_72;
      }
      if ( *(_BYTE *)(a4 + 72) )
      {
        v29 = *(_BYTE *)(a2 + 142);
        if ( v29 != 2 && (v29 & 1) == 0 )
        {
          *(_QWORD *)&v30 = uucore::util_name(v56, v54);
          *(_OWORD *)v59 = v30;
          v57 = v59;
          v58 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v61 = &unk_1BBE20;
          *(_QWORD *)&v61[8] = 2LL;
          *(_QWORD *)&v61[16] = &v57;
          *(_OWORD *)&v61[24] = 1uLL;
          std::io::stdio::_eprint(v61);
          *(_QWORD *)v59 = 0LL;
          *(_OWORD *)&v59[8] = v64;
          v60 = 1;
          v57 = v59;
          v58 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v61 = &unk_1BBFD8;
          *(_QWORD *)&v61[8] = 2LL;
          *(_QWORD *)&v61[16] = &v57;
          *(_OWORD *)&v61[24] = 1uLL;
          std::io::stdio::_eprint(v61);
          if ( *(_DWORD *)a2 == 3 )
            core::option::unwrap_failed(&off_1BC0B0);
          (*(void (__fastcall **)(_BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)(a2 + 24) + 32LL))(
            v61,
            *(_QWORD *)(a2 + 16),
            v54,
            v55);
          core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(v61);
          uu_tail::follow::files::FileHandling::remove(v61);
          core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v61, v56);
          if ( !uu_tail::follow::files::FileHandling::no_files_remaining((__int64)v56, a4) )
            goto LABEL_82;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v59);
          *(_QWORD *)&v61[16] = *(_QWORD *)&v59[16];
          *(_OWORD *)v61 = *(_OWORD *)v59;
          *(_DWORD *)&v61[24] = 1;
          updated = alloc::boxed::Box<T>::new(v61);
          v28 = &off_1BBDB0;
          goto LABEL_71;
        }
        goto LABEL_85;
      }
    }
    else
    {
      if ( v22 == 4096 )
        goto LABEL_51;
      v49 = *(_DWORD *)(v25 + 56) & 0xF000;
      if ( v49 != 4096 && v49 != 0x8000 && v49 != 0x2000 )
        goto LABEL_82;
      if ( !*(_QWORD *)(v25 + 200) )
      {
LABEL_85:
        *(_QWORD *)&v52 = uucore::util_name(v56, v54);
        *(_OWORD *)v59 = v52;
        v57 = v59;
        v58 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBE20;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        *(_QWORD *)v59 = 0LL;
        *(_OWORD *)&v59[8] = v64;
        v60 = 1;
        v57 = v59;
        v58 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v61 = &unk_1BBFB8;
        *(_QWORD *)&v61[8] = 2LL;
        *(_QWORD *)&v61[16] = &v57;
        *(_OWORD *)&v61[24] = 1uLL;
        std::io::stdio::_eprint(v61);
        goto LABEL_82;
      }
      uu_tail::follow::files::FileHandling::reset_reader((__int64)v56);
    }
LABEL_82:
    memcpy(v61, dest, 0xB0uLL);
    uu_tail::follow::files::FileHandling::update_metadata((__int64)v56, v54, v55, (__int64 *)v61);
    goto LABEL_83;
  }
  if ( v14 == 3 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 142) - 1) < 2u )
      goto LABEL_84;
    v34 = v8 + 24 * v4 - 24;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v61, v34);
    *(_QWORD *)&src[16] = *(_QWORD *)&v61[16];
    *(_OWORD *)src = *(_OWORD *)v61;
    alloc::vec::Vec<T,A>::push(&v65, src);
    uu_tail::follow::files::FileHandling::remove(v61);
    v35 = *(_QWORD *)(v34 + 8);
    v36 = *(_QWORD *)(v34 + 16);
    uu_tail::follow::files::PathData::from_other_with_path(src, (__int64 *)v61, v35, v36);
    memcpy(v61, src, sizeof(v61));
    if ( *v56 == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_1BC0C8);
    v37 = <std::path::PathBuf as core::cmp::PartialEq>::eq(
            *(_QWORD *)(a2 + 64),
            *(_QWORD *)(a2 + 72),
            *(_QWORD *)(v8 + 8),
            *(_QWORD *)(v8 + 16));
    uu_tail::follow::files::FileHandling::insert((__int64)v56, v35, v36, v61, v37);
    if ( *(_DWORD *)a2 == 3 )
    {
      v53 = &off_1BC0E0;
      goto LABEL_92;
    }
    v38 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v38);
    if ( *(_DWORD *)a2 == 3 )
    {
      v53 = &off_1BC0F8;
      goto LABEL_92;
    }
    v39 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), v35, v36);
    if ( !v39 )
      goto LABEL_84;
    v41 = v62;
    v62[1] = v39;
    v41[2] = v40;
    *v41 = 0x8000000000000000LL;
LABEL_72:
    core::ptr::drop_in_place<alloc::string::String>(v63);
    return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v65);
  }
  if ( v14 != 2 )
    goto LABEL_84;
LABEL_6:
  v11 = *(_BYTE *)(a2 + 142);
  if ( (v11 & 1) != 0 )
  {
    if ( *(_BYTE *)(a4 + 72) )
    {
      mut_metadata = uu_tail::follow::files::FileHandling::get_mut_metadata((__int64)v56);
      if ( mut_metadata )
      {
        v16 = mut_metadata[14] & 0xF000;
        if ( v16 == 4096 || v16 == 0x2000 || v16 == 0x8000 )
        {
          if ( *(_QWORD *)(uu_tail::follow::files::FileHandling::get((__int64)v56) + 200) )
          {
            *(_QWORD *)&v17 = uucore::util_name(v56, v54);
            *(_OWORD *)src = v17;
            *(_QWORD *)v59 = src;
            *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v61 = &unk_1BBE20;
            *(_QWORD *)&v61[8] = 2LL;
            *(_QWORD *)&v61[16] = v59;
            *(_OWORD *)&v61[24] = 1uLL;
            std::io::stdio::_eprint(v61);
            *(_QWORD *)v59 = 0LL;
            *(_OWORD *)&v59[8] = v64;
            v60 = 1;
            *(_QWORD *)v61 = v59;
            *(_QWORD *)&v61[8] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v61[16] = &off_1BC138;
            *(_QWORD *)&v61[24] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v61[32] = &off_1BC128;
            *(_QWORD *)&v61[40] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)src = &unk_1BBFF8;
            *(_QWORD *)&src[8] = 4LL;
            *(_QWORD *)&src[32] = 0LL;
            *(_QWORD *)&src[16] = v61;
            *(_QWORD *)&src[24] = 3LL;
            std::io::stdio::_eprint(src);
          }
        }
      }
      if ( !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v54, v55) )
        goto LABEL_49;
      v18 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v8, v18, *(_QWORD *)(a2 + 48)) )
        goto LABEL_49;
      *(_QWORD *)&v19 = uucore::util_name(v8, v18);
      *(_OWORD *)src = v19;
      *(_QWORD *)v59 = src;
      *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v61 = &unk_1BBE20;
      *(_QWORD *)&v61[8] = 2LL;
      *(_QWORD *)&v61[16] = v59;
      *(_OWORD *)&v61[24] = 1uLL;
      std::io::stdio::_eprint(v61);
      *(_QWORD *)v61 = &off_1BC038;
      *(_QWORD *)&v61[8] = 1LL;
      *(_QWORD *)&v61[16] = 8LL;
      *(_OWORD *)&v61[24] = 0LL;
      std::io::stdio::_eprint(v61);
      *(_QWORD *)&v20 = uucore::util_name(v61, v18);
      *(_OWORD *)src = v20;
      *(_QWORD *)v59 = src;
      *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v61 = &unk_1BBE20;
      *(_QWORD *)&v61[8] = 2LL;
      *(_QWORD *)&v61[16] = v59;
      *(_OWORD *)&v61[24] = 1uLL;
      std::io::stdio::_eprint(v61);
      *(_QWORD *)src = &off_1BBEB0;
      *(_QWORD *)&src[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v61 = &unk_1BC048;
      *(_QWORD *)&v61[8] = 2LL;
      *(_QWORD *)&v61[16] = src;
      *(_OWORD *)&v61[24] = 1uLL;
      std::io::stdio::_eprint(v61);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v61, v8);
      *(_QWORD *)&src[16] = *(_QWORD *)&v61[16];
      *(_OWORD *)src = *(_OWORD *)v61;
      alloc::vec::Vec<T,A>::push(a2 + 32, src);
      if ( *(_DWORD *)a2 != 3 )
      {
        v21 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v21);
LABEL_49:
        uu_tail::follow::files::FileHandling::reset_reader((__int64)v56);
        goto LABEL_84;
      }
      v53 = &off_1BC148;
LABEL_92:
      core::option::unwrap_failed(v53);
    }
    *(_QWORD *)&v31 = uucore::util_name(v63, v9);
    *(_OWORD *)src = v31;
    *(_QWORD *)v59 = src;
    *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v61 = &unk_1BBE20;
    *(_QWORD *)&v61[8] = 2LL;
    *(_QWORD *)&v61[16] = v59;
    *(_OWORD *)&v61[24] = 1uLL;
    std::io::stdio::_eprint(v61);
    *(_QWORD *)src = v63;
    *(_QWORD *)&src[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[16] = &off_1BC128;
    *(_QWORD *)&src[24] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v61 = &unk_1BC068;
    *(_QWORD *)&v61[8] = 3LL;
    *(_QWORD *)&v61[16] = src;
    *(_OWORD *)&v61[24] = 2uLL;
    std::io::stdio::_eprint(v61);
    if ( (*(_BYTE *)(a2 + 141) == 0) | uu_tail::follow::files::FileHandling::files_remaining((__int64)v56) )
      goto LABEL_49;
    <T as alloc::slice::hack::ConvertVec>::to_vec(src);
    *(_QWORD *)&v61[16] = *(_QWORD *)&src[16];
    *(_OWORD *)v61 = *(_OWORD *)src;
    *(_DWORD *)&v61[24] = 1;
    v43 = alloc::boxed::Box<T>::new(v61);
    v44 = v62;
    v62[1] = v43;
    v44[2] = &off_1BBDB0;
    *v44 = 0x8000000000000000LL;
    goto LABEL_72;
  }
  if ( v11 == 2 || !*(_BYTE *)(a2 + 140) )
    goto LABEL_84;
  if ( *(_DWORD *)a2 == 3 )
  {
    v53 = &off_1BC110;
    goto LABEL_92;
  }
  v12 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v12);
  uu_tail::follow::files::FileHandling::remove(v61);
  core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v61, v56);
LABEL_84:
  v51 = v62;
  v62[2] = v66;
  *v51 = v65;
  return core::ptr::drop_in_place<alloc::string::String>(v63);
}
