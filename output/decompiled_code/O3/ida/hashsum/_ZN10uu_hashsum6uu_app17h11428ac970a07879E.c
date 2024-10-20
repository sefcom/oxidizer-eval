_BYTE *__fastcall uu_hashsum::uu_app(_BYTE *a1, __int64 a2, __int64 a3)
{
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x75733262 | *(unsigned __int8 *)(a2 + 4) ^ 0x6D )
      {
        if ( *(_DWORD *)a2 ^ 0x75733362 | *(unsigned __int8 *)(a2 + 4) ^ 0x6D )
          goto LABEL_9;
        uu_hashsum::uu_app_b3sum(a1);
      }
      else
      {
        uu_hashsum::uu_app_length(a1);
      }
      goto LABEL_23;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x7335646D | *(unsigned __int16 *)(a2 + 4) ^ 0x6D75 )
        goto LABEL_9;
      goto LABEL_22;
    case 7LL:
      if ( !(*(_DWORD *)a2 ^ 0x31616873 | *(_DWORD *)(a2 + 3) ^ 0x6D757331) )
        goto LABEL_22;
      if ( !(*(_DWORD *)a2 ^ 0x33616873 | *(_DWORD *)(a2 + 3) ^ 0x6D757333) )
        goto LABEL_7;
      goto LABEL_9;
    case 9LL:
      if ( !(*(_QWORD *)a2 ^ 0x7573343232616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL)
        || !(*(_QWORD *)a2 ^ 0x7573363532616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL)
        || !(*(_QWORD *)a2 ^ 0x7573343833616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL)
        || !(*(_QWORD *)a2 ^ 0x7573323135616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL) )
      {
        goto LABEL_22;
      }
      goto LABEL_9;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x3432322D33616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D75733432322D33LL
        && *(_QWORD *)a2 ^ 0x3635322D33616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D75733635322D33LL
        && *(_QWORD *)a2 ^ 0x3438332D33616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D75733438332D33LL
        && *(_QWORD *)a2 ^ 0x3231352D33616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D75733231352D33LL )
      {
        if ( *(_QWORD *)a2 ^ 0x383231656B616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D7573383231656BLL
          && *(_QWORD *)a2 ^ 0x363532656B616873LL | *(_QWORD *)(a2 + 3) ^ 0x6D7573363532656BLL )
        {
LABEL_9:
          uu_hashsum::uu_app_custom(a1);
          a1[712] = 1;
          return a1;
        }
LABEL_7:
        uu_hashsum::uu_app_bits(a1);
      }
      else
      {
LABEL_22:
        uu_hashsum::uu_app_common(a1);
      }
LABEL_23:
      a1[712] = 0;
      return a1;
    default:
      goto LABEL_9;
  }
}
