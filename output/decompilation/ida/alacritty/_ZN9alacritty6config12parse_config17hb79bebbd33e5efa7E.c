__int64 __fastcall alacritty::config::parse_config(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+10h] [rbp-D8h]
  __int128 v17; // [rsp+20h] [rbp-C8h]
  __int128 v18; // [rsp+30h] [rbp-B8h]
  _BYTE v19[40]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-80h]
  __int128 v21; // [rsp+78h] [rbp-70h]
  __int128 v22; // [rsp+88h] [rbp-60h]
  _OWORD v23[5]; // [rsp+98h] [rbp-50h] BYREF

  std::path::Path::to_path_buf(v19);
  alloc::vec::Vec<T,A>::push(a4, v19, &off_881E50);
  alacritty::config::deserialize_config(v19, a2, a3, 0LL);
  result = *(_QWORD *)v19;
  v17 = *(_OWORD *)&v19[8];
  v18 = *(_OWORD *)&v19[24];
  if ( *(_QWORD *)v19 == 7LL )
  {
    v15 = v17;
    v16 = v18;
    alacritty::config::load_imports(v23, &v15, a2, a3, a4, a5);
    *(_OWORD *)&v19[16] = v16;
    *(_OWORD *)v19 = v15;
    result = alacritty::config::serde_utils::merge(a1 + 8, v23, v19, v9, v10, v11);
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v12 = v20;
    v13 = v21;
    *(_OWORD *)(a1 + 72) = v22;
    *(_OWORD *)(a1 + 56) = v13;
    *(_OWORD *)(a1 + 40) = v12;
    v14 = v17;
    *(_OWORD *)(a1 + 24) = v18;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = result;
  }
  return result;
}