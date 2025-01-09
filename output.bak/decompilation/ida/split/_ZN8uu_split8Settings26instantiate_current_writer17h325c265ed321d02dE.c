_QWORD *__fastcall uu_split::Settings::instantiate_current_writer(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  _QWORD v9[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v10[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v11[6]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v12[64]; // [rsp+58h] [rbp-40h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(a2[15], a2[16], a3, a4) )
  {
    v10[0] = v9;
    v10[1] = <&T as core::fmt::Display>::fmt;
    v11[0] = &off_148380;
    v11[1] = 2LL;
    v11[4] = 0LL;
    v11[2] = v10;
    v11[3] = 1LL;
    core::option::Option<T>::map_or_else(v12, 0LL, v11);
    a1[1] = std::io::error::Error::new(39LL, v12);
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    uu_split::platform::unix::instantiate_current_writer(a1, a2 + 17, a3, a4, a5);
  }
  return a1;
}
