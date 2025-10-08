__int64 __fastcall uu_install::copy_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbx
  char v11; // bp
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rbx
  unsigned int v16; // ebp
  __int128 v17; // [rsp+0h] [rbp-168h] BYREF
  __int64 v18; // [rsp+10h] [rbp-158h]
  __int128 v19; // [rsp+18h] [rbp-150h] BYREF
  __int64 v20; // [rsp+28h] [rbp-140h]
  __int128 v21; // [rsp+30h] [rbp-138h] BYREF
  __int128 v22; // [rsp+40h] [rbp-128h]
  __int64 v23; // [rsp+50h] [rbp-118h]
  __int128 v24; // [rsp+58h] [rbp-110h]
  __int64 v25; // [rsp+68h] [rbp-100h]
  __int128 v26; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+80h] [rbp-E8h]
  _BYTE dest[24]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-C8h]
  __int128 v30; // [rsp+A8h] [rbp-C0h]
  __int64 v31; // [rsp+B8h] [rbp-B0h]
  int v32; // [rsp+C0h] [rbp-A8h]

  std::fs::canonicalize(&v17, a3, a4);
  if ( !__OFSUB__(0LL, (_QWORD)v17) )
  {
    v8 = *((_QWORD *)&v17 + 1);
    v9 = v18;
    std::fs::canonicalize(dest, a1, a2);
    if ( *(_QWORD *)dest == 0x8000000000000000LL )
    {
      v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
    }
    else
    {
      v21 = *(_OWORD *)dest;
      *(_QWORD *)&v22 = *(_QWORD *)&dest[16];
      v11 = <std::path::PathBuf as core::cmp::PartialEq>::eq(*(_QWORD *)&dest[8], *(_QWORD *)&dest[16], v8, v9);
      core::ptr::drop_in_place<std::path::PathBuf>(&v21);
      if ( !v11 )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v17);
        goto LABEL_3;
      }
      std::path::Path::to_path_buf(&v19, a1, a2);
      std::path::Path::to_path_buf(&v21, a3, a4);
      v29 = v20;
      *(_OWORD *)&dest[8] = v19;
      v30 = v21;
      v31 = v22;
      *(_QWORD *)dest = 16LL;
      v10 = alloc::boxed::Box<T>::new(dest);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    return v10;
  }
  core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v17);
LABEL_3:
  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) && !(unsigned __int8)std::path::Path::is_dir(a1, a2) )
  {
    std::path::Path::to_path_buf(&v17, a3, a4);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, *((_QWORD *)&v17 + 1), v18);
    v27 = *(_QWORD *)&dest[16];
    v26 = *(_OWORD *)dest;
    std::path::Path::to_path_buf(&v19, a1, a2);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v21, *((_QWORD *)&v19 + 1), v20);
    v31 = v22;
    v30 = v21;
    *(_OWORD *)&dest[8] = v26;
    v29 = v27;
    *(_QWORD *)dest = 15LL;
    v15 = alloc::boxed::Box<T>::new(dest);
    core::ptr::drop_in_place<std::path::PathBuf>(&v19);
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    return v15;
  }
  else
  {
    v6 = std::fs::remove_file(a3, a4);
    *(_QWORD *)&v26 = v6;
    if ( v6 )
    {
      *(_QWORD *)&v17 = v6;
      if ( (unsigned __int8)std::io::error::Error::kind(v6) )
      {
        *(_QWORD *)&v7 = uucore::util_name();
        v21 = v7;
        *(_QWORD *)&v19 = &v21;
        *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &unk_102188;
        *(_QWORD *)&dest[8] = 2LL;
        *(_QWORD *)&v30 = 0LL;
        *(_QWORD *)&dest[16] = &v19;
        v29 = 1LL;
        std::io::stdio::_eprint(dest);
        *(_QWORD *)&v19 = a3;
        *((_QWORD *)&v19 + 1) = a4;
        *(_QWORD *)&v21 = &v19;
        *((_QWORD *)&v21 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v22 = &v17;
        *((_QWORD *)&v22 + 1) = <std::io::error::Error as core::fmt::Debug>::fmt;
        *(_QWORD *)dest = &off_1024B8;
        *(_QWORD *)&dest[8] = 3LL;
        *(_QWORD *)&v30 = 0LL;
        *(_QWORD *)&dest[16] = &v21;
        v29 = 2LL;
        std::io::stdio::_eprint(dest);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v17);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v26);
    }
    std::fs::metadata(dest);
    if ( *(_DWORD *)dest == 2 )
    {
      v13 = *(_QWORD *)&dest[8];
      *(_QWORD *)&v26 = *(_QWORD *)&dest[8];
      std::path::Path::to_path_buf(&v17, a1, a2);
      std::path::Path::to_path_buf(&v19, a3, a4);
      v23 = v18;
      v22 = v17;
      v24 = v19;
      v25 = v20;
      *((_QWORD *)&v21 + 1) = v13;
      *(_QWORD *)&v21 = 8LL;
      return alloc::boxed::Box<T>::new(&v21);
    }
    v14 = v32 & 0xF000;
    if ( v14 == 4096 || v14 == 24576 || v14 == 0x2000 )
    {
      std::fs::File::open(dest, a1, a2);
      if ( (dest[0] & 1) != 0 )
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
      v16 = *(_DWORD *)&dest[4];
      LODWORD(v19) = *(_DWORD *)&dest[4];
      std::fs::File::create(dest, a3, a4);
      if ( *(_DWORD *)dest == 1 )
      {
        v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
      }
      else
      {
        LODWORD(v21) = *(_DWORD *)&dest[4];
        uucore::features::buf_copy::linux::copy_stream(dest, &v19, &v21);
        v10 = *(_QWORD *)dest;
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v21);
        v16 = v19;
      }
      core::ptr::drop_in_place<std::fs::File>(v16);
      return v10;
    }
    return uu_install::copy_normal_file(a1, a2, a3, a4);
  }
}