__int64 __fastcall sniffnet::gui::sniffer::Sniffer::keyboard_subscription(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return iced_futures::subscription::from_recipe(a1, core::ops::function::FnOnce::call_once);
  else
    return iced_futures::subscription::from_recipe(a1, core::ops::function::FnOnce::call_once);
}