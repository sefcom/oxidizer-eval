__int64 *__fastcall uu_sum::open(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  __int64 *v14; // [rsp+0h] [rbp-128h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+8h] [rbp-120h]
  __int64 v16; // [rsp+10h] [rbp-118h] BYREF
  __int64 v17; // [rsp+18h] [rbp-110h]
  __int64 v18; // [rsp+20h] [rbp-108h]
  int v19; // [rsp+28h] [rbp-100h]
  __int64 v20; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+38h] [rbp-F0h]
  int v22; // [rsp+48h] [rbp-E0h]
  _QWORD v23[2]; // [rsp+50h] [rbp-D8h] BYREF
  char *dest; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-C0h]
  __int64 **v26; // [rsp+70h] [rbp-B8h]
  __int64 v27; // [rsp+78h] [rbp-B0h]
  __int64 v28; // [rsp+80h] [rbp-A8h]

  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3) )
  {
    v23[0] = a2;
    v23[1] = a3;
    if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
    {
      v16 = 0LL;
      v17 = a2;
      v18 = a3;
      LOBYTE(v19) = 0;
      v14 = &v16;
      v15 = <os_display::Quoted as core::fmt::Display>::fmt;
      v12 = (char *)&unk_E1B58;
    }
    else
    {
      std::fs::metadata(&dest);
      if ( dest != (_BYTE *)&dword_0 + 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v25);
        std::fs::File::open(&dest, v23);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v20,
          &dest);
        v5 = v20;
        if ( v20 )
        {
          v6 = v21;
          v7 = 1LL;
          goto LABEL_9;
        }
        v5 = alloc::boxed::Box<T>::new((unsigned int)v21);
        v6 = &off_E1B98;
        goto LABEL_3;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v25);
      v16 = 0LL;
      v17 = a2;
      v18 = a3;
      LOBYTE(v19) = 0;
      v14 = &v16;
      v15 = <os_display::Quoted as core::fmt::Display>::fmt;
      v12 = (char *)&unk_E1B78;
    }
    dest = v12;
    v25 = 2LL;
    v28 = 0LL;
    v26 = &v14;
    v27 = 1LL;
    core::option::Option<T>::map_or_else(&v20, &dest, v8, v9, v10, v11, v14, v15, v16, v17, v18, v19);
    v22 = 2;
    v5 = alloc::boxed::Box<T>::new(&v20);
    v7 = 1LL;
    v6 = &off_E1C10;
    goto LABEL_9;
  }
  v4 = std::io::stdio::stdin();
  v5 = alloc::boxed::Box<T>::new(v4);
  v6 = (__int64 (__fastcall **)())&unk_E1C78;
LABEL_3:
  v7 = 0LL;
LABEL_9:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}