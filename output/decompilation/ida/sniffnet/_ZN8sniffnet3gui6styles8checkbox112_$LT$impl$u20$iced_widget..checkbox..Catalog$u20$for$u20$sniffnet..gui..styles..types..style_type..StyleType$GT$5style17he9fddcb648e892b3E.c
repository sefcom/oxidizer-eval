__int64 __fastcall sniffnet::gui::styles::checkbox::<impl iced_widget::checkbox::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4)
{
  if ( a3 == 1 )
    return sniffnet::gui::styles::checkbox::CheckboxType::hovered(a1, a2);
  else
    return sniffnet::gui::styles::checkbox::CheckboxType::active(a1, a2, a4);
}