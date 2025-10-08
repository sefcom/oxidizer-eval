__int64 __fastcall sniffnet::networking::parse_packets::reverse_dns_lookup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const __m128i *v11; // rax
  const __m128i *v12; // rdx
  bool v13; // r12
  __int64 is_bogon; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  char country; // bp
  __int64 v18; // r13
  char v19; // dl
  unsigned __int8 v20; // bp
  __m128i si128; // xmm0
  __int64 v22; // r14
  char v23; // dl
  unsigned __int8 v24; // bp
  __int64 result; // rax
  char v26; // [rsp+8h] [rbp-360h]
  __int8 is_local_connection; // [rsp+Eh] [rbp-35Ah]
  unsigned __int8 traffic_type; // [rsp+Fh] [rbp-359h]
  __m128i v29; // [rsp+10h] [rbp-358h] BYREF
  __int8 v30; // [rsp+20h] [rbp-348h]
  __m128i v31; // [rsp+28h] [rbp-340h] BYREF
  __int64 v32; // [rsp+38h] [rbp-330h]
  __m128i v33; // [rsp+40h] [rbp-328h] BYREF
  __int64 v34; // [rsp+50h] [rbp-318h]
  __m128i v35; // [rsp+60h] [rbp-308h] BYREF
  __int8 v36; // [rsp+70h] [rbp-2F8h]
  __m128i v37; // [rsp+80h] [rbp-2E8h] BYREF
  _BYTE v38[64]; // [rsp+90h] [rbp-2D8h]
  __m128i v39; // [rsp+D0h] [rbp-298h] BYREF
  __m128i v40; // [rsp+E0h] [rbp-288h]
  __m128i v41; // [rsp+F0h] [rbp-278h]
  __m128i v42; // [rsp+100h] [rbp-268h]
  __m128i v43; // [rsp+110h] [rbp-258h]
  __m128i src[15]; // [rsp+120h] [rbp-248h] BYREF
  _OWORD v45[3]; // [rsp+210h] [rbp-158h] BYREF
  __m128i dest[18]; // [rsp+240h] [rbp-128h] BYREF

  v11 = (const __m128i *)(a3 + 8);
  v12 = (const __m128i *)(a3 + 25);
  if ( !a4 )
    v12 = v11;
  v30 = v12[1].m128i_i8[0];
  v29 = _mm_loadu_si128(v12);
  dns_lookup::lookup::lookup_addr(&v31, &v29);
  traffic_type = sniffnet::networking::manage_packets::get_traffic_type((__int64)&v29, a5, a6, a4);
  v13 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v29.m128i_i8[1]), (__m128i)xmmword_26F440)) == 0xFFFF;
  if ( !v29.m128i_i8[0] )
    v13 = v29.m128i_i8[1] == 127;
  is_local_connection = sniffnet::networking::manage_packets::is_local_connection(v29.m128i_i8, a5, a6);
  is_bogon = sniffnet::networking::types::bogon::is_bogon(&v29);
  v16 = v15;
  country = sniffnet::mmdb::country::get_country((__int64)&v29, a7 + 16);
  sniffnet::mmdb::asn::get_asn((__int64)v45, (__int64)&v29, a8 + 16);
  if ( v31.m128i_i64[0] == 0x8000000000000000LL )
  {
    v26 = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v33, &v29);
  }
  else
  {
    if ( v32 )
    {
      v34 = v32;
      v33 = _mm_loadu_si128(&v31);
    }
    else
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v33, &v29);
      core::ptr::drop_in_place<alloc::string::String>(&v31);
    }
    v26 = 0;
  }
  <alloc::string::String as core::clone::Clone>::clone(dest, &v33);
  sniffnet::utils::formatted_strings::get_domain_from_r_dns(src, dest);
  *(_OWORD *)&v38[8] = v45[0];
  *(_OWORD *)&v38[24] = v45[1];
  *(_OWORD *)&v38[40] = v45[2];
  v37 = _mm_loadu_si128(src);
  *(_QWORD *)v38 = src[1].m128i_i64[0];
  v38[56] = country;
  std::sync::poison::mutex::Mutex<T>::lock(dest, a1 + 16);
  v18 = core::result::Result<T,E>::unwrap(dest, &off_2DFF708);
  v20 = v19 & 1;
  hashbrown::map::HashMap<K,V,S,A>::remove(dest, v18 + 8, &v29);
  if ( dest[4].m128i_i32[2] == 1000000000 )
  {
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(&v39);
  }
  else
  {
    v43 = dest[4];
    si128 = _mm_load_si128(dest);
    v42 = dest[3];
    v41 = dest[2];
    v40 = dest[1];
    v39 = si128;
  }
  v36 = v30;
  v35 = _mm_load_si128(&v29);
  <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(dest, &v37);
  hashbrown::map::HashMap<K,V,S,A>::insert(src, v18 + 56, &v35, dest);
  core::ptr::drop_in_place<core::option::Option<sniffnet::networking::types::host::Host>>(src);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v18, v20);
  src[10] = v43;
  src[9] = v42;
  src[8] = v41;
  src[7] = v40;
  src[6] = v39;
  src[0] = v37;
  src[1] = *(__m128i *)v38;
  src[2] = *(__m128i *)&v38[16];
  src[3] = *(__m128i *)&v38[32];
  src[4] = *(__m128i *)&v38[48];
  src[14].m128i_i8[8] = v30;
  *(__m128i *)((char *)&src[13] + 8) = v29;
  src[13].m128i_i64[0] = v34;
  src[12] = _mm_load_si128(&v33);
  src[5].m128i_i64[0] = is_bogon;
  src[5].m128i_i64[1] = v16;
  src[11].m128i_i16[0] = traffic_type;
  src[11].m128i_i8[2] = v13;
  src[11].m128i_i8[3] = is_local_connection;
  std::sync::poison::mutex::Mutex<T>::lock(dest, a2 + 16);
  v22 = core::result::Result<T,E>::unwrap(dest, &off_2DFF720);
  v24 = v23 & 1;
  memcpy(dest, src, 0xF0uLL);
  alloc::vec::Vec<T,A>::push(v22 + 8, dest);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v22, v24);
  result = 0x8000000000000000LL;
  if ( v31.m128i_i64[0] == 0x8000000000000000LL )
    return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v31);
  if ( v26 )
    return core::ptr::drop_in_place<alloc::string::String>(&v31);
  return result;
}