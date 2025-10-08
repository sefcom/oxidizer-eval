__int64 __fastcall sniffnet::translations::translations::appearance_title_translation(__int64 a1, unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EB138 + dword_18EB138[a2],
           qword_18EB080[a2]);
}