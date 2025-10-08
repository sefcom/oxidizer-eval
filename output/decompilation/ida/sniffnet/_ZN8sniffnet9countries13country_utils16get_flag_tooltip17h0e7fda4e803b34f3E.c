__int64 __fastcall sniffnet::countries::country_utils::get_flag_tooltip(
        unsigned __int128 *a1,
        char a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  char v9; // di
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // dl
  unsigned __int8 v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  unsigned __int128 v22; // xmm0
  unsigned __int128 v23; // xmm1
  unsigned __int128 v24; // xmm0
  unsigned __int128 v25; // xmm1
  __int128 v26; // [rsp+0h] [rbp-178h] BYREF
  __int64 v27; // [rsp+10h] [rbp-168h]
  unsigned __int128 v28; // [rsp+20h] [rbp-158h] BYREF
  unsigned __int128 v29; // [rsp+30h] [rbp-148h]
  unsigned __int128 v30; // [rsp+40h] [rbp-138h]
  __int128 v31; // [rsp+50h] [rbp-128h]
  __int64 v32; // [rsp+60h] [rbp-118h]
  unsigned __int128 v33; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int128 v34; // [rsp+90h] [rbp-E8h]
  unsigned __int128 v35; // [rsp+A0h] [rbp-D8h]
  unsigned __int128 v36; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int128 v37; // [rsp+C0h] [rbp-B8h]
  unsigned __int128 v38; // [rsp+D0h] [rbp-A8h]
  unsigned __int128 v39; // [rsp+E0h] [rbp-98h] BYREF
  unsigned __int128 v40; // [rsp+F0h] [rbp-88h]
  __int64 v41; // [rsp+100h] [rbp-78h]
  __int16 v42; // [rsp+108h] [rbp-70h]
  char v43; // [rsp+10Ah] [rbp-6Eh]
  int v44; // [rsp+10Bh] [rbp-6Dh]
  char v45; // [rsp+10Fh] [rbp-69h]

  v9 = *(_BYTE *)(a3 + 99);
  v10 = *(_BYTE *)(a3 + 98);
  v11 = *(_QWORD *)a3;
  v12 = *(_QWORD *)(a3 + 8);
  v13 = *(_BYTE *)(a3 + 96);
  if ( a6 )
  {
    sniffnet::countries::country_utils::get_flag_from_country((__int64)&v28, a2, v9, v10, v11, v12, 20.0, v13, a4);
    v38 = v30;
    v37 = v29;
    v36 = v28;
    v27 = v32;
    v26 = v31;
    v14 = 3;
    v15 = 1LL;
    v16 = 0LL;
    v17 = 0LL;
  }
  else
  {
    sniffnet::countries::country_utils::get_flag_from_country((__int64)&v28, a2, v9, v10, v11, v12, 37.5, v13, a4);
    v38 = v30;
    v37 = v29;
    v36 = v28;
    v17 = v32;
    v27 = v32;
    v26 = v31;
    v15 = *((_QWORD *)&v31 + 1);
    v16 = v31;
    v14 = 5;
  }
  v39 = __PAIR128__(v15, v16);
  *(_QWORD *)&v40 = v17;
  iced_core::widget::text::Text<Theme,Renderer>::new(&v28, &v39);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v39, &v28, a5);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(
    &v28,
    &v36,
    &v39,
    v18,
    v19,
    v20,
    v26,
    *((_QWORD *)&v26 + 1),
    v27);
  BYTE10(v30) = 1;
  v39 = v28;
  v40 = v29;
  v41 = v30;
  v42 = WORD4(v30);
  v43 = 1;
  v44 = *(_DWORD *)((char *)&v30 + 11);
  v45 = HIBYTE(v30);
  result = iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(&v33, &v39, v14);
  if ( (_BYTE)a6 )
  {
    v30 = v35;
    v29 = v34;
    v28 = v33;
    iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::padding(&v33, &v28);
    v22 = v33;
    v23 = v34;
    a1[2] = v35;
    a1[1] = v23;
    *a1 = v22;
    return core::ptr::drop_in_place<alloc::string::String>(&v26);
  }
  else
  {
    v24 = v33;
    v25 = v34;
    a1[2] = v35;
    a1[1] = v25;
    *a1 = v24;
  }
  return result;
}