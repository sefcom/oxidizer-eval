__int64 __fastcall sniffnet::notifications::notify_and_log::notify_and_log(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r9
  __int64 v8; // r12
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // rdx
  __int128 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int128 v15; // kr00_16
  __int128 v16; // rt0
  __int64 v17; // rbp
  __int64 v18; // r12
  _DWORD *v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  int v24; // [rsp+4h] [rbp-384h]
  unsigned __int8 v25; // [rsp+4h] [rbp-384h]
  _DWORD *v26; // [rsp+8h] [rbp-380h]
  _DWORD *v27; // [rsp+8h] [rbp-380h]
  __int64 v28; // [rsp+10h] [rbp-378h]
  __int64 v29; // [rsp+10h] [rbp-378h]
  __int64 v30; // [rsp+18h] [rbp-370h]
  __int64 v31; // [rsp+20h] [rbp-368h]
  __int64 v32; // [rsp+28h] [rbp-360h]
  __int64 v33; // [rsp+30h] [rbp-358h]
  __int64 v34; // [rsp+38h] [rbp-350h]
  __int64 v35; // [rsp+40h] [rbp-348h]
  __int64 v36; // [rsp+50h] [rbp-338h]
  unsigned __int64 v37; // [rsp+68h] [rbp-320h]
  _BYTE src[216]; // [rsp+70h] [rbp-318h] BYREF
  __int64 v39; // [rsp+148h] [rbp-240h]
  __int128 v40; // [rsp+150h] [rbp-238h] BYREF
  __int64 v41; // [rsp+160h] [rbp-228h]
  _BYTE v42[24]; // [rsp+190h] [rbp-1F8h] BYREF
  __int64 v43; // [rsp+1A8h] [rbp-1E0h]
  _OWORD dest[12]; // [rsp+1C0h] [rbp-1C8h] BYREF
  _OWORD v45[16]; // [rsp+280h] [rbp-108h] BYREF

  v6 = a2;
  v8 = *(_QWORD *)(a1 + 32);
  v32 = *a3;
  v31 = a3[1];
  v9 = 3;
  if ( *a2 == 1 )
  {
    v30 = *(_QWORD *)(a1 + 32);
    v10 = a3[21];
    v11 = a3[20];
    v12 = *((_OWORD *)a3 + 11);
    v13 = a3[25];
    v14 = a3[27];
    v36 = v11;
    v37 = v10;
    v15 = v12;
    v24 = *((unsigned __int8 *)v6 + 24);
    if ( *((_BYTE *)v6 + 24) )
    {
      v11 = a3[24];
      v10 = a3[25];
      v12 = *((_OWORD *)a3 + 13);
      if ( v24 != 1 )
      {
        v16 = *((_OWORD *)a3 + 12);
        v10 = v16 >> 61;
        v11 = 8 * v16;
        v12 = *((_OWORD *)a3 + 13) * 8LL;
      }
    }
    v35 = a3[24];
    v8 = v30;
    if ( *((unsigned __int64 *)v6 + 1) < v12 + __PAIR128__(v10, v11) )
    {
      v17 = a3[26];
      v34 = a4;
      v28 = a5;
      v18 = v30 + 1;
      *(_QWORD *)(a1 + 32) = v30 + 1;
      if ( *(_QWORD *)(a1 + 24) >= 0x1EuLL )
      {
        v19 = v6;
        alloc::collections::vec_deque::VecDeque<T,A>::pop_back(src, a1);
        core::ptr::drop_in_place<core::option::Option<sniffnet::notifications::types::logged_notification::LoggedNotification>>(src);
        v6 = v19;
        v18 = *(_QWORD *)(a1 + 32);
      }
      v26 = v6;
      v33 = *((_QWORD *)v6 + 2);
      sniffnet::utils::formatted_strings::get_formatted_timestamp(&v40, v32, v31);
      sniffnet::notifications::notify_and_log::hosts_list(dest, a3, (unsigned __int8)v24);
      sniffnet::notifications::notify_and_log::services_list(v45, a3, (unsigned __int8)v24);
      *(_OWORD *)&src[80] = *((_OWORD *)a3 + 14);
      *(_OWORD *)&src[112] = v40;
      *(_QWORD *)&src[128] = v41;
      *(_OWORD *)&src[136] = dest[0];
      *(_QWORD *)&src[152] = *(_QWORD *)&dest[1];
      *(_OWORD *)&src[160] = v45[0];
      *(_QWORD *)&src[176] = *(_QWORD *)&v45[1];
      *(_QWORD *)&src[16] = v36;
      *(_QWORD *)&src[24] = v37;
      *(_OWORD *)&src[32] = v15;
      *(_QWORD *)&src[48] = v35;
      *(_QWORD *)&src[56] = v13;
      *(_QWORD *)&src[64] = v17;
      *(_QWORD *)&src[72] = v14;
      *(_QWORD *)&src[96] = v18;
      *(_QWORD *)&src[104] = v33;
      src[184] = v24;
      src[185] = 0;
      *(_QWORD *)src = 0x8000000000000000LL;
      alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, src, &off_2DFFAC8);
      v6 = v26;
      v9 = *((_BYTE *)v26 + 25);
      v8 = v30;
      a5 = v28;
      a4 = v34;
    }
  }
  if ( *((_BYTE *)v6 + 32) )
  {
    v25 = v9;
    v29 = a5;
    v27 = v6;
    v20 = a4;
    hashbrown::map::HashMap<K,V,S,A>::iter(src);
    *(_QWORD *)&src[40] = v20;
    core::iter::traits::iterator::Iterator::collect(v42, src);
    if ( !v43 )
    {
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>>(v42);
      v6 = v27;
      v9 = v25;
      if ( v29 == 0x8000000000000000LL )
        return *(_QWORD *)(a1 + 32) - v8;
      goto LABEL_18;
    }
    <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v40, v42);
    <hashbrown::raw::RawIntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src);
    while ( *(_QWORD *)src != 0x8000000000000000LL )
    {
      memcpy(dest, src, sizeof(dest));
      v21 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)(a1 + 32) + 1LL;
      *(_QWORD *)(a1 + 32) = v22;
      if ( v21 > 0x1D )
      {
        alloc::collections::vec_deque::VecDeque<T,A>::pop_back(src, a1);
        core::ptr::drop_in_place<core::option::Option<sniffnet::notifications::types::logged_notification::LoggedNotification>>(src);
        v22 = *(_QWORD *)(a1 + 32);
      }
      sniffnet::utils::formatted_strings::get_formatted_timestamp(src, v32, v31);
      v45[4] = dest[4];
      v45[3] = dest[3];
      v45[2] = dest[2];
      v45[1] = dest[1];
      v45[0] = dest[0];
      v45[11] = dest[11];
      v45[10] = dest[10];
      v45[9] = dest[9];
      v45[8] = dest[8];
      v45[7] = dest[7];
      v45[6] = dest[6];
      v45[5] = dest[5];
      *(_QWORD *)&v45[13] = *(_QWORD *)&src[16];
      v45[12] = *(_OWORD *)src;
      memcpy(src, v45, sizeof(src));
      v39 = v22;
      alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, src, &off_2DFFAE0);
      <hashbrown::raw::RawIntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src);
    }
    core::ptr::drop_in_place<std::collections::hash::set::IntoIter<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>>(
      &v40,
      &v40);
    v9 = v25;
    v6 = v27;
    a5 = v29;
    if ( v25 == 3 )
      v9 = *((_BYTE *)v27 + 33);
  }
  if ( a5 != 0x8000000000000000LL )
LABEL_18:
    sniffnet::notifications::types::sound::play(v9, *((unsigned __int8 *)v6 + 34));
  return *(_QWORD *)(a1 + 32) - v8;
}