bool __fastcall sniffnet::networking::manage_packets::analyze_transport_header(
        unsigned int *a1,
        _WORD *a2,
        _WORD *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  char v5; // bl
  char v6; // r9
  __int16 v7; // ax
  __int16 v8; // di
  unsigned int v9; // eax
  __int64 v10; // rdi
  _BYTE *v11; // r14
  char v12; // al
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int16 v15; // ax
  __int16 v16; // di

  v5 = *((_BYTE *)a1 + 67);
  if ( v5 != 6 )
  {
    v6 = 1;
    if ( (unsigned __int8)(v5 - 2) < 4u )
      v6 = v5 - 2;
    switch ( v6 )
    {
      case 0:
        v7 = *(_WORD *)a1;
        v8 = *((_WORD *)a1 + 1);
        *a2 = 1;
        a2[1] = v7;
        *a3 = 1;
        a3[1] = v8;
        *a4 = 1;
        break;
      case 1:
        v15 = *((_WORD *)a1 + 4);
        v16 = *((_WORD *)a1 + 5);
        *a2 = 1;
        a2[1] = v15;
        *a3 = 1;
        a3[1] = v16;
        *a4 = 0;
        break;
      case 2:
        v9 = *((unsigned __int8 *)a1 + 1);
        v10 = *a1;
        *a2 = 0;
        *a3 = 0;
        *a4 = 2;
        v11 = a5;
        v12 = sniffnet::networking::types::icmp_type::IcmpTypeV4::from_etherparse(v10, v9);
        *v11 = 0;
        goto LABEL_8;
      case 3:
        v13 = *((unsigned __int8 *)a1 + 1);
        v14 = *a1;
        *a2 = 0;
        *a3 = 0;
        *a4 = 2;
        v11 = a5;
        v12 = sniffnet::networking::types::icmp_type::IcmpTypeV6::from_etherparse(v14, v13);
        *v11 = 1;
LABEL_8:
        v11[1] = v12;
        break;
    }
  }
  return v5 != 6;
}