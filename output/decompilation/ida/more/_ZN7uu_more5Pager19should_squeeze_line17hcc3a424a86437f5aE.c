bool __fastcall uu_more::Pager::should_squeeze_line(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // cl

  if ( *(_BYTE *)(a1 + 129) != 1 )
    return 0;
  v3 = core::str::<impl str>::trim_matches(a2, a3);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    v5 = core::str::<impl str>::trim_matches(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24 * v4 - 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24 * v4 - 8)) == 0;
  else
    v5 = 0;
  return v5 && v3 == 0;
}