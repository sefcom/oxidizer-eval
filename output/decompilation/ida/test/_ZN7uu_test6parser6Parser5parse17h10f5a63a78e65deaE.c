__int64 __fastcall uu_test::parser::Parser::parse(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int128 v5; // xmm0
  __m256i v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h] BYREF
  __int128 v8; // [rsp+30h] [rbp-48h]
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  result = uu_test::parser::Parser::expr((__int64)&v6, (_QWORD *)a2);
  if ( v6.m256i_i32[0] == 7 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
    if ( v3 == 0x8000000000000001LL )
    {
      result = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7, a2 + 48);
      v3 = v7;
      if ( v7 != 0x8000000000000000LL )
      {
LABEL_4:
        v4 = v8;
        v6.m256i_i64[0] = 1LL;
        *(_OWORD *)&v6.m256i_u64[1] = v8;
        v6.m256i_i8[24] = 1;
        <T as alloc::string::SpecToString>::spec_to_string(&v9, &v6);
        *(_QWORD *)(a1 + 24) = v10;
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 2LL;
        return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v3, v4);
      }
    }
    else
    {
      v8 = *(_OWORD *)(a2 + 32);
      if ( v3 != 0x8000000000000000LL )
        goto LABEL_4;
    }
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v5 = *(_OWORD *)v6.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6.m256i_u64[2];
    *(_OWORD *)a1 = v5;
  }
  return result;
}