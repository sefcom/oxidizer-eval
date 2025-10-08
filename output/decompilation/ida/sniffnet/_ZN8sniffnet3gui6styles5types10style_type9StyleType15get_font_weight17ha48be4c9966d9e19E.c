__int64 __fastcall sniffnet::gui::styles::types::style_type::StyleType::get_font_weight(__int64 (__fastcall **a1)())
{
  _OWORD v2[7]; // [rsp+0h] [rbp-78h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v2, a1);
  return 3 * (unsigned int)((unsigned __int8)<iced_core::font::Font as core::cmp::PartialEq>::eq(v2, &unk_2DFF3B0) != 0);
}