char __fastcall ruff_python_formatter::other::interpolated_string_element::needs_bracket_spacing(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_DWORD *)a1 == 30 && !*(_BYTE *)(a1 + 44) && *(_QWORD *)(a1 + 24) == 1LL )
    return 0;
  else
    return (0x6C0uLL >> *(_BYTE *)ruff_python_formatter::expression::left_most(
                                    a1,
                                    *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(a2[2] + 96) + 16LL),
                                    *a2,
                                    a2[1])) & 1;
}