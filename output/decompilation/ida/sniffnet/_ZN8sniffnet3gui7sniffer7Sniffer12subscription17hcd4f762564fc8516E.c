__int64 __fastcall sniffnet::gui::sniffer::Sniffer::subscription(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v4; // [rsp+10h] [rbp-C8h]
  __int128 v5; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+28h] [rbp-B0h]
  __int128 v7; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-98h]
  __int128 v9; // [rsp+48h] [rbp-90h] BYREF
  __int64 v10; // [rsp+58h] [rbp-80h]
  __int128 v11; // [rsp+60h] [rbp-78h] BYREF
  __int64 v12; // [rsp+70h] [rbp-68h]
  __int128 v13; // [rsp+78h] [rbp-60h]
  __int64 v14; // [rsp+88h] [rbp-50h]
  __int128 v15; // [rsp+90h] [rbp-48h]
  __int64 v16; // [rsp+A0h] [rbp-38h]
  __int128 v17; // [rsp+A8h] [rbp-30h]
  __int64 v18; // [rsp+B8h] [rbp-20h]

  sniffnet::gui::sniffer::Sniffer::keyboard_subscription((__int64)&v3, *(_DWORD *)(a2 + 2436));
  sniffnet::gui::sniffer::Sniffer::mouse_subscription(&v5, *(_DWORD *)(a2 + 2436));
  sniffnet::gui::sniffer::Sniffer::time_subscription((__int64)&v7);
  sniffnet::gui::sniffer::Sniffer::window_subscription((__int64)&v9);
  v12 = v4;
  v11 = v3;
  v13 = v5;
  v14 = v6;
  v15 = v7;
  v16 = v8;
  v17 = v9;
  v18 = v10;
  return iced_futures::subscription::Subscription<T>::batch(a1, &v11);
}