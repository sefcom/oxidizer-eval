__int64 __fastcall fd::regex_helper::hir_has_uppercase_char(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]
  __int64 v13; // [rsp+18h] [rbp-20h] BYREF
  __int64 v14; // [rsp+20h] [rbp-18h]

  while ( 2 )
  {
    v1 = *a1 - 2LL;
    if ( v1 >= 8 )
      v1 = 2LL;
    v2 = 2LL;
    switch ( v1 )
    {
      case 1uLL:
        v5 = a1[1];
        v6 = a1[2];
        core::str::converts::from_utf8(&v10, v5, v6);
        if ( (v10 & 1) == 0 )
        {
          v13 = v11;
          v14 = v11 + v12;
          v8 = core::iter::traits::iterator::Iterator::try_fold(&v13);
          return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8);
        }
        v13 = v5;
        v14 = v5 + v6;
        return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v13);
      case 2uLL:
        if ( (*a1 & 1) != 0 )
        {
          v7 = a1[2] + 2LL * a1[3];
          v10 = a1[2];
          v11 = v7;
          v8 = core::iter::traits::iterator::Iterator::try_fold(&v10, 16LL);
        }
        else
        {
          v9 = a1[2] + 8LL * a1[3];
          v10 = a1[2];
          v11 = v9;
          v8 = core::iter::traits::iterator::Iterator::try_fold(&v10, 16LL);
        }
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8);
      case 4uLL:
        goto LABEL_2;
      case 5uLL:
        v2 = 1LL;
LABEL_2:
        a1 = (_QWORD *)a1[v2];
        continue;
      case 6uLL:
      case 7uLL:
        v3 = a1[2] + 48LL * a1[3];
        v10 = a1[2];
        v11 = v3;
        return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v10, 16LL);
      default:
        return 0LL;
    }
  }
}