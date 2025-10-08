__int64 __fastcall uu_mkdir::create_dir(_QWORD *a1, __int64 (__fastcall *a2)(), char a3, __int64 a4)
{
  char *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 dir; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(); // rdx
  char v19; // [rsp+Ch] [rbp-15Ch]
  _QWORD **v20; // [rsp+18h] [rbp-150h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+20h] [rbp-148h]
  _QWORD *v22; // [rsp+28h] [rbp-140h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-138h]
  _QWORD *v24; // [rsp+38h] [rbp-130h]
  __int64 (__fastcall *v25)(); // [rsp+40h] [rbp-128h]
  _QWORD v26[3]; // [rsp+48h] [rbp-120h] BYREF
  int v27; // [rsp+60h] [rbp-108h]
  char *dest; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-D8h]
  _QWORD *v30; // [rsp+98h] [rbp-D0h]
  __int64 v31; // [rsp+A0h] [rbp-C8h]
  __int64 v32; // [rsp+A8h] [rbp-C0h]

  std::fs::metadata(&dest);
  v6 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v29);
  if ( v6 != (_BYTE *)&dword_0 + 2 && !*(_BYTE *)(a4 + 12) )
  {
    v22 = a1;
    v23 = a2;
    v20 = &v22;
    v21 = <std::path::Display as core::fmt::Display>::fmt;
    dest = (char *)&unk_EDED8;
    v29 = 2LL;
    v32 = 0LL;
    v30 = &v20;
    v31 = 1LL;
    core::option::Option<T>::map_or_else(v26, &dest);
    v27 = 1;
    return alloc::boxed::Box<T>::new(v26);
  }
  v19 = a3;
  std::path::Path::components(v26, a1, a2);
  v7 = 0LL;
  std::path::Path::components(&dest, 1LL, 0LL);
  if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(v26, &dest) )
  {
    v8 = (__int64)a2;
    if ( *(_BYTE *)(a4 + 12) )
    {
      v9 = std::path::Path::parent(a1, a2);
      if ( v9 )
      {
        dir = uu_mkdir::create_dir(v9, v10, 1LL, a4);
        if ( dir )
          return dir;
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aFailedToCreate, 27LL);
        LODWORD(v31) = 1;
        v8 = (__int64)a2;
        v12 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
          v12,
          &off_EDE60);
      }
    }
    v13 = (__int64)a1;
    v14 = std::fs::create_dir(a1, v8);
    if ( v14 )
    {
      v15 = v14;
      if ( (unsigned __int8)std::path::Path::is_dir(a1, v8) )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v15);
        return 0LL;
      }
      else
      {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
      }
    }
    else
    {
      if ( *(_BYTE *)(a4 + 13) )
      {
        v20 = (_QWORD **)uucore::util_name();
        v21 = v16;
        v26[0] = 1LL;
        v26[1] = a1;
        v26[2] = v8;
        LOBYTE(v27) = 1;
        v22 = &v20;
        v23 = <&T as core::fmt::Display>::fmt;
        v24 = v26;
        v25 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = (char *)&unk_EDEF8;
        v29 = 3LL;
        v32 = 0LL;
        v30 = &v22;
        v31 = 2LL;
        std::io::stdio::_print(&dest);
      }
      if ( (_DWORD)v6 == 2 )
      {
        uucore::features::fsxattr::get_acl_perm_bits_from_xattr(a1, v8);
        if ( v19 )
        {
          uucore::features::mode::get_umask();
          v13 = (__int64)a1;
        }
      }
      return uu_mkdir::chmod(v13, v8);
    }
  }
  return v7;
}