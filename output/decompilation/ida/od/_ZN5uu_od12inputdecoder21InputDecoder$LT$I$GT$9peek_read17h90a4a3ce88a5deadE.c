char __fastcall uu_od::inputdecoder::InputDecoder<I>::peek_read(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  char result; // al
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // [rsp+0h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v2 = (_QWORD *)a2;
  <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(
    &v6,
    *(_QWORD *)(a2 + 24),
    v2[1],
    v2[2],
    v2[4]);
  if ( v6 == 1 )
  {
    result = 3;
    v2 = v7;
  }
  else
  {
    v4 = v7;
    v5 = v8;
    *(_QWORD *)(a2 + 40) = v7;
    *(_QWORD *)(a2 + 48) = v5;
    result = *(_BYTE *)(a2 + 56);
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v5;
  }
  *(_QWORD *)a1 = v2;
  *(_BYTE *)(a1 + 24) = result;
  return result;
}