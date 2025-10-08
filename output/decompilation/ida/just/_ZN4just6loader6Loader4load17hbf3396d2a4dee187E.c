__int64 __fastcall just::loader::Loader::load(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  __int128 v17; // xmm0
  __int128 v18; // [rsp+8h] [rbp-140h] BYREF
  __int64 v19; // [rsp+18h] [rbp-130h]
  _BYTE v20[31]; // [rsp+20h] [rbp-128h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-F0h] BYREF
  _OWORD v23[3]; // [rsp+70h] [rbp-D8h]
  __int64 v24; // [rsp+A0h] [rbp-A8h]
  _OWORD v25[6]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+110h] [rbp-38h]

  v7 = a5;
  std::fs::read_to_string(&v18, a5, a6);
  if ( __OFSUB__(0LL, (_QWORD)v18) )
  {
    just::loader::Loader::load::{{closure}}(v25, v7, a6, *((_QWORD *)&v18 + 1));
    result = LOBYTE(v25[0]);
    *(_OWORD *)v20 = *(_OWORD *)((char *)v25 + 1);
    *(_OWORD *)&v20[15] = v25[1];
    *(_QWORD *)(a1 + 96) = v26;
    *(_OWORD *)(a1 + 80) = v25[5];
    *(_OWORD *)(a1 + 64) = v25[4];
    *(_OWORD *)(a1 + 48) = v25[3];
    *(_OWORD *)(a1 + 32) = v25[2];
    v23[0] = *(_OWORD *)v20;
    *(_OWORD *)((char *)v23 + 15) = *(_OWORD *)&v20[15];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v20[15];
    *(_OWORD *)(a1 + 1) = v23[0];
    *(_BYTE *)a1 = result;
  }
  else
  {
    v23[2] = v18;
    v24 = v19;
    v11 = std::path::Path::parent(a3, a4);
    if ( !v11 )
      core::option::unwrap_failed(&off_4305A0);
    v13 = std::path::Path::strip_prefix(v7, a6, v11, v12);
    if ( v13 )
      v7 = v13;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, v7);
    *(_QWORD *)&v20[16] = *(_QWORD *)&v25[1];
    *(_OWORD *)v20 = v25[0];
    typed_arena::Arena<T>::alloc_fast_path(v21, a2, v20);
    if ( v21[0] == 0x8000000000000000LL )
      v14 = v21[1];
    else
      v14 = typed_arena::Arena<T>::alloc_slow_path(a2, v21);
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *(_QWORD *)(v14 + 16);
    typed_arena::Arena<T>::alloc_fast_path(v22, a2 + 56, &v18);
    if ( v22[0] == 0x8000000000000000LL )
      result = v22[1];
    else
      result = typed_arena::Arena<T>::alloc_slow_path(a2 + 56, v22);
    v17 = *(_OWORD *)(result + 8);
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)(a1 + 24) = v17;
    *(_BYTE *)a1 = 56;
  }
  return result;
}