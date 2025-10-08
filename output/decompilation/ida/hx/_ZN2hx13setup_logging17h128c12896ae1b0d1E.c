__int64 __fastcall hx::setup_logging(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-1A8h] BYREF
  int v5; // [rsp+8h] [rbp-1A0h]
  __int16 v6; // [rsp+Ch] [rbp-19Ch]
  __int128 v7; // [rsp+10h] [rbp-198h] BYREF
  __m256i v8; // [rsp+20h] [rbp-188h]
  __int128 v9; // [rsp+40h] [rbp-168h]
  __m256i v10; // [rsp+50h] [rbp-158h]
  _BYTE v11[48]; // [rsp+70h] [rbp-138h] BYREF
  __int128 v12; // [rsp+A0h] [rbp-108h]
  __m256i v13; // [rsp+B0h] [rbp-F8h]
  _DWORD v14[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+D8h] [rbp-D0h]
  _BYTE v16[96]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v17[104]; // [rsp+140h] [rbp-68h] BYREF

  *(_QWORD *)&v11[8] = 0LL;
  *(_QWORD *)&v11[16] = 8LL;
  *(_OWORD *)&v11[24] = 0LL;
  *(_QWORD *)&v11[40] = 8LL;
  v12 = 0LL;
  v13.m256i_i64[0] = 8LL;
  *(_OWORD *)&v13.m256i_u64[1] = 0LL;
  v10.m256i_i64[2] = v13.m256i_i64[3];
  *(_OWORD *)v10.m256i_i8 = 0LL;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  *(_OWORD *)&v8.m256i_u64[2] = 8uLL;
  *(_OWORD *)v8.m256i_i8 = 0LL;
  v7 = *(_OWORD *)&v11[8];
  v1 = 3LL;
  if ( a1 < 3 )
    v1 = a1;
  *(_QWORD *)v11 = v1 + 2;
  v8.m256i_i64[0] = 8LL;
  *(_OWORD *)&v8.m256i_u64[1] = 0LL;
  v7 = 5uLL;
  v8.m256i_i64[3] = 8LL;
  v9 = 0LL;
  v10.m256i_i64[0] = 8LL;
  *(_OWORD *)&v10.m256i_u64[1] = 0LL;
  fern::builders::Dispatch::format(v16, &v7);
  helix_loader::log_file(&v7);
  v4 = 0x1B600000000LL;
  v6 = 1;
  v5 = 0x10000;
  std::fs::OpenOptions::open(v14, &v4, &v7);
  if ( v14[0] == 1 )
  {
    v2 = anyhow::error::<impl anyhow::Error>::new(v15);
    core::ptr::drop_in_place<fern::builders::Dispatch>(v16);
    core::ptr::drop_in_place<fern::builders::Dispatch>(v11);
    return v2;
  }
  else
  {
    fern::builders::Dispatch::chain(v17, v16, v14[1]);
    v10 = v13;
    v9 = v12;
    v8 = *(__m256i *)&v11[16];
    v7 = *(_OWORD *)v11;
    fern::builders::Dispatch::chain(v16, &v7, v17);
    if ( (unsigned __int8)fern::builders::Dispatch::apply(v16) )
      return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
    else
      return 0LL;
  }
}