unsigned __int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_attach(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 result; // rax
  _BYTE v3[48]; // [rsp+8h] [rbp-30h] BYREF

  *(_BYTE *)(a2 + 2428) = 1;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, aThisFeatureIsN);
  forc_debug::server::DapServer::error(*(_QWORD *)(a2 + 2488), v3);
  *(_BYTE *)(a1 + 16) = 51;
  result = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}