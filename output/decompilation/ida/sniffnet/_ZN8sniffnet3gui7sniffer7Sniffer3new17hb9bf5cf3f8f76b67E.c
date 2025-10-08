__int64 __fastcall sniffnet::gui::sniffer::Sniffer::new(__int64 a1, const void *a2)
{
  char v2; // bp
  __int128 v3; // rax
  __int64 v4; // r12
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm0
  __int128 v15; // [rsp+0h] [rbp-AD8h]
  __int64 v16; // [rsp+18h] [rbp-AC0h]
  __int128 v17; // [rsp+20h] [rbp-AB8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-AA8h]
  __int128 v19; // [rsp+40h] [rbp-A98h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A88h]
  __int128 v21; // [rsp+58h] [rbp-A80h]
  __int128 v22; // [rsp+68h] [rbp-A70h]
  __int64 v23; // [rsp+78h] [rbp-A60h]
  __int128 v24; // [rsp+80h] [rbp-A58h]
  __int128 v25; // [rsp+90h] [rbp-A48h]
  __int64 v26; // [rsp+A0h] [rbp-A38h]
  __int64 v27; // [rsp+A8h] [rbp-A30h]
  __int128 v28; // [rsp+B0h] [rbp-A28h]
  __int64 v29; // [rsp+C0h] [rbp-A18h]
  __int128 v30; // [rsp+D0h] [rbp-A08h]
  __int128 v31; // [rsp+E0h] [rbp-9F8h]
  __int128 v32; // [rsp+F0h] [rbp-9E8h]
  __int128 v33; // [rsp+108h] [rbp-9D0h]
  __int64 v34; // [rsp+118h] [rbp-9C0h]
  __int128 v35; // [rsp+120h] [rbp-9B8h] BYREF
  __int128 v36; // [rsp+130h] [rbp-9A8h]
  __int128 v37; // [rsp+140h] [rbp-998h]
  __int128 v38; // [rsp+150h] [rbp-988h]
  __int128 v39; // [rsp+160h] [rbp-978h]
  __int128 v40; // [rsp+170h] [rbp-968h]
  __int128 v41; // [rsp+180h] [rbp-958h]
  __int128 v42; // [rsp+190h] [rbp-948h]
  _OWORD v43[19]; // [rsp+1A0h] [rbp-938h] BYREF
  _OWORD v44[28]; // [rsp+2D8h] [rbp-800h] BYREF
  _BYTE v45[136]; // [rsp+498h] [rbp-640h] BYREF
  _BYTE v46[456]; // [rsp+520h] [rbp-5B8h] BYREF
  _BYTE v47[504]; // [rsp+6E8h] [rbp-3F0h] BYREF
  _BYTE v48[256]; // [rsp+8E0h] [rbp-1F8h] BYREF
  _BYTE dest[208]; // [rsp+9E0h] [rbp-F8h] BYREF

  <sniffnet::gui::types::settings::Settings as core::clone::Clone>::clone(v47, a2);
  memcpy(dest, &v47[40], sizeof(dest));
  v2 = v47[329];
  v18 = *(_QWORD *)&v47[264];
  v17 = *(_OWORD *)&v47[248];
  v20 = *(_QWORD *)&v47[288];
  v19 = *(_OWORD *)&v47[272];
  core::ptr::drop_in_place<alloc::string::String>(&v47[296]);
  sniffnet::networking::types::capture_context::CaptureSource::from_conf(&v35, a2);
  memcpy(v47, a2, sizeof(v47));
  v28 = 0LL;
  <sniffnet::networking::types::info_traffic::InfoTraffic as core::default::Default>::default(v48);
  *(_QWORD *)&v3 = std::thread::local::LocalKey<T>::with();
  v31 = xmmword_2DF2BB0;
  v30 = *(_OWORD *)&off_2DF2BA0;
  v32 = v3;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v46);
  v42 = *(_OWORD *)&v46[32];
  v41 = *(_OWORD *)&v46[16];
  v40 = *(_OWORD *)v46;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 16LL;
  v22 = 0LL;
  v23 = 0LL;
  v43[18] = v39;
  v43[17] = v38;
  v43[16] = v37;
  v43[15] = v36;
  v43[14] = v35;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  *(_QWORD *)&v33 = 0x8000000000000000LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v46, asc_287A5B, 1LL);
  *(_QWORD *)&v25 = *(_QWORD *)&v46[16];
  v24 = *(_OWORD *)v46;
  BYTE8(v25) = 0;
  *(_QWORD *)&v44[13] = 0LL;
  *((_QWORD *)&v44[13] + 1) = 4LL;
  v44[14] = 0LL;
  v44[15] = 4uLL;
  *((_QWORD *)&v44[16] + 1) = 4LL;
  v44[17] = 0LL;
  v44[18] = 4uLL;
  *((_QWORD *)&v44[19] + 1) = 4LL;
  v44[20] = 0LL;
  v44[21] = 4uLL;
  *((_QWORD *)&v44[22] + 1) = 4LL;
  v44[23] = 0LL;
  v44[24] = 4uLL;
  BYTE8(v44[27]) = v2;
  memcpy(v44, dest, 0xD0uLL);
  DWORD1(v44[27]) = (_DWORD)&unk_1000100;
  memset(&v44[25], 0, 36);
  *(_QWORD *)&v43[0] = 0LL;
  *((_QWORD *)&v43[0] + 1) = 1LL;
  v43[1] = 0LL;
  v43[2] = 1uLL;
  *((_QWORD *)&v43[3] + 1) = 1LL;
  v43[4] = 0LL;
  v43[5] = 1uLL;
  *((_QWORD *)&v43[6] + 1) = 1LL;
  v43[7] = 0LL;
  v43[8] = 1uLL;
  *((_QWORD *)&v43[9] + 1) = 1LL;
  v43[10] = 0LL;
  v43[11] = 1uLL;
  *((_QWORD *)&v43[12] + 1) = 1LL;
  *(_QWORD *)&v43[13] = 0LL;
  BYTE8(v43[13]) = 0;
  sniffnet::mmdb::types::mmdb_reader::MmdbReader::from(v45);
  *(_QWORD *)v46 = 1LL;
  *(_QWORD *)&v46[8] = 1LL;
  memcpy(&v46[16], v45, 0x88uLL);
  v16 = alloc::boxed::Box<T>::new(v46);
  sniffnet::mmdb::types::mmdb_reader::MmdbReader::from(v45);
  *(_QWORD *)v46 = 1LL;
  *(_QWORD *)&v46[8] = 1LL;
  memcpy(&v46[16], v45, 0x88uLL);
  v4 = alloc::boxed::Box<T>::new(v46);
  v26 = v16;
  v27 = v4;
  <sniffnet::gui::types::timing_events::TimingEvents as core::default::Default>::default(v45);
  <sniffnet::networking::types::host_data_states::HostDataStates as core::default::Default>::default(v46);
  memcpy((void *)(a1 + 1168), v47, 0x1F8uLL);
  *(_OWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 2368) = v29;
  memcpy((void *)(a1 + 800), v48, 0x100uLL);
  v5 = v30;
  v6 = v31;
  *(_OWORD *)(a1 + 1088) = v32;
  *(_OWORD *)(a1 + 1072) = v6;
  *(_OWORD *)(a1 + 1056) = v5;
  v7 = v40;
  v8 = v41;
  *(_OWORD *)(a1 + 1136) = v42;
  *(_OWORD *)(a1 + 1120) = v8;
  *(_OWORD *)(a1 + 1104) = v7;
  *(_QWORD *)(a1 + 1840) = v23;
  v9 = v21;
  *(_OWORD *)(a1 + 1824) = v22;
  *(_OWORD *)(a1 + 1808) = v9;
  v10 = v36;
  v11 = v37;
  v12 = v38;
  *(_OWORD *)(a1 + 720) = v35;
  *(_OWORD *)(a1 + 736) = v10;
  *(_OWORD *)(a1 + 752) = v11;
  *(_OWORD *)(a1 + 768) = v12;
  *(_OWORD *)(a1 + 784) = v39;
  *(_OWORD *)(a1 + 1848) = v15;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 2344) = v34;
  *(_OWORD *)(a1 + 2328) = v33;
  v13 = v24;
  *(_OWORD *)(a1 + 480) = v25;
  *(_OWORD *)(a1 + 464) = v13;
  memcpy((void *)(a1 + 16), v44, 0x1C0uLL);
  *(_WORD *)(a1 + 2392) = 5;
  *(_QWORD *)(a1 + 2376) = 0LL;
  memcpy((void *)(a1 + 496), v43, 0xE0uLL);
  *(_QWORD *)(a1 + 2384) = 1LL;
  *(_QWORD *)(a1 + 1152) = v16;
  *(_QWORD *)(a1 + 1160) = v4;
  memcpy((void *)(a1 + 1672), v45, 0x88uLL);
  *(_DWORD *)(a1 + 2436) = 50528768;
  *(_QWORD *)a1 = 0LL;
  memcpy((void *)(a1 + 1872), v46, 0x1C8uLL);
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  return core::ptr::drop_in_place<alloc::string::String>(&v17);
}