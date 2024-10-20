__int64 __fastcall uu_od::inputdecoder::InputDecoder<I>::peek_read(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v8[2]; // [rsp+18h] [rbp-50h]
  int v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp-8h]

  *(_QWORD *)v8 = *(_QWORD *)(a2 + 24);
  v2 = alloc::vec::Vec<T,A>::as_mut_slice(a2);
  <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(
    (int)v10,
    v8[0],
    v2,
    v3,
    *(_QWORD *)(a2 + 32));
  if ( *(_QWORD *)v10 )
  {
    *(_QWORD *)a1 = v11;
    *(_BYTE *)(a1 + 24) = 3;
  }
  else
  {
    v4 = v12;
    *(_QWORD *)(a2 + 40) = v11;
    *(_QWORD *)(a2 + 48) = v4;
    v5 = *(_QWORD *)(a2 + 40);
    v6 = *(_QWORD *)(a2 + 48);
    LOBYTE(v4) = *(_BYTE *)(a2 + 56);
    v13 = a2;
    v14 = v5;
    v15 = v6;
    LOBYTE(v16) = v4;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 24) = v16;
  }
  return a1;
}
