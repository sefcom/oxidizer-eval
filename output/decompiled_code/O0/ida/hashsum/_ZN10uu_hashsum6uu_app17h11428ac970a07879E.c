void *__fastcall uu_hashsum::uu_app(void *dest, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char v4; // bp
  _QWORD v6[89]; // [rsp+0h] [rbp-10C8h] BYREF
  _BYTE desta[712]; // [rsp+2C8h] [rbp-E00h] BYREF
  char v8; // [rsp+590h] [rbp-B38h] BYREF
  _BYTE v9[712]; // [rsp+858h] [rbp-870h] BYREF
  _BYTE v10[712]; // [rsp+B20h] [rbp-5A8h] BYREF
  _BYTE src[736]; // [rsp+DE8h] [rbp-2E0h] BYREF

  v6[22] = 0LL;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x75733262 | *(unsigned __int8 *)(a2 + 4) ^ 0x6D )
      {
        if ( *(_DWORD *)a2 ^ 0x75733362 | *(unsigned __int8 *)(a2 + 4) ^ 0x6D )
          goto LABEL_9;
        v3 = v10;
        uu_hashsum::uu_app_b3sum(v10);
      }
      else
      {
        v3 = desta;
        uu_hashsum::uu_app_length(desta);
      }
      goto LABEL_24;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x7335646D | *(unsigned __int16 *)(a2 + 4) ^ 0x6D75 )
        goto LABEL_9;
      goto LABEL_14;
    case 7LL:
      if ( !(*(_DWORD *)a2 ^ 0x31616873 | *(_DWORD *)(a2 + 3) ^ 0x6D757331) )
        goto LABEL_14;
      if ( !(*(_DWORD *)a2 ^ 0x33616873 | *(_DWORD *)(a2 + 3) ^ 0x6D757333) )
        goto LABEL_7;
      goto LABEL_9;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x7573343232616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL
        && *(_QWORD *)a2 ^ 0x7573363532616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL
        && *(_QWORD *)a2 ^ 0x7573343833616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL
        && *(_QWORD *)a2 ^ 0x7573323135616873LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6DLL )
      {
        goto LABEL_9;
      }
LABEL_14:
      v3 = (char *)v6;
      goto LABEL_23;
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
          v3 = src;
          uu_hashsum::uu_app_custom(src);
          v4 = 1;
          goto LABEL_25;
        }
LABEL_7:
        v3 = v9;
        uu_hashsum::uu_app_bits(v9);
      }
      else
      {
        v3 = &v8;
LABEL_23:
        uu_hashsum::uu_app_common(v3);
      }
LABEL_24:
      v4 = 0;
LABEL_25:
      memcpy(dest, v3, 0x2C8uLL);
      *((_BYTE *)dest + 712) = v4;
      return dest;
    default:
      goto LABEL_9;
  }
}
