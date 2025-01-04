__int64 __fastcall uu_mkdir::create_dir(_QWORD *a1, __int64 a2, char a3, unsigned __int8 a4, char a5, unsigned int a6)
{
  char *v9; // r13
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 dir; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rdx
  _QWORD **v21; // [rsp+18h] [rbp-160h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+20h] [rbp-158h]
  char *v23; // [rsp+28h] [rbp-150h]
  __int64 v24; // [rsp+30h] [rbp-148h]
  _QWORD *v25; // [rsp+38h] [rbp-140h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-138h]
  _QWORD *v27; // [rsp+48h] [rbp-130h]
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-128h]
  _QWORD v29[3]; // [rsp+58h] [rbp-120h] BYREF
  int v30; // [rsp+70h] [rbp-108h]
  char *v31; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-D8h]
  _QWORD *v33; // [rsp+A8h] [rbp-D0h]
  __int64 v34; // [rsp+B0h] [rbp-C8h]
  __int64 v35; // [rsp+B8h] [rbp-C0h]

  std::fs::metadata(&v31, a1, a2);
  v9 = v31;
  if ( v31 == (_BYTE *)&dword_0 + 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v32);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v31, v32);
    if ( !a3 )
    {
      v25 = a1;
      v26 = (__int64 (__fastcall *)())a2;
      v21 = &v25;
      v22 = <std::path::Display as core::fmt::Display>::fmt;
      v31 = (char *)&unk_1205E8;
      v32 = 2LL;
      v35 = 0LL;
      v33 = &v21;
      v34 = 1LL;
      core::option::Option<T>::map_or_else(v29, &v31);
      v30 = 1;
      return alloc::boxed::Box<T>::new(v29);
    }
  }
  v23 = v9;
  v24 = (__int64)a1;
  std::path::Path::components(v29, a1);
  v10 = 0LL;
  std::path::Path::components(&v31, 1LL);
  if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(v29, &v31) )
  {
    v11 = v24;
    if ( a3 )
    {
      v12 = std::path::Path::parent(v24, a2);
      if ( v12 )
      {
        dir = uu_mkdir::create_dir(v12, v13, 1LL, a4, 1LL, a6);
        if ( dir )
          return dir;
      }
      else
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v31, aFailedToCreate_0, 27LL);
        LODWORD(v34) = 1;
        v15 = alloc::boxed::Box<T>::new(&v31);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v15, &off_120578);
      }
    }
    v16 = std::fs::create_dir(v24, a2);
    if ( v16 )
    {
      v17 = v16;
      if ( (unsigned __int8)std::path::Path::is_dir(v24, a2) )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v17);
        return 0LL;
      }
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    }
    else
    {
      if ( a4 )
      {
        v21 = (_QWORD **)uucore::util_name();
        v22 = v18;
        v29[0] = 1LL;
        v29[1] = v24;
        v29[2] = a2;
        LOBYTE(v30) = 1;
        v25 = &v21;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = v29;
        v28 = <os_display::Quoted as core::fmt::Display>::fmt;
        v31 = (char *)&unk_120608;
        v32 = 3LL;
        v35 = 0LL;
        v33 = &v25;
        v34 = 2LL;
        std::io::stdio::_print(&v31);
      }
      if ( (_DWORD)v23 == 2 )
      {
        uucore::features::fsxattr::get_acl_perm_bits_from_xattr(v11, a2);
        if ( a5 )
          uucore::features::mode::get_umask();
      }
      return uu_mkdir::chmod(v11, a2);
    }
  }
  return v10;
}
