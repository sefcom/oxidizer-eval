__int64 __fastcall sniffnet::report::types::sort_type::SortType::icon(__int64 a1, char a2)
{
  _BYTE v3[120]; // [rsp+0h] [rbp-78h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(v3, (unsigned __int8)(a2 + 33));
  return iced_core::widget::text::Text<Theme,Renderer>::size(a1, v3, (unsigned int)(0x12000E000EuLL >> (16 * a2)));
}