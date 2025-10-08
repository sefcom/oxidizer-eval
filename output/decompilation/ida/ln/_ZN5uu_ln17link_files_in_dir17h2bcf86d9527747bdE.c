__int64 __fastcall uu_ln::link_files_in_dir(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  char v12; // bl
  __int64 v13; // rbp
  __int64 v14; // rax
  __int128 v15; // rax
  __int64 v16; // r15
  __int128 *v17; // r13
  __int128 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int128 v24; // rax
  __int128 v25; // rax
  __int128 v26; // rax
  __int128 v27; // rax
  __int64 v29; // rbx
  char v30; // [rsp+Fh] [rbp-129h]
  __int128 *v31; // [rsp+10h] [rbp-128h]
  __int128 v32; // [rsp+18h] [rbp-120h] BYREF
  __int128 v33; // [rsp+28h] [rbp-110h]
  __int128 v34; // [rsp+38h] [rbp-100h]
  __int128 v35; // [rsp+50h] [rbp-E8h] BYREF
  __int128 *v36; // [rsp+60h] [rbp-D8h]
  __int64 (__fastcall *v37)(); // [rsp+68h] [rbp-D0h]
  __int128 v38; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+80h] [rbp-B8h] BYREF
  __int128 *v40; // [rsp+90h] [rbp-A8h]
  __int64 (__fastcall *v41)(); // [rsp+98h] [rbp-A0h]
  __int64 v42; // [rsp+A0h] [rbp-98h] BYREF
  char v43[8]; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-88h]
  __int64 v45; // [rsp+C0h] [rbp-78h]
  __int64 v46; // [rsp+C8h] [rbp-70h]
  _OWORD v47[6]; // [rsp+D0h] [rbp-68h] BYREF

  v45 = a5;
  v7 = a1;
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    std::path::Path::to_path_buf((char *)&v32 + 8, a3, a4);
    *(_QWORD *)&v32 = 0LL;
    return alloc::boxed::Box<T>::new(&v32);
  }
  v8 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(&v32, a2, v8, v9);
  v47[2] = v34;
  v47[1] = v33;
  v47[0] = v32;
  if ( !a2 )
  {
LABEL_32:
    v29 = 0LL;
    goto LABEL_34;
  }
  v31 = a4;
  v10 = *(_BYTE *)(v45 + 54) == 2;
  v46 = a1 + 24 * a2;
  v30 = *(_BYTE *)(v45 + 52) & v10;
  v11 = a1 + 24;
  v12 = 1;
  while ( 1 )
  {
    v13 = v11;
    if ( v30 )
    {
      if ( (unsigned __int8)std::path::Path::is_symlink(a3, v31) )
        break;
    }
    v16 = *(_QWORD *)(v7 + 8);
    v17 = *(__int128 **)(v7 + 16);
    core::str::converts::from_utf8(&v32, v16, v17);
    if ( (v32 & 1) == 0 )
    {
      v19 = *((_QWORD *)&v32 + 1);
      v20 = v33;
      v21 = std::path::Path::file_name(*((_QWORD *)&v32 + 1), v33);
      if ( v21 )
        std::path::Path::join(v43, a3, v31, v21, v22);
      else
        std::path::Path::join(v43, a3, v31, v19, v20);
      goto LABEL_22;
    }
    *(_QWORD *)&v18 = uucore::util_name();
    v35 = v18;
    *(_QWORD *)&v39 = &v35;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &unk_F6038;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v39;
    *((_QWORD *)&v33 + 1) = 1LL;
    std::io::stdio::_eprint(&v32);
    *(_QWORD *)&v35 = 1LL;
    *((_QWORD *)&v35 + 1) = v16;
    v36 = v17;
    LOBYTE(v37) = 1;
    *(_QWORD *)&v39 = &v35;
    *((_QWORD *)&v39 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &off_F6088;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v39;
    *((_QWORD *)&v33 + 1) = 1LL;
    std::io::stdio::_eprint(&v32);
    v12 = 0;
    if ( v13 == v46 )
      goto LABEL_33;
LABEL_4:
    v11 = v13 + 24;
    v7 = v13;
  }
  if ( (unsigned __int8)std::path::Path::is_file(a3, v31) )
  {
    v14 = std::fs::remove_file(a3, v31);
    v42 = v14;
    if ( v14 )
    {
      *(_QWORD *)&v38 = v14;
      *(_QWORD *)&v15 = uucore::util_name();
      v35 = v15;
      *(_QWORD *)&v39 = &v35;
      *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_F6038;
      *((_QWORD *)&v32 + 1) = 2LL;
      *(_QWORD *)&v34 = 0LL;
      *(_QWORD *)&v33 = &v39;
      *((_QWORD *)&v33 + 1) = 1LL;
      std::io::stdio::_eprint(&v32);
      *(_QWORD *)&v35 = 1LL;
      *((_QWORD *)&v35 + 1) = a3;
      v36 = v31;
      LOBYTE(v37) = 1;
      *(_QWORD *)&v39 = &v35;
      *((_QWORD *)&v39 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v40 = &v38;
      v41 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &off_F6058;
      *((_QWORD *)&v32 + 1) = 3LL;
      *(_QWORD *)&v34 = 0LL;
      *(_QWORD *)&v33 = &v39;
      *((_QWORD *)&v33 + 1) = 2LL;
      std::io::stdio::_eprint(&v32);
      core::ptr::drop_in_place<std::io::error::Error>(&v38);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v42);
    }
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a3, v31) )
  {
    v23 = std::fs::remove_dir(a3, v31);
    v42 = v23;
    if ( v23 )
    {
      *(_QWORD *)&v38 = v23;
      *(_QWORD *)&v24 = uucore::util_name();
      v35 = v24;
      *(_QWORD *)&v39 = &v35;
      *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_F6038;
      *((_QWORD *)&v32 + 1) = 2LL;
      *(_QWORD *)&v34 = 0LL;
      *(_QWORD *)&v33 = &v39;
      *((_QWORD *)&v33 + 1) = 1LL;
      std::io::stdio::_eprint(&v32);
      *(_QWORD *)&v35 = 1LL;
      *((_QWORD *)&v35 + 1) = a3;
      v36 = v31;
      LOBYTE(v37) = 1;
      *(_QWORD *)&v39 = &v35;
      *((_QWORD *)&v39 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v40 = &v38;
      v41 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &off_F6058;
      *((_QWORD *)&v32 + 1) = 3LL;
      *(_QWORD *)&v34 = 0LL;
      *(_QWORD *)&v33 = &v39;
      *((_QWORD *)&v33 + 1) = 2LL;
      std::io::stdio::_eprint(&v32);
      core::ptr::drop_in_place<std::io::error::Error>(&v38);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v42);
    }
  }
  std::path::Path::to_path_buf(v43, a3, v31);
LABEL_22:
  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v47, v43) )
  {
    *(_QWORD *)&v25 = uucore::util_name();
    v35 = v25;
    *(_QWORD *)&v39 = &v35;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &unk_F6038;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v39;
    *((_QWORD *)&v33 + 1) = 1LL;
    std::io::stdio::_eprint(&v32);
    v38 = v44;
    v39 = *(_OWORD *)(v7 + 8);
    *(_QWORD *)&v35 = &v38;
    *((_QWORD *)&v35 + 1) = <std::path::Display as core::fmt::Display>::fmt;
    v36 = &v39;
    v37 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &off_F60A8;
    *((_QWORD *)&v32 + 1) = 3LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v35;
    *((_QWORD *)&v33 + 1) = 2LL;
    std::io::stdio::_eprint(&v32);
LABEL_26:
    v12 = 0;
    goto LABEL_27;
  }
  *(_QWORD *)&v26 = uu_ln::link(*(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16), v44, *((_QWORD *)&v44 + 1), v45);
  if ( (_QWORD)v26 )
  {
    v38 = v26;
    *(_QWORD *)&v27 = uucore::util_name();
    v35 = v27;
    *(_QWORD *)&v39 = &v35;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &unk_F6038;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v39;
    *((_QWORD *)&v33 + 1) = 1LL;
    std::io::stdio::_eprint(&v32);
    *(_QWORD *)&v35 = &v38;
    *((_QWORD *)&v35 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &unk_F60D8;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v35;
    *((_QWORD *)&v33 + 1) = 1LL;
    std::io::stdio::_eprint(&v32);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      v38,
      *((_QWORD *)&v38 + 1));
    goto LABEL_26;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
    0LL,
    *((_QWORD *)&v26 + 1));
LABEL_27:
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v32, v44, *((_QWORD *)&v44 + 1));
  v36 = (__int128 *)v33;
  v35 = v32;
  hashbrown::map::HashMap<K,V,S,A>::insert(v47, &v35);
  core::ptr::drop_in_place<std::path::PathBuf>(v43);
  if ( v13 != v46 )
    goto LABEL_4;
  if ( (v12 & 1) != 0 )
    goto LABEL_32;
LABEL_33:
  *(_QWORD *)&v32 = 1LL;
  v29 = alloc::boxed::Box<T>::new(&v32);
LABEL_34:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v47);
  return v29;
}