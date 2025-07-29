const char *metal_crusher::fun::detect_terminal()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rsi
  int v3; // ebp
  const char *v4; // rbx
  _QWORD v6[2]; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v7; // [rsp+10h] [rbp-198h] BYREF
  __int64 v8; // [rsp+20h] [rbp-188h]
  _QWORD v9[2]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-168h] BYREF
  __int128 v11; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+C0h] [rbp-E8h]
  _QWORD dest[28]; // [rsp+C8h] [rbp-E0h] BYREF

  v10[0] = aKgx;
  v10[1] = 3LL;
  v10[2] = aGhostty;
  v10[3] = 7LL;
  v10[4] = aKonsole;
  v10[5] = 7LL;
  v10[6] = aAlacritty;
  v10[7] = 9LL;
  v10[8] = aGnomeTerminal;
  v10[9] = 14LL;
  v10[10] = aXterm;
  v10[11] = 5LL;
  v10[12] = 0LL;
  v10[13] = 6LL;
  while ( 1 )
  {
    v0 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(v10);
    if ( !v0 )
    {
      v4 = aSh;
      goto LABEL_7;
    }
    v6[0] = v0;
    v6[1] = v1;
    v9[0] = v6;
    v9[1] = <&T as core::fmt::Display>::fmt;
    dest[0] = &off_5966C8;
    dest[1] = 1LL;
    dest[4] = 0LL;
    dest[2] = v9;
    dest[3] = 1LL;
    core::option::Option<T>::map_or_else(&v11, dest);
    v7 = v11;
    v8 = v12;
    v2 = *((_QWORD *)&v11 + 1);
    std::fs::metadata(dest);
    v3 = dest[0];
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v2);
    if ( v3 != 2 )
      break;
    core::ptr::drop_in_place<alloc::string::String>(&v7);
  }
  v4 = (const char *)v6[0];
  core::ptr::drop_in_place<alloc::string::String>(&v7);
LABEL_7:
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,6_usize>>(v10);
  return v4;
}