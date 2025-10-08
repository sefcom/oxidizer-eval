__int64 __fastcall sniffnet::gui::pages::notifications_page::logged_notifications(__int64 a1, _BYTE *a2)
{
  unsigned __int8 v2; // bp
  _QWORD *v3; // r15
  _QWORD *v4; // r12
  _QWORD *v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  __int64 result; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  unsigned __int8 v14; // [rsp+3h] [rbp-2B5h] BYREF
  int v15; // [rsp+4h] [rbp-2B4h]
  __int64 v16; // [rsp+8h] [rbp-2B0h]
  __int128 v17; // [rsp+10h] [rbp-2A8h] BYREF
  __int128 v18; // [rsp+20h] [rbp-298h]
  __int128 v19; // [rsp+30h] [rbp-288h]
  __int128 v20; // [rsp+40h] [rbp-278h]
  __int64 v21; // [rsp+50h] [rbp-268h]
  __int128 v22; // [rsp+60h] [rbp-258h] BYREF
  __int128 v23; // [rsp+70h] [rbp-248h]
  __m256i v24; // [rsp+80h] [rbp-238h]
  __int128 v25; // [rsp+A0h] [rbp-218h]
  _QWORD v26[4]; // [rsp+D0h] [rbp-1E8h] BYREF
  _OWORD v27[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  _OWORD v28[4]; // [rsp+110h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+150h] [rbp-168h]
  _OWORD v30[2]; // [rsp+160h] [rbp-158h] BYREF
  __m256i v31; // [rsp+180h] [rbp-138h]
  __int128 v32; // [rsp+1A0h] [rbp-118h]
  _BYTE dest[256]; // [rsp+1B8h] [rbp-100h] BYREF

  v16 = a1;
  memcpy(dest, a2 + 1208, 0xD0uLL);
  v2 = a2[1497];
  v14 = a2[455];
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v22, dest);
  v27[1] = v23;
  v27[0] = v22;
  *(_OWORD *)&v24.m256i_u64[1] = 0LL;
  v24.m256i_i64[3] = 0x7F80000000000000LL;
  WORD4(v23) = 2;
  v24.m256i_i16[0] = 2;
  LOWORD(v25) = 0;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 8LL;
  *(_QWORD *)&v23 = 0LL;
  v17 = 0x4170000000000000uLL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v28, &v22, &v17);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v22, v28, 10LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v17, &v22, 1LL);
  alloc::collections::vec_deque::VecDeque<T,A>::iter(v28, a2 + 1808);
  core::iter::traits::iterator::Iterator::reduce(&v22, v28, &v14);
  if ( DWORD2(v25) == 1000000000 )
  {
    <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(v30);
  }
  else
  {
    v32 = v25;
    v31 = v24;
    v30[1] = v23;
    v30[0] = v22;
  }
  alloc::collections::vec_deque::VecDeque<T,A>::iter(v26, a2 + 1808);
  v3 = (_QWORD *)v26[0];
  v4 = (_QWORD *)v26[1];
  v5 = (_QWORD *)v26[2];
  v6 = (_QWORD *)v26[3];
  v15 = v2;
  while ( 1 )
  {
    if ( v3 != v4 )
    {
      v7 = v5;
      v8 = v6;
      v5 = v3;
      goto LABEL_10;
    }
    v7 = v3;
    v8 = v3;
    v4 = v6;
    if ( v5 == v6 )
      break;
LABEL_10:
    v29 = v21;
    v28[3] = v20;
    v28[2] = v19;
    v28[1] = v18;
    v28[0] = v17;
    if ( __OFSUB__(0LL, *v5) )
      sniffnet::gui::pages::notifications_page::data_notification_log(
        (__int64)&v22,
        (__int64)(v5 + 2),
        (__int64)v30,
        v15,
        (__int64)v27);
    else
      sniffnet::gui::pages::notifications_page::favorite_notification_log(
        (__int64)&v22,
        (__int64)v5,
        (int)v30,
        v14,
        v15,
        (__int64)v27);
    v3 = v5 + 28;
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v17, v28, &v22);
    v5 = v7;
    v6 = v8;
  }
  result = v21;
  v10 = (_OWORD *)v16;
  *(_QWORD *)(v16 + 64) = v21;
  v11 = v17;
  v12 = v18;
  v13 = v19;
  v10[3] = v20;
  v10[2] = v13;
  v10[1] = v12;
  *v10 = v11;
  return result;
}