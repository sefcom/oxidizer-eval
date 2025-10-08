__int64 __fastcall uu_split::Settings::instantiate_current_writer(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h]
  _QWORD v17[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v18[6]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v19[72]; // [rsp+50h] [rbp-48h] BYREF

  v15 = a3;
  v16 = a4;
  if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(a2[15], a2[16], a3, a4) )
  {
    v17[0] = &v15;
    v17[1] = <&T as core::fmt::Display>::fmt;
    v18[0] = &off_10AEA8;
    v18[1] = 2LL;
    v18[4] = 0LL;
    v18[2] = v17;
    v18[3] = 1LL;
    ((void (__fastcall *)(_BYTE *, _QWORD, _QWORD *, __int64, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v19,
      0LL,
      v18,
      v9,
      v10,
      v11,
      v15,
      v16);
    v12 = alloc::boxed::Box<T>::new(v19);
    result = std::io::error::Error::_new(40LL, v12, &off_10AD88);
    a1[1] = result;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    if ( a2[17] == 0x8000000000000000LL )
      v14 = 0LL;
    else
      v14 = a2[18];
    return uu_split::platform::unix::instantiate_current_writer(a1, v14, a2[19], a3, a4, a5);
  }
  return result;
}