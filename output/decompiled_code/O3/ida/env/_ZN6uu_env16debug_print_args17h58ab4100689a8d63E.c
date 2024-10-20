__int64 __fastcall uu_env::debug_print_args(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int128 v5; // xmm0
  __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  char **v7; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-98h]
  _QWORD *v9; // [rsp+18h] [rbp-90h]
  __int128 v10; // [rsp+20h] [rbp-88h]
  _QWORD v11[4]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h] BYREF
  __int128 v13; // [rsp+60h] [rbp-48h]
  char v14; // [rsp+70h] [rbp-38h]

  v7 = &off_10C6A0;
  v8 = 1LL;
  v9 = (_QWORD *)&byte_8;
  v10 = 0LL;
  result = std::io::stdio::_eprint(&v7);
  if ( a2 )
  {
    v3 = 0LL;
    v4 = 0LL;
    do
    {
      v6 = v4++;
      v5 = *(_OWORD *)(a1 + v3 + 8);
      v12 = 1LL;
      v13 = v5;
      v14 = 1;
      v11[0] = &v6;
      v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v11[2] = &v12;
      v11[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v7 = &off_10C6B0;
      v8 = 3LL;
      v9 = v11;
      v10 = 2uLL;
      result = std::io::stdio::_eprint(&v7);
      v3 += 24LL;
    }
    while ( 24 * a2 != v3 );
  }
  return result;
}
