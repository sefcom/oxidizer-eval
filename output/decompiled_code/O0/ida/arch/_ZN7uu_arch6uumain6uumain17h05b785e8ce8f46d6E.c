__int64 __fastcall uu_arch::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _Unwind_Exception *v9; // rdx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  struct _Unwind_Exception *v15; // [rsp+0h] [rbp-1018h]
  struct _Unwind_Exception *v16; // [rsp+0h] [rbp-1018h]
  int v17; // [rsp+8h] [rbp-1010h]
  int v18; // [rsp+8h] [rbp-1010h]
  struct _Unwind_Exception *v19; // [rsp+10h] [rbp-1008h]
  __int64 v20; // [rsp+80h] [rbp-F98h]
  _OWORD v21[6]; // [rsp+90h] [rbp-F88h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-F28h]
  __int128 v23; // [rsp+F8h] [rbp-F20h] BYREF
  __int128 v24; // [rsp+108h] [rbp-F10h]
  __int128 v25; // [rsp+118h] [rbp-F00h]
  __int128 v26; // [rsp+128h] [rbp-EF0h]
  __int128 v27; // [rsp+138h] [rbp-EE0h]
  __int128 v28; // [rsp+148h] [rbp-ED0h]
  __int64 v29; // [rsp+158h] [rbp-EC0h]
  int v30[26]; // [rsp+160h] [rbp-EB8h] BYREF
  int v31[178]; // [rsp+1C8h] [rbp-E50h] BYREF
  __int128 v32; // [rsp+490h] [rbp-B88h]
  __int128 v33; // [rsp+4A0h] [rbp-B78h]
  __int128 v34; // [rsp+4B0h] [rbp-B68h]
  __int128 v35; // [rsp+4C0h] [rbp-B58h]
  __int128 v36; // [rsp+4D0h] [rbp-B48h]
  __int128 v37; // [rsp+4E0h] [rbp-B38h]
  __int64 v38; // [rsp+4F0h] [rbp-B28h]
  int v39[134]; // [rsp+4F8h] [rbp-B20h] BYREF
  _QWORD src[67]; // [rsp+710h] [rbp-908h] BYREF
  _BYTE v41[536]; // [rsp+928h] [rbp-6F0h] BYREF
  _BYTE v42[536]; // [rsp+B40h] [rbp-4D8h] BYREF
  _BYTE dest[536]; // [rsp+D58h] [rbp-2C0h] BYREF
  _BYTE v44[48]; // [rsp+F70h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+FA0h] [rbp-78h] BYREF
  __int128 v46; // [rsp+FB8h] [rbp-60h]
  _QWORD v47[2]; // [rsp+FC8h] [rbp-50h] BYREF
  _BYTE v48[31]; // [rsp+FD8h] [rbp-40h] BYREF
  char v49; // [rsp+FF7h] [rbp-21h]
  _QWORD *v50; // [rsp+1008h] [rbp-10h]
  __int64 (__fastcall *v51)(); // [rsp+1010h] [rbp-8h]

  v49 = 1;
  uu_arch::uu_app(v31);
  v49 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v30,
    (int)v31,
    a1,
    a2,
    v2,
    v3,
    (__int64)v15,
    v17,
    v19,
    0);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v23, v30);
  if ( (_QWORD)v23 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v23 + 1),
             &off_F6960);
  v38 = v29;
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v33 = v24;
  v32 = v23;
  v22 = v29;
  v21[5] = v28;
  v21[4] = v27;
  v21[3] = v26;
  v21[2] = v25;
  v21[1] = v24;
  v21[0] = v23;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v21);
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(v42);
  core::result::Result<T,E>::map_err((char)v41, (unsigned int)v42);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v41);
  if ( src[0] == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             src[1],
             src[2],
             &off_F6948);
  memcpy(dest, src, sizeof(dest));
  memcpy(v39, dest, sizeof(v39));
  v4 = <platform_info::lib_impl::target::PlatformInfo as platform_info::UNameAPI>::machine(v39);
  std::ffi::os_str::OsStr::to_string_lossy(v48, v4, v5);
  v6 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v48);
  v8 = core::str::<impl str>::trim(v6, v7);
  v16 = v9;
  v18 = v8;
  v47[0] = v8;
  v47[1] = v9;
  v50 = v47;
  v51 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v46 = v47;
  *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
  v45 = v46;
  core::fmt::Arguments::new_v1(v44, &unk_F6908, &v45);
  std::io::stdio::_print(v44);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v48);
  v20 = 0LL;
  core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(
    (int)v39,
    (int)&unk_F6908,
    v10,
    v11,
    v12,
    v13,
    v16,
    v18);
  return v20;
}
