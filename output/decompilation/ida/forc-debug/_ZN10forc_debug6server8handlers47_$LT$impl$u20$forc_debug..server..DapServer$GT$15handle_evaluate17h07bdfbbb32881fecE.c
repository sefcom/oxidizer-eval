__int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_evaluate(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v7; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-D8h]
  __int64 v9; // [rsp+18h] [rbp-D0h]
  __int64 v10; // [rsp+28h] [rbp-C0h]
  _QWORD v11[3]; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-98h]
  __int64 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+60h] [rbp-88h]
  __int128 v15; // [rsp+68h] [rbp-80h]
  __int64 v16; // [rsp+78h] [rbp-70h]
  unsigned __int64 v17; // [rsp+80h] [rbp-68h]
  __int64 v18; // [rsp+88h] [rbp-60h]
  __int128 v19; // [rsp+90h] [rbp-58h]
  __int128 v20; // [rsp+A0h] [rbp-48h]
  __int128 v21; // [rsp+B0h] [rbp-38h]
  __int128 v22; // [rsp+C0h] [rbp-28h]
  __int64 v23; // [rsp+D0h] [rbp-18h]

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 40)) )
    <alloc::string::String as core::clone::Clone>::clone(&v7, a2 + 16);
  else
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, aEvaluateExpres);
  v11[0] = 0LL;
  v11[1] = 1LL;
  v11[2] = 0LL;
  v12 = 0x8000000000000000LL;
  v17 = 0x8000000000000001LL;
  v23 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v15 = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 104) = v14;
  *(_QWORD *)(a1 + 88) = v12;
  *(_QWORD *)(a1 + 96) = v13;
  v2 = v18;
  v3 = v19;
  v4 = v20;
  v5 = v21;
  *(_QWORD *)(a1 + 136) = v17;
  *(_QWORD *)(a1 + 144) = v2;
  *(_OWORD *)(a1 + 152) = v3;
  *(_OWORD *)(a1 + 168) = v4;
  *(_OWORD *)(a1 + 184) = v5;
  *(_OWORD *)(a1 + 200) = v22;
  *(_QWORD *)(a1 + 128) = v16;
  *(_OWORD *)(a1 + 112) = v15;
  *(_BYTE *)(a1 + 16) = 51;
  *(_QWORD *)(a1 + 24) = 0x8000000000000008LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 80) = v8;
  *(_OWORD *)(a1 + 64) = v7;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return core::ptr::drop_in_place<alloc::string::String>(v11);
}