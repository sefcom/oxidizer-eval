__int64 __fastcall uu_ls::dired::print_positions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 *v8; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+8h] [rbp-80h]
  void *v10; // [rsp+10h] [rbp-78h] BYREF
  __int64 v11; // [rsp+18h] [rbp-70h]
  __int64 **v12; // [rsp+20h] [rbp-68h]
  __int128 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v15[8]; // [rsp+48h] [rbp-40h] BYREF

  v15[0] = a1;
  v15[1] = a2;
  v8 = v15;
  v9 = <&T as core::fmt::Display>::fmt;
  v10 = &unk_CF290;
  v11 = 1LL;
  v12 = &v8;
  v13 = 1uLL;
  std::io::stdio::_print(&v10);
  if ( a4 )
  {
    v6 = 16 * a4;
    do
    {
      v14 = a3;
      a3 += 16LL;
      v8 = &v14;
      v9 = <&T as core::fmt::Display>::fmt;
      v10 = &off_2866F0;
      v11 = 1LL;
      v12 = &v8;
      v13 = 1uLL;
      std::io::stdio::_print(&v10);
      v6 -= 16LL;
    }
    while ( v6 );
  }
  v10 = &off_2866E0;
  v11 = 1LL;
  v12 = (__int64 **)&byte_8;
  v13 = 0LL;
  return std::io::stdio::_print(&v10);
}