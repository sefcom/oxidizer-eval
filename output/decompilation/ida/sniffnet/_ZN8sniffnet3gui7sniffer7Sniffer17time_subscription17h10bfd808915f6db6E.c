__int64 __fastcall sniffnet::gui::sniffer::Sniffer::time_subscription(__int64 a1)
{
  _BYTE v2[40]; // [rsp+0h] [rbp-28h] BYREF

  iced_futures::backend::native::tokio::time::every(v2, 1LL, 0LL);
  return iced_futures::subscription::Subscription<T>::map(a1, v2);
}