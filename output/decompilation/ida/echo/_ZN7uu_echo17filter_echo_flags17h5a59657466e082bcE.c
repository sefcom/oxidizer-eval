__int64 __fastcall uu_echo::filter_echo_flags(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int16 v6; // [rsp+Eh] [rbp-10Ah] BYREF
  __int128 v7; // [rsp+10h] [rbp-108h] BYREF
  __int64 v8; // [rsp+20h] [rbp-F8h]
  __int128 v9; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-D8h]
  __int64 v11; // [rsp+48h] [rbp-D0h]
  __int128 v12; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-B8h]
  __int128 v14; // [rsp+70h] [rbp-A8h]
  __int128 v15; // [rsp+88h] [rbp-90h] BYREF
  __int64 v16; // [rsp+98h] [rbp-80h]
  __int128 v17; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-68h]
  __int128 v19; // [rsp+C0h] [rbp-58h]
  _QWORD v20[9]; // [rsp+D0h] [rbp-48h] BYREF

  v11 = a1;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  v10 = 0LL;
  v6 = 1;
  v2 = *a2;
  v3 = a2[1];
  v19 = a2[2];
  v18 = v3;
  v17 = v2;
  while ( 1 )
  {
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(&v15, &v17);
    if ( (_QWORD)v15 == 0x8000000000000000LL )
      break;
    v8 = v16;
    v7 = v15;
    if ( !(unsigned __int8)uu_echo::is_echo_flag(&v7, &v6) )
    {
      *(_QWORD *)&v13 = v8;
      v12 = v7;
      alloc::vec::Vec<T,A>::push(&v9, &v12, &off_6FEE8);
      break;
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v7, *((_QWORD *)&v7 + 1));
  }
  v14 = v19;
  v13 = v18;
  v12 = v17;
  while ( 1 )
  {
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(v20, &v12);
    if ( v20[0] == 0x8000000000000000LL )
      break;
    alloc::vec::Vec<T,A>::push(&v9, v20, &off_6FF00);
  }
  core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<core::iter::adapters::skip::Skip<core::iter::adapters::cloned::Cloned<core::slice::iter::Iter<std::ffi::os_str::OsString>>>>>(
    v12,
    *((_QWORD *)&v12 + 1));
  v4 = v11;
  *(_QWORD *)(v11 + 16) = v10;
  *(_OWORD *)v4 = v9;
  result = v6;
  *(_WORD *)(v4 + 24) = v6;
  return result;
}