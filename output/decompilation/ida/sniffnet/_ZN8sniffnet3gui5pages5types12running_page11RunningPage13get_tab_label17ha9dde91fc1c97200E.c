__int64 __fastcall sniffnet::gui::pages::types::running_page::RunningPage::get_tab_label(char a1, unsigned __int8 a2)
{
  if ( !a1 )
    return sniffnet::translations::translations::overview_translation(a2);
  if ( a1 == 1 )
    return sniffnet::translations::translations_2::inspect_translation(a2);
  return sniffnet::translations::translations::notifications_translation(a2);
}