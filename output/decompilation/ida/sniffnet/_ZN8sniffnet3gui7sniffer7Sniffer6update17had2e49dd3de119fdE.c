__int64 __fastcall sniffnet::gui::sniffer::Sniffer::update(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // r15
  unsigned int *v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  int v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rdx
  __int64 v10; // xmm0_8
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  char v14; // dl
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // r14
  __int64 v21; // rax
  char v22; // bp
  char v23; // al
  __int128 *v24; // rdi
  char v25; // al
  char v26; // al
  char v27; // al
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // rcx
  char v34; // al
  char v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // bp
  double v39; // xmm0_8
  char v40; // al
  char v41; // al
  __int64 v42; // rax
  _QWORD *v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __m128 v48; // xmm0
  __int64 v49; // r14
  __int64 v50; // r13
  __m128 v51; // xmm0
  __int64 v52; // r14
  __int64 v53; // rax
  double v54; // xmm1_8
  unsigned __int8 v55; // [rsp+Ch] [rbp-6ECh]
  __m128 v56; // [rsp+10h] [rbp-6E8h]
  char v57; // [rsp+28h] [rbp-6D0h]
  char v58; // [rsp+28h] [rbp-6D0h]
  double v59; // [rsp+28h] [rbp-6D0h]
  __int64 v60; // [rsp+28h] [rbp-6D0h]
  __int128 v61; // [rsp+30h] [rbp-6C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-6B8h]
  __int64 v63; // [rsp+48h] [rbp-6B0h]
  _QWORD v64[3]; // [rsp+50h] [rbp-6A8h] BYREF
  double v65; // [rsp+68h] [rbp-690h] BYREF
  _OWORD v66[16]; // [rsp+70h] [rbp-688h] BYREF
  unsigned __int64 v67; // [rsp+178h] [rbp-580h]
  char v68; // [rsp+348h] [rbp-3B0h]
  _OWORD src[9]; // [rsp+350h] [rbp-3A8h] BYREF
  __int128 v70; // [rsp+3E0h] [rbp-318h] BYREF
  char v71; // [rsp+3F0h] [rbp-308h]
  __m128 v72; // [rsp+400h] [rbp-2F8h]
  _QWORD v73[30]; // [rsp+410h] [rbp-2E8h] BYREF
  _QWORD v74[31]; // [rsp+500h] [rbp-1F8h] BYREF
  _BYTE v75[256]; // [rsp+5F8h] [rbp-100h] BYREF

  *(_BYTE *)(a1 + 488) = (unsigned __int8)(*(_BYTE *)(a1 + 488) + 1) % 3u;
  v2 = 1LL;
  if ( (*((_QWORD *)a2 + 33) ^ 0x8000000000000000LL) < 0x3A )
    v2 = *((_QWORD *)a2 + 33) ^ 0x8000000000000000LL;
  v3 = a2 + 66;
  switch ( v2 )
  {
    case 0uLL:
      *(_OWORD *)a1 = *(_OWORD *)a2;
      v4 = sniffnet::gui::sniffer::Sniffer::register_sigint_handler();
      *(_QWORD *)&v66[0] = 0LL;
      v68 = 0;
      v5 = iced_runtime::task::Task<T>::stream(v66);
      *(_QWORD *)&v66[0] = v4;
      *((_QWORD *)&v66[0] + 1) = &off_2DF5448;
      *(_QWORD *)&v66[1] = v5;
      *((_QWORD *)&v66[1] + 1) = &off_2DF5470;
      return iced_runtime::task::Task<T>::batch(v66);
    case 1uLL:
      if ( *((_QWORD *)a2 + 32) == *(_QWORD *)(a1 + 2352) )
      {
        v55 = *((_BYTE *)a2 + 288);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v66, a2 + 66);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v73, v66);
        while ( v73[0] != 0x8000000000000000LL )
        {
          sniffnet::gui::sniffer::Sniffer::handle_new_host(a1, v73);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v73, v66);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<sniffnet::networking::types::host::HostMessage>>(v66);
        memcpy(v66, a2, sizeof(v66));
        sniffnet::gui::sniffer::Sniffer::refresh_data(a1, v66, v55);
        return 0LL;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<sniffnet::networking::types::host::HostMessage>>(a2 + 66, a2, v3);
      core::ptr::drop_in_place<sniffnet::networking::types::info_traffic::InfoTraffic>(a2);
      return 0LL;
    case 2uLL:
      v23 = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 1664) = *(_BYTE *)a2;
      if ( v23 )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, a1 + 1616);
        *(_QWORD *)&v66[1] = *(_QWORD *)&src[1];
        v66[0] = src[0];
        v67 = 0x8000000000000035LL;
      }
      else
      {
        <alloc::string::String as core::clone::Clone>::clone(src, a1 + 1504);
        *(_QWORD *)&v66[1] = *(_QWORD *)&src[1];
        v66[0] = src[0];
        v67 = 0x8000000000000003LL;
      }
      return iced_runtime::task::Task<T>::stream(v66);
    case 3uLL:
      sniffnet::gui::sniffer::Sniffer::set_device(a1, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
      goto LABEL_55;
    case 4uLL:
      *(_BYTE *)(a1 + 1552) ^= 1u;
      return 0LL;
    case 5uLL:
      sniffnet::gui::types::filters::Filters::set_bpf(a1 + 1528, a2, v3);
      return 0LL;
    case 6uLL:
      *(_BYTE *)(a1 + 455) = *(_BYTE *)a2;
      return 0LL;
    case 7uLL:
      v25 = *(_BYTE *)a2;
      *(_QWORD *)(a1 + 2384) = 1LL;
      *(_BYTE *)(a1 + 1665) = v25;
      return 0LL;
    case 8uLL:
      *(_BYTE *)(a1 + 1666) = *(_BYTE *)a2;
      return 0LL;
    case 9uLL:
      *(_BYTE *)(a1 + 1667) = *(_BYTE *)a2;
      return 0LL;
    case 0xAuLL:
      v66[4] = *((_OWORD *)a2 + 4);
      v28 = *(_OWORD *)a2;
      v29 = *((_OWORD *)a2 + 1);
      v30 = *((_OWORD *)a2 + 2);
      v66[3] = *((_OWORD *)a2 + 3);
      v66[2] = v30;
      v66[1] = v29;
      v66[0] = v28;
      sniffnet::gui::sniffer::Sniffer::add_or_remove_favorite(a1, v66, *((unsigned __int8 *)a2 + 80));
      core::ptr::drop_in_place<sniffnet::networking::types::host::Host>(a2);
      return 0LL;
    case 0xBuLL:
      sniffnet::gui::sniffer::Sniffer::open_web(*a2);
      return 0LL;
    case 0xCuLL:
      v21 = *(_QWORD *)(a1 + 720);
      if ( *(_BYTE *)(a1 + 1664) )
      {
        if ( v21 != 0x8000000000000000LL )
          return 0LL;
      }
      else if ( v21 == 0x8000000000000000LL )
      {
        return 0LL;
      }
      return sniffnet::gui::sniffer::Sniffer::start(a1);
    case 0xDuLL:
      sniffnet::gui::sniffer::Sniffer::reset(a1);
      return 0LL;
    case 0xEuLL:
      memcpy((void *)(a1 + 1208), a2, 0xD0uLL);
      memcpy((void *)(a1 + 16), a2, 0xD0uLL);
      return 0LL;
    case 0xFuLL:
      *(_QWORD *)&src[1] = *((_QWORD *)a2 + 2);
      src[0] = *(_OWORD *)a2;
      <alloc::string::String as core::clone::Clone>::clone_from(a1 + 1464, src, v3);
      sniffnet::gui::styles::types::palette::Palette::from_file(v66, a2);
      if ( (v66[0] & 1) == 0 )
      {
        sniffnet::gui::styles::types::custom_palette::CustomPalette::from_palette(v75, (char *)v66 + 4);
        memcpy((void *)(a1 + 1208), v75, 0xD0uLL);
        memcpy((void *)(a1 + 16), v75, 0xD0uLL);
      }
      core::ptr::drop_in_place<core::result::Result<sniffnet::gui::styles::types::palette::Palette,toml::de::error::Error>>(v66);
      return 0LL;
    case 0x10uLL:
      if ( *(_BYTE *)(a1 + 2438) != 3 || *(_WORD *)(a1 + 2392) != 5 )
        return 0LL;
      v11 = *(_OWORD *)a2;
      v12 = *((_OWORD *)a2 + 1);
      *(_OWORD *)(a1 + 2420) = *(_OWORD *)(a2 + 7);
      *(_OWORD *)(a1 + 2408) = v12;
      *(_OWORD *)(a1 + 2392) = v11;
      return 0LL;
    case 0x11uLL:
      if ( *(_WORD *)(a1 + 2392) != 5 )
        return 0LL;
      v26 = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 2438) = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 1668) = v26;
      return 0LL;
    case 0x12uLL:
      if ( *(_WORD *)(a1 + 2392) != 5 || *(_BYTE *)(a1 + 2438) != 3 )
        return 0LL;
      *(_BYTE *)(a1 + 2438) = *(_BYTE *)(a1 + 1668);
      return 0LL;
    case 0x13uLL:
      goto LABEL_47;
    case 0x14uLL:
      *(_BYTE *)(a1 + 2438) = 3;
      return 0LL;
    case 0x15uLL:
      v27 = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 2439) = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 1669) = v27;
      if ( v27 != 2 )
        return 0LL;
      *(_QWORD *)(a1 + 2376) = 0LL;
      return 0LL;
    case 0x16uLL:
      v34 = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 1497) = *(_BYTE *)a2;
      *(_BYTE *)(a1 + 456) = v34;
      return 0LL;
    case 0x17uLL:
      sniffnet::gui::sniffer::Sniffer::update_notifications_settings(a1, a2, *((unsigned __int8 *)a2 + 32));
      return 0LL;
    case 0x18uLL:
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<sniffnet::notifications::types::logged_notification::LoggedNotification>>(
        a1 + 1808,
        a2,
        v3);
      *(_QWORD *)(a1 + 1808) = 0LL;
      *(_QWORD *)(a1 + 1816) = 16LL;
      *(_OWORD *)(a1 + 1824) = 0LL;
LABEL_47:
      *(_WORD *)(a1 + 2392) = 5;
      return 0LL;
    case 0x19uLL:
      v22 = *(_BYTE *)a2;
      sniffnet::notifications::types::sound::play(1LL, *(unsigned __int8 *)a2);
      *(_BYTE *)(a1 + 1202) = v22;
      return 0LL;
    case 0x1AuLL:
      v38 = *(_BYTE *)a2;
      if ( (unsigned __int8)sniffnet::gui::types::timing_events::TimingEvents::was_just_focus(a1 + 1672) )
        return 0LL;
      sniffnet::gui::sniffer::Sniffer::switch_page(a1, v38);
      return 0LL;
    case 0x1BuLL:
      return sniffnet::gui::sniffer::Sniffer::shortcut_return(a1);
    case 0x1CuLL:
      return sniffnet::gui::sniffer::Sniffer::shortcut_esc(a1);
    case 0x1DuLL:
      return sniffnet::gui::sniffer::Sniffer::reset_button_pressed(a1);
    case 0x1EuLL:
      return sniffnet::gui::sniffer::Sniffer::shortcut_ctrl_d(a1);
    case 0x1FuLL:
      memcpy(v66, a2, 0xE0uLL);
      *(_BYTE *)(a1 + 2320) = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                *(_QWORD *)(a1 + 648),
                                *(_QWORD *)(a1 + 656),
                                *((_QWORD *)&v66[9] + 1),
                                *(_QWORD *)&v66[10]) ^ 1;
      *(_BYTE *)(a1 + 2288) = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                *(_QWORD *)(a1 + 696),
                                *(_QWORD *)(a1 + 704),
                                *((_QWORD *)&v66[12] + 1),
                                *(_QWORD *)&v66[13]) ^ 1;
      *(_BYTE *)(a1 + 2256) = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                *(_QWORD *)(a1 + 672),
                                *(_QWORD *)(a1 + 680),
                                *(_QWORD *)&v66[11],
                                *((_QWORD *)&v66[11] + 1)) ^ 1;
      sniffnet::networking::types::host_data_states::HostDataStates::update_states(a1 + 1872, v66);
      *(_QWORD *)(a1 + 2384) = 1LL;
      *(_BYTE *)(a1 + 2439) = 1;
      *(_BYTE *)(a1 + 1669) = 1;
      core::ptr::drop_in_place<sniffnet::report::types::search_parameters::SearchParameters>(a1 + 496);
      memcpy((void *)(a1 + 496), a2, 0xE0uLL);
      return 0LL;
    case 0x20uLL:
      v31 = *(_QWORD *)(a1 + 2384);
      if ( !*(_BYTE *)a2 )
      {
        if ( v31 > 1 )
          *(_QWORD *)(a1 + 2384) = v31 - 1;
        return 0LL;
      }
      sniffnet::report::get_report_entries::get_searched_entries(v66, a1);
      v32 = *((_QWORD *)&v66[1] + 1) / 0x14uLL
          + (__ROR8__(0xCCCCCCCCCCCCCCCDLL * *((_QWORD *)&v66[1] + 1), 2) > 0xCCCCCCCCCCCCCCCuLL);
      core::ptr::drop_in_place<(alloc::vec::Vec<(sniffnet::networking::types::address_port_pair::AddressPortPair,sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair)>,usize,sniffnet::networking::types::data_info::DataInfo)>(v66);
      if ( v31 >= v32 )
        return 0LL;
      v33 = 1LL;
      if ( *(_QWORD *)(a1 + 2384) != -1LL )
        v33 = *(_QWORD *)(a1 + 2384) + 1LL;
      *(_QWORD *)(a1 + 2384) = v33;
      return 0LL;
    case 0x21uLL:
      if ( *(_BYTE *)(a1 + 2439) != 1 || *(_BYTE *)(a1 + 2438) != 3 || *(_WORD *)(a1 + 2392) != 5 )
        return 0LL;
      LOBYTE(v66[0]) = *(_BYTE *)a2;
      v67 = 0x8000000000000020LL;
      return iced_runtime::task::Task<T>::stream(v66);
    case 0x22uLL:
      sniffnet::gui::types::timing_events::TimingEvents::focus_now(a1 + 1672);
      return 0LL;
    case 0x23uLL:
      *(_BYTE *)(a1 + 1496) = *(_BYTE *)a2;
      return 0LL;
    case 0x24uLL:
      v65 = pow(3.0, *(double *)a2);
      *(_QWORD *)&v61 = &v65;
      *((_QWORD *)&v61 + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      *(_QWORD *)&v66[0] = &xmmword_26FBD0;
      *((_QWORD *)&v66[0] + 1) = 1LL;
      *(_QWORD *)&v66[2] = &unk_1837E10;
      *((_QWORD *)&v66[2] + 1) = 1LL;
      *(_QWORD *)&v66[1] = &v61;
      *((_QWORD *)&v66[1] + 1) = 1LL;
      core::option::Option<T>::map_or_else(src, 0LL, v9, v66);
      v66[0] = src[0];
      *(_QWORD *)&v66[1] = *(_QWORD *)&src[1];
      core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(src, *((_QWORD *)&src[0] + 1));
      if ( LOBYTE(src[0]) )
        v10 = 0x3FF0000000000000LL;
      else
        v10 = *((_QWORD *)&src[0] + 1);
      *(_QWORD *)(a1 + 1488) = v10;
      v24 = v66;
      goto LABEL_132;
    case 0x25uLL:
      v7 = *a2;
      v8 = *((float *)a2 + 1);
      <sniffnet::gui::types::config_window::PositionTuple as sniffnet::gui::types::config_window::ScaleAndCheck>::scale_and_check(
        a1,
        a2,
        v3,
        *(float *)a2,
        v8,
        *(double *)(a1 + 1488));
      if ( *(_BYTE *)(a1 + 2436) )
      {
        *(_DWORD *)(a1 + 1656) = v7;
        *(float *)(a1 + 1660) = v8;
      }
      else
      {
        *(_DWORD *)(a1 + 1640) = v7;
        *(float *)(a1 + 1644) = v8;
      }
      return 0LL;
    case 0x26uLL:
      if ( *(_BYTE *)(a1 + 2436) )
      {
        if ( (unsigned __int8)sniffnet::gui::types::timing_events::TimingEvents::was_just_thumbnail_enter(a1 + 1672) )
          return 0LL;
        LOBYTE(v66[0]) = 1;
        v67 = 0x8000000000000030LL;
        return iced_runtime::task::Task<T>::stream(v66);
      }
      else
      {
        v48 = (__m128)*(unsigned __int64 *)(a1 + 1488);
        v48.m128_f32[0] = *(double *)v48.m128_u64;
        _mm_storel_ps(
          (double *)(a1 + 1648),
          _mm_max_ps((__m128)xmmword_270170, _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), (__m128)*(unsigned __int64 *)a2)));
        return 0LL;
      }
    case 0x27uLL:
      v62 = *((_QWORD *)a2 + 2);
      v61 = *(_OWORD *)a2;
      <alloc::string::String as core::clone::Clone>::clone_from(a1 + 1416, &v61, v3);
      sniffnet::mmdb::types::mmdb_reader::MmdbReader::from(src);
      *(_QWORD *)&v66[0] = 1LL;
      *((_QWORD *)&v66[0] + 1) = 1LL;
      memcpy(&v66[1], src, 0x88uLL);
      v19 = alloc::boxed::Box<T>::new(v66);
      v20 = (__int64 *)(a1 + 1152);
      core::ptr::drop_in_place<alloc::sync::Arc<sniffnet::mmdb::types::mmdb_reader::MmdbReader>>(a1 + 1152);
      goto LABEL_85;
    case 0x28uLL:
      v62 = *((_QWORD *)a2 + 2);
      v61 = *(_OWORD *)a2;
      <alloc::string::String as core::clone::Clone>::clone_from(a1 + 1440, &v61, v3);
      sniffnet::mmdb::types::mmdb_reader::MmdbReader::from(src);
      *(_QWORD *)&v66[0] = 1LL;
      *((_QWORD *)&v66[0] + 1) = 1LL;
      memcpy(&v66[1], src, 0x88uLL);
      v19 = alloc::boxed::Box<T>::new(v66);
      v20 = (__int64 *)(a1 + 1160);
      core::ptr::drop_in_place<alloc::sync::Arc<sniffnet::mmdb::types::mmdb_reader::MmdbReader>>(a1 + 1160);
LABEL_85:
      *v20 = v19;
      v24 = &v61;
      goto LABEL_132;
    case 0x29uLL:
      return sniffnet::gui::sniffer::Sniffer::quit_wrapper(a1);
    case 0x2AuLL:
      <sniffnet::gui::types::conf::Conf as core::clone::Clone>::clone(v66);
      sniffnet::gui::types::conf::Conf::store(src, v66);
      core::ptr::drop_in_place<core::result::Result<(),confy::ConfyError>>(src);
      if ( *(_DWORD *)a1 == 1 )
        v37 = *(_QWORD *)(a1 + 8);
      else
        v37 = ((__int64 (*)(void))iced_core::window::id::Id::unique)();
      *(_QWORD *)&v66[0] = 0x8000000000000000LL;
      *((_QWORD *)&v66[0] + 1) = v37;
      return iced_runtime::task::effect(v66);
    case 0x2BuLL:
      v71 = *((_BYTE *)a2 + 16);
      v70 = *(_OWORD *)a2;
      sniffnet::gui::types::timing_events::TimingEvents::copy_ip_now(a1 + 1672, a2);
      <T as alloc::string::SpecToString>::spec_to_string(src, &v70);
      *((_QWORD *)&v66[1] + 1) = *(_QWORD *)&src[1];
      *(_OWORD *)((char *)v66 + 8) = src[0];
      LOBYTE(v66[2]) = 0;
      *(_QWORD *)&v66[0] = 0x800000000000001DLL;
      return iced_runtime::task::effect(v66);
    case 0x2CuLL:
      v13 = *((_QWORD *)a2 + 3);
      v14 = *(_BYTE *)(a1 + 1497);
      v15 = *(_OWORD *)a2;
      v16 = *((_OWORD *)a2 + 1);
      v66[3] = *((_OWORD *)a2 + 2);
      v66[2] = v16;
      v66[1] = v15;
      *(_QWORD *)&v66[0] = 1LL;
      *((_QWORD *)&v66[0] + 1) = v13;
      LOWORD(v66[4]) = LOBYTE(v66[3]);
      BYTE2(v66[4]) = v14;
      return iced_runtime::task::Task<T>::stream(v66);
    case 0x2DuLL:
      *(_BYTE *)(a1 + 1608) ^= 1u;
      return 0LL;
    case 0x2EuLL:
      sniffnet::gui::types::export_pcap::ExportPcap::set_directory(a1 + 1560, a2, v3);
      return 0LL;
    case 0x2FuLL:
      sniffnet::gui::types::export_pcap::ExportPcap::set_file_name(a1 + 1560, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
LABEL_55:
      v24 = (__int128 *)a2;
LABEL_132:
      core::ptr::drop_in_place<alloc::string::String>(v24);
      return 0LL;
    case 0x30uLL:
      v57 = *(_BYTE *)a2;
      if ( (*(_BYTE *)a1 & 1) != 0 )
        v17 = *(_QWORD *)(a1 + 8);
      else
        v17 = iced_core::window::id::Id::unique(a1, a2, v3);
      v41 = *(_BYTE *)(a1 + 2436);
      *(_BYTE *)(a1 + 2436) = v41 ^ 1;
      *(_BYTE *)(a1 + 452) = v41 ^ 1;
      if ( v41 )
      {
        if ( *(_BYTE *)(a1 + 2439) == 2 )
          *(_QWORD *)(a1 + 2376) = 0LL;
        v42 = alloc::alloc::Global::alloc_impl(8LL, 32LL, 0LL);
        if ( !v42 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v43 = (_QWORD *)v42;
        *(_QWORD *)&v66[0] = 0x8000000000000010LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        v44 = iced_runtime::task::effect(v66);
        *(_QWORD *)&v66[0] = 0x8000000000000013LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        LOBYTE(v66[1]) = 0;
        v45 = iced_runtime::task::effect(v66);
        *v43 = v44;
        v43[1] = &off_2DF54E8;
        v43[2] = v45;
        v43[3] = &off_2DF54E8;
        v64[0] = 2LL;
        v64[1] = v43;
        v64[2] = 2LL;
        if ( !v57 )
        {
          v56 = (__m128)*(unsigned __int64 *)(a1 + 1648);
          *(_QWORD *)&v66[0] = 0x800000000000000CLL;
          *((_QWORD *)&v66[0] + 1) = v17;
          *(_QWORD *)&v66[1] = *(_QWORD *)(a1 + 1640);
          v46 = iced_runtime::task::effect(v66);
          alloc::vec::Vec<T,A>::push(v64, v46, &off_2DFF1B8);
          *(_QWORD *)&v66[0] = 0x8000000000000004LL;
          *((_QWORD *)&v66[0] + 1) = v17;
          _mm_storel_ps((double *)&v66[1], v56);
          v47 = iced_runtime::task::effect(v66);
          alloc::vec::Vec<T,A>::push(v64, v47, &off_2DFF1D0);
        }
        return iced_runtime::task::Task<T>::batch(v64);
      }
      else
      {
        v59 = *(double *)(a1 + 1488);
        v72 = (__m128)*(unsigned __int64 *)(a1 + 1656);
        sniffnet::gui::types::timing_events::TimingEvents::thumbnail_enter_now(a1 + 1672, a2, v3);
        *(_QWORD *)&v66[0] = 0x8000000000000007LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        LOBYTE(v66[1]) = 0;
        v49 = iced_runtime::task::effect(v66);
        *(_QWORD *)&v66[0] = 0x8000000000000010LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        v63 = iced_runtime::task::effect(v66);
        v50 = v49;
        v51 = (__m128)*(unsigned __int64 *)&v59;
        v51.m128_f32[0] = v59;
        *(_QWORD *)&v66[0] = 0x8000000000000004LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        _mm_storel_ps(
          (double *)&v66[1],
          _mm_max_ps((__m128)xmmword_270170, _mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), *(__m128 *)"")));
        v60 = iced_runtime::task::effect(v66);
        *(_QWORD *)&v66[0] = 0x800000000000000CLL;
        *((_QWORD *)&v66[0] + 1) = v17;
        _mm_storel_ps((double *)&v66[1], v72);
        v52 = iced_runtime::task::effect(v66);
        *(_QWORD *)&v66[0] = 0x8000000000000013LL;
        *((_QWORD *)&v66[0] + 1) = v17;
        LOBYTE(v66[1]) = 2;
        v53 = iced_runtime::task::effect(v66);
        *(_QWORD *)&v66[0] = v50;
        *((_QWORD *)&v66[0] + 1) = &off_2DF54E8;
        *(_QWORD *)&v66[1] = v63;
        *((_QWORD *)&v66[1] + 1) = &off_2DF54E8;
        *(_QWORD *)&v66[2] = v60;
        *((_QWORD *)&v66[2] + 1) = &off_2DF54E8;
        *(_QWORD *)&v66[3] = v52;
        *((_QWORD *)&v66[3] + 1) = &off_2DF54E8;
        *(_QWORD *)&v66[4] = v53;
        *((_QWORD *)&v66[4] + 1) = &off_2DF54E8;
        return iced_runtime::task::Task<T>::batch(v66);
      }
    case 0x31uLL:
      v58 = sniffnet::gui::types::timing_events::TimingEvents::was_just_thumbnail_click(a1 + 1672);
      sniffnet::gui::types::timing_events::TimingEvents::thumbnail_click_now(a1 + 1672);
      if ( !v58 )
        return 0LL;
      if ( *(_DWORD *)a1 == 1 )
        v18 = *(_QWORD *)(a1 + 8);
      else
        v18 = ((__int64 (*)(void))iced_core::window::id::Id::unique)();
      *(_QWORD *)&v66[0] = 0x8000000000000003LL;
      *((_QWORD *)&v66[0] + 1) = v18;
      return iced_runtime::task::effect(v66);
    case 0x32uLL:
      if ( *(_BYTE *)(a1 + 2439) == 3
        || *(_BYTE *)(a1 + 2438) != 3
        || *(_WORD *)(a1 + 2392) != 5
        || (unsigned __int8)sniffnet::gui::types::timing_events::TimingEvents::was_just_thumbnail_enter(a1 + 1672) )
      {
        return 0LL;
      }
      LOBYTE(v66[0]) = 0;
      v67 = 0x8000000000000030LL;
      return iced_runtime::task::Task<T>::stream(v66);
    case 0x33uLL:
      v39 = *(double *)(a1 + 1488);
      v40 = *(_BYTE *)a2;
      if ( (*(_BYTE *)a2 & (v39 > 2.99)) != 0 )
        return 0LL;
      if ( v39 < 0.31 )
      {
        if ( (v40 & 1) == 0 )
          return 0LL;
        goto LABEL_139;
      }
      if ( (v40 & 1) != 0 )
      {
LABEL_139:
        v54 = 0.1;
        goto LABEL_144;
      }
      v54 = -0.1;
LABEL_144:
      *(double *)(a1 + 1488) = v39 + v54;
      return 0LL;
    case 0x34uLL:
      *(_BYTE *)(a1 + 2437) = *(_BYTE *)a2;
      return 0LL;
    case 0x35uLL:
      *(_QWORD *)&v66[1] = *((_QWORD *)a2 + 2);
      v66[0] = *(_OWORD *)a2;
      if ( *(_QWORD *)&v66[1] )
      {
        <alloc::string::String as core::clone::Clone>::clone_from(a1 + 1616, v66, v3);
        core::ptr::drop_in_place<sniffnet::networking::types::capture_context::CaptureSource>(a1 + 720);
        *(_QWORD *)(a1 + 720) = 0x8000000000000000LL;
        *(_OWORD *)(a1 + 728) = *(_OWORD *)a2;
        *(_QWORD *)(a1 + 744) = *((_QWORD *)a2 + 2);
        *(_QWORD *)(a1 + 752) = 0LL;
        *(_QWORD *)(a1 + 760) = 1LL;
        *(_QWORD *)(a1 + 768) = 0LL;
        *(_DWORD *)(a1 + 776) = 9;
      }
      else
      {
        core::ptr::drop_in_place<alloc::string::String>(a2);
      }
      return 0LL;
    case 0x36uLL:
      if ( *((_QWORD *)a2 + 3) == *(_QWORD *)(a1 + 2352) )
      {
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v66, a2);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v74, v66);
        while ( v74[0] != 0x8000000000000000LL )
        {
          sniffnet::gui::sniffer::Sniffer::handle_new_host(a1, v74);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v74, v66);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<sniffnet::networking::types::host::HostMessage>>(v66);
        return 0LL;
      }
      else
      {
        core::ptr::drop_in_place<alloc::vec::Vec<sniffnet::networking::types::host::HostMessage>>(a2, a2, v3);
        return 0LL;
      }
    case 0x37uLL:
      if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 2352) )
        sniffnet::chart::manage_chart_data::<impl sniffnet::chart::types::traffic_chart::TrafficChart>::push_offline_gap_to_splines(
          a1 + 16,
          a2[2]);
      return 0LL;
    case 0x38uLL:
      sniffnet::gui::sniffer::Sniffer::update_waiting_dots(a1);
      sniffnet::gui::sniffer::Sniffer::fetch_devices(a1);
      sniffnet::gui::sniffer::Sniffer::update_threshold(a1);
      return 0LL;
    case 0x39uLL:
      *(_QWORD *)&src[0] = *(_QWORD *)a2;
      v35 = *((_BYTE *)a2 + 8);
      alloc::collections::vec_deque::VecDeque<T,A>::iter(v66, a1 + 1808);
      v36 = <alloc::collections::vec_deque::iter_mut::IterMut<T> as core::iter::traits::iterator::Iterator>::try_fold(
              v66,
              src);
      if ( !v36 || *(_QWORD *)v36 != 0x8000000000000000LL )
        return 0LL;
      *(_BYTE *)(v36 + 185) = v35;
      return 0LL;
  }
}