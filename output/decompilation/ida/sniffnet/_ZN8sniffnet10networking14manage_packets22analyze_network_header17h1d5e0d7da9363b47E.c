char __fastcall sniffnet::networking::manage_packets::analyze_network_header(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  int v7; // r10d
  int v8; // eax
  __int64 v9; // rax
  bool v10; // cf
  __int64 v11; // rax
  int v12; // r9d
  int v13; // edi
  int v14; // r14d
  __int16 v15; // ax
  int v16; // r11d
  int v17; // r10d
  int v18; // ebp
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  bool v23; // zf
  char v24; // al

  if ( *(_DWORD *)a1 == 5 )
    return 0;
  v7 = 1;
  if ( (unsigned int)(*(_DWORD *)a1 - 2) < 3 )
    v7 = *(_DWORD *)a1 - 2;
  if ( !v7 )
  {
    v11 = *(unsigned __int16 *)(a1 + 1044);
    v12 = *(_DWORD *)(a1 + 1036);
    v13 = *(_DWORD *)(a1 + 1040);
    *a3 = 0;
    *(_BYTE *)a4 = 0;
    v10 = __CFADD__(v11, *a2);
    *a2 += v11;
    a2[1] += v10;
    *(_DWORD *)(a4 + 1) = v12;
    *(_BYTE *)a5 = 0;
    *(_DWORD *)(a5 + 1) = v13;
    return 1;
  }
  if ( v7 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 9272);
    *a3 = 1;
    *(_BYTE *)a4 = 1;
    *(_OWORD *)(a4 + 1) = *(_OWORD *)(a1 + 9236);
    v9 = (unsigned __int16)(v8 + 40);
    v10 = __CFADD__(v9, *a2);
    *a2 += v9;
    a2[1] += v10;
    *(_BYTE *)a5 = 1;
    *(_OWORD *)(a5 + 1) = *(_OWORD *)(a1 + 9252);
    return 1;
  }
  v14 = *(unsigned __int16 *)(a1 + 6);
  v15 = *(_WORD *)(a1 + 8);
  v16 = *(unsigned __int8 *)(a1 + 10);
  v17 = *(unsigned __int8 *)(a1 + 11);
  v18 = *(_DWORD *)(a1 + 267);
  v19 = *(_DWORD *)(a1 + 777);
  if ( v14 == 34525 )
  {
    *a3 = 1;
    if ( v17 == 16 )
    {
      v20 = a1 + 271;
      v21 = a1 + 781;
      *(_BYTE *)a4 = 1;
      *(_DWORD *)(a4 + 1) = v18;
      *(_QWORD *)(a4 + 5) = *(_QWORD *)v20;
      *(_DWORD *)(a4 + 13) = *(_DWORD *)(v20 + 8);
      *(_BYTE *)a5 = 1;
      *(_DWORD *)(a5 + 1) = v19;
      *(_QWORD *)(a5 + 5) = *(_QWORD *)v21;
      *(_DWORD *)(a5 + 13) = *(_DWORD *)(v21 + 8);
      goto LABEL_15;
    }
    return 0;
  }
  if ( v14 != 2048 )
    return 0;
  *a3 = 0;
  if ( v17 != 4 )
    return 0;
  *(_BYTE *)a4 = 0;
  *(_DWORD *)(a4 + 1) = v18;
  *(_BYTE *)a5 = 0;
  *(_DWORD *)(a5 + 1) = v19;
LABEL_15:
  v22 = 2LL * (unsigned int)(v16 + v17) + 8;
  v10 = __CFADD__(v22, *a2);
  *a2 += v22;
  a2[1] += v10;
  v23 = v15 == 1;
  v24 = 2 - (v15 == 2);
  if ( v23 )
    v24 = 0;
  *a6 = v24;
  return 1;
}