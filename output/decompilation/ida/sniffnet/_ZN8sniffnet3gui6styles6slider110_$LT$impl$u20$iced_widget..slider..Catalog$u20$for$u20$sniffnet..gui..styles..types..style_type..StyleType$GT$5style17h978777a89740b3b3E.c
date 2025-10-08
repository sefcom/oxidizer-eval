__int64 __fastcall sniffnet::gui::styles::slider::<impl iced_widget::slider::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        char a3)
{
  if ( !a3 )
    return sniffnet::gui::styles::slider::SliderType::active(a1, a2);
  if ( a3 == 1 )
    return sniffnet::gui::styles::slider::SliderType::hovered(a1, a2);
  return sniffnet::gui::styles::slider::SliderType::dragging(a1, a2);
}