__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::value_color(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v3[6]; // [rsp+0h] [rbp-68h] BYREF

  result = sniffnet::gui::styles::types::style_type::StyleType::get_palette(v3, a2);
  *a1 = v3[5];
  return result;
}