char __fastcall sniffnet::networking::types::capture_context::CaptureContext::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  __int64 v7; // r15
  __int64 v8; // rbx
  char v9; // bp
  __int128 v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  _BYTE v12[24]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]

  sniffnet::networking::types::capture_context::CaptureType::from_source(v12);
  if ( *(_DWORD *)v12 == 1 )
  {
    v11 = v13;
    v10 = *(_OWORD *)&v12[8];
    <T as alloc::string::SpecToString>::spec_to_string(&v14, &v10);
    *(_QWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 3LL;
    return core::ptr::drop_in_place<pcap::Error>(&v12[8]);
  }
  v7 = *(_QWORD *)&v12[8];
  v8 = *(_QWORD *)&v12[16];
  v9 = v13;
  result = sniffnet::gui::types::filters::Filters::is_some_filter_active(a4);
  if ( result )
  {
    sniffnet::networking::types::capture_context::CaptureType::set_bpf(
      &v10,
      v7,
      v8,
      *(_QWORD *)(a4 + 8),
      *(_QWORD *)(a4 + 16));
    if ( (_QWORD)v10 != 0x800000000000000DLL )
      goto LABEL_13;
    result = core::ptr::drop_in_place<core::result::Result<(),pcap::Error>>(&v10);
  }
  if ( (v7 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 16) = v9;
    *(_QWORD *)a1 = 2LL;
    return result;
  }
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 16) = v9;
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  pcap::capture::activated::<impl pcap::capture::Capture<T>>::savefile(&v10, v8, a3);
  if ( (_QWORD)v10 == 0x800000000000000DLL )
  {
    result = BYTE8(v10);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10 + 1);
    *(_QWORD *)(a1 + 16) = v8;
    *(_BYTE *)(a1 + 24) = v9;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
LABEL_13:
  v15 = v11;
  v14 = v10;
  <T as alloc::string::SpecToString>::spec_to_string(v12, &v14);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v12[16];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v12;
  *(_QWORD *)a1 = 3LL;
  core::ptr::drop_in_place<pcap::Error>(&v10);
  return core::ptr::drop_in_place<pcap::capture::Capture<pcap::capture::Active>>(v8);
}