__int64 (__fastcall **__fastcall uu_wc::files0_iter_file(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 v4; // rax
  __int64 (__fastcall **result)(); // rax
  unsigned int v6; // ebp
  _DWORD v7[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  __int128 v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  std::fs::File::open(v7);
  if ( v7[0] )
  {
    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
           v8,
           a2,
           a3);
    *a1 = 0x8000000000000001LL;
    a1[1] = v4;
    result = &off_131158;
    a1[2] = &off_131158;
  }
  else
  {
    v6 = v7[1];
    std::sys::os_str::bytes::Slice::to_owned(&v11, a2, a3);
    v10 = v12;
    v9 = v11;
    return (__int64 (__fastcall **)())uu_wc::files0_iter(a1, v6, &v9);
  }
  return result;
}
