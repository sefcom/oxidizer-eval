char __fastcall bat::theme::color_scheme_impl(char a1)
{
  if ( !a1 )
  {
    if ( !(unsigned __int8)<bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::should_detect() )
      return 2;
    return <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::detect();
  }
  if ( a1 == 1 )
    return <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::detect();
  bat::theme::color_scheme_from_system();
  return 2;
}