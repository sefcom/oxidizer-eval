__int64 __fastcall uu_install::preserve_timestamps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rdx
  __int64 v9; // [rsp+8h] [rbp-120h] BYREF
  __int64 v10; // [rsp+10h] [rbp-118h] BYREF
  _QWORD v11[2]; // [rsp+18h] [rbp-110h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-100h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+30h] [rbp-F8h]
  void *dest; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-B8h]
  __int64 **v16; // [rsp+78h] [rbp-B0h]
  __int64 v17; // [rsp+80h] [rbp-A8h]
  __int64 v18; // [rsp+88h] [rbp-A0h]
  __int64 v19; // [rsp+D0h] [rbp-58h]
  unsigned int v20; // [rsp+D8h] [rbp-50h]
  __int64 v21; // [rsp+E0h] [rbp-48h]
  unsigned int v22; // [rsp+E8h] [rbp-40h]

  std::fs::metadata(&dest);
  if ( (_DWORD)dest == 2 )
  {
    v13 = (__int64 (__fastcall *)())v15;
    v12 = (_QWORD *)(byte_9 + 1);
    return alloc::boxed::Box<T>::new(&v12);
  }
  else
  {
    v7 = filetime::set_file_times(a3, a4, v19, v20, v21, v22);
    v10 = v7;
    if ( v7 )
    {
      v9 = v7;
      v12 = (__int64 *)uucore::util_name();
      v13 = v8;
      v11[0] = &v12;
      v11[1] = <&T as core::fmt::Display>::fmt;
      dest = &unk_102188;
      v15 = 2LL;
      v18 = 0LL;
      v16 = (__int64 **)v11;
      v17 = 1LL;
      std::io::stdio::_eprint(&dest);
      v12 = &v9;
      v13 = <std::io::error::Error as core::fmt::Display>::fmt;
      dest = &unk_102510;
      v15 = 2LL;
      v18 = 0LL;
      v16 = &v12;
      v17 = 1LL;
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<std::io::error::Error>(&v9);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v10);
    }
    return 0LL;
  }
}