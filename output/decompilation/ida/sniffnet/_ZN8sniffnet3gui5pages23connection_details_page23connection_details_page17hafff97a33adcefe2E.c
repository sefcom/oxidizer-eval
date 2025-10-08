__int64 __fastcall sniffnet::gui::pages::connection_details_page::connection_details_page(__int64 a1)
{
  _BYTE v2[104]; // [rsp+0h] [rbp-68h] BYREF

  sniffnet::gui::pages::connection_details_page::page_content(v2);
  return iced_widget::container::Container<Message,Theme,Renderer>::new(a1, v2);
}