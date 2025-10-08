__int64 __fastcall uu_echo::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // bp
  __int64 v5; // r12
  __int128 v6; // kr00_16
  __int64 v7; // rbx
  __int128 v9; // [rsp+0h] [rbp-D8h] BYREF
  __m256i v10; // [rsp+10h] [rbp-C8h]
  __int128 v11; // [rsp+30h] [rbp-A8h] BYREF
  __m256i v12; // [rsp+40h] [rbp-98h] BYREF
  __int128 v13; // [rsp+60h] [rbp-78h] BYREF
  __int64 v14; // [rsp+70h] [rbp-68h]
  __int128 v15; // [rsp+78h] [rbp-60h] BYREF
  __int64 v16; // [rsp+88h] [rbp-50h]
  __int128 v17; // [rsp+90h] [rbp-48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-38h]

  std::env::var_os(&v9);
  v2 = v9;
  core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v9, *((_QWORD *)&v9 + 1));
  core::iter::traits::iterator::Iterator::skip(&v15, a1, a2);
  if ( __OFSUB__(-v2, 1LL) )
  {
    uu_echo::filter_echo_flags(&v9, &v15);
    v14 = v10.m256i_i64[0];
    v13 = v9;
    v3 = v10.m256i_u8[8];
    v4 = v10.m256i_u8[9];
  }
  else
  {
    v12.m256i_i64[3] = v16;
    *(_OWORD *)&v12.m256i_u64[1] = v15;
    *(_QWORD *)&v11 = 0x8000000000000001LL;
    core::option::Option<T>::get_or_insert_with(&v11, &v12.m256i_u64[1]);
    v5 = v11;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, aN, 2LL);
    v6 = v9;
    if ( v5 == 0x8000000000000000LL
      || !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(
                             *((_QWORD *)&v11 + 1),
                             v12.m256i_i64[0],
                             *((_QWORD *)&v9 + 1),
                             v10.m256i_i64[0]) )
    {
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v6, *((_QWORD *)&v6 + 1));
      v10 = v12;
      v9 = v11;
      ((void (__fastcall *)(__int128 *, __int128 *))core::iter::traits::iterator::Iterator::collect)(&v13, &v9);
      v3 = 1;
    }
    else
    {
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v6, *((_QWORD *)&v6 + 1));
      v10 = v12;
      v9 = v11;
      uu_echo::filter_echo_flags((__int64)&v17, &v9);
      v13 = v17;
      v14 = v18;
      v3 = 0;
    }
    v4 = 1;
  }
  *(_QWORD *)&v9 = std::io::stdio::stdout();
  *(_QWORD *)&v11 = std::io::stdio::Stdout::lock(&v9);
  v10.m256i_i64[0] = v14;
  v9 = v13;
  v7 = ((__int64 (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD))uu_echo::execute)(&v11, &v9, v3, v4);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
  return v7;
}