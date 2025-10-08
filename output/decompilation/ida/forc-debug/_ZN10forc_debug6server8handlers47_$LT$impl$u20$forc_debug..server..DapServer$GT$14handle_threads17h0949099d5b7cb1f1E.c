unsigned __int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_threads(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int128 v3; // xmm0
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+8h] [rbp-40h] BYREF
  __int64 v6; // [rsp+18h] [rbp-30h]
  __int128 v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = alloc::alloc::Global::alloc_impl(8LL, 32LL, 0LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v2 = v1;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, "mainIdlealpncom5com6com9io: UnitGone\t");
  v8 = v6;
  v3 = v5;
  v7 = v5;
  *(_QWORD *)(v2 + 16) = v6;
  *(_OWORD *)v2 = v3;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_BYTE *)(a1 + 16) = 51;
  result = 0x8000000000000025LL;
  *(_QWORD *)(a1 + 24) = 0x8000000000000025LL;
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 48) = 1LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}