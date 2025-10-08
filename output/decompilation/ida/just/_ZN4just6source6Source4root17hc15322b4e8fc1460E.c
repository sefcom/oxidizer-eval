__int64 __fastcall just::source::Source::root(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h]
  __int128 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-28h]

  v4 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
  if ( !v4 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v5 = v4;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, a2);
  v12 = v10;
  v6 = v9;
  v11 = v9;
  *(_QWORD *)(v5 + 16) = v10;
  *(_OWORD *)v5 = v6;
  *(_QWORD *)&v13 = 1LL;
  *((_QWORD *)&v13 + 1) = v5;
  v14 = 1LL;
  *(_QWORD *)&v15 = 0x8000000000000000LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, a2);
  v12 = v10;
  v11 = v9;
  v7 = std::path::Path::parent(a2, a3);
  if ( !v7 )
    core::option::unwrap_failed(&off_430FF0);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v7);
  *(_QWORD *)(a1 + 88) = v10;
  *(_OWORD *)(a1 + 72) = v9;
  *(_DWORD *)(a1 + 120) = 0;
  *(_OWORD *)a1 = v13;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 8LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 112) = v16;
  *(_OWORD *)(a1 + 48) = v11;
  result = v12;
  *(_QWORD *)(a1 + 64) = v12;
  return result;
}