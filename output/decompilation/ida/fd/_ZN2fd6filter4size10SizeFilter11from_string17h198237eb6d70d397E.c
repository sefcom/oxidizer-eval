__int64 __fastcall fd::filter::size::SizeFilter::from_string(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  result = fd::filter::size::SizeFilter::parse_opt(a2, a3);
  if ( result == 3 )
  {
    v4 = fd::filter::size::SizeFilter::from_string::{{closure}}(v5);
    result = 3LL;
  }
  a1[1] = v4;
  *a1 = result;
  return result;
}