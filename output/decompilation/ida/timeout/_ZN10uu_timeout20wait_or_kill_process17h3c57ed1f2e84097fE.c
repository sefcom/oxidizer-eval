__int64 __fastcall uu_timeout::wait_or_kill_process(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  unsigned int v9; // ebx
  int v10; // ebp
  int v11; // eax
  char **v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  _DWORD v16[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]

  v19 = a4;
  v18 = a3;
  <std::process::Child as uucore::features::process::ChildExt>::wait_or_timeout(v16, a2, a5, a6);
  v9 = v16[0];
  v10 = 124;
  if ( v16[0] )
    goto LABEL_2;
  if ( v16[1] == 1 )
  {
    v10 = 125;
    if ( a7 )
    {
      v10 = v17 & 0x7F;
      if ( (v17 & 0x7F) != 0 )
      {
        if ( (char)(v10 + 1) <= 1 )
        {
          v13 = &off_112878;
          goto LABEL_15;
        }
      }
      else
      {
        v10 = BYTE1(v17);
      }
    }
  }
  else
  {
    if ( (uucore::features::signals::signal_by_name_or_value(aKill_0, 4LL) & 1) == 0 )
    {
      v13 = &off_112860;
LABEL_15:
      core::option::unwrap_failed(v13);
    }
    v15 = v14;
    uu_timeout::report_if_verbose(v14, v18, v19, a9);
    uu_timeout::send_signal(a2, v15, a8);
    std::process::Child::wait(&v20, a2);
    if ( v20 == 1 )
    {
      *(_QWORD *)(a1 + 8) = v21;
      v11 = 1;
      goto LABEL_3;
    }
    v10 = v15 + 128;
  }
LABEL_2:
  *(_DWORD *)(a1 + 4) = v10;
  v11 = 0;
LABEL_3:
  *(_DWORD *)a1 = v11;
  return core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(
           v9,
           v17);
}