bool __fastcall uu_pathchk::check_portable_chars(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rdx
  unsigned __int8 *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // rax
  int v11; // [rsp+Ch] [rbp-BCh] BYREF
  void *v12; // [rsp+10h] [rbp-B8h] BYREF
  char **v13; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-A8h]
  _QWORD *v15; // [rsp+28h] [rbp-A0h]
  __int64 v16; // [rsp+30h] [rbp-98h]
  __int64 v17; // [rsp+38h] [rbp-90h]
  _QWORD v18[3]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v20[3]; // [rsp+80h] [rbp-48h] BYREF
  char v21; // [rsp+98h] [rbp-30h]

  v18[0] = a1;
  v18[1] = a1 + a2;
  v18[2] = 0LL;
  while ( 1 )
  {
    v2 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v18);
    v4 = v3;
    if ( !v3 )
      break;
    v5 = v2;
    if ( core::slice::memchr::memchr(*v3) != 1 )
    {
      v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             v5,
             a1,
             a2);
      if ( !v6 )
        core::str::slice_error_fail(a1, a2, v5, a2, &off_DEB38);
      v13 = (char **)v6;
      v14 = v6 + v7;
      if ( (core::str::validations::next_code_point(&v13) & 1) == 0 )
        core::option::unwrap_failed(&off_DEB50);
      v11 = v8;
      v12 = &std::io::stdio::stderr::INSTANCE;
      v20[0] = 0LL;
      v20[1] = a1;
      v20[2] = a2;
      v21 = 1;
      v19[0] = &v11;
      v19[1] = <char as core::fmt::Display>::fmt;
      v19[2] = v20;
      v19[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v13 = &off_DEB08;
      v14 = 3LL;
      v17 = 0LL;
      v15 = v19;
      v16 = 2LL;
      v9 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v12, &v13);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v9);
      return v4 == 0LL;
    }
  }
  return v4 == 0LL;
}