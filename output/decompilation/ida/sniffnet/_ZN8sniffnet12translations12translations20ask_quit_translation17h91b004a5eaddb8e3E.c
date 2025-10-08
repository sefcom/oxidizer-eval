__int64 __fastcall sniffnet::translations::translations::ask_quit_translation(__int64 a1, unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EA878 + dword_18EA878[a2],
           qword_18EA7C0[a2]);
}