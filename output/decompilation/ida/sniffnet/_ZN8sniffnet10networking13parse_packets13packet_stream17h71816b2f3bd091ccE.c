__int64 __fastcall sniffnet::networking::parse_packets::packet_stream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int128 v5; // rax
  int v6; // eax
  int v7; // r12d
  __int64 v9; // [rsp+0h] [rbp-108h]
  int v10; // [rsp+8h] [rbp-100h]
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-E0h]
  __int128 src; // [rsp+30h] [rbp-D8h]
  __int128 v16; // [rsp+40h] [rbp-C8h]
  __int128 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+78h] [rbp-90h]
  _QWORD v21[2]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+98h] [rbp-70h]
  _OWORD v23[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-48h]
  int v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+CCh] [rbp-3Ch]
  int v27; // [rsp+D4h] [rbp-34h]

  do
  {
    sniffnet::networking::types::capture_context::CaptureType::next_packet(&v13, a1, a2);
    if ( v13 == 1 )
    {
      *((_QWORD *)&v5 + 1) = v14;
      v16 = src;
      *(_QWORD *)&v5 = 0LL;
    }
    else
    {
      v23[0] = *(_OWORD *)v14;
      v4 = *(_QWORD *)(v14 + 16);
      *(_QWORD *)&v5 = <alloc::boxed::Box<[T]> as alloc::boxed::convert::BoxFromSlice<T>>::from_slice(
                         (void *)src,
                         *((size_t *)&src + 1));
      v16 = v23[0];
    }
    v17 = v5;
    v18 = v16;
    v19 = v4;
    sniffnet::networking::types::capture_context::CaptureType::stats(v21, a1, a2);
    if ( v21[0] == 0x800000000000000DLL )
    {
      v10 = v22;
      v9 = v21[1];
      v6 = 1;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),pcap::Error>>(v21);
      v6 = 0;
    }
    v23[0] = v17;
    v23[1] = v18;
    v24 = v19;
    v25 = v6;
    v27 = v10;
    v26 = v9;
    std::sync::mpmc::Sender<T>::send(&v17, a3, a4, v23);
    v7 = v20;
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(core::result::Result<sniffnet::networking::parse_packets::PacketOwned,pcap::Error>,core::option::Option<pcap::capture::activated::Stat>)>>>(&v17);
  }
  while ( v7 == 2 );
  return core::ptr::drop_in_place<sniffnet::networking::types::capture_context::CaptureType>(a1, a2);
}