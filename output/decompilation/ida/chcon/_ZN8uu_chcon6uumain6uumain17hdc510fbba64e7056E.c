__int64 uu_chcon::uumain::uumain()
{
  __int64 v0; // rbx
  __int128 v1; // xmm0
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  char v5; // al
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  const char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r13
  __int128 v12; // rax
  _BYTE v14[40]; // [rsp+0h] [rbp-598h] BYREF
  _BYTE v15[64]; // [rsp+30h] [rbp-568h] BYREF
  __int64 v16; // [rsp+70h] [rbp-528h]
  _BYTE v17[80]; // [rsp+80h] [rbp-518h] BYREF
  __int128 v18; // [rsp+D0h] [rbp-4C8h]
  __int128 v19; // [rsp+E0h] [rbp-4B8h]
  __int128 v20; // [rsp+F0h] [rbp-4A8h]
  _BYTE *v21; // [rsp+108h] [rbp-490h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+110h] [rbp-488h]
  __int128 v23; // [rsp+120h] [rbp-478h] BYREF
  __int128 v24; // [rsp+130h] [rbp-468h]
  _QWORD *v25; // [rsp+140h] [rbp-458h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+148h] [rbp-450h]
  __int128 v27; // [rsp+150h] [rbp-448h]
  _OWORD v28[2]; // [rsp+160h] [rbp-438h] BYREF
  __m256i v29; // [rsp+180h] [rbp-418h] BYREF
  __int128 v30; // [rsp+1A0h] [rbp-3F8h]
  __int128 v31; // [rsp+1B0h] [rbp-3E8h]
  __int128 v32; // [rsp+1C0h] [rbp-3D8h]
  __int128 v33; // [rsp+1D0h] [rbp-3C8h]
  __int128 v34; // [rsp+1E0h] [rbp-3B8h] BYREF
  __int64 v35; // [rsp+1F0h] [rbp-3A8h]
  __int128 v36; // [rsp+1F8h] [rbp-3A0h] BYREF
  __int64 v37; // [rsp+208h] [rbp-390h]
  __int128 v38; // [rsp+210h] [rbp-388h] BYREF
  __int64 v39; // [rsp+220h] [rbp-378h]
  __int128 v40; // [rsp+228h] [rbp-370h] BYREF
  __int64 v41; // [rsp+238h] [rbp-360h]
  __int128 v42; // [rsp+240h] [rbp-358h] BYREF
  __int64 v43; // [rsp+250h] [rbp-348h]
  int v44; // [rsp+258h] [rbp-340h] BYREF
  __int64 v45; // [rsp+260h] [rbp-338h]
  __int64 v46; // [rsp+268h] [rbp-330h]
  _BYTE dest[760]; // [rsp+2A0h] [rbp-2F8h] BYREF

  uu_chcon::uu_app(dest);
  uu_chcon::parse_command_line((__int64)v17);
  if ( *(_QWORD *)v17 == 0x8000000000000000LL )
  {
    *(_OWORD *)v15 = *(_OWORD *)&v17[8];
    v16 = *(_QWORD *)&v17[72];
    *(_OWORD *)&v15[48] = *(_OWORD *)&v17[56];
    *(_OWORD *)&v15[32] = *(_OWORD *)&v17[40];
    *(_OWORD *)&v15[16] = *(_OWORD *)&v17[24];
    if ( *(_DWORD *)&v17[8] == 14 )
      return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
               *(_QWORD *)&v15[8],
               dest);
    *(_QWORD *)&v23 = v15;
    *((_QWORD *)&v23 + 1) = <uu_chcon::errors::Error as core::fmt::Display>::fmt;
    *(_QWORD *)v14 = &unk_EF5C8;
    *(_QWORD *)&v14[8] = 2LL;
    *(_QWORD *)&v14[32] = 0LL;
    *(_QWORD *)&v14[16] = &v23;
    *(_QWORD *)&v14[24] = 1LL;
    core::option::Option<T>::map_or_else(&v34, v14);
    *(_DWORD *)&v14[24] = 1;
    *(_OWORD *)v14 = v34;
    *(_QWORD *)&v14[16] = v35;
    v0 = alloc::boxed::Box<T>::new(v14);
    if ( *(_DWORD *)v15 == 14 )
      core::ptr::drop_in_place<clap_builder::error::Error>(*(_QWORD *)&v15[8]);
    else
      core::ptr::drop_in_place<uu_chcon::errors::Error>(v15);
    return v0;
  }
  v33 = v20;
  v32 = v19;
  v31 = v18;
  v30 = *(_OWORD *)&v17[64];
  v1 = *(_OWORD *)v17;
  v29 = *(__m256i *)&v17[32];
  v28[1] = *(_OWORD *)&v17[16];
  v28[0] = *(_OWORD *)v17;
  v2 = 2LL;
  if ( (unsigned __int64)(*(_QWORD *)&v17[24] + 0x7FFFFFFFFFFFFFFFLL) < 2 )
    v2 = *(_QWORD *)&v17[24] + 0x7FFFFFFFFFFFFFFFLL;
  if ( !v2 )
  {
    selinux::SecurityContext::of_path(v15, &v29);
    if ( *(_DWORD *)v15 == 10 )
    {
      if ( *(_DWORD *)&v15[8] != 2 )
      {
        *(_OWORD *)&v14[20] = *(_OWORD *)&v15[24];
        *(_OWORD *)&v14[4] = *(_OWORD *)&v15[8];
        goto LABEL_29;
      }
      uu_chcon::errors::Error::from_io1((__int64)v17);
      v7 = *(_DWORD *)v17;
      *(_OWORD *)v14 = *(_OWORD *)&v17[4];
      *(_OWORD *)&v14[16] = *(_OWORD *)&v17[20];
      *(_DWORD *)&v14[32] = *(_DWORD *)&v17[36];
      v27 = *(_OWORD *)&v17[40];
      v8 = *(_QWORD *)&v17[64];
      v9 = *(const char **)&v17[56];
      if ( *(_DWORD *)v17 == 18 )
      {
LABEL_29:
        v1 = *(_OWORD *)&v14[4];
        v24 = *(_OWORD *)&v14[20];
        v23 = *(_OWORD *)&v14[4];
        v6 = 0LL;
        if ( BYTE9(v33) != 1 )
          goto LABEL_30;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = *(_DWORD *)v15;
      *(_OWORD *)v14 = *(_OWORD *)&v15[4];
      *(_OWORD *)&v14[16] = *(_OWORD *)&v15[20];
      *(_DWORD *)&v14[32] = *(_DWORD *)&v15[36];
      v27 = *(_OWORD *)&v15[40];
      v9 = aGettingSecurit;
      v8 = 24LL;
      if ( *(_DWORD *)v15 == 18 )
        goto LABEL_29;
    }
    *(_DWORD *)v17 = v7;
    *(_OWORD *)&v17[4] = *(_OWORD *)v14;
    *(_OWORD *)&v17[20] = *(_OWORD *)&v14[16];
    *(_DWORD *)&v17[36] = *(_DWORD *)&v14[32];
    *(_OWORD *)&v17[40] = v27;
    *(_QWORD *)&v17[56] = v9;
    *(_QWORD *)&v17[64] = v8;
    uu_chcon::errors::report_full_error(&v21, v17, &off_EF648);
    v25 = &v21;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v15 = &unk_EF5E8;
    *(_QWORD *)&v15[8] = 2LL;
    *(_QWORD *)&v15[32] = 0LL;
    *(_QWORD *)&v15[16] = &v25;
    *(_QWORD *)&v15[24] = 1LL;
    core::option::Option<T>::map_or_else(&v36, v15);
    core::ptr::drop_in_place<alloc::string::String>(v21, v22);
    *(_DWORD *)&v15[24] = 1;
    *(_OWORD *)v15 = v36;
    *(_QWORD *)&v15[16] = v37;
    v0 = alloc::boxed::Box<T>::new(v15);
    core::ptr::drop_in_place<uu_chcon::errors::Error>(v17);
    goto LABEL_36;
  }
  if ( v2 == 1 )
  {
    uu_chcon::os_str_to_c_string(&v44, v29.m256i_i64[1], v29.m256i_i64[2]);
    if ( v44 == 18 )
    {
      v3 = v45;
      v4 = v46;
      *(_QWORD *)&v17[16] = v45;
      *(_QWORD *)v17 = 1LL;
      *(_QWORD *)&v17[8] = v46 - 1;
      *(_WORD *)&v17[24] = 0;
      v5 = selinux::SecurityContext::check(v17);
      if ( v5 != 2 && (v5 & 1) == 0 )
      {
        core::ptr::drop_in_place<selinux::SecurityContext>(v17);
        *(_QWORD *)v15 = 1LL;
        *(_OWORD *)&v15[8] = *(_OWORD *)&v29.m256i_u64[1];
        v15[24] = 1;
        *(_QWORD *)v14 = v15;
        *(_QWORD *)&v14[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v17 = &off_EF608;
        *(_QWORD *)&v17[8] = 2LL;
        *(_QWORD *)&v17[32] = 0LL;
        *(_QWORD *)&v17[16] = v14;
        *(_QWORD *)&v17[24] = 1LL;
        core::option::Option<T>::map_or_else(&v40, v17);
        *(_DWORD *)&v17[24] = 1;
        *(_OWORD *)v17 = v40;
        *(_QWORD *)&v17[16] = v41;
        v0 = alloc::boxed::Box<T>::new(v17);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, v4);
        goto LABEL_36;
      }
      core::ptr::drop_in_place<selinux::SecurityContext>(v17);
      *((_QWORD *)&v23 + 1) = v3;
      *(_QWORD *)&v24 = v4;
      *(_QWORD *)&v23 = 2LL;
      v6 = 0LL;
      if ( BYTE9(v33) != 1 )
        goto LABEL_30;
      goto LABEL_20;
    }
    *(_QWORD *)v15 = 1LL;
    *(_OWORD *)&v15[8] = *(_OWORD *)&v29.m256i_u64[1];
    v15[24] = 1;
    *(_QWORD *)v14 = v15;
    *(_QWORD *)&v14[8] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v17 = &off_EF608;
    *(_QWORD *)&v17[8] = 2LL;
    *(_QWORD *)&v17[32] = 0LL;
    *(_QWORD *)&v17[16] = v14;
    *(_QWORD *)&v17[24] = 1LL;
    core::option::Option<T>::map_or_else(&v38, v17);
    *(_DWORD *)&v17[24] = 1;
    *(_OWORD *)v17 = v38;
    *(_QWORD *)&v17[16] = v39;
    v0 = alloc::boxed::Box<T>::new(v17);
    core::ptr::drop_in_place<uu_chcon::errors::Error>(&v44);
LABEL_36:
    core::ptr::drop_in_place<uu_chcon::Options>(v28);
    return v0;
  }
  v23 = 2uLL;
  v6 = 0LL;
  if ( BYTE9(v33) != 1 )
    goto LABEL_30;
LABEL_20:
  if ( BYTE11(v33) )
  {
    uu_chcon::get_root_dev_ino(v15);
    if ( *(_DWORD *)v15 != 18 )
    {
      *(_QWORD *)&v17[64] = v16;
      *(_OWORD *)&v17[48] = *(_OWORD *)&v15[48];
      *(_OWORD *)&v17[32] = *(_OWORD *)&v15[32];
      *(_OWORD *)&v17[16] = *(_OWORD *)&v15[16];
      *(_OWORD *)v17 = *(_OWORD *)v15;
      uu_chcon::errors::report_full_error(&v21, v17, &off_EF648);
      v25 = &v21;
      v26 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v14 = &unk_EF5E8;
      *(_QWORD *)&v14[8] = 2LL;
      *(_QWORD *)&v14[32] = 0LL;
      *(_QWORD *)&v14[16] = &v25;
      *(_QWORD *)&v14[24] = 1LL;
      core::option::Option<T>::map_or_else(&v42, v14);
      core::ptr::drop_in_place<alloc::string::String>(v21, v22);
      *(_DWORD *)&v14[24] = 1;
      *(_OWORD *)v14 = v42;
      *(_QWORD *)&v14[16] = v43;
      v0 = alloc::boxed::Box<T>::new(v14);
      core::ptr::drop_in_place<uu_chcon::errors::Error>(v17);
LABEL_35:
      core::ptr::drop_in_place<uu_chcon::SELinuxSecurityContext>(&v23);
      goto LABEL_36;
    }
    v1 = *(_OWORD *)&v15[8];
    v6 = 1LL;
  }
LABEL_30:
  *(_QWORD *)v17 = v6;
  *(_OWORD *)&v17[8] = v1;
  uu_chcon::process_files(v14, v28, &v23, v17);
  if ( !*(_QWORD *)&v14[16] )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<uu_chcon::errors::Error>>(v14);
    v0 = 0LL;
    goto LABEL_35;
  }
  v10 = *(_QWORD *)&v14[8];
  v11 = 72LL * *(_QWORD *)&v14[16];
  do
  {
    *(_QWORD *)&v12 = uucore::util_name();
    *(_OWORD *)v15 = v12;
    v21 = v15;
    v22 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v17 = &unk_EF550;
    *(_QWORD *)&v17[8] = 2LL;
    *(_QWORD *)&v17[32] = 0LL;
    *(_QWORD *)&v17[16] = &v21;
    *(_QWORD *)&v17[24] = 1LL;
    std::io::stdio::_eprint(v17);
    uu_chcon::errors::report_full_error(v15, v10, &off_EF648);
    v21 = v15;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v17 = &unk_EF5C8;
    *(_QWORD *)&v17[8] = 2LL;
    *(_QWORD *)&v17[32] = 0LL;
    *(_QWORD *)&v17[16] = &v21;
    *(_QWORD *)&v17[24] = 1LL;
    std::io::stdio::_eprint(v17);
    core::ptr::drop_in_place<alloc::string::String>(*(_QWORD *)v15, *(_QWORD *)&v15[8]);
    v10 += 72LL;
    v11 -= 72LL;
  }
  while ( v11 );
  v0 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_chcon::errors::Error>>(v14);
  core::ptr::drop_in_place<uu_chcon::SELinuxSecurityContext>(&v23);
  core::ptr::drop_in_place<uu_chcon::Options>(v28);
  return v0;
}