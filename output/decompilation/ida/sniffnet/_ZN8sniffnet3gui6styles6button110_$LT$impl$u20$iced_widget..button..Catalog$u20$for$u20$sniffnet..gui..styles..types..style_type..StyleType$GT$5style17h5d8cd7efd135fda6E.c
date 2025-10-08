unsigned __int64 __fastcall sniffnet::gui::styles::button::<impl iced_widget::button::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4)
{
  unsigned __int64 result; // rax

  switch ( a4 )
  {
    case 0:
    case 2:
      result = (unsigned __int64)sniffnet::gui::styles::button::ButtonType::active(a1, a3, a2);
      break;
    case 1:
      result = (unsigned __int64)sniffnet::gui::styles::button::ButtonType::hovered(a1, a3, a2);
      break;
    case 3:
      result = sniffnet::gui::styles::button::ButtonType::disabled(a1, a3, a2);
      break;
  }
  return result;
}