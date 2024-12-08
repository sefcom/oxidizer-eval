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
  _QWORD *v13; // rbp
  __int64 v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // r14
  __int128 v18; // [rsp+8h] [rbp-170h] BYREF
  char ***v19; // [rsp+18h] [rbp-160h]
  __int128 v20; // [rsp+20h] [rbp-158h]
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-148h]
  __int128 *v22; // [rsp+38h] [rbp-140h]
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-138h]
  _QWORD *v24; // [rsp+48h] [rbp-130h]
  char **v25; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+58h] [rbp-120h]
  __int128 *v27; // [rsp+60h] [rbp-118h]
  __int64 (__fastcall *v28)(); // [rsp+68h] [rbp-110h]
  __int64 v29; // [rsp+70h] [rbp-108h]
  _QWORD *v30; // [rsp+90h] [rbp-E8h]
  _QWORD v31[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-C8h] BYREF
  char ***v33; // [rsp+C0h] [rbp-B8h]
  _QWORD v34[2]; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v36[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int128 v37; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v38[104]; // [rsp+110h] [rbp-68h] BYREF

  v1 = (_QWORD *)a1;
  v2 = asc_69AD6;
  if ( !*(_BYTE *)(a1 + 40) )
    v2 = asc_69AD5;
  v34[0] = v2;
  v34[1] = 1LL;
  v35[0] = asc_69AD4;
  v35[1] = 1LL;
  v3 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v35);
  if ( !v3 )
  {
LABEL_23:
    v15 = v1;
    v12 = v1 + 2;
    v16 = v15 + 3;
    v11 = 0LL;
    goto LABEL_27;
  }
  v5 = v3;
  v6 = v4;
  v7 = (_QWORD *)(a1 + 16);
  v24 = (_QWORD *)(a1 + 24);
  v30 = (_QWORD *)a1;
  while ( 1 )
  {
    std::path::Path::components(&v25, v5, v6);
    std::path::Path::components(&v18, asc_69AD4, 1LL);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v25, &v18) )
    {
      v8 = std::io::stdio::stdin();
      v9 = alloc::boxed::Box<T>::new(v8);
      v10 = (__int64 (__fastcall **)())&unk_33CA08;
      goto LABEL_9;
    }
    std::fs::File::open(&v18, v5, v6);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v25,
      &v18);
    v11 = v25;
    if ( v25 )
      break;
    v9 = alloc::boxed::Box<T>::new((unsigned int)v26);
    v10 = &off_33C9B0;
LABEL_9:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v38, 0x2000LL, v9, v10);
    uucore::features::checksum::digest_reader(&v18, v7, v38, *((unsigned __int8 *)v1 + 40), v1[4]);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v25,
      &v18);
    v12 = (_QWORD *)(a1 + 16);
    v11 = (char **)v26;
    if ( v25 == (char **)0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v38);
      goto LABEL_26;
    }
    v31[0] = v25;
    v31[1] = v26;
    v31[2] = v27;
    v13 = v24;
    uucore::features::checksum::escape_filename(&v18, v5, v6);
    v33 = v19;
    v32 = v18;
    v37 = v20;
    if ( *((_BYTE *)v30 + 41) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v30, v30[1], aBlake2b_0, 7LL) )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*v13 + 48LL))(*v7) == 512 )
        {
          v25 = (char **)&v32;
          v26 = <alloc::string::String as core::fmt::Display>::fmt;
          v27 = (__int128 *)v31;
          v28 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v18 = &off_33CB40;
          *((_QWORD *)&v18 + 1) = 3LL;
          v19 = &v25;
          v20 = 2uLL;
          std::io::stdio::_print(&v18);
        }
        else
        {
          v36[0] = (*(__int64 (__fastcall **)(_QWORD))(*v13 + 48LL))(*v7);
          *(_QWORD *)&v18 = v36;
          *((_QWORD *)&v18 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v19 = (char ***)&v32;
          *(_QWORD *)&v20 = <alloc::string::String as core::fmt::Display>::fmt;
          *((_QWORD *)&v20 + 1) = v31;
          v21 = <alloc::string::String as core::fmt::Display>::fmt;
          v25 = &off_33CB70;
          v26 = (__int64 (__fastcall *)())&byte_4;
          v29 = 0LL;
          v27 = &v18;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
          std::io::stdio::_print(&v25);
        }
      }
      else
      {
        alloc::str::<impl str>::to_ascii_uppercase(v36, *v30, v30[1]);
        *(_QWORD *)&v18 = &v37;
        *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
        v19 = (char ***)v36;
        *(_QWORD *)&v20 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v20 + 1) = &v32;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v22 = (__int128 *)v31;
        v23 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = (char **)&unk_33CAF0;
        v26 = (__int64 (__fastcall *)())&byte_5;
        v29 = 0LL;
        v27 = &v18;
        v28 = (__int64 (__fastcall *)())&byte_4;
        std::io::stdio::_print(&v25);
        core::ptr::drop_in_place<alloc::string::String>(v36);
      }
    }
    else if ( *((_BYTE *)v30 + 42) )
    {
      v25 = (char **)v31;
      v26 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &unk_33C8E0;
      *((_QWORD *)&v18 + 1) = 2LL;
      v19 = &v25;
      v20 = 1uLL;
      std::io::stdio::_print(&v18);
    }
    else
    {
      if ( *((_BYTE *)v30 + 43) )
      {
        v36[0] = v5;
        v36[1] = v6;
        *(_QWORD *)&v18 = v31;
        *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v19 = (char ***)v34;
        *(_QWORD *)&v20 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v20 + 1) = v36;
        v21 = <std::path::Display as core::fmt::Display>::fmt;
        v25 = (char **)&unk_33CAB0;
        v26 = (__int64 (__fastcall *)())&byte_4;
        v29 = 0LL;
        v27 = &v18;
        v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
      }
      else
      {
        *(_QWORD *)&v18 = &v37;
        *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
        v19 = (char ***)v31;
        *(_QWORD *)&v20 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v20 + 1) = v34;
        v21 = <&T as core::fmt::Display>::fmt;
        v22 = &v32;
        v23 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = (char **)&unk_33CA60;
        v26 = (__int64 (__fastcall *)())&byte_5;
        v29 = 0LL;
        v27 = &v18;
        v28 = (__int64 (__fastcall *)())&byte_4;
      }
      std::io::stdio::_print(&v25);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    core::ptr::drop_in_place<alloc::string::String>(v31);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v38);
    v1 = v30;
    v5 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v35);
    v6 = v14;
    if ( !v5 )
      goto LABEL_23;
  }
  v12 = (_QWORD *)(a1 + 16);
LABEL_26:
  v16 = v24;
LABEL_27:
  core::ptr::drop_in_place<uu_hashsum::Options>(*v12, *v16);
  return v11;
}
