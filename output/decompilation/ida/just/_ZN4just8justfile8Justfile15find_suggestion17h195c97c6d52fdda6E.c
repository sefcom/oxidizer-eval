__int64 __fastcall just::justfile::Justfile::find_suggestion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+18h] [rbp-D0h]
  __int128 v7; // [rsp+20h] [rbp-C8h]
  __int64 v8; // [rsp+30h] [rbp-B8h]
  _BYTE v9[176]; // [rsp+38h] [rbp-B0h] BYREF

  core::iter::traits::iterator::Iterator::map(v9, a4, a2, a3);
  core::iter::traits::iterator::Iterator::reduce(v5, v9);
  result = v6;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
  }
  *(_QWORD *)a1 = result;
  return result;
}