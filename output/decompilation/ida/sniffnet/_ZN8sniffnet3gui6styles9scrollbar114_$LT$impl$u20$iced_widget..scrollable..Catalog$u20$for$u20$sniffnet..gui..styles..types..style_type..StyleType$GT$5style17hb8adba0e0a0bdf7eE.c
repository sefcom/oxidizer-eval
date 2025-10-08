void *__fastcall sniffnet::gui::styles::scrollbar::<impl iced_widget::scrollable::Catalog for sniffnet::gui::styles::types::style_type::StyleType>::style(
        __int64 a1,
        __int64 a2,
        int a3)
{
  if ( (_BYTE)a3 )
    return sniffnet::gui::styles::scrollbar::ScrollbarType::hovered(
             a1,
             a2,
             ((a3 & 0xFFFFFFu) >> 8) & 1,
             ((a3 & 0xFFFFFFu) >> 16) & 1);
  else
    return (void *)sniffnet::gui::styles::scrollbar::ScrollbarType::active(a1, a2);
}