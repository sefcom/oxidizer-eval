__int64 __fastcall bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]

  result = core::str::converts::from_utf8(&v8, a3, a4);
  if ( v8 != 1 )
  {
    result = bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix(a2, v9, v10);
    if ( result )
      return bat::syntax_mapping::SyntaxMapping::get_syntax_for::{{closure}}(a1, a5, result, v7);
  }
  *(_QWORD *)(a1 + 8) = 3LL;
  *(_BYTE *)a1 = 13;
  return result;
}