__int64 __fastcall fd::regex_helper::hir_matches_strings_with_leading_dot(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  char v3; // al

  if ( *(_DWORD *)a1 == 8
    && (v1 = *(_QWORD *)(a1 + 24)) != 0
    && (v2 = *(_QWORD *)(a1 + 16),
        v3 = <regex_syntax::hir::HirKind as core::cmp::PartialEq>::eq(*(_QWORD *)v2, *(unsigned int *)(v2 + 8)),
        v1 != 1)
    && v3
    && *(_DWORD *)(v2 + 48) == 3 )
  {
    return core::slice::<impl [T]>::starts_with(*(_QWORD *)(v2 + 56), *(_QWORD *)(v2 + 64), asc_758CA, 1LL);
  }
  else
  {
    return 0LL;
  }
}