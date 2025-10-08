__int64 __fastcall sniffnet::networking::manage_packets::modify_or_insert_in_map(
        __int64 a1,
        __int128 *a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        __int128 *a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _BOOL8 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 result; // rax
  char v18; // cl
  __int64 v19; // rsi
  char traffic_direction; // [rsp+Dh] [rbp-15Bh] BYREF
  _BYTE v21[2]; // [rsp+Eh] [rbp-15Ah] BYREF
  __int128 v22; // [rsp+10h] [rbp-158h] BYREF
  __m256i v23; // [rsp+20h] [rbp-148h]
  __int128 v24; // [rsp+40h] [rbp-128h]
  __int128 *v25; // [rsp+50h] [rbp-118h]
  char *p_traffic_direction; // [rsp+58h] [rbp-110h]
  unsigned __int16 *v27; // [rsp+60h] [rbp-108h]
  _BYTE *v28; // [rsp+68h] [rbp-100h]
  char *v29; // [rsp+70h] [rbp-F8h]
  __int64 v30; // [rsp+78h] [rbp-F0h]
  __int128 v31; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+90h] [rbp-D8h]
  __int128 v33; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-B8h] BYREF
  __m256i v35; // [rsp+C0h] [rbp-A8h]
  __int128 v36; // [rsp+E0h] [rbp-88h]
  __int128 v37; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v38[28]; // [rsp+100h] [rbp-68h]

  v30 = a1;
  v21[0] = a6;
  v21[1] = a7;
  traffic_direction = 0;
  *(_QWORD *)&v31 = 1LL;
  if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 1, a3) )
  {
    v12 = __OFSUB__(0LL, *a4);
    v13 = a4[v12 + 4];
    v14 = a4[v12 + 5];
    traffic_direction = sniffnet::networking::manage_packets::get_traffic_direction(
                          (int)a3 + 8,
                          (int)a3 + 25,
                          *a3,
                          a3[1],
                          a3[2],
                          a3[3],
                          v13,
                          v14);
    sniffnet::networking::manage_packets::get_service(&v22, (__int64)a3, traffic_direction, v13, v14);
    v32 = v23.m256i_i64[0];
    v31 = v22;
  }
  v33 = *a2;
  v15 = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v38[12] = *(_OWORD *)(a3 + 14);
  *(_OWORD *)v38 = v16;
  v37 = v15;
  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v22, a2 + 1, &v37);
  if ( v23.m256i_i16[0] == 2 )
  {
    v34 = v22;
    v35.m256i_i16[0] = 2;
  }
  else
  {
    v36 = v24;
    v35 = v23;
    v34 = v22;
  }
  *(_QWORD *)&v22 = &a9;
  *((_QWORD *)&v22 + 1) = &v33;
  v23.m256i_i64[0] = (__int64)a3;
  v23.m256i_i64[1] = (__int64)v21;
  v23.m256i_i64[2] = (__int64)&a8;
  std::collections::hash::map::Entry<K,V>::and_modify(&v37, &v34, &v22);
  v23.m256i_i64[0] = *((_QWORD *)a5 + 2);
  v22 = *a5;
  *(_OWORD *)&v23.m256i_u64[1] = *(__int128 *)((char *)a5 + 24);
  v23.m256i_i64[3] = *((_QWORD *)a5 + 5);
  *(_QWORD *)&v24 = &a9;
  *((_QWORD *)&v24 + 1) = &v33;
  v25 = &v31;
  p_traffic_direction = &traffic_direction;
  v27 = a3;
  v28 = v21;
  v29 = &a8;
  result = std::collections::hash::map::Entry<K,V>::or_insert_with(&v37, &v22);
  v18 = *(_BYTE *)(result + 232);
  v19 = v30;
  *(_QWORD *)(v30 + 24) = *(_QWORD *)(result + 224);
  *(_OWORD *)(v19 + 8) = *(_OWORD *)(result + 208);
  *(_BYTE *)v19 = v18;
  return result;
}