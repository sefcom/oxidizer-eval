__int64 __fastcall sniffnet::gui::sniffer::Sniffer::mouse_subscription(_QWORD *a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    return iced_futures::subscription::from_recipe(a1, core::ops::function::FnOnce::call_once);
  *a1 = 0LL;
  a1[1] = 8LL;
  a1[2] = 0LL;
  return result;
}