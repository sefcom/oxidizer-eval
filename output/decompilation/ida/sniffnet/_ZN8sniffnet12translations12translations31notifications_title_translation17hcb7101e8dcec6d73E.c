__int64 __fastcall sniffnet::translations::translations::notifications_title_translation(
        __int64 a1,
        unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EB020 + dword_18EB020[a2],
           qword_18EAF68[a2]);
}