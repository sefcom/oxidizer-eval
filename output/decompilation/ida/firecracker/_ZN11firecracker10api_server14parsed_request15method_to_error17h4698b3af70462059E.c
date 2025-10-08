__int64 __fastcall firecracker::api_server::parsed_request::method_to_error(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[22]; // [rsp+2h] [rbp-46h]
  __int64 v3; // [rsp+18h] [rbp-30h]
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4);
  v3 = v5;
  *(_OWORD *)&v2[6] = v4;
  *(_WORD *)(a1 + 8) = 769;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v2[14];
  result = v3;
  *(_QWORD *)(a1 + 32) = v3;
  *(_OWORD *)(a1 + 10) = *(_OWORD *)v2;
  *(_QWORD *)a1 = 1LL;
  return result;
}