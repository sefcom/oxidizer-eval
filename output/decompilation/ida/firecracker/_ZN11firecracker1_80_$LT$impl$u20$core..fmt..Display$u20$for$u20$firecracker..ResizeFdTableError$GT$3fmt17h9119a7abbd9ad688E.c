__int64 __fastcall firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char **v6; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v9; // [rsp+20h] [rbp-18h]

  if ( *a1 )
  {
    if ( (unsigned int)*a1 == 1 )
      v6 = &off_3A45C8;
    else
      v6 = &off_3A45B8;
  }
  else
  {
    v6 = &off_3A45D8;
  }
  v8[0] = v6;
  v8[1] = 1LL;
  v8[2] = 8LL;
  v9 = 0LL;
  return core::fmt::Formatter::write_fmt(*a2, a2[1], v8, a4, a5, a6);
}