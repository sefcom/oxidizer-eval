__int64 __fastcall sniffnet::gui::sniffer::Sniffer::start(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r12
  _QWORD *v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  bool v15; // zf
  bool v16; // al
  __int128 v17; // kr00_16
  __int64 v18; // r15
  __m256i v20; // [rsp+0h] [rbp-1D8h] BYREF
  __m256i v21; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-198h]
  __int128 v23; // [rsp+50h] [rbp-188h]
  __int128 v24; // [rsp+60h] [rbp-178h]
  __int128 v25; // [rsp+70h] [rbp-168h]
  __int128 v26; // [rsp+80h] [rbp-158h]
  __int64 v27; // [rsp+90h] [rbp-148h]
  __int64 v28; // [rsp+98h] [rbp-140h]
  __int64 v29; // [rsp+A0h] [rbp-138h]
  __int64 v30; // [rsp+A8h] [rbp-130h]
  _BYTE v31[64]; // [rsp+B0h] [rbp-128h]
  __int128 v32; // [rsp+F0h] [rbp-E8h]
  __int64 v33; // [rsp+108h] [rbp-D0h]
  __int64 v34; // [rsp+110h] [rbp-C8h]
  __int64 v35; // [rsp+118h] [rbp-C0h]
  __int128 v36; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+130h] [rbp-A8h]
  __int64 v38; // [rsp+140h] [rbp-98h]
  __int64 v39; // [rsp+148h] [rbp-90h]
  __int128 v40; // [rsp+150h] [rbp-88h]
  _QWORD v41[3]; // [rsp+160h] [rbp-78h] BYREF
  __int128 v42; // [rsp+178h] [rbp-60h] BYREF
  __int64 v43; // [rsp+188h] [rbp-50h]

  v4 = (_QWORD *)(a1 + 720);
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 720)) )
  {
    sniffnet::networking::types::capture_context::CaptureSource::get_name(&v21, v4, a3, a4);
    sniffnet::gui::sniffer::Sniffer::set_device(a1, v21.m256i_i64[1], v21.m256i_i64[2]);
    core::ptr::drop_in_place<alloc::string::String>(&v21);
  }
  sniffnet::gui::types::export_pcap::ExportPcap::full_path(v41, a1 + 1560);
  v5 = 0LL;
  if ( v41[0] != 0x8000000000000000LL )
    v5 = v41;
  sniffnet::networking::types::capture_context::CaptureContext::new(&v20, v4, v5, a1 + 1528);
  v6 = 0x8000000000000000LL;
  if ( v20.m256i_i32[0] == 3 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, v20.m256i_i64[2], v20.m256i_i64[3]);
    v6 = v21.m256i_i64[0];
    *(_OWORD *)v31 = *(_OWORD *)&v21.m256i_u64[1];
  }
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a1 + 2328);
  *(_QWORD *)(a1 + 2328) = v6;
  *(_OWORD *)(a1 + 2336) = *(_OWORD *)v31;
  *(_BYTE *)(a1 + 2439) = *(_BYTE *)(a1 + 1669);
  if ( v20.m256i_i32[0] == 3 )
  {
    core::ptr::drop_in_place<sniffnet::networking::types::capture_context::CaptureContext>(&v20);
    v7 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 2352);
    v9 = <sniffnet::mmdb::types::mmdb_reader::MmdbReaders as core::clone::Clone>::clone(
           *(_QWORD *)(a1 + 1152),
           *(_QWORD *)(a1 + 1160));
    v11 = v10;
    v38 = v9;
    v39 = v10;
    v12 = sniffnet::networking::types::capture_context::CaptureContext::my_link_type(&v20);
    v13 = 16 * (*(_QWORD *)(a1 + 720) != 0x8000000000000000LL);
    *(_DWORD *)(a1 + v13 + 776) = v12;
    *(_DWORD *)(a1 + v13 + 780) = v14;
    sniffnet::networking::types::capture_context::CaptureSource::set_addresses(v4);
    v15 = *v4 == 0x8000000000000000LL;
    v34 = v11;
    if ( v15 )
    {
      <sniffnet::networking::types::capture_context::MyPcapImport as core::clone::Clone>::clone(&v21, a1 + 728);
      *(_QWORD *)&v31[56] = v23;
      *(_OWORD *)&v31[40] = v22;
      *(__m256i *)&v31[8] = v21;
      *(_QWORD *)v31 = 0x8000000000000000LL;
      v16 = 0;
    }
    else
    {
      <sniffnet::networking::types::my_device::MyDevice as core::clone::Clone>::clone(&v21, v4);
      v32 = v24;
      *(_OWORD *)&v31[48] = v23;
      *(_OWORD *)&v31[32] = v22;
      *(__m256i *)v31 = v21;
      v16 = v21.m256i_i64[0] != 0x8000000000000000LL;
    }
    *(_BYTE *)(a1 + 453) = v16;
    async_channel::unbounded(&v21);
    v17 = *(_OWORD *)v21.m256i_i8;
    v40 = *(_OWORD *)&v21.m256i_u64[1];
    v35 = v21.m256i_i64[0];
    v33 = v21.m256i_i64[2];
    v21.m256i_i64[2] = 0x8000000000000000LL;
    v21.m256i_i64[0] = 0LL;
    BYTE8(v22) = 0;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v42, aThreadParsePac, 20LL);
    v37 = v43;
    v36 = v42;
    std::thread::Builder::name(&v42, &v21, &v36);
    v30 = v8;
    v22 = *(_OWORD *)v31;
    v23 = *(_OWORD *)&v31[16];
    v24 = *(_OWORD *)&v31[32];
    v25 = *(_OWORD *)&v31[48];
    v26 = v32;
    v27 = v9;
    v28 = v34;
    v21 = v20;
    v29 = v17;
    std::thread::Builder::spawn_unchecked(&v36, &v42, &v21);
    v21.m256i_i64[0] = (__int64)aSrcGuiSnifferR;
    v21.m256i_i64[1] = 18LL;
    v21.m256i_i32[4] = 750;
    <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(&v42, &v36, &v21);
    core::ptr::drop_in_place<core::result::Result<std::thread::JoinHandle<()>,std::io::error::Error>>(&v42);
    v18 = <async_channel::Receiver<T> as core::clone::Clone>::clone(*((_QWORD *)&v17 + 1));
    core::ptr::drop_in_place<core::option::Option<async_channel::Receiver<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(a1 + 2360);
    *(_QWORD *)(a1 + 2360) = v18;
    *(_QWORD *)(a1 + 2368) = 0LL;
    v7 = iced_runtime::task::Task<T>::stream(*((_QWORD *)&v17 + 1), v33);
  }
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v41);
  return v7;
}