__int64 *__fastcall uu_uniq::uumain::uumain::{{closure}}(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(a2);
  v7 = v2;
  v3 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(a2);
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v3;
  a1[3] = v5;
  return result;
}
