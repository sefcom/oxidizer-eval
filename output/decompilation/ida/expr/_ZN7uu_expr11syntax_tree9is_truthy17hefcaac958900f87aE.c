__int64 __fastcall uu_expr::syntax_tree::is_truthy(_QWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int8 *v2; // r14
  __int64 v3; // r15
  int v4; // eax
  unsigned __int8 v5; // al
  char v6; // al
  unsigned __int8 *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 *v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h]
  char v11; // [rsp+18h] [rbp-20h]

  if ( __OFSUB__(0LL, *a1) )
  {
    v2 = (unsigned __int8 *)a1[2];
    v3 = a1[3];
    LOBYTE(v1) = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D683, 1LL) )
    {
      v9 = &v2[v3];
      if ( v3 )
      {
        v8 = v2 + 1;
        v4 = *v2;
        if ( v4 == 45 || (LOBYTE(v1) = 1, v4 == 48) )
        {
          v5 = core::iter::traits::iterator::Iterator::try_fold(&v8);
          v1 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v5);
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
    num_bigint::bigint::convert::<impl core::convert::From<i64> for num_bigint::bigint::BigInt>::from(&v8);
    v6 = *((_BYTE *)a1 + 24);
    LOBYTE(v1) = 1;
    if ( v6 == v11 )
    {
      if ( v6 == 1 )
      {
        v1 = 0;
      }
      else
      {
        v1 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
               a1[1],
               a1[2],
               v9,
               v10);
        LOBYTE(v1) = v1 ^ 1;
      }
    }
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v8, v9);
  }
  return v1;
}