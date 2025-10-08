char __fastcall ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rcx

  v2 = 3LL;
  if ( (*a1 ^ 0x8000000000000000LL) < 8 )
    v2 = *a1 ^ 0x8000000000000000LL;
  switch ( v2 )
  {
    case 0uLL:
    case 1uLL:
    case 5uLL:
    case 6uLL:
    case 7uLL:
      return ruff_python_formatter::pattern::is_pattern_parenthesized(
               a1,
               *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 8LL),
               *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 16LL),
               *a2,
               a2[1]);
    case 2uLL:
      if ( !a1[3] )
        return ruff_python_formatter::comments::Comments::dangling(a2[2], a1)
            || ruff_python_formatter::pattern::is_pattern_parenthesized(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 8LL),
                 *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 16LL),
                 *a2,
                 a2[1]);
      return 1;
    case 3uLL:
      if ( a1[5] )
        return 1;
      return ruff_python_formatter::comments::Comments::dangling(a2[2], a1)
          || ruff_python_formatter::pattern::is_pattern_parenthesized(
               a1,
               *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 8LL),
               *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 16LL),
               *a2,
               a2[1]);
    case 4uLL:
      if ( !a1[3] )
        return ruff_python_formatter::pattern::is_pattern_parenthesized(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 8LL),
                 *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 16LL),
                 *a2,
                 a2[1]);
      return 1;
  }
}