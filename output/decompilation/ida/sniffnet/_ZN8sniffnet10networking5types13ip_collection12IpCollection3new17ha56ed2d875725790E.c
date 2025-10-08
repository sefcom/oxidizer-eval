__int64 __fastcall sniffnet::networking::types::ip_collection::IpCollection::new(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rsi
  char v14; // bp
  char v15; // r14
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _BYTE v19[48]; // [rsp+10h] [rbp-188h] BYREF
  __int128 v20; // [rsp+40h] [rbp-158h]
  __int16 v21; // [rsp+50h] [rbp-148h]
  __int128 v22; // [rsp+58h] [rbp-140h] BYREF
  __int64 v23; // [rsp+68h] [rbp-130h]
  __int128 v24; // [rsp+70h] [rbp-128h] BYREF
  __int64 v25; // [rsp+80h] [rbp-118h]
  _BYTE v26[8]; // [rsp+88h] [rbp-110h] BYREF
  __int64 v27; // [rsp+90h] [rbp-108h]
  __int64 v28; // [rsp+98h] [rbp-100h]
  char v29; // [rsp+A4h] [rbp-F4h] BYREF
  __int128 v30; // [rsp+A5h] [rbp-F3h]
  char v31; // [rsp+B5h] [rbp-E3h] BYREF
  __int128 v32; // [rsp+B6h] [rbp-E2h]
  char v33; // [rsp+C6h] [rbp-D2h]
  char v34; // [rsp+C7h] [rbp-D1h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-D0h]
  _BYTE v36[32]; // [rsp+D8h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+108h] [rbp-90h]
  __int128 v39; // [rsp+118h] [rbp-80h]
  __int128 v40; // [rsp+128h] [rbp-70h]
  __int16 v41; // [rsp+138h] [rbp-60h]
  __int128 v42; // [rsp+140h] [rbp-58h]
  _BYTE v43[72]; // [rsp+150h] [rbp-48h] BYREF

  alloc::str::<impl str>::replace(v26);
  v1 = v28;
  if ( v28 )
  {
    *(_QWORD *)&v22 = 0LL;
    *((_QWORD *)&v22 + 1) = 1LL;
    v23 = 0LL;
    *(_QWORD *)&v24 = 0LL;
    *((_QWORD *)&v24 + 1) = 1LL;
    v25 = 0LL;
    <char as core::str::pattern::Pattern>::into_searcher(&v37, 44LL, v27, v28);
    v20 = v39;
    *(_OWORD *)&v19[32] = v38;
    *(_OWORD *)&v19[16] = v37;
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)&v19[8] = v1;
    v21 = 1;
    core::iter::traits::iterator::Iterator::collect(v43, v19);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v36, v43);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v36);
    if ( v2 )
    {
      v4 = v2;
      v5 = v3;
      do
      {
        if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v4, v5) )
        {
          <char as core::str::pattern::Pattern>::into_searcher(v19, 45LL, v4, v5);
          v40 = *(_OWORD *)&v19[32];
          v39 = *(_OWORD *)&v19[16];
          v38 = *(_OWORD *)v19;
          *(_QWORD *)&v37 = 0LL;
          *((_QWORD *)&v37 + 1) = v5;
          v41 = 1;
          v20 = *(_OWORD *)&v19[32];
          *(_OWORD *)&v19[32] = *(_OWORD *)&v19[16];
          *(_OWORD *)&v19[16] = *(_OWORD *)v19;
          *(_QWORD *)v19 = 0LL;
          *(_QWORD *)&v19[8] = v5;
          v21 = 1;
          if ( core::iter::traits::iterator::Iterator::fold(v19) != 2 )
            goto LABEL_20;
          v7 = core::str::iter::SplitInternal<P>::next(&v37);
          v9 = v8;
          v10 = core::str::iter::SplitInternal<P>::next(&v37);
          v12 = v11;
          v13 = v7;
          if ( !v7 )
          {
            v13 = 1LL;
            v9 = 0LL;
          }
          if ( !v10 )
          {
            v12 = 0LL;
            v10 = 1LL;
          }
          core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(v19, v13, v9);
          v14 = v19[0];
          if ( v19[0] == 2 )
            goto LABEL_20;
          v42 = *(_OWORD *)&v19[1];
          core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(v19, v10, v12);
          v15 = v19[0];
          if ( v19[0] == 2
            || (v32 = *(_OWORD *)&v19[1],
                v29 = v14,
                v30 = v42,
                v31 = v19[0],
                v33 = 0,
                (char)<core::net::ip_addr::IpAddr as core::cmp::PartialOrd>::partial_cmp(&v29, &v31) > 0)
            || (v14 == 0) != (v15 == 0) )
          {
LABEL_20:
            *(_QWORD *)a1 = 0x8000000000000000LL;
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&sniffnet::networking::types::arp_type::ArpType,&usize)>>(v36);
            core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::RangeInclusive<core::net::ip_addr::IpAddr>>>(
              v24,
              *((_QWORD *)&v24 + 1));
            core::ptr::drop_in_place<alloc::vec::Vec<core::net::ip_addr::IpAddr>>(v22, *((_QWORD *)&v22 + 1));
            return core::ptr::drop_in_place<alloc::string::String>(v26);
          }
          alloc::vec::Vec<T,A>::push(&v24, &v29);
        }
        else
        {
          core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(v19, v4, v5);
          if ( v19[0] == 2 )
            goto LABEL_20;
          v35 = *(_OWORD *)&v19[1];
          v34 = v19[0];
          alloc::vec::Vec<T,A>::push(&v22, &v34);
        }
        v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v36);
        v5 = v6;
      }
      while ( v4 );
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&sniffnet::networking::types::arp_type::ArpType,&usize)>>(v36);
    *(_QWORD *)&v19[16] = v23;
    *(_OWORD *)v19 = v22;
    *(_QWORD *)&v19[40] = v25;
    *(_OWORD *)&v19[24] = v24;
    *(_OWORD *)a1 = v22;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v19[32];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v19[16];
  }
  else
  {
    <sniffnet::networking::types::ip_collection::IpCollection as core::default::Default>::default(v19);
    v16 = *(_OWORD *)v19;
    v17 = *(_OWORD *)&v19[16];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v19[32];
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v26);
}