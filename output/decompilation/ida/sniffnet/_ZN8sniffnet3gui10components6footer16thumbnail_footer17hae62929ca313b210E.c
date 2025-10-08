__int64 __fastcall sniffnet::gui::components::footer::thumbnail_footer(__int64 a1)
{
  _WORD v2[8]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v3[104]; // [rsp+10h] [rbp-68h] BYREF

  v2[0] = 0;
  v2[4] = 2;
  iced_widget::container::Container<Message,Theme,Renderer>::new(v3, v2);
  return iced_widget::container::Container<Message,Theme,Renderer>::height(a1, v3, 0LL);
}