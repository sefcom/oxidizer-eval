__int64 __fastcall alacritty::config::ui_config::deserialize_bindings(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int128 v5; // rax
  __int64 v6; // rsi
  __int64 i; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-238h] BYREF
  __int64 v14; // [rsp+10h] [rbp-228h]
  __int64 v15; // [rsp+18h] [rbp-220h]
  _BYTE v16[96]; // [rsp+20h] [rbp-218h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v18; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-198h]
  __int128 v20; // [rsp+B0h] [rbp-188h]
  __int128 v21; // [rsp+C0h] [rbp-178h]
  __int128 v22; // [rsp+D0h] [rbp-168h]
  __int64 v23; // [rsp+E0h] [rbp-158h]
  __int128 v24; // [rsp+F0h] [rbp-148h] BYREF
  __int64 v25; // [rsp+100h] [rbp-138h]
  _QWORD v26[5]; // [rsp+108h] [rbp-130h] BYREF
  _BYTE v27[32]; // [rsp+130h] [rbp-108h] BYREF
  _BYTE v28[26]; // [rsp+150h] [rbp-E8h] BYREF
  char v29; // [rsp+16Ah] [rbp-CEh]
  _QWORD v30[6]; // [rsp+170h] [rbp-C8h] BYREF
  _OWORD v31[9]; // [rsp+1A0h] [rbp-98h] BYREF

  <toml::value::Value as serde::de::Deserializer>::deserialize_seq(v16);
  v4 = *(_QWORD *)v16;
  v18 = *(_OWORD *)&v16[8];
  *(_QWORD *)&v19 = *(_QWORD *)&v16[24];
  if ( *(_QWORD *)v16 == 2LL )
  {
    v24 = v18;
    v25 = v19;
    *(_QWORD *)&v5 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v19, 8LL, 96LL, &off_8819F0);
    v15 = a1;
    v13 = v5;
    v14 = 0LL;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v27, &v24);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v28, v27);
    while ( v29 != 8 )
    {
      <alacritty::config::bindings::Binding<alacritty::config::bindings::BindingKey> as serde::de::Deserialize>::deserialize(
        v16,
        v28);
      if ( *(_QWORD *)v16 == 0x8000000000000035LL )
      {
        v23 = *(_QWORD *)&v16[88];
        v22 = *(_OWORD *)&v16[72];
        v21 = *(_OWORD *)&v16[56];
        v20 = *(_OWORD *)&v16[40];
        v19 = *(_OWORD *)&v16[24];
        v18 = *(_OWORD *)&v16[8];
        if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
        {
          v17[0] = &v18;
          v17[1] = <toml::de::error::Error as core::fmt::Display>::fmt;
          v30[0] = &off_8819D0;
          v30[1] = 2LL;
          v30[4] = 0LL;
          v30[2] = v17;
          v30[3] = 1LL;
          v12 = log::__private_api::loc(&off_881A20);
          v26[0] = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|h"
                   "ttps://|http://|news:|file:|git://|ssh:|ftp://)[^";
          v26[1] = 23LL;
          v26[2] = "alacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|https://|http://|news:|f"
                   "ile:|git://|ssh:|ftp://)[^";
          v26[3] = 28LL;
          v26[4] = v12;
          log::__private_api::log(v30, 1LL, v26);
        }
        core::ptr::drop_in_place<toml::de::error::Error>(&v18);
      }
      else
      {
        v31[5] = *(_OWORD *)&v16[80];
        v31[4] = *(_OWORD *)&v16[64];
        v31[3] = *(_OWORD *)&v16[48];
        v31[2] = *(_OWORD *)&v16[32];
        v31[1] = *(_OWORD *)&v16[16];
        v31[0] = *(_OWORD *)v16;
        alloc::vec::Vec<T,A>::push(&v13, v31, &off_881A08);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v28, v27);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<toml::value::Value>>(v27);
    v6 = *((_QWORD *)&v13 + 1);
    for ( i = 96 * v14; i; i -= 96LL )
    {
      alloc::vec::Vec<T,A>::retain(a3);
      v6 += 96LL;
    }
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, a3);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
      &v13,
      v16);
    result = v14;
    v11 = v15;
    *(_QWORD *)(v15 + 24) = v14;
    *(_OWORD *)(v11 + 8) = v13;
    *(_QWORD *)v11 = 2LL;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v16[80];
    v8 = *(_OWORD *)&v16[32];
    v9 = *(_OWORD *)&v16[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v16[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = v4;
    return core::ptr::drop_in_place<alloc::vec::Vec<alacritty::config::bindings::Binding<alacritty::config::bindings::BindingKey>>>(a3);
  }
  return result;
}