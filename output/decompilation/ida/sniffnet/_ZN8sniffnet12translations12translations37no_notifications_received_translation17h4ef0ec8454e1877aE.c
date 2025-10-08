__int64 __fastcall sniffnet::translations::translations::no_notifications_received_translation(
        __int64 a1,
        unsigned __int8 a2)
{
  return iced_core::widget::text::Text<Theme,Renderer>::new(
           a1,
           (char *)dword_18EC3D0 + dword_18EC3D0[a2],
           qword_18EC318[a2]);
}