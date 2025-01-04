__int64 __fastcall uu_tail::follow::watch::Observer::handle_event(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  char v11; // al
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 mut_metadata; // rax
  int v16; // ecx
  __int128 v17; // rax
  __int128 v18; // rax
  __int128 v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rax
  __int128 v23; // rax
  __int64 updated; // rax
  __int64 (__fastcall **v25)(); // rdx
  char v26; // al
  __int128 v27; // rax
  __int128 v28; // rax
  int v29; // ecx
  __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r14
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int128 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int128 v42; // rax
  __int128 v43; // rax
  _QWORD *v44; // rcx
  int v46; // ecx
  __int128 v47; // rax
  _OWORD *v48; // rcx
  __int128 v49; // rax
  char **v50; // rdi
  __int64 v51; // [rsp+8h] [rbp-310h]
  __int64 v52; // [rsp+10h] [rbp-308h]
  _BYTE *v53; // [rsp+20h] [rbp-2F8h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+28h] [rbp-2F0h]
  _BYTE v55[24]; // [rsp+30h] [rbp-2E8h] BYREF
  char v56; // [rsp+48h] [rbp-2D0h]
  _BYTE v57[216]; // [rsp+50h] [rbp-2C8h] BYREF
  _QWORD *v58; // [rsp+128h] [rbp-1F0h]
  char v59[8]; // [rsp+130h] [rbp-1E8h] BYREF
  __int128 v60; // [rsp+138h] [rbp-1E0h]
  __int128 v61; // [rsp+148h] [rbp-1D0h] BYREF
  __int64 v62; // [rsp+158h] [rbp-1C0h]
  _BYTE src[216]; // [rsp+160h] [rbp-1B8h] BYREF
  _QWORD dest[28]; // [rsp+238h] [rbp-E0h] BYREF

  v58 = a1;
  v4 = *(_QWORD *)(a3 + 16);
  if ( !v4 )
    core::option::unwrap_failed(&off_1BC098);
  v7 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v61 = 0LL;
  *((_QWORD *)&v61 + 1) = 8LL;
  v62 = 0LL;
  v8 = (_QWORD *)(a2 + 56);
  v51 = *(_QWORD *)(v7 + 8);
  v52 = *(_QWORD *)(v7 + 16);
  v9 = ((__int64 (*)(void))uu_tail::follow::files::FileHandling::get)();
  <alloc::string::String as core::clone::Clone>::clone(v59, v9 + 176);
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
    std::fs::metadata(src, v51, v52);
    if ( *(_DWORD *)src == 2 )
    {
LABEL_83:
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
      goto LABEL_84;
    }
    memcpy(dest, src, 0xB0uLL);
    v21 = dest[7] & 0xF000;
    if ( v21 == 0x2000 || v21 == 0x8000 )
    {
      v22 = uu_tail::follow::files::FileHandling::get(v8, v51, v52);
      if ( *(_DWORD *)v22 == 2 )
        goto LABEL_38;
LABEL_51:
      v29 = *(_DWORD *)(v22 + 56) & 0xF000;
      if ( v29 == 4096 || v29 == 0x2000 || v29 == 0x8000 )
      {
        if ( *(_QWORD *)(v22 + 200) )
        {
          v30 = v22;
          if ( (unsigned __int8)<notify::event::EventKind as core::cmp::PartialEq>::eq(a3 + 32)
            || *(_BYTE *)(a2 + 141) && *(_QWORD *)(v30 + 40) != dest[5] )
          {
            *(_QWORD *)&v39 = uucore::util_name();
            *(_OWORD *)v55 = v39;
            v53 = v55;
            v54 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v57 = &unk_1BBE20;
            *(_QWORD *)&v57[8] = 2LL;
            *(_QWORD *)&v57[16] = &v53;
            *(_OWORD *)&v57[24] = 1uLL;
            std::io::stdio::_eprint(v57);
            *(_QWORD *)v55 = 0LL;
            *(_OWORD *)&v55[8] = v60;
            v56 = 1;
            v53 = v55;
            v54 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v57 = &unk_1BBF78;
            *(_QWORD *)&v57[8] = 2LL;
            *(_QWORD *)&v57[16] = &v53;
            *(_OWORD *)&v57[24] = 1uLL;
            std::io::stdio::_eprint(v57);
            updated = uu_tail::follow::files::FileHandling::update_reader(v8, v51, v52);
          }
          else
          {
            <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v57, v30, dest);
            updated = *(_QWORD *)v57;
            if ( *(_QWORD *)v57 )
            {
              v25 = *(__int64 (__fastcall ***)())&v57[8];
              goto LABEL_71;
            }
            if ( !v57[8] )
            {
LABEL_81:
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v57, v7);
              *(_QWORD *)&v55[16] = *(_QWORD *)&v57[16];
              *(_OWORD *)v55 = *(_OWORD *)v57;
              alloc::vec::Vec<T,A>::push(&v61, v55);
              goto LABEL_82;
            }
            *(_QWORD *)&v47 = uucore::util_name();
            *(_OWORD *)v55 = v47;
            v53 = v55;
            v54 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v57 = &unk_1BBE20;
            *(_QWORD *)&v57[8] = 2LL;
            *(_QWORD *)&v57[16] = &v53;
            *(_OWORD *)&v57[24] = 1uLL;
            std::io::stdio::_eprint(v57);
            *(_QWORD *)v55 = v59;
            *(_QWORD *)&v55[8] = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v57 = &unk_1BBF98;
            *(_QWORD *)&v57[8] = 2LL;
            *(_QWORD *)&v57[16] = v55;
            *(_OWORD *)&v57[24] = 1uLL;
            std::io::stdio::_eprint(v57);
            updated = uu_tail::follow::files::FileHandling::update_reader(v8, v51, v52);
          }
        }
        else
        {
          *(_QWORD *)&v42 = uucore::util_name();
          *(_OWORD *)v55 = v42;
          v53 = v55;
          v54 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v57 = &unk_1BBE20;
          *(_QWORD *)&v57[8] = 2LL;
          *(_QWORD *)&v57[16] = &v53;
          *(_OWORD *)&v57[24] = 1uLL;
          std::io::stdio::_eprint(v57);
          *(_QWORD *)v55 = 0LL;
          *(_OWORD *)&v55[8] = v60;
          v56 = 1;
          v53 = v55;
          v54 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v57 = &unk_1BBF58;
          *(_QWORD *)&v57[8] = 2LL;
          *(_QWORD *)&v57[16] = &v53;
          *(_OWORD *)&v57[24] = 1uLL;
          std::io::stdio::_eprint(v57);
          updated = uu_tail::follow::files::FileHandling::update_reader(v8, v51, v52);
        }
      }
      else
      {
        *(_QWORD *)&v43 = uucore::util_name();
        *(_OWORD *)v55 = v43;
        v53 = v55;
        v54 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBE20;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        *(_QWORD *)v55 = 0LL;
        *(_OWORD *)&v55[8] = v60;
        v56 = 1;
        v53 = v55;
        v54 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBF38;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        updated = uu_tail::follow::files::FileHandling::update_reader(v8, v51, v52);
      }
      if ( updated )
        goto LABEL_71;
      goto LABEL_81;
    }
    v22 = uu_tail::follow::files::FileHandling::get(v8, v51, v52);
    if ( *(_DWORD *)v22 == 2 )
    {
      if ( v21 == 4096 )
      {
LABEL_38:
        *(_QWORD *)&v23 = uucore::util_name();
        *(_OWORD *)v55 = v23;
        v53 = v55;
        v54 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBE20;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        *(_QWORD *)v55 = 0LL;
        *(_OWORD *)&v55[8] = v60;
        v56 = 1;
        v53 = v55;
        v54 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBF58;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        updated = uu_tail::follow::files::FileHandling::update_reader(v8, v51, v52);
        if ( !updated )
          goto LABEL_81;
LABEL_71:
        v44 = v58;
        v58[1] = updated;
        v44[2] = v25;
        *v44 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
        goto LABEL_72;
      }
      if ( *(_BYTE *)(a4 + 72) )
      {
        v26 = *(_BYTE *)(a2 + 142);
        if ( v26 != 2 && (v26 & 1) == 0 )
        {
          *(_QWORD *)&v27 = uucore::util_name();
          *(_OWORD *)v55 = v27;
          v53 = v55;
          v54 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v57 = &unk_1BBE20;
          *(_QWORD *)&v57[8] = 2LL;
          *(_QWORD *)&v57[16] = &v53;
          *(_OWORD *)&v57[24] = 1uLL;
          std::io::stdio::_eprint(v57);
          *(_QWORD *)v55 = 0LL;
          *(_OWORD *)&v55[8] = v60;
          v56 = 1;
          v53 = v55;
          v54 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v57 = &unk_1BBFD8;
          *(_QWORD *)&v57[8] = 2LL;
          *(_QWORD *)&v57[16] = &v53;
          *(_OWORD *)&v57[24] = 1uLL;
          std::io::stdio::_eprint(v57);
          if ( *(_DWORD *)a2 == 3 )
            core::option::unwrap_failed(&off_1BC0B0);
          (*(void (__fastcall **)(_BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)(a2 + 24) + 32LL))(
            v57,
            *(_QWORD *)(a2 + 16),
            v51,
            v52);
          core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(v57);
          uu_tail::follow::files::FileHandling::remove(v57);
          core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v57, v8);
          if ( !(unsigned __int8)uu_tail::follow::files::FileHandling::no_files_remaining(v8, a4) )
            goto LABEL_82;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v55);
          *(_QWORD *)&v57[16] = *(_QWORD *)&v55[16];
          *(_OWORD *)v57 = *(_OWORD *)v55;
          *(_DWORD *)&v57[24] = 1;
          updated = alloc::boxed::Box<T>::new(v57);
          v25 = &off_1BBDB0;
          goto LABEL_71;
        }
        goto LABEL_85;
      }
    }
    else
    {
      if ( v21 == 4096 )
        goto LABEL_51;
      v46 = *(_DWORD *)(v22 + 56) & 0xF000;
      if ( v46 != 4096 && v46 != 0x8000 && v46 != 0x2000 )
        goto LABEL_82;
      if ( !*(_QWORD *)(v22 + 200) )
      {
LABEL_85:
        *(_QWORD *)&v49 = uucore::util_name();
        *(_OWORD *)v55 = v49;
        v53 = v55;
        v54 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBE20;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        *(_QWORD *)v55 = 0LL;
        *(_OWORD *)&v55[8] = v60;
        v56 = 1;
        v53 = v55;
        v54 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v57 = &unk_1BBFB8;
        *(_QWORD *)&v57[8] = 2LL;
        *(_QWORD *)&v57[16] = &v53;
        *(_OWORD *)&v57[24] = 1uLL;
        std::io::stdio::_eprint(v57);
        goto LABEL_82;
      }
      uu_tail::follow::files::FileHandling::reset_reader(v8, v51, v52);
    }
LABEL_82:
    memcpy(v57, dest, 0xB0uLL);
    uu_tail::follow::files::FileHandling::update_metadata(v8, v51, v52, v57);
    goto LABEL_83;
  }
  if ( v14 == 3 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 142) - 1) < 2u )
      goto LABEL_84;
    v31 = v7 + 24 * v4 - 24;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v57, v31);
    *(_QWORD *)&src[16] = *(_QWORD *)&v57[16];
    *(_OWORD *)src = *(_OWORD *)v57;
    alloc::vec::Vec<T,A>::push(&v61, src);
    uu_tail::follow::files::FileHandling::remove(v57);
    v32 = *(_QWORD *)(v31 + 8);
    v33 = *(_QWORD *)(v31 + 16);
    uu_tail::follow::files::PathData::from_other_with_path(src);
    memcpy(v57, src, sizeof(v57));
    if ( *v8 == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_1BC0C8);
    v34 = <std::path::PathBuf as core::cmp::PartialEq>::eq(
            *(_QWORD *)(a2 + 64),
            *(_QWORD *)(a2 + 72),
            *(_QWORD *)(v7 + 8),
            *(_QWORD *)(v7 + 16));
    uu_tail::follow::files::FileHandling::insert(v8, v32, v33, v57, v34);
    if ( *(_DWORD *)a2 == 3 )
    {
      v50 = &off_1BC0E0;
      goto LABEL_92;
    }
    v35 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v35);
    if ( *(_DWORD *)a2 == 3 )
    {
      v50 = &off_1BC0F8;
      goto LABEL_92;
    }
    v36 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), v32, v33);
    if ( !v36 )
      goto LABEL_84;
    v38 = v58;
    v58[1] = v36;
    v38[2] = v37;
    *v38 = 0x8000000000000000LL;
LABEL_72:
    core::ptr::drop_in_place<alloc::string::String>(v59);
    return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v61);
  }
  if ( v14 != 2 )
    goto LABEL_84;
LABEL_6:
  v11 = *(_BYTE *)(a2 + 142);
  if ( (v11 & 1) != 0 )
  {
    if ( *(_BYTE *)(a4 + 72) )
    {
      mut_metadata = uu_tail::follow::files::FileHandling::get_mut_metadata(v8, v51, v52);
      if ( mut_metadata )
      {
        v16 = *(_DWORD *)(mut_metadata + 56) & 0xF000;
        if ( v16 == 4096 || v16 == 0x2000 || v16 == 0x8000 )
        {
          if ( *(_QWORD *)(uu_tail::follow::files::FileHandling::get(v8, v51, v52) + 200) )
          {
            *(_QWORD *)&v17 = uucore::util_name();
            *(_OWORD *)src = v17;
            *(_QWORD *)v55 = src;
            *(_QWORD *)&v55[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v57 = &unk_1BBE20;
            *(_QWORD *)&v57[8] = 2LL;
            *(_QWORD *)&v57[16] = v55;
            *(_OWORD *)&v57[24] = 1uLL;
            std::io::stdio::_eprint(v57);
            *(_QWORD *)v55 = 0LL;
            *(_OWORD *)&v55[8] = v60;
            v56 = 1;
            *(_QWORD *)v57 = v55;
            *(_QWORD *)&v57[8] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v57[16] = &off_1BC138;
            *(_QWORD *)&v57[24] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v57[32] = &off_1BC128;
            *(_QWORD *)&v57[40] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)src = &unk_1BBFF8;
            *(_QWORD *)&src[8] = 4LL;
            *(_QWORD *)&src[32] = 0LL;
            *(_QWORD *)&src[16] = v57;
            *(_QWORD *)&src[24] = 3LL;
            std::io::stdio::_eprint(src);
          }
        }
      }
      if ( !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v51, v52)
        || (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                              v7,
                              *(_QWORD *)(a2 + 40),
                              *(_QWORD *)(a2 + 48)) )
      {
        goto LABEL_49;
      }
      *(_QWORD *)&v18 = uucore::util_name();
      *(_OWORD *)src = v18;
      *(_QWORD *)v55 = src;
      *(_QWORD *)&v55[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v57 = &unk_1BBE20;
      *(_QWORD *)&v57[8] = 2LL;
      *(_QWORD *)&v57[16] = v55;
      *(_OWORD *)&v57[24] = 1uLL;
      std::io::stdio::_eprint(v57);
      *(_QWORD *)v57 = &off_1BC038;
      *(_QWORD *)&v57[8] = 1LL;
      *(_QWORD *)&v57[16] = 8LL;
      *(_OWORD *)&v57[24] = 0LL;
      std::io::stdio::_eprint(v57);
      *(_QWORD *)&v19 = uucore::util_name();
      *(_OWORD *)src = v19;
      *(_QWORD *)v55 = src;
      *(_QWORD *)&v55[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v57 = &unk_1BBE20;
      *(_QWORD *)&v57[8] = 2LL;
      *(_QWORD *)&v57[16] = v55;
      *(_OWORD *)&v57[24] = 1uLL;
      std::io::stdio::_eprint(v57);
      *(_QWORD *)src = &off_1BBEB0;
      *(_QWORD *)&src[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v57 = &unk_1BC048;
      *(_QWORD *)&v57[8] = 2LL;
      *(_QWORD *)&v57[16] = src;
      *(_OWORD *)&v57[24] = 1uLL;
      std::io::stdio::_eprint(v57);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v57, v7);
      *(_QWORD *)&src[16] = *(_QWORD *)&v57[16];
      *(_OWORD *)src = *(_OWORD *)v57;
      alloc::vec::Vec<T,A>::push(a2 + 32, src);
      if ( *(_DWORD *)a2 != 3 )
      {
        v20 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v20);
LABEL_49:
        uu_tail::follow::files::FileHandling::reset_reader(a2 + 56, v51, v52);
        goto LABEL_84;
      }
      v50 = &off_1BC148;
LABEL_92:
      core::option::unwrap_failed(v50);
    }
    *(_QWORD *)&v28 = uucore::util_name();
    *(_OWORD *)src = v28;
    *(_QWORD *)v55 = src;
    *(_QWORD *)&v55[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v57 = &unk_1BBE20;
    *(_QWORD *)&v57[8] = 2LL;
    *(_QWORD *)&v57[16] = v55;
    *(_OWORD *)&v57[24] = 1uLL;
    std::io::stdio::_eprint(v57);
    *(_QWORD *)src = v59;
    *(_QWORD *)&src[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[16] = &off_1BC128;
    *(_QWORD *)&src[24] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v57 = &unk_1BC068;
    *(_QWORD *)&v57[8] = 3LL;
    *(_QWORD *)&v57[16] = src;
    *(_OWORD *)&v57[24] = 2uLL;
    std::io::stdio::_eprint(v57);
    if ( (*(_BYTE *)(a2 + 141) == 0) | (unsigned __int8)uu_tail::follow::files::FileHandling::files_remaining(v8) )
      goto LABEL_49;
    <T as alloc::slice::hack::ConvertVec>::to_vec(src);
    *(_QWORD *)&v57[16] = *(_QWORD *)&src[16];
    *(_OWORD *)v57 = *(_OWORD *)src;
    *(_DWORD *)&v57[24] = 1;
    v40 = alloc::boxed::Box<T>::new(v57);
    v41 = v58;
    v58[1] = v40;
    v41[2] = &off_1BBDB0;
    *v41 = 0x8000000000000000LL;
    goto LABEL_72;
  }
  if ( v11 == 2 || !*(_BYTE *)(a2 + 140) )
    goto LABEL_84;
  if ( *(_DWORD *)a2 == 3 )
  {
    v50 = &off_1BC110;
    goto LABEL_92;
  }
  v12 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v12);
  uu_tail::follow::files::FileHandling::remove(v57);
  core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v57, v8);
LABEL_84:
  v48 = v58;
  v58[2] = v62;
  *v48 = v61;
  return core::ptr::drop_in_place<alloc::string::String>(v59);
}
