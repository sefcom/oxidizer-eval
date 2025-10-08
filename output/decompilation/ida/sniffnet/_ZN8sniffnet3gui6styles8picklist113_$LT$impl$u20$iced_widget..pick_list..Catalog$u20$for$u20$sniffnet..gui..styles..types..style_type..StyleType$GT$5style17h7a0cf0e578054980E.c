__int64 __fastcall sniffnet::gui::styles::picklist::<impl iced_widget::pick_list::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        char a3)
{
  if ( a3 == 1 )
    return sniffnet::gui::styles::picklist::PicklistType::hovered(a1, a2);
  else
    return sniffnet::gui::styles::picklist::PicklistType::active(a1, a2);
}