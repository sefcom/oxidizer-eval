__int64 __fastcall just::function::sha256_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int32 v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+4h] [rbp-174h] BYREF
  _BYTE v13[8]; // [rsp+8h] [rbp-170h] BYREF
  __int64 v14; // [rsp+10h] [rbp-168h]
  __int64 v15; // [rsp+18h] [rbp-160h]
  __m256i v16; // [rsp+20h] [rbp-158h] BYREF
  __int128 v17; // [rsp+40h] [rbp-138h]
  __int128 v18; // [rsp+50h] [rbp-128h]
  __int128 v19; // [rsp+60h] [rbp-118h]
  __int128 v20; // [rsp+70h] [rbp-108h]
  __int128 v21; // [rsp+80h] [rbp-F8h]
  _QWORD v22[2]; // [rsp+98h] [rbp-E0h] BYREF
  _DWORD v23[2]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-C8h]
  __int128 v25; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-A0h]
  __m256i v27; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v28; // [rsp+100h] [rbp-78h]
  __int128 v29; // [rsp+110h] [rbp-68h]
  __int128 v30; // [rsp+120h] [rbp-58h]
  __int128 v31; // [rsp+130h] [rbp-48h]
  __int128 v32; // [rsp+140h] [rbp-38h]

  just::execution_context::ExecutionContext::working_directory(
    (__int64)&v16,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    *(_QWORD *)(*(_QWORD *)a2 + 24LL));
  std::path::Path::join(v13, v16.m256i_i64[1], v16.m256i_i64[2], a3, a4);
  core::ptr::drop_in_place<std::path::PathBuf>(&v16);
  <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default(&v27);
  std::fs::File::open(v23, v13);
  if ( v23[0] == 1 )
  {
    just::function::sha256_file::{{closure}}(&v16, v14, v15, v24);
    v6 = v16.m256i_i64[0];
    v7 = v16.m256i_i32[2];
    *(_DWORD *)(a1 + 28) = v16.m256i_i32[5];
    *(_QWORD *)(a1 + 20) = *(__int64 *)((char *)&v16.m256i_i64[1] + 4);
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v12 = v23[1];
    if ( (std::io::copy::generic_copy(&v12, &v27) & 1) != 0 )
    {
      just::function::sha256_file::{{closure}}(&v16, v14, v15, v8);
      v9 = v16.m256i_i64[2];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v16.m256i_i8;
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      v21 = v32;
      v20 = v31;
      v19 = v30;
      v18 = v29;
      v17 = v28;
      v16 = v27;
      digest::FixedOutput::finalize_fixed(v23, &v16);
      v22[0] = v23;
      v22[1] = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
      v16.m256i_i64[0] = (__int64)asc_65DB0;
      v16.m256i_i64[1] = 1LL;
      *(_QWORD *)&v17 = 0LL;
      v16.m256i_i64[2] = (__int64)v22;
      v16.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v25, 0LL, v10, &v16);
      *(_QWORD *)(a1 + 24) = v26;
      *(_OWORD *)(a1 + 8) = v25;
      *(_QWORD *)a1 = 0LL;
    }
    core::ptr::drop_in_place<std::fs::File>(v12);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v13);
  return a1;
}