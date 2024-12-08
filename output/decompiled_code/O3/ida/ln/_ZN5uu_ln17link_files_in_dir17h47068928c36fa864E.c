__int64 __fastcall uu_ln::link_files_in_dir(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int128 v12; // rax
  __int64 v13; // rax
  __int128 v14; // rax
  __int64 v15; // rbp
  __int128 *v16; // r12
  __int128 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // rax
  __int128 v23; // rax
  __int128 v24; // rax
  __int64 v26; // rbx
  bool v27; // [rsp+Fh] [rbp-129h]
  __int128 v28; // [rsp+10h] [rbp-128h] BYREF
  __int128 v29; // [rsp+20h] [rbp-118h]
  __int128 v30; // [rsp+30h] [rbp-108h]
  __int128 v31; // [rsp+40h] [rbp-F8h] BYREF
  __int128 *v32; // [rsp+50h] [rbp-E8h]
  __int64 (__fastcall *v33)(); // [rsp+58h] [rbp-E0h]
  int v34; // [rsp+6Ch] [rbp-CCh]
  __int128 v35; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+80h] [rbp-B8h] BYREF
  __int128 *v37; // [rsp+90h] [rbp-A8h]
  __int64 (__fastcall *v38)(); // [rsp+98h] [rbp-A0h]
  _BYTE v39[8]; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-90h]
  __int64 v41; // [rsp+B8h] [rbp-80h]
  _QWORD v42[2]; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v43[6]; // [rsp+D0h] [rbp-68h] BYREF

  v41 = a5;
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    std::path::Path::to_path_buf(&v28, a3, a4);
    *((_QWORD *)&v29 + 1) = 0x8000000000000000LL;
    return alloc::boxed::Box<T>::new(&v28);
  }
  std::thread::local::LocalKey<T>::try_with(&v28);
  v7 = core::result::Result<T,E>::expect(&v28);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(&v28, a2, v7, v8);
  v43[2] = v30;
  v43[1] = v29;
  v43[0] = v28;
  v42[0] = a1;
  v42[1] = a1 + 24 * a2;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v42);
  if ( !v9 )
    goto LABEL_28;
  v10 = v9;
  v27 = *(_BYTE *)(v41 + 52) != 0 && *(_BYTE *)(v41 + 54) == 2;
  LOBYTE(v9) = 1;
  v34 = v9;
  do
  {
    if ( v27 && (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
    {
      if ( (unsigned __int8)std::path::Path::is_file(a3, a4) )
      {
        v11 = std::fs::remove_file(a3, a4);
        if ( v11 )
        {
          *(_QWORD *)&v35 = v11;
          *(_QWORD *)&v12 = uucore::util_name();
          v31 = v12;
          *(_QWORD *)&v36 = &v31;
          *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v28 = &unk_12D6A8;
          *((_QWORD *)&v28 + 1) = 2LL;
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v29 = &v36;
          *((_QWORD *)&v29 + 1) = 1LL;
          std::io::stdio::_eprint(&v28);
          *(_QWORD *)&v31 = 1LL;
          *((_QWORD *)&v31 + 1) = a3;
          v32 = a4;
          LOBYTE(v33) = 1;
          *(_QWORD *)&v36 = &v31;
          *((_QWORD *)&v36 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v37 = &v35;
          v38 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&v28 = &off_12D6C8;
          *((_QWORD *)&v28 + 1) = 3LL;
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v29 = &v36;
          *((_QWORD *)&v29 + 1) = 2LL;
          std::io::stdio::_eprint(&v28);
          core::ptr::drop_in_place<std::io::error::Error>(v35);
        }
      }
      if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
      {
        v13 = std::fs::remove_dir(a3, a4);
        if ( v13 )
        {
          *(_QWORD *)&v35 = v13;
          *(_QWORD *)&v14 = uucore::util_name();
          v31 = v14;
          *(_QWORD *)&v36 = &v31;
          *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v28 = &unk_12D6A8;
          *((_QWORD *)&v28 + 1) = 2LL;
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v29 = &v36;
          *((_QWORD *)&v29 + 1) = 1LL;
          std::io::stdio::_eprint(&v28);
          *(_QWORD *)&v31 = 1LL;
          *((_QWORD *)&v31 + 1) = a3;
          v32 = a4;
          LOBYTE(v33) = 1;
          *(_QWORD *)&v36 = &v31;
          *((_QWORD *)&v36 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v37 = &v35;
          v38 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&v28 = &off_12D6C8;
          *((_QWORD *)&v28 + 1) = 3LL;
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v29 = &v36;
          *((_QWORD *)&v29 + 1) = 2LL;
          std::io::stdio::_eprint(&v28);
          core::ptr::drop_in_place<std::io::error::Error>(v35);
        }
      }
      std::path::Path::to_path_buf(v39, a3, a4);
    }
    else
    {
      v15 = *(_QWORD *)(v10 + 8);
      v16 = *(__int128 **)(v10 + 16);
      std::sys::os_str::bytes::Slice::to_str(&v28, v15, v16);
      if ( (_QWORD)v28 )
      {
        *(_QWORD *)&v17 = uucore::util_name();
        v31 = v17;
        *(_QWORD *)&v36 = &v31;
        *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v28 = &unk_12D6A8;
        *((_QWORD *)&v28 + 1) = 2LL;
        *(_QWORD *)&v30 = 0LL;
        *(_QWORD *)&v29 = &v36;
        *((_QWORD *)&v29 + 1) = 1LL;
        std::io::stdio::_eprint(&v28);
        *(_QWORD *)&v31 = 1LL;
        *((_QWORD *)&v31 + 1) = v15;
        v32 = v16;
        LOBYTE(v33) = 1;
        *(_QWORD *)&v36 = &v31;
        *((_QWORD *)&v36 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v28 = &off_12D6F8;
        *((_QWORD *)&v28 + 1) = 2LL;
        *(_QWORD *)&v30 = 0LL;
        *(_QWORD *)&v29 = &v36;
        *((_QWORD *)&v29 + 1) = 1LL;
        std::io::stdio::_eprint(&v28);
        v34 = 0;
        goto LABEL_4;
      }
      v18 = *((_QWORD *)&v28 + 1);
      v19 = v29;
      v20 = std::path::Path::file_name(*((_QWORD *)&v28 + 1), v29);
      if ( v20 )
        std::path::Path::join(v39, a3, a4, v20, v21);
      else
        std::path::Path::join(v39, a3, a4, v18, v19);
    }
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v43, v39) )
    {
      *(_QWORD *)&v22 = uucore::util_name();
      v31 = v22;
      *(_QWORD *)&v36 = &v31;
      *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &unk_12D6A8;
      *((_QWORD *)&v28 + 1) = 2LL;
      *(_QWORD *)&v30 = 0LL;
      *(_QWORD *)&v29 = &v36;
      *((_QWORD *)&v29 + 1) = 1LL;
      std::io::stdio::_eprint(&v28);
      v35 = v40;
      v36 = *(_OWORD *)(v10 + 8);
      *(_QWORD *)&v31 = &v35;
      *((_QWORD *)&v31 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v32 = &v36;
      v33 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &off_12D718;
      *((_QWORD *)&v28 + 1) = 3LL;
      *(_QWORD *)&v30 = 0LL;
      *(_QWORD *)&v29 = &v31;
      *((_QWORD *)&v29 + 1) = 2LL;
      std::io::stdio::_eprint(&v28);
LABEL_23:
      v34 = 0;
      goto LABEL_24;
    }
    *(_QWORD *)&v23 = uu_ln::link(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), v40, *((_QWORD *)&v40 + 1), v41);
    if ( (_QWORD)v23 )
    {
      v35 = v23;
      *(_QWORD *)&v24 = uucore::util_name();
      v31 = v24;
      *(_QWORD *)&v36 = &v31;
      *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &unk_12D6A8;
      *((_QWORD *)&v28 + 1) = 2LL;
      *(_QWORD *)&v30 = 0LL;
      *(_QWORD *)&v29 = &v36;
      *((_QWORD *)&v29 + 1) = 1LL;
      std::io::stdio::_eprint(&v28);
      *(_QWORD *)&v31 = &v35;
      *((_QWORD *)&v31 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &unk_12D748;
      *((_QWORD *)&v28 + 1) = 2LL;
      *(_QWORD *)&v30 = 0LL;
      *(_QWORD *)&v29 = &v31;
      *((_QWORD *)&v29 + 1) = 1LL;
      std::io::stdio::_eprint(&v28);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v35, *((_QWORD *)&v35 + 1));
      goto LABEL_23;
    }
LABEL_24:
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v28, v39);
    v32 = (__int128 *)v29;
    v31 = v28;
    hashbrown::map::HashMap<K,V,S,A>::insert(v43, &v31);
    core::ptr::drop_in_place<std::path::PathBuf>(v39);
LABEL_4:
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v42);
  }
  while ( v10 );
  if ( (v34 & 1) == 0 )
  {
    *((_QWORD *)&v29 + 1) = 0x8000000000000001LL;
    v26 = alloc::boxed::Box<T>::new(&v28);
    goto LABEL_29;
  }
LABEL_28:
  v26 = 0LL;
LABEL_29:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v43);
  return v26;
}
