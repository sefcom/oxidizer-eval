char **__fastcall uu_hashsum::hashsum(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rbx
  const char *v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rcx
  char **v14; // r13
  __int128 v16; // [rsp+0h] [rbp-1A8h] BYREF
  char ***v17; // [rsp+10h] [rbp-198h]
  __int128 v18; // [rsp+18h] [rbp-190h]
  __int64 (__fastcall *v19)(); // [rsp+28h] [rbp-180h]
  __int128 *v20; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v21)(); // [rsp+38h] [rbp-170h]
  _QWORD *v22; // [rsp+40h] [rbp-168h]
  char **v23; // [rsp+48h] [rbp-160h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+50h] [rbp-158h]
  __int128 *v25; // [rsp+58h] [rbp-150h]
  __int64 (__fastcall *v26)(); // [rsp+60h] [rbp-148h]
  __int64 v27; // [rsp+68h] [rbp-140h]
  _QWORD v28[3]; // [rsp+88h] [rbp-120h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-108h] BYREF
  char ***v30; // [rsp+B0h] [rbp-F8h]
  _QWORD v31[3]; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-D8h]
  _QWORD v33[2]; // [rsp+D8h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-C0h] BYREF
  _BYTE v35[56]; // [rsp+F8h] [rbp-B0h] BYREF
  _OWORD v36[7]; // [rsp+130h] [rbp-78h] BYREF

  v2 = (_QWORD *)a1;
  v3 = asc_69AD6;
  if ( !*(_BYTE *)(a1 + 40) )
    v3 = asc_69AD5;
  v33[0] = v3;
  v33[1] = 1LL;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v36[3] = a2[3];
  v36[2] = v6;
  v36[1] = v5;
  v36[0] = v4;
  v32 = a1 + 16;
  v22 = (_QWORD *)a1;
  while ( 1 )
  {
    v7 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v36);
    v9 = v7;
    if ( !v7 )
    {
      v14 = 0LL;
      goto LABEL_25;
    }
    v10 = v8;
    std::path::Path::components(&v23, v7, v8);
    std::path::Path::components(&v16, asc_69AD4, 1LL);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v23, &v16) )
    {
      v11 = std::io::stdio::stdin();
      v12 = alloc::boxed::Box<T>::new(v11);
      v13 = (__int64 (__fastcall **)())&unk_33CA08;
    }
    else
    {
      std::fs::File::open(&v16, v9, v10);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v23,
        &v16);
      v14 = v23;
      if ( v23 )
        goto LABEL_25;
      v12 = alloc::boxed::Box<T>::new((unsigned int)v24);
      v13 = &off_33C9B0;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v35, 0x2000LL, v12, v13);
    uucore::features::checksum::digest_reader(&v16, v32, v35, *((unsigned __int8 *)v2 + 40), v2[4]);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v23,
      &v16);
    v14 = (char **)v24;
    if ( v23 == (char **)0x8000000000000000LL )
      break;
    v28[0] = v23;
    v28[1] = v24;
    v28[2] = v25;
    v2 = v22;
    uucore::features::checksum::escape_filename(&v16, v9, v10);
    v30 = v17;
    v29 = v16;
    v34 = v18;
    if ( *((_BYTE *)v2 + 41) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v2, v2[1], aBlake2b_0, 7LL) )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(v2[3] + 48LL))(v2[2]) == 512 )
        {
          v23 = (char **)&v29;
          v24 = <alloc::string::String as core::fmt::Display>::fmt;
          v25 = (__int128 *)v28;
          v26 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v16 = &off_33CB40;
          *((_QWORD *)&v16 + 1) = 3LL;
          v17 = &v23;
          v18 = 2uLL;
          std::io::stdio::_print(&v16);
        }
        else
        {
          v31[0] = (*(__int64 (__fastcall **)(_QWORD))(v2[3] + 48LL))(v2[2]);
          *(_QWORD *)&v16 = v31;
          *((_QWORD *)&v16 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v17 = (char ***)&v29;
          *(_QWORD *)&v18 = <alloc::string::String as core::fmt::Display>::fmt;
          *((_QWORD *)&v18 + 1) = v28;
          v19 = <alloc::string::String as core::fmt::Display>::fmt;
          v23 = &off_33CB70;
          v24 = (__int64 (__fastcall *)())&byte_4;
          v27 = 0LL;
          v25 = &v16;
          v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
          std::io::stdio::_print(&v23);
        }
      }
      else
      {
        alloc::str::<impl str>::to_ascii_uppercase(v31, *v2, v2[1]);
        *(_QWORD *)&v16 = &v34;
        *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
        v17 = (char ***)v31;
        *(_QWORD *)&v18 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v18 + 1) = &v29;
        v19 = <alloc::string::String as core::fmt::Display>::fmt;
        v20 = (__int128 *)v28;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v23 = (char **)&unk_33CAF0;
        v24 = (__int64 (__fastcall *)())&byte_5;
        v27 = 0LL;
        v25 = &v16;
        v26 = (__int64 (__fastcall *)())&byte_4;
        std::io::stdio::_print(&v23);
        core::ptr::drop_in_place<alloc::string::String>(v31);
      }
    }
    else if ( *((_BYTE *)v2 + 42) )
    {
      v23 = (char **)v28;
      v24 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &unk_33C8E0;
      *((_QWORD *)&v16 + 1) = 2LL;
      v17 = &v23;
      v18 = 1uLL;
      std::io::stdio::_print(&v16);
    }
    else
    {
      if ( *((_BYTE *)v2 + 43) )
      {
        v31[0] = v9;
        v31[1] = v10;
        *(_QWORD *)&v16 = v28;
        *((_QWORD *)&v16 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v17 = (char ***)v33;
        *(_QWORD *)&v18 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v18 + 1) = v31;
        v19 = <std::path::Display as core::fmt::Display>::fmt;
        v23 = (char **)&unk_33CAB0;
        v24 = (__int64 (__fastcall *)())&byte_4;
        v27 = 0LL;
        v25 = &v16;
        v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
      }
      else
      {
        *(_QWORD *)&v16 = &v34;
        *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
        v17 = (char ***)v28;
        *(_QWORD *)&v18 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v18 + 1) = v33;
        v19 = <&T as core::fmt::Display>::fmt;
        v20 = &v29;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v23 = (char **)&unk_33CA60;
        v24 = (__int64 (__fastcall *)())&byte_5;
        v27 = 0LL;
        v25 = &v16;
        v26 = (__int64 (__fastcall *)())&byte_4;
      }
      std::io::stdio::_print(&v23);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    core::ptr::drop_in_place<alloc::string::String>(v28);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v35);
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v35);
LABEL_25:
  core::ptr::drop_in_place<uu_hashsum::Options>(v22[2], v22[3]);
  return v14;
}
