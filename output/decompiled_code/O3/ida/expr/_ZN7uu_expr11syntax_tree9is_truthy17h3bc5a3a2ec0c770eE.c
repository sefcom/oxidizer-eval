__int64 __fastcall uu_expr::syntax_tree::is_truthy(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned __int8 *v4; // rax
  int v5; // eax
  unsigned __int8 v6; // al
  char v7; // al
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]
  char v12; // [rsp+18h] [rbp-20h]

  if ( *a1 == 0x8000000000000000LL )
  {
    v2 = a1[2];
    v3 = a1[3];
    LOBYTE(v1) = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_69040, 1LL) )
    {
      v9 = v2;
      v10 = v2 + v3;
      v4 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
      if ( v4 )
      {
        v5 = *v4;
        if ( v5 == 48 || (LOBYTE(v1) = 1, v5 == 45) )
        {
          v6 = core::iter::traits::iterator::Iterator::try_fold(&v9);
          v1 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v6);
          LOBYTE(v1) = v1 ^ 1;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from(&v9);
    v7 = *((_BYTE *)a1 + 24);
    LOBYTE(v1) = 1;
    if ( v7 == v12 )
    {
      if ( v7 == 1 )
      {
        v1 = 0;
      }
      else
      {
        v1 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
               a1[1],
               a1[2],
               v10,
               v11);
        LOBYTE(v1) = v1 ^ 1;
      }
    }
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v9);
  }
  return v1;
}
