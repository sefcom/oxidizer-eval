__int64 __fastcall uu_test::parser::Parser::boolop(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // xmm0
  __m256i v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]

  std::sys::os_str::bytes::Slice::to_owned(&v13, aA, 2LL);
  v11.m256i_i64[3] = v14;
  *(_OWORD *)&v11.m256i_u64[1] = v13;
  v11.m256i_i64[0] = 2LL;
  if ( (unsigned __int8)<uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a3, &v11) )
  {
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
    uu_test::parser::Parser::term((__int64)&v11, a2);
  }
  else
  {
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
    uu_test::parser::Parser::expr((__int64)&v11, a2);
  }
  if ( v11.m256i_i32[0] == 7 )
  {
    v12 = *((_QWORD *)a3 + 4);
    v8 = *a3;
    *(_OWORD *)&v11.m256i_u64[2] = a3[1];
    *(_OWORD *)v11.m256i_i8 = v8;
    result = ((__int64 (__fastcall *)(__int64, __m256i *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
               a2,
               &v11,
               v4,
               v5,
               v6,
               v7);
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v10 = *(_OWORD *)v11.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v11.m256i_u64[2];
    *(_OWORD *)a1 = v10;
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(a3);
  }
  return result;
}
