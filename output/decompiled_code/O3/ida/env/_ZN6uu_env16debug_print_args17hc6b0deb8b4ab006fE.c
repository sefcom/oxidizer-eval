__int64 __fastcall uu_env::debug_print_args(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int128 v4; // xmm0
  __int64 v5; // [rsp+8h] [rbp-C0h] BYREF
  char **v6; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+18h] [rbp-B0h]
  _QWORD *v8; // [rsp+20h] [rbp-A8h]
  __int128 v9; // [rsp+28h] [rbp-A0h]
  _QWORD v10[3]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v12; // [rsp+78h] [rbp-50h] BYREF
  __int128 v13; // [rsp+80h] [rbp-48h]
  char v14; // [rsp+90h] [rbp-38h]

  v6 = &off_1489E8;
  v7 = 1LL;
  v8 = (_QWORD *)&byte_8;
  v9 = 0LL;
  std::io::stdio::_eprint(&v6);
  v10[0] = a1;
  v10[1] = a1 + 24 * a2;
  v10[2] = 0LL;
  for ( result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v10);
        v3;
        result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v10) )
  {
    v5 = result;
    v4 = *(_OWORD *)(v3 + 8);
    v12 = 1LL;
    v13 = v4;
    v14 = 1;
    v11[0] = &v5;
    v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11[2] = &v12;
    v11[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &off_1489F8;
    v7 = 3LL;
    v8 = v11;
    v9 = 2uLL;
    std::io::stdio::_eprint(&v6);
  }
  return result;
}
