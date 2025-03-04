char **__fastcall uu_hashsum::hashsum(__int64 a1)
{
  _QWORD *v1; // r13
  const char *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rcx
  char **v11; // rbp
  _QWORD *v12; // r13
  __int64 v13; // rdx
  _QWORD *v14; // r14
  _QWORD *v15; // r14
  __int128 v17; // [rsp+8h] [rbp-170h] BYREF
  char ***v18; // [rsp+18h] [rbp-160h]
  __int128 v19; // [rsp+20h] [rbp-158h]
  __int64 (__fastcall *v20)(); // [rsp+30h] [rbp-148h]
  __int128 *v21; // [rsp+38h] [rbp-140h]
  __int64 (__fastcall *v22)(); // [rsp+40h] [rbp-138h]
  _QWORD *v23; // [rsp+48h] [rbp-130h]
  char **v24; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-120h]
  __int128 *v26; // [rsp+60h] [rbp-118h]
  __int64 (__fastcall *v27)(); // [rsp+68h] [rbp-110h]
  __int64 v28; // [rsp+70h] [rbp-108h]
  _QWORD *v29; // [rsp+90h] [rbp-E8h]
  _QWORD v30[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-C8h] BYREF
  char ***v32; // [rsp+C0h] [rbp-B8h]
  _QWORD v33[2]; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v35[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int128 v36; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v37[104]; // [rsp+110h] [rbp-68h] BYREF

  v1 = (_QWORD *)a1;
  v2 = asc_69967;
  if ( !*(_BYTE *)(a1 + 40) )
    v2 = asc_69966;
  v33[0] = v2;
  v33[1] = 1LL;
  v34[0] = asc_69031;
  v34[1] = 1LL;
  v3 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v34);
  if ( !v3 )
  {
LABEL_23:
    v14 = v1;
    v12 = v1 + 2;
    v15 = v14 + 3;
    v11 = 0LL;
    goto LABEL_27;
  }
  v5 = v3;
  v6 = v4;
  v7 = (_QWORD *)(a1 + 16);
  v23 = (_QWORD *)(a1 + 24);
  v29 = (_QWORD *)a1;
  while ( 1 )
  {
    std::path::Path::components(&v24, v5);
    std::path::Path::components(&v17, asc_69031);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v24, &v17) )
    {
      v8 = std::io::stdio::stdin();
      v9 = alloc::boxed::Box<T>::new(v8);
      v10 = (__int64 (__fastcall **)())&unk_33BBE8;
      goto LABEL_9;
    }
    std::fs::File::open(&v17, v5, v6);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v24,
      &v17);
    v11 = v24;
    if ( v24 )
      break;
    v9 = alloc::boxed::Box<T>::new((unsigned int)v25);
    v10 = &off_33BB90;
LABEL_9:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v37, 0x2000LL, v9, v10);
    uucore::features::checksum::digest_reader(&v17, v7, v37, *((unsigned __int8 *)v1 + 40), v1[4]);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v24,
      &v17);
    v12 = (_QWORD *)(a1 + 16);
    v11 = (char **)v25;
    if ( v24 == (char **)0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v37);
      goto LABEL_26;
    }
    v30[0] = v24;
    v30[1] = v25;
    v30[2] = v26;
    uucore::features::checksum::escape_filename(&v17, v5, v6);
    v32 = v18;
    v31 = v17;
    v36 = v19;
    if ( *((_BYTE *)v29 + 41) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v29, v29[1], aBlake2b_1, 7LL) )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*v23 + 48LL))(*v7) == 512 )
        {
          v24 = (char **)&v31;
          v25 = <alloc::string::String as core::fmt::Display>::fmt;
          v26 = (__int128 *)v30;
          v27 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v17 = &off_33BA40;
          *((_QWORD *)&v17 + 1) = 3LL;
          v18 = &v24;
          v19 = 2uLL;
          std::io::stdio::_print(&v17);
        }
        else
        {
          v35[0] = (*(__int64 (__fastcall **)(_QWORD))(*v23 + 48LL))(*v7);
          *(_QWORD *)&v17 = v35;
          *((_QWORD *)&v17 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v18 = (char ***)&v31;
          *(_QWORD *)&v19 = <alloc::string::String as core::fmt::Display>::fmt;
          *((_QWORD *)&v19 + 1) = v30;
          v20 = <alloc::string::String as core::fmt::Display>::fmt;
          v24 = &off_33BA70;
          v25 = (__int64 (__fastcall *)())&byte_4;
          v28 = 0LL;
          v26 = &v17;
          v27 = (__int64 (__fastcall *)())(&dword_0 + 3);
          std::io::stdio::_print(&v24);
        }
      }
      else
      {
        alloc::str::<impl str>::to_ascii_uppercase(v35, *v29, v29[1]);
        *(_QWORD *)&v17 = &v36;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        v18 = (char ***)v35;
        *(_QWORD *)&v19 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v19 + 1) = &v31;
        v20 = <alloc::string::String as core::fmt::Display>::fmt;
        v21 = (__int128 *)v30;
        v22 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = (char **)&unk_33BAB0;
        v25 = (__int64 (__fastcall *)())&byte_5;
        v28 = 0LL;
        v26 = &v17;
        v27 = (__int64 (__fastcall *)())&byte_4;
        std::io::stdio::_print(&v24);
        core::ptr::drop_in_place<alloc::string::String>(v35);
      }
    }
    else if ( *((_BYTE *)v29 + 42) )
    {
      v24 = (char **)v30;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &unk_33B958;
      *((_QWORD *)&v17 + 1) = 2LL;
      v18 = &v24;
      v19 = 1uLL;
      std::io::stdio::_print(&v17);
    }
    else
    {
      if ( *((_BYTE *)v29 + 43) )
      {
        v35[0] = v5;
        v35[1] = v6;
        *(_QWORD *)&v17 = v30;
        *((_QWORD *)&v17 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = (char ***)v33;
        *(_QWORD *)&v19 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v19 + 1) = v35;
        v20 = <std::path::Display as core::fmt::Display>::fmt;
        v24 = (char **)&unk_33BB00;
        v25 = (__int64 (__fastcall *)())&byte_4;
        v28 = 0LL;
        v26 = &v17;
        v27 = (__int64 (__fastcall *)())(&dword_0 + 3);
      }
      else
      {
        *(_QWORD *)&v17 = &v36;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        v18 = (char ***)v30;
        *(_QWORD *)&v19 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v19 + 1) = v33;
        v20 = <&T as core::fmt::Display>::fmt;
        v21 = &v31;
        v22 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = (char **)&unk_33BB40;
        v25 = (__int64 (__fastcall *)())&byte_5;
        v28 = 0LL;
        v26 = &v17;
        v27 = (__int64 (__fastcall *)())&byte_4;
      }
      std::io::stdio::_print(&v24);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v31);
    core::ptr::drop_in_place<alloc::string::String>(v30);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v37);
    v1 = v29;
    v5 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v34);
    v6 = v13;
    if ( !v5 )
      goto LABEL_23;
  }
  v12 = (_QWORD *)(a1 + 16);
LABEL_26:
  v15 = v23;
LABEL_27:
  core::ptr::drop_in_place<uu_hashsum::Options>(*v12, *v15);
  return v11;
}
