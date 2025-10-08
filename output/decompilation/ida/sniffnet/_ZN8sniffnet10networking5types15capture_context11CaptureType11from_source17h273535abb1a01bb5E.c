__int64 __fastcall sniffnet::networking::types::capture_context::CaptureType::from_source(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  char v11; // dl
  unsigned int v12; // ecx
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdx
  int v20; // edx
  int v21; // esi
  __int64 v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+8h] [rbp-80h]
  unsigned __int8 v24; // [rsp+10h] [rbp-78h]
  _BYTE v25[7]; // [rsp+11h] [rbp-77h]
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h]
  unsigned __int8 v28; // [rsp+28h] [rbp-60h]
  _DWORD v29[23]; // [rsp+29h] [rbp-5Fh]

  if ( *a2 != 0x8000000000000000LL )
  {
    sniffnet::networking::types::my_device::MyDevice::to_pcap_device(&v26, a2[1], a2[2]);
    pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::from_device(&v22, &v26);
    result = v22;
    v5 = v23;
    v6 = v24;
    if ( v22 != 0x800000000000000DLL )
    {
      v20 = *(_DWORD *)v25;
      v21 = *(_DWORD *)&v25[3];
      goto LABEL_12;
    }
    v8 = pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::promisc(v23, v24, 1LL);
    v10 = pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::buffer_size(
            v8,
            v9 & 1,
            &unk_1E8480);
    v12 = 0xFFFF;
    if ( !a3 )
      v12 = 200;
    v13 = pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::snaplen(v10, v11 & 1, v12);
    v15 = pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::immediate_mode(
            v13,
            v14 & 1,
            0LL);
    v17 = pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::timeout(v15, v16 & 1, 150LL);
    pcap::capture::inactive::<impl pcap::capture::Capture<pcap::capture::Inactive>>::open(&v26, v17, v18 & 1);
    result = v26;
    v5 = v27;
    v6 = v28;
    if ( v26 == 0x800000000000000DLL )
    {
      result = 0LL;
      goto LABEL_9;
    }
LABEL_10:
    v20 = v29[0];
    v21 = *(_DWORD *)((char *)v29 + 3);
LABEL_12:
    *(_DWORD *)(a1 + 28) = v21;
    *(_DWORD *)(a1 + 25) = v20;
    v19 = 1LL;
    goto LABEL_13;
  }
  pcap::capture::activated::offline::<impl pcap::capture::Capture<pcap::capture::Offline>>::from_file(&v26, a2 + 1);
  result = v26;
  v5 = v27;
  v6 = v28;
  if ( v26 != 0x800000000000000DLL )
    goto LABEL_10;
  result = 1LL;
LABEL_9:
  v19 = 0LL;
LABEL_13:
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 24) = v6;
  *(_QWORD *)a1 = v19;
  return result;
}