__int64 __fastcall uu_tr::operation::Sequence::parse_octal_up_to_three_digits(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v4[0] = a01234567;
  v4[1] = 8LL;
  v4[2] = 1LL;
  v4[3] = 3LL;
  return <nom::internal::MapOpt<F,G> as nom::internal::Parser<I>>::process(a1, v4, a2, a3);
}