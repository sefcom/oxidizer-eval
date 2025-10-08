__int64 __fastcall sniffnet::gui::styles::toggler::<impl iced_widget::toggler::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4)
{
  if ( !a3 )
    return sniffnet::gui::styles::toggler::TogglerType::active(a1, a2, a4);
  if ( a3 == 1 )
    return sniffnet::gui::styles::toggler::TogglerType::hovered(a1, a2, a4);
  return sniffnet::gui::styles::toggler::TogglerType::active(a1, a2, 0);
}