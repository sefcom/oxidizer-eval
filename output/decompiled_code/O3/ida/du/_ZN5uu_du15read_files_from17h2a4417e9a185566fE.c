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
  __int64 v15; // rbx
  __int128 v16; // [rsp+0h] [rbp-168h] BYREF
  __int128 *v17; // [rsp+10h] [rbp-158h]
  __int64 v18; // [rsp+18h] [rbp-150h]
  __int64 v19; // [rsp+20h] [rbp-148h]
  __int128 v20; // [rsp+30h] [rbp-138h] BYREF
  char **v21; // [rsp+40h] [rbp-128h]
  __int64 (__fastcall *v22)(); // [rsp+48h] [rbp-120h]
  _QWORD *v23; // [rsp+58h] [rbp-110h]
  __int64 v24; // [rsp+60h] [rbp-108h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+68h] [rbp-100h]
  char v26; // [rsp+70h] [rbp-F8h]
  __int64 v27; // [rsp+78h] [rbp-F0h]
  __int128 v28; // [rsp+80h] [rbp-E8h] BYREF
  char **v29; // [rsp+90h] [rbp-D8h]
  __int64 v30; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-C0h]
  __int128 v32; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-A8h]
  __int64 *v34; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+D0h] [rbp-98h]
  __int64 v36; // [rsp+D8h] [rbp-90h]
  __int64 v37; // [rsp+E0h] [rbp-88h]
  char *v38; // [rsp+E8h] [rbp-80h] BYREF
  _QWORD v39[3]; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v40[24]; // [rsp+108h] [rbp-60h] BYREF
  _BYTE v41[72]; // [rsp+120h] [rbp-48h] BYREF

  v4 = a1;
  v30 = a2;
  v31 = a3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1CD7C, 1LL) )
  {
    v23 = a1;
    v5 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v16, 0x2000LL, v5);
    v6 = alloc::boxed::Box<T>::new(&v16);
    v7 = &off_184200;
    goto LABEL_3;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v16, a2, a3);
  v21 = (char **)v17;
  v20 = v16;
  if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v16 + 1), v17) )
  {
    v34 = &v30;
    v35 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_1841E0;
    *((_QWORD *)&v16 + 1) = 2LL;
    v19 = 0LL;
    v17 = (__int128 *)&v34;
    v18 = 1LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v40,
      &v16,
      v9,
      v10,
      v11,
      v12);
    a1[1] = std::io::error::Error::new(39LL, v40);
    goto LABEL_19;
  }
  std::fs::File::open(&v24, v30, v31);
  if ( (_DWORD)v24 )
  {
    v13 = v25;
    if ( !(unsigned __int8)std::io::error::Error::kind(v25) )
    {
      *(_QWORD *)&v28 = v13;
      v34 = &v30;
      v35 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &off_1841C0;
      *((_QWORD *)&v16 + 1) = 2LL;
      v19 = 0LL;
      v17 = (__int128 *)&v34;
      v18 = 1LL;
      ((void (__fastcall *)(_BYTE *, __int128 *))core::option::Option<T>::map_or_else)(v41, &v16);
      a1[1] = std::io::error::Error::new(39LL, v41);
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v28);
      goto LABEL_20;
    }
    a1[1] = v13;
LABEL_19:
    *a1 = 0x8000000000000000LL;
LABEL_20:
    core::ptr::drop_in_place<std::path::PathBuf>(&v20);
    return v4;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v16, 0x2000LL, HIDWORD(v24));
  v15 = alloc::boxed::Box<T>::new(&v16);
  v23 = a1;
  core::ptr::drop_in_place<std::path::PathBuf>(&v20);
  v7 = &off_184138;
  v6 = v15;
LABEL_3:
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  v33 = 0LL;
  v24 = v6;
  v25 = v7;
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v34, &v24);
    if ( v35 == (__int64 (__fastcall *)())0x8000000000000001LL )
    {
      core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
        v24,
        v25);
      v4 = v23;
      v23[2] = v33;
      *v4 = v32;
      return v4;
    }
    if ( v35 == (__int64 (__fastcall *)())0x8000000000000000LL )
      break;
    v39[0] = v35;
    v39[1] = v36;
    v39[2] = v37;
    if ( v37 )
    {
      alloc::string::String::from_utf8_lossy(&v16, v36, v37, v34);
      <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(&v20, *((_QWORD *)&v16 + 1), v17);
      v29 = v21;
      v28 = v20;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v16);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v28, *((_QWORD *)&v32 + 1), v33) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v28);
      }
      else
      {
        v17 = (__int128 *)v29;
        v16 = v28;
        alloc::vec::Vec<T,A>::push(&v32, &v16);
      }
    }
    else
    {
      v38 = (char *)v34 + 1;
      *(_QWORD *)&v8 = uucore::util_name(&v34, v36);
      v20 = v8;
      *(_QWORD *)&v28 = &v20;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &unk_184288;
      *((_QWORD *)&v16 + 1) = 2LL;
      v19 = 0LL;
      v17 = &v28;
      v18 = 1LL;
      std::io::stdio::_eprint(&v16);
      *(_QWORD *)&v20 = &v30;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      v21 = &v38;
      v22 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v16 = &unk_1842A8;
      *((_QWORD *)&v16 + 1) = 3LL;
      v19 = 0LL;
      v17 = &v20;
      v18 = 2LL;
      std::io::stdio::_eprint(&v16);
      uucore::mods::error::set_exit_code(1LL);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v39);
  }
  v4 = v23;
  v23[1] = v36;
  *(_QWORD *)v4 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
    v24,
    v25);
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v32);
  return v4;
}
