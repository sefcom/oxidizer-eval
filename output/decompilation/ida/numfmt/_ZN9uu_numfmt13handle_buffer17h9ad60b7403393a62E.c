__int64 __fastcall uu_numfmt::handle_buffer(__int64 a1, __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int128 v6; // rdi
  _QWORD v8[2]; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-A0h]
  void *v11; // [rsp+30h] [rbp-98h] BYREF
  __int128 v12; // [rsp+38h] [rbp-90h]
  __int64 v13; // [rsp+48h] [rbp-80h]
  __int64 v14; // [rsp+50h] [rbp-78h]
  __int64 v15; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-50h] BYREF
  void *v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]
  __int64 v20; // [rsp+90h] [rbp-38h]

  v15 = a1;
  v16[0] = &v15;
  v16[1] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v17, v16);
  v3 = v18;
  if ( v18 == (void *)0x8000000000000001LL )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 192);
  while ( 1 )
  {
    *(_QWORD *)&v6 = v19;
    if ( v3 == (void *)0x8000000000000000LL )
      break;
    *((_QWORD *)&v6 + 1) = v20;
    if ( v17 >= v5 )
    {
      v11 = v3;
      v12 = v6;
      v4 = uu_numfmt::format_and_handle_validation(v19, v20, a2);
      core::ptr::drop_in_place<alloc::string::String>(&v11);
      if ( v4 )
        return v4;
    }
    else
    {
      *(_QWORD *)&v9 = v3;
      *((_QWORD *)&v9 + 1) = v19;
      v10 = v20;
      v8[0] = &v9;
      v8[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v11 = &unk_132968;
      *(_QWORD *)&v12 = 2LL;
      v14 = 0LL;
      *((_QWORD *)&v12 + 1) = v8;
      v13 = 1LL;
      std::io::stdio::_print(&v11);
      core::ptr::drop_in_place<alloc::string::String>(&v9);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v17, v16);
    v3 = v18;
    if ( v18 == (void *)0x8000000000000001LL )
      return 0LL;
  }
  v8[0] = v19;
  <T as alloc::string::ToString>::to_string(&v9, v8);
  v13 = v10;
  v12 = v9;
  v11 = 0LL;
  v4 = alloc::boxed::Box<T>::new(&v11);
  core::ptr::drop_in_place<std::io::error::Error>(v8);
  return v4;
}
