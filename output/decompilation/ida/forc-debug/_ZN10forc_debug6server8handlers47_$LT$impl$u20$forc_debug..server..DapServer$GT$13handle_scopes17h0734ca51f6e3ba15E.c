__int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_scopes(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int128 v4; // [rsp+0h] [rbp-4C8h]
  __int64 v5; // [rsp+10h] [rbp-4B8h]
  __int128 v6; // [rsp+18h] [rbp-4B0h] BYREF
  __int64 v7; // [rsp+28h] [rbp-4A0h]
  __int64 v8; // [rsp+38h] [rbp-490h]
  __int64 v9; // [rsp+48h] [rbp-480h]
  __int64 v10; // [rsp+58h] [rbp-470h]
  __int64 v11; // [rsp+68h] [rbp-460h]
  _QWORD v12[3]; // [rsp+78h] [rbp-450h] BYREF
  _QWORD v13[21]; // [rsp+90h] [rbp-438h] BYREF
  _QWORD v14[4]; // [rsp+138h] [rbp-390h] BYREF
  char v15; // [rsp+158h] [rbp-370h]
  __int64 v16; // [rsp+160h] [rbp-368h]
  __int64 v17; // [rsp+170h] [rbp-358h]
  __int64 v18; // [rsp+180h] [rbp-348h]
  __int64 v19; // [rsp+190h] [rbp-338h]
  __int64 v20; // [rsp+1A0h] [rbp-328h]
  __int64 v21; // [rsp+1B0h] [rbp-318h]
  _QWORD v22[3]; // [rsp+1C0h] [rbp-308h] BYREF
  _QWORD src[21]; // [rsp+1D8h] [rbp-2F0h] BYREF
  _QWORD v24[4]; // [rsp+280h] [rbp-248h] BYREF
  char v25; // [rsp+2A0h] [rbp-228h]
  _BYTE v26[328]; // [rsp+2A8h] [rbp-220h] BYREF
  _BYTE v27[168]; // [rsp+3F0h] [rbp-D8h] BYREF

  v1 = alloc::alloc::Global::alloc_impl(8LL, 656LL, 0LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 656LL);
  v2 = v1;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, aCurrentVmInstr);
  *(_QWORD *)&v26[112] = v7;
  *(_OWORD *)&v26[96] = v6;
  v22[0] = 0LL;
  v22[1] = 1LL;
  v22[2] = 0LL;
  v24[0] = 0x8000000000000003LL;
  v24[3] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v25 = 0;
  src[0] = 0x8000000000000001LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)&v26[288] = 0x8000000000000002LL;
  *(_QWORD *)&v26[312] = 2LL;
  *(_QWORD *)v26 = 0LL;
  *(_QWORD *)&v26[16] = 0LL;
  v26[320] = 0;
  memcpy(&v26[120], src, 0xA8uLL);
  *(_QWORD *)&v26[32] = 0LL;
  *(_QWORD *)&v26[48] = 0LL;
  *(_QWORD *)&v26[64] = 0LL;
  *(_QWORD *)&v26[80] = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, aRegisters_0);
  v5 = v7;
  v4 = v6;
  v12[0] = 0LL;
  v12[1] = 1LL;
  v12[2] = 0LL;
  v14[0] = 0x8000000000000003LL;
  v14[3] = 0LL;
  *(_QWORD *)&v6 = 0LL;
  v7 = 0LL;
  v15 = 0;
  v13[0] = 0x8000000000000001LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memcpy(v27, v13, sizeof(v27));
  memcpy((void *)v2, v26, 0x148uLL);
  *(_QWORD *)(v2 + 328) = 0LL;
  *(_QWORD *)(v2 + 344) = 0LL;
  *(_QWORD *)(v2 + 360) = 0LL;
  *(_QWORD *)(v2 + 376) = 0LL;
  *(_QWORD *)(v2 + 392) = 0LL;
  *(_QWORD *)(v2 + 408) = 0LL;
  *(_OWORD *)(v2 + 424) = v4;
  *(_QWORD *)(v2 + 440) = v5;
  memcpy((void *)(v2 + 448), v27, 0xA8uLL);
  *(_QWORD *)(v2 + 616) = 0x8000000000000002LL;
  *(_QWORD *)(v2 + 640) = 1LL;
  *(_BYTE *)(v2 + 648) = 0;
  *(_BYTE *)(a1 + 16) = 51;
  *(_QWORD *)(a1 + 24) = 0x8000000000000016LL;
  *(_QWORD *)(a1 + 32) = 2LL;
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 48) = 2LL;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(v12);
  core::ptr::drop_in_place<core::option::Option<dap::types::ScopePresentationhint>>(v14);
  core::ptr::drop_in_place<alloc::string::String>(v22);
  return core::ptr::drop_in_place<core::option::Option<dap::types::ScopePresentationhint>>(v24);
}