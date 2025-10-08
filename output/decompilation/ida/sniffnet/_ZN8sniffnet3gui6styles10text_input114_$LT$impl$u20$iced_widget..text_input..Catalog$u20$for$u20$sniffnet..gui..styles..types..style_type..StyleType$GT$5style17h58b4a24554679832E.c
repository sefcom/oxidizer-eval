__int64 __fastcall sniffnet::gui::styles::text_input::<impl iced_widget::text_input::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4)
{
  __int64 result; // rax

  switch ( a4 )
  {
    case 0:
      result = sniffnet::gui::styles::text_input::TextInputType::active(a1, a3, a2);
      break;
    case 1:
      result = sniffnet::gui::styles::text_input::TextInputType::hovered(a1, a3, a2);
      break;
    case 2:
      result = sniffnet::gui::styles::text_input::TextInputType::focused(a1, a2);
      break;
    case 3:
      result = sniffnet::gui::styles::text_input::TextInputType::disabled(a1, a3, a2);
      break;
  }
  return result;
}