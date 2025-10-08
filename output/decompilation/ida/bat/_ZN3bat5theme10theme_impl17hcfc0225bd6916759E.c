__int64 __fastcall bat::theme::theme_impl(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi

  v3 = 1LL;
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 48) + 0x7FFFFFFFFFFFFFFFLL) < 4 )
    v3 = *(_QWORD *)(a2 + 48) + 0x7FFFFFFFFFFFFFFFLL;
  switch ( v3 )
  {
    case 0LL:
      v4 = (unsigned __int8)bat::theme::color_scheme_impl(*(unsigned int *)(a2 + 56));
      return bat::theme::choose_theme_opt(a1, v4, a2);
    case 1LL:
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 64);
      *(_OWORD *)a1 = *(_OWORD *)(a2 + 48);
      *(_BYTE *)(a1 + 24) = 2;
      core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(a2);
      return core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(a2 + 24);
    case 2LL:
      v4 = 0LL;
      return bat::theme::choose_theme_opt(a1, v4, a2);
    case 3LL:
      v4 = 1LL;
      return bat::theme::choose_theme_opt(a1, v4, a2);
  }
}