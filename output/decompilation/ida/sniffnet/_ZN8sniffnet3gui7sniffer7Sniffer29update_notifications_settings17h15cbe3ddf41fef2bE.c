char __fastcall sniffnet::gui::sniffer::Sniffer::update_notifications_settings(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r14
  char result; // al
  unsigned __int8 v6; // bp
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // r8
  char *v11; // rdi
  char v12; // r10
  __int64 v13; // r15
  __int64 v14; // r11
  char v15; // r12
  char v16; // di
  __int64 v17; // r8
  __int16 v18; // ax
  char v19; // r13
  __int64 v20; // r15
  char v21; // bp
  __int64 v22; // r12
  char v23; // [rsp+Eh] [rbp-5Ah]
  unsigned __int8 v24; // [rsp+Fh] [rbp-59h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  _QWORD v26[3]; // [rsp+18h] [rbp-50h] BYREF
  __int16 v27; // [rsp+30h] [rbp-38h]
  char v28; // [rsp+32h] [rbp-36h]
  int v29; // [rsp+33h] [rbp-35h]
  char v30; // [rsp+37h] [rbp-31h]

  v4 = *a2;
  if ( *a2 == 2 )
  {
    result = *((_BYTE *)a2 + 8);
    v6 = *((_BYTE *)a2 + 9);
    *(_BYTE *)(a1 + 1200) = result;
    *(_BYTE *)(a1 + 1201) = v6;
    if ( !(_BYTE)a3 )
      return result;
    return sniffnet::notifications::types::sound::play(v6, *(unsigned __int8 *)(a1 + 1202));
  }
  v7 = *(_QWORD *)(a1 + 1168);
  v8 = *(_QWORD *)(a1 + 1688);
  if ( v8 == 2 )
  {
    v9 = (_QWORD *)(a1 + 1176);
    v10 = (__int64 *)(a1 + 1184);
    v11 = (char *)(a1 + 1194);
    v8 = *(_QWORD *)(a1 + 1168);
  }
  else
  {
    v11 = (char *)(a1 + 1714);
    v10 = (__int64 *)(a1 + 1704);
    v9 = (_QWORD *)(a1 + 1696);
  }
  v12 = *((_BYTE *)a2 + 24);
  v13 = a2[1];
  v14 = a2[2];
  v15 = *((_BYTE *)a2 + 26);
  v6 = *((_BYTE *)a2 + 25);
  v16 = *v11;
  v17 = *v10;
  if ( (v8 & 1) != 0 )
  {
    if ( (v4 & 1) == 0 || *v9 != v13 )
      goto LABEL_14;
LABEL_12:
    if ( v16 == v15 && v17 == v14 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( !v4 )
    goto LABEL_12;
LABEL_14:
  v18 = *((_WORD *)a2 + 12);
  v26[0] = *a2;
  v26[1] = v13;
  v26[2] = v14;
  v27 = v18;
  v28 = v15;
  v29 = *(_DWORD *)((char *)a2 + 27);
  v30 = *((_BYTE *)a2 + 31);
  v19 = a3;
  v25 = v13;
  v20 = v7;
  v24 = v6;
  v21 = v12;
  v23 = v15;
  v22 = v14;
  sniffnet::gui::types::timing_events::TimingEvents::threshold_adjust_now(a1 + 1672, v26, a3, v8, v17);
  v14 = v22;
  v15 = v23;
  v12 = v21;
  v6 = v24;
  v7 = v20;
  v13 = v25;
  LOBYTE(a3) = v19;
LABEL_15:
  result = (_DWORD)v4 == 1;
  if ( ((_DWORD)v4 == 1) != (v7 == 1) )
  {
    *(_QWORD *)(a1 + 1168) = v4;
    *(_QWORD *)(a1 + 1176) = v13;
    *(_BYTE *)(a1 + 1194) = v15;
    *(_QWORD *)(a1 + 1184) = v14;
  }
  *(_BYTE *)(a1 + 1193) = v6;
  *(_BYTE *)(a1 + 1192) = v12;
  if ( (_BYTE)a3 )
    return sniffnet::notifications::types::sound::play(v6, *(unsigned __int8 *)(a1 + 1202));
  return result;
}