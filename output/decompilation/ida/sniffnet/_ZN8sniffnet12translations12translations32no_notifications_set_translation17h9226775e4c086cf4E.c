__int64 __fastcall sniffnet::translations::translations::no_notifications_set_translation(
        __int64 a1,
        unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EC2B8 + dword_18EC2B8[a2],
           qword_18EC200[a2]);
}