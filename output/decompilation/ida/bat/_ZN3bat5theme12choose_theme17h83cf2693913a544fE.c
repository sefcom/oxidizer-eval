__int64 __fastcall bat::theme::choose_theme(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 24);
    core::ptr::drop_in_place<bat::theme::ThemePreference>(a2 + 48);
    return core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(a2);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    core::ptr::drop_in_place<bat::theme::ThemePreference>(a2 + 48);
    return core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(a2 + 24);
  }
}