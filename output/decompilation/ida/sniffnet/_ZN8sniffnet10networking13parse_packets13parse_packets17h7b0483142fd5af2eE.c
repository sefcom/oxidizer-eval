__int64 __fastcall sniffnet::networking::parse_packets::parse_packets(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 *a6)
{
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int128 v9; // kr20_16
  unsigned __int128 v10; // kr00_16
  _OWORD *v11; // rbx
  __m256i *v12; // r15
  __m256i *v13; // r14
  __m256i *v14; // rdi
  _OWORD *v15; // r15
  char v16; // r12
  __int64 v17; // rsi
  __int128 v18; // kr40_16
  int v19; // edx
  char *v20; // rax
  __int64 v21; // rax
  char v22; // dl
  unsigned __int8 v23; // bp
  __int64 v24; // rbx
  __int64 inner; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  char v31; // of
  volatile signed __int64 *v32; // rax
  __int64 v33; // rt0
  volatile signed __int64 *v34; // rdx
  __int64 v35; // rt0
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int128 v39; // kr10_16
  char v40; // bl
  __int64 v41; // rdi
  volatile signed __int64 *v42; // r14
  __int64 v43; // r15
  char v44; // dl
  unsigned __int8 v45; // bp
  __int64 v46; // r15
  char v47; // dl
  unsigned __int8 v48; // bp
  __int64 v50; // [rsp+0h] [rbp-4FB8h]
  __int64 v51; // [rsp+8h] [rbp-4FB0h]
  int v52; // [rsp+10h] [rbp-4FA8h]
  unsigned __int8 v53; // [rsp+2Ch] [rbp-4F8Ch] BYREF
  char v54; // [rsp+2Dh] [rbp-4F8Bh] BYREF
  __int16 v55; // [rsp+2Eh] [rbp-4F8Ah] BYREF
  __int64 v56; // [rsp+30h] [rbp-4F88h]
  _QWORD *v57; // [rsp+38h] [rbp-4F80h]
  __int128 v58; // [rsp+40h] [rbp-4F78h] BYREF
  volatile signed __int64 *v59; // [rsp+50h] [rbp-4F68h]
  __int64 *v60; // [rsp+58h] [rbp-4F60h]
  __int64 v61; // [rsp+60h] [rbp-4F58h]
  __int64 v62; // [rsp+68h] [rbp-4F50h]
  __int64 v63; // [rsp+70h] [rbp-4F48h]
  __int64 v64; // [rsp+78h] [rbp-4F40h] BYREF
  __int128 v65; // [rsp+80h] [rbp-4F38h] BYREF
  char v66; // [rsp+90h] [rbp-4F28h]
  volatile signed __int64 *v67; // [rsp+98h] [rbp-4F20h]
  volatile signed __int64 *v68; // [rsp+A0h] [rbp-4F18h] BYREF
  int v69; // [rsp+A8h] [rbp-4F10h]
  int v70; // [rsp+ACh] [rbp-4F0Ch]
  __m256i v71; // [rsp+B0h] [rbp-4F08h] BYREF
  __int128 v72; // [rsp+D0h] [rbp-4EE8h]
  __int128 v73; // [rsp+E0h] [rbp-4ED8h]
  __int128 v74; // [rsp+F0h] [rbp-4EC8h]
  __int128 v75; // [rsp+100h] [rbp-4EB8h]
  __m256i v76; // [rsp+110h] [rbp-4EA8h] BYREF
  __int64 v77; // [rsp+130h] [rbp-4E88h]
  __m256i v78; // [rsp+140h] [rbp-4E78h] BYREF
  __int64 v79; // [rsp+160h] [rbp-4E58h]
  __int64 v80; // [rsp+168h] [rbp-4E50h]
  __int64 v81; // [rsp+170h] [rbp-4E48h]
  volatile signed __int64 *v82; // [rsp+178h] [rbp-4E40h] BYREF
  unsigned __int128 v83; // [rsp+180h] [rbp-4E38h] BYREF
  __int64 v84; // [rsp+190h] [rbp-4E28h] BYREF
  int v85; // [rsp+198h] [rbp-4E20h]
  __int128 v86; // [rsp+1A0h] [rbp-4E18h] BYREF
  __int128 v87; // [rsp+1B0h] [rbp-4E08h]
  __int128 v88; // [rsp+1C0h] [rbp-4DF8h]
  __int128 v89; // [rsp+1D0h] [rbp-4DE8h]
  __int128 v90; // [rsp+1E0h] [rbp-4DD8h]
  __int64 v91; // [rsp+1F8h] [rbp-4DC0h]
  __int64 v92; // [rsp+200h] [rbp-4DB8h]
  volatile signed __int64 *v93; // [rsp+208h] [rbp-4DB0h]
  __int64 v94; // [rsp+210h] [rbp-4DA8h]
  volatile signed __int64 *v95; // [rsp+218h] [rbp-4DA0h]
  volatile signed __int64 *v96; // [rsp+220h] [rbp-4D98h]
  __int64 v97; // [rsp+228h] [rbp-4D90h]
  __int128 v98; // [rsp+230h] [rbp-4D88h] BYREF
  _BYTE v99[28]; // [rsp+240h] [rbp-4D78h] BYREF
  __int128 v100; // [rsp+260h] [rbp-4D58h]
  __int64 v101; // [rsp+270h] [rbp-4D48h]
  __int64 v102; // [rsp+278h] [rbp-4D40h]
  __int128 v103; // [rsp+280h] [rbp-4D38h]
  _WORD v104[5]; // [rsp+294h] [rbp-4D24h] BYREF
  __int128 v105; // [rsp+29Eh] [rbp-4D1Ah]
  char v106; // [rsp+2AEh] [rbp-4D0Ah]
  __int128 v107; // [rsp+2AFh] [rbp-4D09h]
  char v108; // [rsp+2BFh] [rbp-4CF9h]
  __int128 v109; // [rsp+2C0h] [rbp-4CF8h] BYREF
  __int128 v110; // [rsp+2D0h] [rbp-4CE8h]
  __int128 v111; // [rsp+2E0h] [rbp-4CD8h]
  __int128 v112; // [rsp+2F0h] [rbp-4CC8h]
  __int128 v113; // [rsp+300h] [rbp-4CB8h]
  unsigned __int64 v114; // [rsp+310h] [rbp-4CA8h] BYREF
  __int128 v115; // [rsp+318h] [rbp-4CA0h]
  unsigned __int64 v116; // [rsp+328h] [rbp-4C90h]
  __int128 v117; // [rsp+330h] [rbp-4C88h]
  __int128 v118; // [rsp+340h] [rbp-4C78h] BYREF
  __int64 v119; // [rsp+350h] [rbp-4C68h]
  __int128 v120; // [rsp+364h] [rbp-4C54h] BYREF
  _BYTE v121[28]; // [rsp+374h] [rbp-4C44h]
  _OWORD v122[5]; // [rsp+390h] [rbp-4C28h] BYREF
  __int128 v123; // [rsp+3E0h] [rbp-4BD8h]
  __int128 v124[16]; // [rsp+3F0h] [rbp-4BC8h] BYREF
  _BYTE dest[9544]; // [rsp+4F0h] [rbp-4AC8h] BYREF
  _OWORD src[84]; // [rsp+2A40h] [rbp-2578h] BYREF
  __int64 v127; // [rsp+2F88h] [rbp-2030h]
  __int64 v128; // [rsp+3F88h] [rbp-1030h]

  v128 = 0LL;
  v127 = 0LL;
  *(_QWORD *)&dest[6808] = 0LL;
  *(_QWORD *)&dest[2712] = 0LL;
  v60 = a6;
  v92 = a4;
  v91 = a3;
  v57 = a2;
  v62 = a1;
  v69 = sniffnet::networking::types::capture_context::CaptureContext::my_link_type(a5);
  v7 = *a5;
  *(_OWORD *)&dest[16] = a5[1];
  *(_OWORD *)dest = v7;
  sniffnet::networking::types::capture_context::CaptureContext::consume(src, dest);
  v80 = *((_QWORD *)&src[0] + 1);
  v81 = *(_QWORD *)&src[0];
  v64 = *((_QWORD *)&src[1] + 1);
  v8 = *(_QWORD *)&src[1];
  <sniffnet::networking::types::info_traffic::InfoTraffic as core::default::Default>::default(v124);
  <sniffnet::networking::parse_packets::AddressesResolutionState as core::default::Default>::default(v122);
  *(_OWORD *)((char *)&src[5] + 3) = v123;
  *(_OWORD *)((char *)&src[4] + 3) = v122[4];
  *(_OWORD *)((char *)&src[3] + 3) = v122[3];
  *(_OWORD *)((char *)&src[2] + 3) = v122[2];
  *(_OWORD *)((char *)&src[1] + 3) = v122[1];
  *(_OWORD *)((char *)src + 3) = v122[0];
  *(_QWORD *)dest = 1LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_DWORD *)&dest[16] = 0;
  dest[20] = 0;
  *(_OWORD *)&dest[21] = src[0];
  *(_OWORD *)&dest[37] = src[1];
  *(_OWORD *)&dest[53] = src[2];
  *(_OWORD *)&dest[69] = src[3];
  *(_OWORD *)&dest[85] = src[4];
  *(_OWORD *)&dest[101] = src[5];
  *(_DWORD *)&dest[116] = HIDWORD(v123);
  v68 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(dest);
  *(_QWORD *)dest = 1LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_DWORD *)&dest[16] = 0;
  dest[20] = 0;
  *(_QWORD *)&dest[24] = 0LL;
  *(_OWORD *)&dest[32] = 0x10uLL;
  v67 = v68;
  v59 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(dest);
  v82 = v59;
  v85 = 1000000000;
  std::sync::mpmc::sync_channel(dest);
  v9 = *(_OWORD *)dest;
  v100 = *(_OWORD *)dest;
  v10 = *(_OWORD *)&dest[16];
  v63 = v10 >> 64;
  v56 = v10;
  v83 = *(_OWORD *)&dest[16];
  *(_QWORD *)&dest[16] = 0x8000000000000000LL;
  *(_QWORD *)dest = 0LL;
  dest[40] = 0;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, aThreadPacketSt, 20LL);
  v71.m256i_i64[2] = *(_QWORD *)&src[1];
  *(_OWORD *)v71.m256i_i8 = src[0];
  std::thread::Builder::name(src, dest, &v71);
  *(_QWORD *)dest = v81;
  *(_QWORD *)&dest[8] = v80;
  *(_QWORD *)&dest[16] = v8;
  *(_OWORD *)&dest[24] = v9;
  std::thread::Builder::spawn_unchecked(&v71, src, dest);
  *(_QWORD *)dest = aSrcNetworkingP;
  *(_QWORD *)&dest[8] = 31LL;
  *(_DWORD *)&dest[16] = 59;
  <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(src, &v71, dest);
  core::ptr::drop_in_place<core::result::Result<std::thread::JoinHandle<()>,std::io::error::Error>>(src);
  v61 = *v60;
  v94 = v61 + 128;
  v93 = v68 + 2;
  v11 = src;
  v12 = &v71;
  while ( 1 )
  {
    std::sync::mpmc::Receiver<T>::recv_timeout(v11, v56, v63);
    *(_QWORD *)dest = 0LL;
    *(_QWORD *)&dest[8] = 0x8000000000000004LL;
    *(_DWORD *)&dest[40] = 0;
    v13 = v12;
    v14 = v12;
    v15 = v11;
    core::result::Result<T,E>::unwrap_or(v14, v11, dest);
    v77 = v72;
    v76 = v71;
    v16 = BYTE8(v72);
    v70 = v73;
    if ( (unsigned __int8)concurrent_queue::ConcurrentQueue<T>::is_closed(v94) )
    {
      v40 = 1;
      v41 = v76.m256i_i64[0];
      if ( !v76.m256i_i64[0] )
        goto LABEL_49;
      goto LABEL_44;
    }
    if ( *v57 != 0x8000000000000000LL )
      sniffnet::networking::parse_packets::maybe_send_tick_run_live(v62, v124, v59, v57, &v84, v60);
    if ( !v76.m256i_i64[0] )
      break;
    v79 = v77;
    v78 = v76;
    v17 = v76.m256i_i64[0];
    sniffnet::networking::parse_packets::get_sniffable_headers(v11);
    if ( LODWORD(src[0]) == 6 )
    {
      core::ptr::drop_in_place<core::option::Option<etherparse::lax_packet_headers::LaxPacketHeaders>>(v11, v17);
LABEL_41:
      v12 = v13;
      core::ptr::drop_in_place<http::method::extension::AllocatedExtension>(v78.m256i_i64[0], v78.m256i_i64[1]);
LABEL_42:
      v39 = v83;
      v63 = v39 >> 64;
      v56 = v39;
    }
    else
    {
      v18 = *(_OWORD *)&v78.m256i_u64[2];
      if ( *v57 == 0x8000000000000000LL )
      {
        sniffnet::networking::parse_packets::maybe_send_tick_run_offline(
          v62,
          v124,
          v59,
          v78.m256i_i64[2],
          v78.m256i_i64[3],
          v60);
      }
      else if ( v85 == 1000000000 )
      {
        v84 = std::time::Instant::now(v11);
        v85 = v19;
      }
      v124[0] = v18;
      v58 = 0LL;
      v114 = 0x8000000000000000LL;
      v115 = v103;
      v116 = 0x8000000000000000LL;
      v117 = v103;
      v55 = 7424;
      v54 = 2;
      v104[4] = 256;
      v108 = 3;
      v105 = 0LL;
      v106 = 1;
      v107 = 0LL;
      v104[0] = 0;
      v104[2] = 0;
      memcpy(dest, v11, sizeof(dest));
      sniffnet::networking::manage_packets::analyze_headers(
        (__int64)&v120,
        (int *)dest,
        (__int64)&v114,
        (__int64)&v58,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)v104);
      if ( (_WORD)v120 != 2 )
      {
        *(_OWORD *)&v99[12] = *(_OWORD *)&v121[12];
        *(_OWORD *)v99 = *(_OWORD *)v121;
        v98 = v120;
        if ( v64 )
        {
          *(_QWORD *)dest = &v78.m256i_i64[2];
          *(_OWORD *)&dest[8] = *(_OWORD *)v78.m256i_i8;
          pcap::capture::activated::Savefile::write(&v64, dest);
        }
        sniffnet::networking::manage_packets::modify_or_insert_in_map(
          (__int64)dest,
          v124,
          (unsigned __int16 *)&v98,
          v57,
          (__int128 *)&v114,
          v55,
          SHIBYTE(v55),
          v54,
          v58);
        v53 = dest[0];
        v118 = *(_OWORD *)&dest[8];
        v119 = *(_QWORD *)&dest[24];
        sniffnet::networking::types::data_info::DataInfo::add_packet(&v124[10], v58, *((_QWORD *)&v58 + 1));
        v20 = (char *)&v98 + 8;
        if ( v53 )
          v20 = &v99[9];
        v65 = *(_OWORD *)v20;
        v66 = v20[16];
        std::sync::poison::mutex::Mutex<T>::lock(dest, v93);
        v21 = core::result::Result<T,E>::unwrap(dest, &off_2DFF648);
        v23 = v22 & 1;
        v56 = v21;
        v24 = v21 + 56;
        if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v21 + 56, &v65) )
        {
          inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v24, &v65);
          v26 = (_BYTE *)(inner + 24);
          *(_QWORD *)dest = 0LL;
          *(_QWORD *)&dest[8] = 1LL;
          *(_OWORD *)&dest[16] = 0LL;
          *(_OWORD *)&dest[32] = 1uLL;
          *(_OWORD *)&dest[56] = 1uLL;
          dest[72] = -7;
          if ( !inner )
            v26 = dest;
          <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(&v109, v26);
          core::ptr::drop_in_place<sniffnet::networking::types::host::Host>(dest);
          core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v56, v23);
          v90 = v113;
          v89 = v112;
          v88 = v111;
          v87 = v110;
          v86 = v109;
          hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(
            dest,
            &v124[7],
            &v86,
            v27,
            v28,
            v29,
            v50,
            v51,
            v52);
          if ( *(_QWORD *)dest == 0x8000000000000000LL )
          {
            *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)&dest[8];
            v71.m256i_i64[0] = 0x8000000000000000LL;
          }
          else
          {
            v75 = *(_OWORD *)&dest[80];
            v74 = *(_OWORD *)&dest[64];
            v73 = *(_OWORD *)&dest[48];
            v72 = *(_OWORD *)&dest[32];
            v71 = *(__m256i *)dest;
          }
          std::collections::hash::map::Entry<K,V>::and_modify(dest, v13, v58, *((_QWORD *)&v58 + 1), v53);
          v71.m256i_i64[0] = (__int64)v57;
          v71.m256i_i64[1] = (__int64)&v65;
          v71.m256i_i64[2] = (__int64)&v53;
          v71.m256i_i64[3] = (__int64)&v58;
          std::collections::hash::map::Entry<K,V>::or_insert_with(dest, v13);
        }
        else
        {
          v30 = v56 + 8;
          if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v56 + 8, &v65) )
          {
            LOBYTE(v87) = v66;
            v86 = v65;
            hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(dest, v30, &v86);
            if ( dest[16] == 2 )
            {
              *(_OWORD *)v71.m256i_i8 = *(_OWORD *)dest;
              v71.m256i_i8[16] = 2;
            }
            else
            {
              *(_QWORD *)&v72 = *(_QWORD *)&dest[32];
              v71 = *(__m256i *)dest;
            }
            std::collections::hash::map::Entry<K,V>::and_modify(dest, v13, v58, *((_QWORD *)&v58 + 1), v53);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v56, v23);
          }
          else
          {
            LOBYTE(v87) = v66;
            v86 = v65;
            sniffnet::networking::types::data_info::DataInfo::new_with_first_packet(
              dest,
              v58,
              *((_QWORD *)&v58 + 1),
              v53);
            hashbrown::map::HashMap<K,V,S,A>::insert(v13, v30, &v86, dest);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v56, v23);
            v32 = v67;
            v33 = _InterlockedIncrement64(v67);
            if ( (v33 < 0) ^ v31 | (v33 == 0)
              || (v95 = v32, v34 = v59, v35 = _InterlockedIncrement64(v59), (v35 < 0) ^ v31 | (v35 == 0)) )
            {
              BUG();
            }
            v36 = *v57 == 0x8000000000000000LL;
            v96 = v34;
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v109, v57[v36 + 4], v57[v36 + 5]);
            v56 = <sniffnet::mmdb::types::mmdb_reader::MmdbReaders as core::clone::Clone>::clone(v91, v92);
            v101 = v56;
            v63 = v37;
            v102 = v37;
            v38 = v61;
            <async_channel::Sender<T> as core::clone::Clone>::clone(v61);
            v97 = v38;
            *(_QWORD *)&dest[16] = 0x8000000000000000LL;
            *(_OWORD *)&dest[24] = v103;
            *(_QWORD *)dest = 0LL;
            dest[40] = 0;
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, aThreadReverseD, 25LL);
            *(_QWORD *)&v87 = v71.m256i_i64[2];
            v86 = *(_OWORD *)v71.m256i_i8;
            std::thread::Builder::name(v13, dest, &v86);
            *(_QWORD *)&dest[24] = v67;
            *(_QWORD *)&dest[32] = v59;
            *(_OWORD *)&dest[92] = *(_OWORD *)&v99[12];
            *(_OWORD *)&dest[80] = *(_OWORD *)v99;
            *(_OWORD *)&dest[64] = v98;
            dest[108] = v53;
            *(_OWORD *)dest = v109;
            *(_QWORD *)&dest[16] = v110;
            *(_QWORD *)&dest[40] = v56;
            *(_QWORD *)&dest[48] = v63;
            *(_QWORD *)&dest[56] = v61;
            std::thread::Builder::spawn_unchecked(&v86, v13, dest);
            *(_QWORD *)dest = aSrcNetworkingP;
            *(_QWORD *)&dest[8] = 31LL;
            *(_DWORD *)&dest[16] = 211;
            <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(v13, &v86, dest);
            core::ptr::drop_in_place<core::result::Result<std::thread::JoinHandle<()>,std::io::error::Error>>(v13);
          }
        }
        hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(dest, &v124[4], &v118);
        if ( *(_DWORD *)dest == 3 )
        {
          *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)&dest[8];
          v71.m256i_i64[0] = 3LL;
        }
        else
        {
          *(_QWORD *)&v72 = *(_QWORD *)&dest[32];
          v71 = *(__m256i *)dest;
        }
        std::collections::hash::map::Entry<K,V>::and_modify(dest, v13, v58, *((_QWORD *)&v58 + 1), v53);
        std::collections::hash::map::Entry<K,V>::or_insert_with(dest, v58, *((_QWORD *)&v58 + 1), v53);
        if ( (v16 & 1) != 0 )
          LODWORD(v124[15]) = v70;
        v11 = v15;
        goto LABEL_41;
      }
      core::ptr::drop_in_place<(core::option::Option<alloc::string::String>,core::option::Option<alloc::string::String>)>(&v114);
      core::ptr::drop_in_place<http::method::extension::AllocatedExtension>(v78.m256i_i64[0], v78.m256i_i64[1]);
      v12 = v13;
    }
  }
  v86 = *(_OWORD *)&v76.m256i_u64[1];
  *(_QWORD *)&v87 = v76.m256i_i64[3];
  if ( !(unsigned __int8)<pcap::Error as core::cmp::PartialEq>::eq(v76.m256i_i64[1]) )
  {
    core::ptr::drop_in_place<pcap::Error>(&v76.m256i_u64[1]);
    v12 = v13;
    goto LABEL_42;
  }
  memcpy(src, v124, 0x100uLL);
  v42 = v59 + 2;
  std::sync::poison::mutex::Mutex<T>::lock(dest, v59 + 2);
  v43 = core::result::Result<T,E>::unwrap(dest, &off_2DFF660);
  v45 = v44 & 1;
  alloc::vec::Vec<T,A>::drain(dest, v43 + 8);
  core::iter::traits::iterator::Iterator::collect(&v71, dest);
  memcpy(dest, src, 0x100uLL);
  *(_OWORD *)&dest[264] = *(_OWORD *)v71.m256i_i8;
  *(_QWORD *)&dest[280] = v71.m256i_i64[2];
  *(_QWORD *)&dest[289] = v71.m256i_i64[0];
  *(_QWORD *)&dest[296] = *(__int64 *)((char *)v71.m256i_i64 + 7);
  *(_OWORD *)&dest[304] = (unsigned __int64)v60;
  *(_QWORD *)&dest[256] = v62;
  dest[288] = 1;
  event_listener_strategy::EventListenerFuture::wait(src);
  core::ptr::drop_in_place<core::result::Result<(),async_channel::SendError<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(
    src,
    dest);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v43, v45);
  v61 += 672LL;
  while ( (unsigned __int64)core::sync::atomic::atomic_load(v61, 4LL) > 1 )
    std::thread::sleep(1LL, 0LL);
  std::sync::poison::mutex::Mutex<T>::lock(dest, v42);
  v46 = core::result::Result<T,E>::unwrap(dest, &off_2DFF678);
  v48 = v47 & 1;
  alloc::vec::Vec<T,A>::drain(dest, v46 + 8);
  core::iter::traits::iterator::Iterator::collect(src, dest);
  *(_QWORD *)&dest[16] = *(_QWORD *)&src[1];
  *(_OWORD *)dest = src[0];
  *(_OWORD *)&dest[304] = (unsigned __int64)v60;
  *(_QWORD *)&dest[24] = v62;
  *(_QWORD *)&dest[264] = 0x8000000000000000LL;
  event_listener_strategy::EventListenerFuture::wait(src);
  core::ptr::drop_in_place<core::result::Result<(),async_channel::SendError<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(
    src,
    dest);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v46, v48);
  core::ptr::drop_in_place<pcap::Error>(&v86);
  v40 = 0;
  v41 = v76.m256i_i64[0];
  if ( v76.m256i_i64[0] )
  {
LABEL_44:
    core::ptr::drop_in_place<http::method::extension::AllocatedExtension>(v41, v76.m256i_i64[1]);
    goto LABEL_51;
  }
LABEL_49:
  if ( v40 )
    core::ptr::drop_in_place<pcap::Error>(&v76.m256i_u64[1]);
LABEL_51:
  core::ptr::drop_in_place<std::sync::mpsc::Receiver<(core::result::Result<sniffnet::networking::parse_packets::PacketOwned,pcap::Error>,core::option::Option<pcap::capture::activated::Stat>)>>(&v83);
  core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<sniffnet::networking::types::host::HostMessage>>>>(&v82);
  core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<sniffnet::networking::parse_packets::AddressesResolutionState>>>(&v68);
  if ( v40 )
    core::ptr::drop_in_place<sniffnet::networking::types::info_traffic::InfoTraffic>(v124);
  core::ptr::drop_in_place<core::option::Option<pcap::capture::activated::Savefile>>(&v64);
  return core::ptr::drop_in_place<sniffnet::networking::types::capture_context::CaptureSource>(v57);
}