__int64 __fastcall sniffnet::translations::translations::yes_translation(__int64 a1, unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EA760 + dword_18EA760[a2],
           qword_18EA6A8[a2]);
}