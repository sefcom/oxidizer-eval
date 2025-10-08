__int64 __fastcall sniffnet::translations::translations::ask_clear_all_translation(__int64 a1, unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EAAA8 + dword_18EAAA8[a2],
           qword_18EA9F0[a2]);
}