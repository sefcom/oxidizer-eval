__int64 __fastcall uu_cat::LineNumber::new(__m256i *a1)
{
  __int64 result; // rax
  __m256i v2; // [rsp+0h] [rbp-28h] BYREF

  memset(&v2, 48, 25);
  result = core::slice::<impl [T]>::copy_from_slice((char *)&v2.m256i_u64[3] + 1);
  *a1 = v2;
  a1[1].m256i_i64[0] = 25LL;
  a1[1].m256i_i64[1] = 30LL;
  a1[1].m256i_i64[2] = 31LL;
  return result;
}