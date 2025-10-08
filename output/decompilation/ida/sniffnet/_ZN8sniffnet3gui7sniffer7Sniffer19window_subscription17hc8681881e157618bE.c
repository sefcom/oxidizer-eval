__int64 __fastcall sniffnet::gui::sniffer::Sniffer::window_subscription(__int64 a1)
{
  return iced_futures::subscription::from_recipe(a1, core::ops::function::FnOnce::call_once);
}