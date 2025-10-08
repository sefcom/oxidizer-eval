__int64 __fastcall sniffnet::gui::sniffer::Sniffer::fetch_devices(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+8h] [rbp-110h] BYREF
  int v7; // [rsp+18h] [rbp-100h]
  _BYTE v8[32]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v9; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-C8h]
  __int128 v11; // [rsp+58h] [rbp-C0h]
  __int64 v12; // [rsp+68h] [rbp-B0h]
  __int128 v13; // [rsp+70h] [rbp-A8h]
  __int64 v14; // [rsp+80h] [rbp-98h]
  __int128 v15; // [rsp+90h] [rbp-88h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-78h]
  __int128 v17; // [rsp+A8h] [rbp-70h]
  __int64 v18; // [rsp+B8h] [rbp-60h]
  __int128 v19; // [rsp+C0h] [rbp-58h]
  __int64 v20; // [rsp+D0h] [rbp-48h]
  int v21; // [rsp+D8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1856);
  v3 = *(_QWORD *)(a1 + 1864);
  *(_QWORD *)(a1 + 1864) = 0LL;
  core::ptr::drop_in_place<[sniffnet::networking::types::my_device::MyDevice]>(v2, v3);
  sniffnet::networking::types::capture_context::CaptureSource::set_addresses(a1 + 720);
  pcap::device::Device::list(&v9);
  v6[0] = aSrcGuiSnifferR;
  v6[1] = 18LL;
  v7 = 804;
  <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(v8, &v9, v6);
  core::result::Result<T,E>::unwrap_or_default(&v9, v8);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8, &v9);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v8);
  if ( !__OFSUB__(0LL, (_QWORD)v9) )
  {
    v4 = a1 + 1848;
    do
    {
      v16 = v10;
      v15 = v9;
      v20 = v14;
      v19 = v13;
      v18 = v12;
      v17 = v11;
      v21 = 9;
      alloc::vec::Vec<T,A>::push(v4, &v15);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v8);
    }
    while ( (_QWORD)v9 != 0x8000000000000000LL );
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v8);
}