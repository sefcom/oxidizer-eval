__int64 __fastcall sniffnet::gui::pages::types::settings_page::SettingsPage::get_tab_label(char a1, unsigned __int8 a2)
{
  if ( !a1 )
    return sniffnet::translations::translations::notifications_translation(a2);
  if ( a1 == 1 )
    return sniffnet::translations::translations::style_translation(a2);
  return sniffnet::translations::translations_3::general_translation(a2);
}