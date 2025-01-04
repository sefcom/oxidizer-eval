__int64 __fastcall uu_numfmt::handle_buffer(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v8; // [rsp+0h] [rbp-C8h]
  __int128 *v9; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+10h] [rbp-B8h]
  __int128 v11; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  void *v13; // [rsp+30h] [rbp-98h] BYREF
  __int128 v14; // [rsp+38h] [rbp-90h]
  __int64 v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  __int64 v17; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-50h] BYREF
  __int64 v20; // [rsp+80h] [rbp-48h]
  __int128 *v21; // [rsp+88h] [rbp-40h]
  __int64 v22; // [rsp+90h] [rbp-38h]

  v17 = a1;
  v18[0] = &v17;
  v18[1] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19, v18);
  v4 = v20;
  if ( v20 == 0x8000000000000001LL )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 192);
  while ( v4 != 0x8000000000000000LL )
  {
    if ( v19 >= v6 )
    {
      *((_QWORD *)&v14 + 1) = v22;
      v5 = uu_numfmt::format_and_handle_validation(
             v21,
             v22,
             a2,
             0x8000000000000001LL,
             v2,
             v3,
             v8,
             v9,
             v10,
             v11,
             *((_QWORD *)&v11 + 1),
             v12,
             v4,
             v21);
      core::ptr::drop_in_place<alloc::string::String>(&v13);
      if ( v5 )
        return v5;
    }
    else
    {
      *(_QWORD *)&v11 = v4;
      *((_QWORD *)&v11 + 1) = v21;
      v12 = v22;
      v9 = &v11;
      v10 = <alloc::string::String as core::fmt::Display>::fmt;
      v13 = &unk_132968;
      *(_QWORD *)&v14 = 2LL;
      v16 = 0LL;
      *((_QWORD *)&v14 + 1) = &v9;
      v15 = 1LL;
      std::io::stdio::_print(&v13);
      core::ptr::drop_in_place<alloc::string::String>(&v11);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19, v18);
    v4 = v20;
    if ( v20 == 0x8000000000000001LL )
      return 0LL;
  }
  v9 = v21;
  <T as alloc::string::ToString>::to_string(&v11, &v9);
  v15 = v12;
  v14 = v11;
  v13 = 0LL;
  v5 = alloc::boxed::Box<T>::new(&v13);
  core::ptr::drop_in_place<std::io::error::Error>(&v9);
  return v5;
}
