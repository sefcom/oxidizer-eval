__int64 __fastcall uu_test::parser::Parser::boolop(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v4; // bp
  __int64 result; // rax
  __int128 v6; // xmm0
  __m256i v7; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, aA, 2LL);
  v7.m256i_i64[3] = v9;
  *(_OWORD *)&v7.m256i_u64[1] = v8;
  v7.m256i_i64[0] = 2LL;
  v4 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a3, &v7);
  core::ptr::drop_in_place<uu_test::parser::Symbol>(&v7);
  if ( v4 )
    uu_test::parser::Parser::term((__int64)&v7, (__int64)a2);
  else
    uu_test::parser::Parser::expr((__int64)&v7, a2);
  if ( v7.m256i_i32[0] == 7 )
  {
    result = alloc::vec::Vec<T,A>::push(a2, a3, &off_E0260);
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v6 = *(_OWORD *)v7.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v7.m256i_u64[2];
    *(_OWORD *)a1 = v6;
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(a3);
  }
  return result;
}