__int64 __fastcall check_docs::report_errors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 *v8; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+8h] [rbp-80h]
  __int64 v10; // [rsp+10h] [rbp-78h] BYREF
  char **v11; // [rsp+18h] [rbp-70h] BYREF
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int64 **v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  _QWORD v16[8]; // [rsp+48h] [rbp-40h] BYREF

  v16[0] = a1;
  v16[1] = a2;
  if ( a4 )
  {
    v8 = v16;
    v9 = <&T as core::fmt::Display>::fmt;
    v11 = &off_1D33F8;
    v12 = 2LL;
    v15 = 0LL;
    v13 = &v8;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
    v6 = 8 * a4;
    do
    {
      v10 = a3;
      a3 += 8LL;
      v8 = &v10;
      v9 = <&T as core::fmt::Display>::fmt;
      v11 = (char **)&unk_1D3418;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v8;
      v14 = 1LL;
      result = std::io::stdio::_eprint(&v11);
      v6 -= 8LL;
    }
    while ( v6 );
  }
  return result;
}