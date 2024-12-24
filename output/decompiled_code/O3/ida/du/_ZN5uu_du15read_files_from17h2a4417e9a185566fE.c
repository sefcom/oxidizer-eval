_OWORD *__fastcall uu_du::read_files_from(_QWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int128 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall **v13)(); // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rbx
  __int128 v20; // [rsp+0h] [rbp-168h] BYREF
  __int128 *v21; // [rsp+10h] [rbp-158h]
  __int64 v22; // [rsp+18h] [rbp-150h]
  __int64 v23; // [rsp+20h] [rbp-148h]
  __int128 v24; // [rsp+30h] [rbp-138h] BYREF
  char **v25; // [rsp+40h] [rbp-128h]
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-120h]
  _QWORD *v27; // [rsp+58h] [rbp-110h]
  __int64 v28; // [rsp+60h] [rbp-108h] BYREF
  __int64 (__fastcall **v29)(); // [rsp+68h] [rbp-100h]
  char v30; // [rsp+70h] [rbp-F8h]
  __int64 v31; // [rsp+78h] [rbp-F0h]
  __int128 v32; // [rsp+80h] [rbp-E8h] BYREF
  char **v33; // [rsp+90h] [rbp-D8h]
  __int64 v34; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-C0h]
  __int128 v36; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-A8h]
  __int64 *v38; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+D0h] [rbp-98h]
  __int64 v40; // [rsp+D8h] [rbp-90h]
  __int64 v41; // [rsp+E0h] [rbp-88h]
  char *v42; // [rsp+E8h] [rbp-80h] BYREF
  _QWORD v43[3]; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v44[24]; // [rsp+108h] [rbp-60h] BYREF
  _BYTE v45[72]; // [rsp+120h] [rbp-48h] BYREF

  v4 = a1;
  v34 = a2;
  v35 = a3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1CD7C, 1LL) )
  {
    v27 = a1;
    v5 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v20, 0x2000LL, v5);
    v6 = alloc::boxed::Box<T>::new(&v20);
    v7 = &off_184200;
    goto LABEL_3;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v20, a2, a3);
  v25 = (char **)v21;
  v24 = v20;
  if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v20 + 1), v21) )
  {
    v38 = &v34;
    v39 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v20 = &unk_1841E0;
    *((_QWORD *)&v20 + 1) = 2LL;
    v23 = 0LL;
    v21 = (__int128 *)&v38;
    v22 = 1LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v44,
      &v20,
      v9,
      v10,
      v11,
      v12);
    a1[1] = std::io::error::Error::new(39LL, v44);
    goto LABEL_19;
  }
  std::fs::File::open(&v28, v34, v35);
  if ( (_DWORD)v28 )
  {
    v13 = v29;
    if ( !(unsigned __int8)std::io::error::Error::kind(v29) )
    {
      *(_QWORD *)&v32 = v13;
      v38 = &v34;
      v39 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = &off_1841C0;
      *((_QWORD *)&v20 + 1) = 2LL;
      v23 = 0LL;
      v21 = (__int128 *)&v38;
      v22 = 1LL;
      ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        v45,
        &v20,
        v14,
        v15,
        v16,
        v17);
      a1[1] = std::io::error::Error::new(39LL, v45);
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v32);
      goto LABEL_20;
    }
    a1[1] = v13;
LABEL_19:
    *a1 = 0x8000000000000000LL;
LABEL_20:
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
    return v4;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v20, 0x2000LL, HIDWORD(v28));
  v19 = alloc::boxed::Box<T>::new(&v20);
  v27 = a1;
  core::ptr::drop_in_place<std::path::PathBuf>(&v24);
  v7 = &off_184138;
  v6 = v19;
LABEL_3:
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  v37 = 0LL;
  v28 = v6;
  v29 = v7;
  v30 = 0;
  v31 = 0LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v38, &v28);
    if ( v39 == (__int64 (__fastcall *)())0x8000000000000001LL )
    {
      core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
        v28,
        v29);
      v4 = v27;
      v27[2] = v37;
      *v4 = v36;
      return v4;
    }
    if ( v39 == (__int64 (__fastcall *)())0x8000000000000000LL )
      break;
    v43[0] = v39;
    v43[1] = v40;
    v43[2] = v41;
    if ( v41 )
    {
      alloc::string::String::from_utf8_lossy(&v20, v40, v41, v38);
      <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(&v24, *((_QWORD *)&v20 + 1), v21);
      v33 = v25;
      v32 = v24;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v32, *((_QWORD *)&v36 + 1), v37) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v32);
      }
      else
      {
        v21 = (__int128 *)v33;
        v20 = v32;
        alloc::vec::Vec<T,A>::push(&v36, &v20);
      }
    }
    else
    {
      v42 = (char *)v38 + 1;
      *(_QWORD *)&v8 = uucore::util_name(&v38, v40);
      v24 = v8;
      *(_QWORD *)&v32 = &v24;
      *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = &unk_184288;
      *((_QWORD *)&v20 + 1) = 2LL;
      v23 = 0LL;
      v21 = &v32;
      v22 = 1LL;
      std::io::stdio::_eprint(&v20);
      *(_QWORD *)&v24 = &v34;
      *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
      v25 = &v42;
      v26 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v20 = &unk_1842A8;
      *((_QWORD *)&v20 + 1) = 3LL;
      v23 = 0LL;
      v21 = &v24;
      v22 = 2LL;
      std::io::stdio::_eprint(&v20);
      uucore::mods::error::set_exit_code(1LL);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v43);
  }
  v4 = v27;
  v27[1] = v40;
  *(_QWORD *)v4 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
    v28,
    v29);
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v36);
  return v4;
}
