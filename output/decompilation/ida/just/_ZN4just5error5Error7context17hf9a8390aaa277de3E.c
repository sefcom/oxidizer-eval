__int64 __fastcall just::error::Error::context(__int64 a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3

  result = *a2;
  switch ( *a2 )
  {
    case 0u:
    case 3u:
    case 0x19u:
    case 0x21u:
    case 0x22u:
      result = *((_QWORD *)a2 + 9);
      *(_QWORD *)(a1 + 64) = result;
      v3 = *(_OWORD *)(a2 + 8);
      v4 = *(_OWORD *)(a2 + 24);
      v5 = *(_OWORD *)(a2 + 40);
      v6 = *(_OWORD *)(a2 + 56);
      goto LABEL_3;
    case 0xCu:
      result = *((_QWORD *)a2 + 10);
      *(_QWORD *)(a1 + 64) = result;
      v3 = *((_OWORD *)a2 + 1);
      v4 = *((_OWORD *)a2 + 2);
      v5 = *((_OWORD *)a2 + 3);
      v6 = *((_OWORD *)a2 + 4);
LABEL_3:
      *(_OWORD *)(a1 + 48) = v6;
      *(_OWORD *)(a1 + 32) = v5;
      *(_OWORD *)(a1 + 16) = v4;
      *(_OWORD *)a1 = v3;
      break;
    default:
      *(_BYTE *)(a1 + 64) = 37;
      break;
  }
  return result;
}