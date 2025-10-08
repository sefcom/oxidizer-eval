__int64 __fastcall uu_tr::operation::Sequence::parse_backslash(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  char v5; // dl
  __int128 v6; // xmm0
  __int128 v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+10h] [rbp-18h]

  result = <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v7, asc_1BACB, 1LL, a2, a3);
  if ( (_DWORD)v7 == 3 )
  {
    result = *((_QWORD *)&v7 + 1);
    v4 = v8;
    v5 = BYTE8(v8);
    switch ( BYTE8(v8) )
    {
      case 'a':
        v5 = 7;
        break;
      case 'b':
        v5 = 8;
        break;
      case 'f':
        v5 = 12;
        break;
      case 'n':
        v5 = 10;
        break;
      case 'r':
        v5 = 13;
        break;
      case 't':
        v5 = 9;
        break;
      case 'v':
        v5 = 11;
        break;
      default:
        break;
    }
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7 + 1);
    *(_QWORD *)(a1 + 16) = v4;
    *(_BYTE *)(a1 + 24) = v5;
    *(_QWORD *)a1 = 3LL;
  }
  else
  {
    v6 = v7;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v6;
  }
  return result;
}