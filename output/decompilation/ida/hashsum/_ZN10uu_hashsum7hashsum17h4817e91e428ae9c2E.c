__int64 (__fastcall *__fastcall uu_hashsum::hashsum(__int64 *a1))()
{
  const char *v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall **v8)(); // rdx
  __int64 (__fastcall *v9)(); // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 (__fastcall *v14)(); // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v19; // [rsp+0h] [rbp-168h] BYREF
  __int64 *v20; // [rsp+10h] [rbp-158h]
  __int128 v21; // [rsp+18h] [rbp-150h]
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-140h]
  __int64 *v23; // [rsp+30h] [rbp-138h]
  __int64 (__fastcall *v24)(); // [rsp+38h] [rbp-130h]
  __int64 v25; // [rsp+40h] [rbp-128h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-120h]
  __int64 *v27; // [rsp+50h] [rbp-118h]
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-110h]
  __int64 v29; // [rsp+60h] [rbp-108h]
  __int64 v30; // [rsp+80h] [rbp-E8h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+88h] [rbp-E0h]
  __int64 *v32; // [rsp+90h] [rbp-D8h]
  __int64 v33; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-C8h]
  __int128 v35; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 *v36; // [rsp+C0h] [rbp-A8h]
  __int64 *v37; // [rsp+C8h] [rbp-A0h]
  _QWORD v38[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v40; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v41[104]; // [rsp+100h] [rbp-68h] BYREF

  v1 = asc_11FE6;
  if ( *((_BYTE *)a1 + 40) )
    v1 = asc_11FE7;
  v38[0] = v1;
  v38[1] = 1LL;
  v39[0] = asc_11CD3;
  v39[1] = 1LL;
  v2 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v39);
  if ( v2 )
  {
    v4 = v2;
    v5 = v3;
    v37 = a1 + 2;
    while ( 1 )
    {
      std::path::Path::components(&v25, v4, v5);
      std::path::Path::components(&v19, asc_11CD3, 1LL);
      if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v25, &v19) )
      {
        v6 = std::io::stdio::stdin();
        v7 = alloc::boxed::Box<T>::new(v6);
        v8 = (__int64 (__fastcall **)())&unk_150640;
      }
      else
      {
        std::fs::File::open(&v19, v4, v5);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v25,
          &v19);
        v9 = (__int64 (__fastcall *)())v25;
        if ( v25 )
          goto LABEL_25;
        v7 = alloc::boxed::Box<T>::new((unsigned int)v26);
        v8 = &off_1505E8;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v41, v7, v8);
      uucore::features::checksum::digest_reader(&v19, v37, v41, *((unsigned __int8 *)a1 + 40), a1[4]);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v25,
        &v19);
      v9 = v26;
      v11 = -v25;
      if ( __OFSUB__(-v25, 1LL) )
        break;
      v30 = v25;
      v31 = v26;
      v32 = v27;
      uucore::features::checksum::escape_filename(&v19, v4, v5, v11);
      v36 = v20;
      v35 = v19;
      v40 = v21;
      if ( *((_BYTE *)a1 + 41) )
      {
        v12 = *a1;
        v13 = a1[1];
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*a1, v13, aBlake2b_1, 7LL) )
        {
          if ( (*(__int64 (__fastcall **)(__int64))(a1[3] + 48))(a1[2]) == 512 )
          {
            v25 = (__int64)&v35;
            v26 = <alloc::string::String as core::fmt::Display>::fmt;
            v27 = &v30;
            v28 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v19 = &off_150498;
            *((_QWORD *)&v19 + 1) = 3LL;
            v20 = &v25;
            v21 = 2uLL;
            std::io::stdio::_print(&v19);
          }
          else
          {
            v33 = (*(__int64 (__fastcall **)(__int64))(a1[3] + 48))(a1[2]);
            *(_QWORD *)&v19 = &v33;
            *((_QWORD *)&v19 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v20 = (__int64 *)&v35;
            *(_QWORD *)&v21 = <alloc::string::String as core::fmt::Display>::fmt;
            *((_QWORD *)&v21 + 1) = &v30;
            v22 = <alloc::string::String as core::fmt::Display>::fmt;
            v25 = (__int64)&off_1504C8;
            v26 = (__int64 (__fastcall *)())&byte_4;
            v29 = 0LL;
            v27 = (__int64 *)&v19;
            v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
            std::io::stdio::_print(&v25);
          }
        }
        else
        {
          alloc::str::<impl str>::to_ascii_uppercase(&v33, v12, v13);
          *(_QWORD *)&v19 = &v40;
          *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
          v20 = &v33;
          *(_QWORD *)&v21 = <alloc::string::String as core::fmt::Display>::fmt;
          *((_QWORD *)&v21 + 1) = &v35;
          v22 = <alloc::string::String as core::fmt::Display>::fmt;
          v23 = &v30;
          v24 = <alloc::string::String as core::fmt::Display>::fmt;
          v25 = (__int64)&unk_150508;
          v26 = (__int64 (__fastcall *)())&byte_5;
          v29 = 0LL;
          v27 = (__int64 *)&v19;
          v28 = (__int64 (__fastcall *)())&byte_4;
          std::io::stdio::_print(&v25);
          core::ptr::drop_in_place<alloc::string::String>(v33, v34);
        }
      }
      else if ( *((_BYTE *)a1 + 42) )
      {
        v25 = (__int64)&v30;
        v26 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &unk_1503B8;
        *((_QWORD *)&v19 + 1) = 2LL;
        v20 = &v25;
        v21 = 1uLL;
        std::io::stdio::_print(&v19);
      }
      else
      {
        if ( *((_BYTE *)a1 + 43) )
        {
          v33 = v4;
          v34 = v5;
          *(_QWORD *)&v19 = &v30;
          *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v20 = v38;
          *(_QWORD *)&v21 = <&T as core::fmt::Display>::fmt;
          *((_QWORD *)&v21 + 1) = &v33;
          v22 = <std::path::Display as core::fmt::Display>::fmt;
          v25 = (__int64)&unk_150558;
          v26 = (__int64 (__fastcall *)())&byte_4;
          v29 = 0LL;
          v27 = (__int64 *)&v19;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
        }
        else
        {
          *(_QWORD *)&v19 = &v40;
          *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
          v20 = &v30;
          *(_QWORD *)&v21 = <alloc::string::String as core::fmt::Display>::fmt;
          *((_QWORD *)&v21 + 1) = v38;
          v22 = <&T as core::fmt::Display>::fmt;
          v23 = (__int64 *)&v35;
          v24 = <alloc::string::String as core::fmt::Display>::fmt;
          v25 = (__int64)&unk_150598;
          v26 = (__int64 (__fastcall *)())&byte_5;
          v29 = 0LL;
          v27 = (__int64 *)&v19;
          v28 = (__int64 (__fastcall *)())&byte_4;
        }
        std::io::stdio::_print(&v25);
      }
      core::ptr::drop_in_place<alloc::string::String>(v35, *((_QWORD *)&v35 + 1));
      v14 = v31;
      core::ptr::drop_in_place<alloc::string::String>(v30, v31);
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
        v41,
        v14,
        v15,
        v16);
      v4 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v39);
      v5 = v17;
      if ( !v4 )
        goto LABEL_23;
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      v41,
      &v19,
      v10,
      v11);
LABEL_25:
    core::ptr::drop_in_place<uu_hashsum::Options>(a1[2], a1[3]);
  }
  else
  {
LABEL_23:
    core::ptr::drop_in_place<uu_hashsum::Options>(a1[2], a1[3]);
    return 0LL;
  }
  return v9;
}