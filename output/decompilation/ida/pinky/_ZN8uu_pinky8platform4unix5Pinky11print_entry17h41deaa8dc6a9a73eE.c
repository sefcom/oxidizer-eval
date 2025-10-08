unsigned __int64 __fastcall uu_pinky::platform::unix::Pinky::print_entry(_BYTE *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  unsigned __int128 *v8; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-1B8h]
  __int64 v10; // [rsp+18h] [rbp-1B0h]
  unsigned __int128 dest; // [rsp+20h] [rbp-1A8h] BYREF
  __m256i v12; // [rsp+30h] [rbp-198h]
  __int128 v13; // [rsp+50h] [rbp-178h]
  __int128 v14; // [rsp+60h] [rbp-168h]
  __int128 v15; // [rsp+70h] [rbp-158h]
  __int128 v16; // [rsp+80h] [rbp-148h]
  __int128 v17; // [rsp+90h] [rbp-138h]
  int v18; // [rsp+D4h] [rbp-F4h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-F0h]
  unsigned __int128 v20; // [rsp+E0h] [rbp-E8h] BYREF
  __m256i v21; // [rsp+F0h] [rbp-D8h]
  __int128 v22; // [rsp+110h] [rbp-B8h]
  __int128 v23; // [rsp+120h] [rbp-A8h]
  __int128 v24; // [rsp+130h] [rbp-98h]
  __int128 v25; // [rsp+140h] [rbp-88h]
  __int128 v26; // [rsp+150h] [rbp-78h]
  _QWORD v27[2]; // [rsp+168h] [rbp-60h] BYREF
  unsigned __int128 v28; // [rsp+180h] [rbp-48h] BYREF
  __int64 v29; // [rsp+190h] [rbp-38h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v27, &unk_18B9C, 4LL);
  uucore::features::utmpx::Utmpx::tty_device(&dest, a2);
  std::path::PathBuf::push(v27, *((_QWORD *)&dest + 1), v12.m256i_i64[0]);
  core::ptr::drop_in_place<alloc::string::String>(&dest);
  std::fs::metadata(&dest);
  if ( (_QWORD)dest == 2LL )
  {
    v2 = 63;
    v3 = 0LL;
  }
  else
  {
    v3 = *((_QWORD *)&v16 + 1);
    v2 = 32;
    if ( (BYTE8(v13) & 0x10) == 0 )
      v2 = 42;
  }
  v18 = v2;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, *((_QWORD *)&dest + 1));
  uucore::features::utmpx::Utmpx::user(&v8, a2);
  *(_QWORD *)&v20 = &v8;
  *((_QWORD *)&v20 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v21.m256i_i64[0] = 0LL;
  v21.m256i_i16[4] = 32;
  *(_QWORD *)&dest = &unk_19240;
  *((_QWORD *)&dest + 1) = 1LL;
  v12.m256i_i64[2] = (__int64)asc_1A668;
  v12.m256i_i64[3] = 1LL;
  v12.m256i_i64[0] = (__int64)&v20;
  v12.m256i_i64[1] = 2LL;
  std::io::stdio::_print(&dest);
  core::ptr::drop_in_place<alloc::string::String>(&v8);
  if ( a1[26] )
  {
    uucore::features::utmpx::Utmpx::user(&v8, a2);
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(&v20, v9, v10);
    if ( __OFSUB__(0LL, (_QWORD)v20) )
    {
      core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v20);
      core::ptr::drop_in_place<alloc::string::String>(&v8);
      *(_QWORD *)&v20 = &off_F8F80;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_F8F60;
      *((_QWORD *)&dest + 1) = 1LL;
      v12.m256i_i64[2] = (__int64)&unk_1A6A8;
      v12.m256i_i64[3] = 1LL;
      v12.m256i_i64[0] = (__int64)&v20;
      v12.m256i_i64[1] = 1LL;
      std::io::stdio::_print(&dest);
    }
    else
    {
      v19 = v3;
      v17 = v26;
      v16 = v25;
      v15 = v24;
      v14 = v23;
      v13 = v22;
      v12 = v21;
      dest = v20;
      uu_pinky::platform::unix::gecos_to_fullname(&v28, &dest);
      core::ptr::drop_in_place<uucore::features::entries::Passwd>(&dest);
      core::ptr::drop_in_place<alloc::string::String>(&v8);
      if ( (_QWORD)v28 == 0x8000000000000000LL )
      {
        *(_QWORD *)&v20 = &off_F8F80;
        *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_F8F60;
        *((_QWORD *)&dest + 1) = 1LL;
        v12.m256i_i64[2] = (__int64)&unk_1A6A8;
        v12.m256i_i64[3] = 1LL;
        v12.m256i_i64[0] = (__int64)&v20;
        v12.m256i_i64[1] = 1LL;
        std::io::stdio::_print(&dest);
        v3 = v19;
      }
      else
      {
        v21.m256i_i64[0] = v29;
        v20 = v28;
        v8 = &v20;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_F8F60;
        *((_QWORD *)&dest + 1) = 1LL;
        v12.m256i_i64[2] = (__int64)&unk_1A6D8;
        v12.m256i_i64[3] = 1LL;
        v12.m256i_i64[0] = (__int64)&v8;
        v12.m256i_i64[1] = 1LL;
        std::io::stdio::_print(&dest);
        v3 = v19;
        core::ptr::drop_in_place<alloc::string::String>(&v20);
      }
    }
  }
  uucore::features::utmpx::Utmpx::tty_device(&v8, a2);
  *(_QWORD *)&dest = &v18;
  *((_QWORD *)&dest + 1) = <char as core::fmt::Display>::fmt;
  v12.m256i_i64[0] = (__int64)&v8;
  v12.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
  v12.m256i_i64[2] = 0LL;
  v12.m256i_i16[12] = 32;
  *(_QWORD *)&v20 = &off_F8F90;
  *((_QWORD *)&v20 + 1) = 2LL;
  v21.m256i_i64[2] = (__int64)&unk_1A708;
  v21.m256i_i64[3] = 2LL;
  v21.m256i_i64[0] = (__int64)&dest;
  v21.m256i_i64[1] = 3LL;
  std::io::stdio::_print(&v20);
  core::ptr::drop_in_place<alloc::string::String>(&v8);
  if ( a1[24] )
  {
    if ( v3 )
    {
      uu_pinky::platform::unix::idle_string(&v20, v3);
      v8 = &v20;
      v9 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_F8F60;
      *((_QWORD *)&dest + 1) = 1LL;
      v12.m256i_i64[2] = (__int64)&unk_1A770;
      v12.m256i_i64[3] = 1LL;
      v12.m256i_i64[0] = (__int64)&v8;
      v12.m256i_i64[1] = 1LL;
      std::io::stdio::_print(&dest);
      core::ptr::drop_in_place<alloc::string::String>(&v20);
    }
    else
    {
      *(_QWORD *)&v20 = &off_F8FB0;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_F8F60;
      *((_QWORD *)&dest + 1) = 1LL;
      v12.m256i_i64[2] = (__int64)&unk_1A770;
      v12.m256i_i64[3] = 1LL;
      v12.m256i_i64[0] = (__int64)&v20;
      v12.m256i_i64[1] = 1LL;
      std::io::stdio::_print(&dest);
    }
  }
  uu_pinky::platform::unix::time_string((__int64)&v20, a2);
  v8 = &v20;
  v9 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &off_F8F60;
  *((_QWORD *)&dest + 1) = 1LL;
  v12.m256i_i64[0] = (__int64)&v8;
  *(_OWORD *)&v12.m256i_u64[1] = 1uLL;
  std::io::stdio::_print(&dest);
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  uucore::features::utmpx::Utmpx::host(&v20, a2);
  if ( !a1[29] || !v21.m256i_i64[0] )
    goto LABEL_19;
  uucore::features::utmpx::Utmpx::canon_host(&dest, a2);
  v4 = *((_QWORD *)&dest + 1);
  v5 = dest;
  v6 = v12.m256i_i64[0];
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  if ( !__OFSUB__(-(__int64)v5, 1LL) )
  {
    v20 = __PAIR128__(v4, v5);
    v21.m256i_i64[0] = v6;
    v8 = &v20;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_F8F60;
    *((_QWORD *)&dest + 1) = 1LL;
    v12.m256i_i64[0] = (__int64)&v8;
    *(_OWORD *)&v12.m256i_u64[1] = 1uLL;
    std::io::stdio::_print(&dest);
LABEL_19:
    *(_QWORD *)&dest = &off_F8F70;
    *((_QWORD *)&dest + 1) = 1LL;
    v12.m256i_i64[0] = 8LL;
    *(_OWORD *)&v12.m256i_u64[1] = 0LL;
    std::io::stdio::_print(&dest);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    v4 = 0LL;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v27[0], v27[1]);
  return v4;
}