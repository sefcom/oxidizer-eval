__int64 __fastcall uu_env::debug_print_args(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+8h] [rbp-C0h] BYREF
  char **v7; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-B0h]
  _QWORD *v9; // [rsp+20h] [rbp-A8h]
  __int128 v10; // [rsp+28h] [rbp-A0h]
  _QWORD v11[3]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v13[3]; // [rsp+78h] [rbp-50h] BYREF
  char v14; // [rsp+90h] [rbp-38h]

  v7 = &off_1109A8;
  v8 = 1LL;
  v9 = (_QWORD *)&byte_8;
  v10 = 0LL;
  std::io::stdio::_eprint(&v7);
  v11[0] = a1;
  v11[1] = a1 + 24 * a2;
  v11[2] = 0LL;
  for ( result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v11);
        v3;
        result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v11) )
  {
    v6 = result;
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
    v13[0] = 1LL;
    v13[1] = v4;
    v13[2] = v5;
    v14 = 1;
    v12[0] = &v6;
    v12[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v12[2] = v13;
    v12[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v7 = &off_1109B8;
    v8 = 3LL;
    v9 = v12;
    v10 = 2uLL;
    std::io::stdio::_eprint(&v7);
  }
  return result;
}