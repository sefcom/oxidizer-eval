__int64 firecracker::main()
{
  unsigned int v0; // ebx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int8 v4; // [rsp+Fh] [rbp-119h] BYREF
  __int128 v5; // [rsp+10h] [rbp-118h] BYREF
  __m256i v6; // [rsp+20h] [rbp-108h]
  __int128 v7; // [rsp+40h] [rbp-E8h]
  __int64 v8; // [rsp+50h] [rbp-D8h]
  unsigned __int8 *v9; // [rsp+58h] [rbp-D0h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+60h] [rbp-C8h]
  const char *v11; // [rsp+68h] [rbp-C0h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+70h] [rbp-B8h]
  const char *v13; // [rsp+78h] [rbp-B0h]
  __int64 v14; // [rsp+80h] [rbp-A8h]
  __int64 v15; // [rsp+88h] [rbp-A0h]
  __int128 v16; // [rsp+90h] [rbp-98h] BYREF
  __m256i v17; // [rsp+A0h] [rbp-88h]
  __int128 v18; // [rsp+C0h] [rbp-68h]
  __int64 v19; // [rsp+D0h] [rbp-58h]
  __int128 v20; // [rsp+D8h] [rbp-50h] BYREF
  __m256i v21; // [rsp+E8h] [rbp-40h]
  __int128 v22; // [rsp+108h] [rbp-20h]
  __int64 v23; // [rsp+118h] [rbp-10h]

  firecracker::main_exec(&v20);
  if ( (_DWORD)v20 == 11 )
  {
    v0 = 0;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 2 )
    {
      *(_QWORD *)&v5 = &off_3A3E58;
      *((_QWORD *)&v5 + 1) = 1LL;
      v6.m256i_i64[0] = 8LL;
      *(_OWORD *)&v6.m256i_u64[1] = 0LL;
      *(_QWORD *)&v16 = aFirecracker;
      *((_QWORD *)&v16 + 1) = 11LL;
      v17.m256i_i64[0] = (__int64)aFirecracker;
      v17.m256i_i64[1] = 11LL;
      v17.m256i_i64[2] = log::__private_api::loc(&off_3A3E98);
      log::__private_api::log_impl(&v5, 3LL, &v16);
      return 0;
    }
    return v0;
  }
  v19 = v23;
  v18 = v22;
  v17 = v21;
  v16 = v20;
  if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
  {
    v9 = (unsigned __int8 *)&v16;
    v10 = firecracker::_::<impl core::fmt::Display for firecracker::MainError>::fmt;
    *(_QWORD *)&v5 = &unk_30B60;
    *((_QWORD *)&v5 + 1) = 1LL;
    v6.m256i_i64[0] = (__int64)&v9;
    *(_OWORD *)&v6.m256i_u64[1] = 1uLL;
    v2 = log::__private_api::loc(&off_3A3E68);
    v11 = aFirecracker;
    v12 = (__int64 (__fastcall *)())(byte_9 + 2);
    v13 = aFirecracker;
    v14 = 11LL;
    v15 = v2;
    log::__private_api::log_impl(&v5, 1LL, &v11);
  }
  v11 = (const char *)&v16;
  v12 = <firecracker::MainError as core::fmt::Debug>::fmt;
  *(_QWORD *)&v5 = &off_3A3E28;
  *((_QWORD *)&v5 + 1) = 2LL;
  v6.m256i_i64[0] = (__int64)&v11;
  *(_OWORD *)&v6.m256i_u64[1] = 1uLL;
  std::io::stdio::_eprint(&v5);
  v8 = v19;
  v7 = v18;
  v6 = v17;
  v5 = v16;
  v0 = firecracker::<impl core::convert::From<firecracker::MainError> for vmm::FcExitCode>::from((__int64)&v5);
  v4 = v0;
  if ( !core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    return v0;
  v9 = &v4;
  v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  *(_QWORD *)&v5 = &off_3A3E48;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6.m256i_i64[0] = (__int64)&v9;
  *(_OWORD *)&v6.m256i_u64[1] = 1uLL;
  v3 = log::__private_api::loc(&off_3A3E80);
  v11 = aFirecracker;
  v12 = (__int64 (__fastcall *)())(byte_9 + 2);
  v13 = aFirecracker;
  v14 = 11LL;
  v15 = v3;
  log::__private_api::log_impl(&v5, 1LL, &v11);
  return v4;
}