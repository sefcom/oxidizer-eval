__int64 __fastcall uu_od::inputdecoder::InputDecoder<I>::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( __CFADD__(a4, a3) )
    core::panicking::panic_const::panic_const_add_overflow(&off_1297F8);
  alloc::vec::from_elem(v8, 0LL, a4 + a3);
  result = a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a1 = v8[0];
  *(_QWORD *)(a1 + 8) = v8[1];
  *(_QWORD *)(a1 + 16) = v8[2];
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = a5;
  return result;
}
