__int64 __fastcall just::compile_error::capitalize(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  _BYTE v7[24]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a2 + a3;
  result = core::str::validations::next_code_point(&v5);
  if ( (result & 1) != 0 )
  {
    core::unicode::unicode_data::conversions::to_upper(v7, v4);
    core::char::CaseMappingIter::new(v8, v7);
    core::iter::traits::iterator::Iterator::collect(v7, v8);
    return <alloc::string::String as core::ops::arith::Add<&str>>::add(a1, v7, v5, v6 - v5);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  return result;
}