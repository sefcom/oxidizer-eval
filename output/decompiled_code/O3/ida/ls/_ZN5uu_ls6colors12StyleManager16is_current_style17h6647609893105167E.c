__int64 __fastcall uu_ls::colors::StyleManager::is_current_style(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) == 2 )
    return 0LL;
  else
    return <lscolors::style::Style as core::cmp::PartialEq>::eq(a1 + 8);
}
