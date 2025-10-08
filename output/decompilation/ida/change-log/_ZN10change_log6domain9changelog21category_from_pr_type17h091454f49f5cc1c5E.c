const char *__fastcall change_log::domain::changelog::category_from_pr_type(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r14
  const char *result; // rax
  char v5; // cl

  v1 = core::str::<impl str>::trim_end_matches(a1);
  v3 = v2;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aFeat, 4LL) )
    return "FeaturesS";
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v3, aFix, 3LL) )
    return aFixes;
  v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v3, aChore, 5LL);
  result = 0LL;
  if ( v5 )
    return aChores;
  return result;
}