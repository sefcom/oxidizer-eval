__int64 __fastcall uu_id::pretty(__int128 *a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  char *v3; // rax
  char *v4; // rbx
  size_t v5; // rax
  unsigned __int64 v6; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rbx
  __int64 result; // rax
  char v12; // bp
  __gid_t v13; // eax
  __gid_t v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r12
  __int128 v18; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-1A8h]
  __int128 v20; // [rsp+18h] [rbp-1A0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-190h]
  __int64 v22; // [rsp+38h] [rbp-180h]
  __uid_t v23; // [rsp+48h] [rbp-170h] BYREF
  __gid_t v24; // [rsp+4Ch] [rbp-16Ch] BYREF
  __int128 v25; // [rsp+50h] [rbp-168h] BYREF
  __int128 v26; // [rsp+60h] [rbp-158h]
  __int128 v27; // [rsp+70h] [rbp-148h]
  __int128 v28; // [rsp+80h] [rbp-138h]
  __int128 v29; // [rsp+90h] [rbp-128h]
  __int128 v30; // [rsp+A0h] [rbp-118h]
  __int128 v31; // [rsp+B0h] [rbp-108h]
  __int128 v32; // [rsp+C0h] [rbp-F8h]
  __int128 v33; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-D8h]
  __int128 v35; // [rsp+F0h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+100h] [rbp-B8h]
  __int128 v37; // [rsp+110h] [rbp-A8h]
  __int128 v38; // [rsp+120h] [rbp-98h]
  __int128 v39; // [rsp+130h] [rbp-88h]
  __int128 v40; // [rsp+140h] [rbp-78h]
  __int128 v41; // [rsp+150h] [rbp-68h]
  __int128 v42; // [rsp+160h] [rbp-58h]
  _QWORD v43[8]; // [rsp+178h] [rbp-40h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)a1) )
  {
    v3 = getlogin();
    if ( v3 )
    {
      v4 = v3;
      v5 = strlen(v3);
      alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(&v25, v4, v5 + 1);
      v2 = *((_QWORD *)&v25 + 1);
      v6 = v25;
      v1 = v26;
    }
    else
    {
      v6 = 0x8000000000000001LL;
    }
    v23 = uucore::features::process::getuid();
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(&v35, v23);
    if ( (_QWORD)v35 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v35);
      *(_QWORD *)&v35 = &v23;
      *((_QWORD *)&v35 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      *(_QWORD *)&v25 = &off_E8DB8;
      *((_QWORD *)&v25 + 1) = 2LL;
      *(_QWORD *)&v27 = 0LL;
      *(_QWORD *)&v26 = &v35;
      *((_QWORD *)&v26 + 1) = 1LL;
      std::io::stdio::_print(&v25);
      v12 = 1;
    }
    else
    {
      v32 = v42;
      v31 = v41;
      v30 = v40;
      v29 = v39;
      v28 = v38;
      v27 = v37;
      v26 = v36;
      v25 = v35;
      v12 = 1;
      if ( v6 != 0x8000000000000001LL )
      {
        *(_QWORD *)&v18 = v6;
        *((_QWORD *)&v18 + 1) = v2;
        v19 = v1;
        *(_QWORD *)&v33 = &v18;
        *((_QWORD *)&v33 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)&v20 = &off_E8D98;
        *((_QWORD *)&v20 + 1) = 2LL;
        v22 = 0LL;
        *(_QWORD *)&v21 = &v33;
        *((_QWORD *)&v21 + 1) = 1LL;
        std::io::stdio::_print(&v20);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v18, *((_QWORD *)&v18 + 1));
        v12 = 0;
      }
      *(_QWORD *)&v18 = &v25;
      *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = &off_E8DB8;
      *((_QWORD *)&v20 + 1) = 2LL;
      v22 = 0LL;
      *(_QWORD *)&v21 = &v18;
      *((_QWORD *)&v21 + 1) = 1LL;
      std::io::stdio::_print(&v20);
      core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v25);
    }
    v13 = uucore::features::process::getegid();
    v24 = v13;
    if ( v13 == v23 )
    {
      <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(&v35, v13);
      if ( (_QWORD)v35 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v35);
        *(_QWORD *)&v35 = &v24;
        *((_QWORD *)&v35 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        *(_QWORD *)&v25 = &off_E8DD8;
        *((_QWORD *)&v25 + 1) = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v35;
        *((_QWORD *)&v26 + 1) = 1LL;
        std::io::stdio::_print(&v25);
      }
      else
      {
        v32 = v42;
        v31 = v41;
        v30 = v40;
        v29 = v39;
        v28 = v38;
        v27 = v37;
        v26 = v36;
        v25 = v35;
        *(_QWORD *)&v18 = &v25;
        *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v20 = &off_E8DD8;
        *((_QWORD *)&v20 + 1) = 2LL;
        v22 = 0LL;
        *(_QWORD *)&v21 = &v18;
        *((_QWORD *)&v21 + 1) = 1LL;
        std::io::stdio::_print(&v20);
        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v25);
      }
    }
    v14 = uucore::features::process::getgid();
    LODWORD(v43[0]) = v14;
    if ( v14 != v24 )
    {
      v16 = v14;
      <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&v20);
      if ( (_QWORD)v20 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Group,std::io::error::Error>>(
          &v20,
          v16);
        *(_QWORD *)&v35 = v43;
        *((_QWORD *)&v35 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        *(_QWORD *)&v25 = &off_E8DD8;
        *((_QWORD *)&v25 + 1) = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v35;
        *((_QWORD *)&v26 + 1) = 1LL;
        std::io::stdio::_print(&v25);
      }
      else
      {
        v36 = v21;
        v35 = v20;
        *(_QWORD *)&v18 = &v35;
        *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = &off_E8DD8;
        *((_QWORD *)&v25 + 1) = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v18;
        *((_QWORD *)&v26 + 1) = 1LL;
        std::io::stdio::_print(&v25);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v35, *((_QWORD *)&v35 + 1));
      }
    }
    uucore::features::entries::get_groups_gnu(&v25, 0LL, v15);
    core::result::Result<T,E>::unwrap(&v35, &v25);
    v17 = *((_QWORD *)&v35 + 1);
    core::iter::traits::iterator::Iterator::collect(&v20, *((_QWORD *)&v35 + 1), *((_QWORD *)&v35 + 1) + 4 * v36);
    alloc::str::join_generic_copy(&v25, *((_QWORD *)&v20 + 1), v21, asc_19EDD);
    v19 = v26;
    v18 = v25;
    *(_QWORD *)&v33 = &v18;
    *((_QWORD *)&v33 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &off_E8DF8;
    *((_QWORD *)&v25 + 1) = 2LL;
    *(_QWORD *)&v27 = 0LL;
    *(_QWORD *)&v26 = &v33;
    *((_QWORD *)&v26 + 1) = 1LL;
    std::io::stdio::_print(&v25);
    core::ptr::drop_in_place<alloc::string::String>(v18, *((_QWORD *)&v18 + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v20);
    result = core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v35, v17);
    if ( v6 != 0x8000000000000001LL )
    {
      if ( v12 )
        return core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v6, v2);
    }
  }
  else
  {
    v32 = a1[7];
    v31 = a1[6];
    v30 = a1[5];
    v29 = a1[4];
    v7 = *a1;
    v8 = a1[1];
    v9 = a1[2];
    v28 = a1[3];
    v27 = v9;
    v26 = v8;
    v25 = v7;
    *(_QWORD *)&v20 = &v25;
    *((_QWORD *)&v20 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = &off_E8D58;
    *((_QWORD *)&v35 + 1) = 2LL;
    *(_QWORD *)&v37 = 0LL;
    *(_QWORD *)&v36 = &v20;
    *((_QWORD *)&v36 + 1) = 1LL;
    std::io::stdio::_print(&v35);
    uucore::features::entries::Passwd::belongs_to(&v20, &v25);
    v10 = *((_QWORD *)&v20 + 1);
    core::iter::traits::iterator::Iterator::collect(&v18, *((_QWORD *)&v20 + 1), *((_QWORD *)&v20 + 1) + 4 * v21);
    alloc::str::join_generic_copy(&v35, *((_QWORD *)&v18 + 1), v19, asc_19EDD);
    v34 = v36;
    v33 = v35;
    v43[0] = &v33;
    v43[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = &unk_E8D78;
    *((_QWORD *)&v35 + 1) = 2LL;
    *(_QWORD *)&v37 = 0LL;
    *(_QWORD *)&v36 = v43;
    *((_QWORD *)&v36 + 1) = 1LL;
    std::io::stdio::_print(&v35);
    core::ptr::drop_in_place<alloc::string::String>(v33, *((_QWORD *)&v33 + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v20, v10);
    return core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v25);
  }
  return result;
}