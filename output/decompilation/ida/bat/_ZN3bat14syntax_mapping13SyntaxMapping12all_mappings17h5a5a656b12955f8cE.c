__int64 __fastcall bat::syntax_mapping::SyntaxMapping::all_mappings(__int64 a1, __int64 a2)
{
  core::iter::traits::iterator::Iterator::chain(
    a1,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 120LL * *(_QWORD *)(a2 + 16));
  return a1;
}