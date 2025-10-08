bool __fastcall sniffnet::gui::types::filters::Filters::is_some_filter_active(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_BYTE *)(a1 + 24) != 1 )
    return 0;
  core::str::<impl str>::trim_matches(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  return v1 != 0;
}