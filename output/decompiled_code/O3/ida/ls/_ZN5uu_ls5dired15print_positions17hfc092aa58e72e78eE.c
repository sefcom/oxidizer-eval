__int64 __fastcall uu_ls::dired::print_positions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  __int64 *v8; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+8h] [rbp-90h]
  __int128 *v10; // [rsp+10h] [rbp-88h] BYREF
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int64 **v12; // [rsp+20h] [rbp-78h]
  __int128 v13; // [rsp+28h] [rbp-70h]
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v16[8]; // [rsp+58h] [rbp-40h] BYREF

  v16[0] = a1;
  v16[1] = a2;
  v8 = v16;
  v9 = <&T as core::fmt::Display>::fmt;
  v10 = &xmmword_23D10;
  v11 = 1LL;
  v12 = &v8;
  v13 = 1uLL;
  std::io::stdio::_print(&v10);
  v14[0] = a3;
  v14[1] = a3 + 16 * a4;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14) )
  {
    v15 = i;
    v8 = &v15;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = (__int128 *)&off_213358;
    v11 = 1LL;
    v12 = &v8;
    v13 = 1uLL;
    std::io::stdio::_print(&v10);
  }
  v10 = (__int128 *)&off_213348;
  v11 = 1LL;
  v12 = (__int64 **)&byte_8;
  v13 = 0LL;
  return std::io::stdio::_print(&v10);
}
