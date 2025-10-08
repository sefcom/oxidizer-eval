void *__fastcall sniffnet::gui::sniffer::Sniffer::reset(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  char v4; // bp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  void *v11; // rbx
  _OWORD v13[29]; // [rsp+0h] [rbp-2C8h] BYREF
  _BYTE dest[208]; // [rsp+1D0h] [rbp-F8h] BYREF

  v2 = a1 + 2352;
  v3 = *(_QWORD *)(a1 + 2360);
  if ( v3 )
    async_channel::Channel<T>::close(v3 + 128);
  memcpy(dest, (const void *)(a1 + 1208), sizeof(dest));
  v4 = *(_BYTE *)(a1 + 1497);
  v5 = *(_QWORD *)(a1 + 2352) + 1LL;
  core::ptr::drop_in_place<(usize,core::option::Option<async_channel::Receiver<sniffnet::networking::parse_packets::BackendTrafficMessage>>)>(v2);
  *(_QWORD *)(a1 + 2352) = v5;
  *(_QWORD *)(a1 + 2360) = 0LL;
  <sniffnet::networking::types::info_traffic::InfoTraffic as core::default::Default>::default(v13);
  core::ptr::drop_in_place<sniffnet::networking::types::info_traffic::InfoTraffic>(a1 + 800);
  memcpy((void *)(a1 + 800), v13, 0x100uLL);
  v6 = std::thread::local::LocalKey<T>::with();
  v8 = v7;
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<core::net::ip_addr::IpAddr,(alloc::string::String,sniffnet::networking::types::host::Host)>>(a1 + 1056);
  *(_OWORD *)(a1 + 1072) = xmmword_2DF2BB0;
  *(_OWORD *)(a1 + 1056) = *(_OWORD *)&off_2DF2BA0;
  *(_QWORD *)(a1 + 1088) = v6;
  *(_QWORD *)(a1 + 1096) = v8;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v13);
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<sniffnet::networking::types::host::Host>>(a1 + 1104);
  v9 = v13[0];
  v10 = v13[1];
  *(_OWORD *)(a1 + 1136) = v13[2];
  *(_OWORD *)(a1 + 1120) = v10;
  *(_OWORD *)(a1 + 1104) = v9;
  core::ptr::drop_in_place<(alloc::collections::vec_deque::VecDeque<sniffnet::notifications::types::logged_notification::LoggedNotification>,usize)>(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 16LL;
  *(_OWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a1 + 2328);
  *(_QWORD *)(a1 + 2328) = 0x8000000000000000LL;
  core::ptr::drop_in_place<sniffnet::chart::types::traffic_chart::TrafficChart>(a1 + 16);
  memcpy((void *)(a1 + 16), dest, 0xD0uLL);
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 4LL;
  *(_OWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 256) = 4LL;
  *(_OWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 280) = 4LL;
  *(_OWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 304) = 4LL;
  *(_OWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 328) = 4LL;
  *(_OWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 352) = 4LL;
  *(_OWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 376) = 4LL;
  *(_OWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 400) = 4LL;
  *(_OWORD *)(a1 + 408) = 0LL;
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 437) = 0LL;
  *(_WORD *)(a1 + 453) = 1;
  *(_BYTE *)(a1 + 455) = 1;
  *(_BYTE *)(a1 + 456) = v4;
  *(_WORD *)(a1 + 2392) = 5;
  *(_WORD *)(a1 + 2438) = 771;
  *(_QWORD *)(a1 + 2376) = 0LL;
  core::ptr::drop_in_place<sniffnet::report::types::search_parameters::SearchParameters>(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 1LL;
  *(_OWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 528) = 1LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 1LL;
  *(_OWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 576) = 1LL;
  *(_OWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 600) = 1LL;
  *(_OWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 624) = 1LL;
  *(_OWORD *)(a1 + 632) = 0LL;
  *(_QWORD *)(a1 + 648) = 1LL;
  *(_OWORD *)(a1 + 656) = 0LL;
  *(_QWORD *)(a1 + 672) = 1LL;
  *(_OWORD *)(a1 + 680) = 0LL;
  *(_QWORD *)(a1 + 696) = 1LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_BYTE *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 2384) = 1LL;
  *(_BYTE *)(a1 + 2436) = 0;
  <sniffnet::networking::types::host_data_states::HostDataStates as core::default::Default>::default(v13);
  v11 = (void *)(a1 + 1872);
  core::ptr::drop_in_place<sniffnet::networking::types::host_data_states::HostDataStates>(v11);
  return memcpy(v11, v13, 0x1C8uLL);
}