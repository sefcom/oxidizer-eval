__int64 __fastcall bat::syntax_mapping::builtin::build_matcher_fixed(__int64 a1)
{
  _BYTE v2[112]; // [rsp+8h] [rbp-70h] BYREF

  bat::syntax_mapping::make_glob_matcher(v2);
  core::result::Result<T,E>::expect(a1, v2);
  return a1;
}