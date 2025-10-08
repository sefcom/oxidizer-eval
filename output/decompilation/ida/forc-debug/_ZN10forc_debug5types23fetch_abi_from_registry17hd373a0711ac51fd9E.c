__int64 __fastcall forc_debug::types::fetch_abi_from_registry(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[23]; // [rsp+9h] [rbp-3Fh]
  __int64 v3; // [rsp+20h] [rbp-28h]
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, aNotImplemented_0);
  v3 = v5;
  *(_OWORD *)&v2[7] = v4;
  *(_BYTE *)(a1 + 8) = 57;
  result = *(_QWORD *)&v2[15];
  *(_OWORD *)(a1 + 9) = *(_OWORD *)v2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v2[15];
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)a1 = 4LL;
  return result;
}