_OWORD *__fastcall uu_du::read_files_from(_QWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 (__fastcall *v7)(); // r14
  __int64 v8; // r15
  __int128 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rbx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int128 v19; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v20; // [rsp+10h] [rbp-138h]
  __int64 v21; // [rsp+18h] [rbp-130h]
  __int64 v22; // [rsp+20h] [rbp-128h]
  _QWORD *v23; // [rsp+38h] [rbp-110h]
  __int64 v24; // [rsp+40h] [rbp-108h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+48h] [rbp-100h]
  char v26; // [rsp+50h] [rbp-F8h]
  __int64 v27; // [rsp+58h] [rbp-F0h]
  __int128 v28; // [rsp+60h] [rbp-E8h] BYREF
  char **v29; // [rsp+70h] [rbp-D8h]
  __int64 (__fastcall *v30)(); // [rsp+78h] [rbp-D0h]
  __int128 v31; // [rsp+80h] [rbp-C8h] BYREF
  char **v32; // [rsp+90h] [rbp-B8h]
  __int64 v33; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-A8h]
  __int128 v35; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-90h]
  __int64 *v37; // [rsp+C0h] [rbp-88h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+C8h] [rbp-80h]
  __int64 v39; // [rsp+D0h] [rbp-78h]
  __int64 v40; // [rsp+D8h] [rbp-70h]
  char *v41; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v42[24]; // [rsp+E8h] [rbp-60h] BYREF
  _BYTE v43[72]; // [rsp+100h] [rbp-48h] BYREF

  v3 = a1;
  v33 = a2;
  v34 = a3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_21680, 1LL) )
  {
    v23 = a1;
    v4 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v19, v4);
    v5 = alloc::boxed::Box<T>::new(&v19);
    v6 = &off_146058;
    goto LABEL_3;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, a2);
  if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v28 + 1), v29) )
  {
    v37 = &v33;
    v38 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &unk_145EC8;
    *((_QWORD *)&v19 + 1) = 2LL;
    v22 = 0LL;
    v20 = (__int128 *)&v37;
    v21 = 1LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v42,
      &v19,
      v10,
      v11,
      v12,
      v13);
    v14 = alloc::boxed::Box<T>::new(v42);
    a1[1] = std::io::error::Error::_new(40LL, v14, &off_146000);
    goto LABEL_19;
  }
  std::fs::File::open(&v24, v33, v34);
  if ( (_DWORD)v24 == 1 )
  {
    v15 = v25;
    if ( !(unsigned __int8)std::io::error::Error::kind(v25) )
    {
      *(_QWORD *)&v31 = v15;
      v37 = &v33;
      v38 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v19 = &off_145EE8;
      *((_QWORD *)&v19 + 1) = 2LL;
      v22 = 0LL;
      v20 = (__int128 *)&v37;
      v21 = 1LL;
      ((void (__fastcall *)(_BYTE *, __int128 *))core::option::Option<T>::map_or_else)(v43, &v19);
      v18 = alloc::boxed::Box<T>::new(v43);
      a1[1] = std::io::error::Error::_new(40LL, v18, &off_146000);
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v31);
      goto LABEL_20;
    }
    a1[1] = v15;
LABEL_19:
    *a1 = 0x8000000000000000LL;
LABEL_20:
    core::ptr::drop_in_place<std::path::PathBuf>(&v28);
    return v3;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v19, HIDWORD(v24));
  v17 = alloc::boxed::Box<T>::new(&v19);
  v23 = a1;
  core::ptr::drop_in_place<std::path::PathBuf>(&v28);
  v6 = &off_145F58;
  v5 = v17;
LABEL_3:
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  v36 = 0LL;
  v24 = v5;
  v25 = v6;
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v37, &v24);
    v7 = v38;
    if ( v38 == (__int64 (__fastcall *)())0x8000000000000001LL )
    {
      core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
        v24,
        v25);
      v3 = v23;
      v23[2] = v36;
      *v3 = v35;
      return v3;
    }
    v8 = v39;
    if ( v38 == (__int64 (__fastcall *)())0x8000000000000000LL )
      break;
    if ( v40 )
    {
      alloc::string::String::from_utf8_lossy(&v19, v39, v40);
      <alloc::borrow::Cow<str> as alloc::string::SpecToString>::spec_to_string(&v28, *((_QWORD *)&v19 + 1), v20);
      v32 = v29;
      v31 = v28;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v19);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v31, *((_QWORD *)&v35 + 1), v36) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v31);
      }
      else
      {
        v20 = (__int128 *)v32;
        v19 = v31;
        alloc::vec::Vec<T,A>::push(&v35, &v19);
      }
    }
    else
    {
      v41 = (char *)v37 + 1;
      *(_QWORD *)&v9 = uucore::util_name();
      v28 = v9;
      *(_QWORD *)&v31 = &v28;
      *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v19 = &unk_145F08;
      *((_QWORD *)&v19 + 1) = 2LL;
      v22 = 0LL;
      v20 = &v31;
      v21 = 1LL;
      std::io::stdio::_eprint(&v19);
      *(_QWORD *)&v28 = &v33;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      v29 = &v41;
      v30 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v19 = &unk_145F28;
      *((_QWORD *)&v19 + 1) = 3LL;
      v22 = 0LL;
      v20 = &v28;
      v21 = 2LL;
      std::io::stdio::_eprint(&v19);
      uucore::mods::error::set_exit_code(1LL);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, v8);
  }
  v3 = v23;
  v23[1] = v39;
  *(_QWORD *)v3 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(
    v24,
    v25);
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v35);
  return v3;
}