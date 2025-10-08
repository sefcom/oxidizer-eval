__int64 __fastcall uu_uptime::uptime_with_file(__int64 (__fastcall *a1)())
{
  __int64 (__fastcall *v1)(); // rsi
  __int64 (__fastcall *v2)(); // rbx
  __int64 (__fastcall *v3)(); // rdx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(); // rdx
  void *v6; // rax
  __int64 (__fastcall *v7)(); // rdx
  __int64 **v8; // rsi
  __int64 result; // rax
  __int64 **v10; // rbx
  __int64 (__fastcall *v11)(); // rdx
  __int64 v12; // [rsp+0h] [rbp-118h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+8h] [rbp-110h]
  char **v14; // [rsp+10h] [rbp-108h] BYREF
  __int64 v15; // [rsp+18h] [rbp-100h]
  __int64 **v16; // [rsp+20h] [rbp-F8h]
  __int128 v17; // [rsp+28h] [rbp-F0h]
  __int64 *v18; // [rsp+40h] [rbp-D8h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-D0h]
  int dest; // [rsp+50h] [rbp-C8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-C0h]
  int v22; // [rsp+88h] [rbp-90h]

  v1 = a1;
  std::fs::metadata(&dest);
  if ( dest == 2 )
  {
    v2 = v21;
    uucore::mods::error::set_exit_code(1LL);
    v12 = uucore::util_name(1LL, a1);
    v13 = v3;
    v18 = &v12;
    v19 = <&T as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108258;
    v15 = 2LL;
    v16 = &v18;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v13 = v2;
    v12 = 0LL;
    v18 = &v12;
    v19 = <uu_uptime::UptimeError as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108278;
    v15 = 2LL;
    v16 = &v18;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v4 = v12;
    v1 = v13;
    core::ptr::drop_in_place<uu_uptime::UptimeError>(v12, v13);
LABEL_8:
    uu_uptime::print_time(v4, v1);
    v14 = &off_108298;
    v15 = 1LL;
    v16 = (__int64 **)&byte_8;
    v17 = 0LL;
    std::io::stdio::_print(&v14);
    v8 = 0LL;
LABEL_9:
    uu_uptime::print_nusers(1LL, v8);
    uu_uptime::print_loadavg();
    return 0LL;
  }
  if ( (v22 & 0xF000) == 0x1000 )
  {
    v12 = uucore::util_name(&dest, a1);
    v13 = v7;
    v18 = &v12;
    v19 = <&T as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108258;
    v15 = 2LL;
    v16 = &v18;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v6 = &unk_1A270;
    goto LABEL_7;
  }
  if ( (v22 & 0xF000) == 0x4000 )
  {
    v12 = uucore::util_name(&dest, a1);
    v13 = v5;
    v18 = &v12;
    v19 = <&T as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108258;
    v15 = 2LL;
    v16 = &v18;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v6 = &unk_1A2E0;
LABEL_7:
    v12 = (__int64)v6;
    v13 = <uu_uptime::UptimeError as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108278;
    v15 = 2LL;
    v16 = (__int64 **)&v12;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v4 = 1LL;
    uucore::mods::error::set_exit_code(1LL);
    goto LABEL_8;
  }
  uu_uptime::print_time(&dest, a1);
  uu_uptime::process_utmpx(&v14, a1);
  v10 = v16;
  if ( v14 != (char **)((char *)&dword_0 + 1) )
  {
    v12 = uucore::util_name(v14, a1);
    v13 = v11;
    v18 = &v12;
    v19 = <&T as core::fmt::Display>::fmt;
    v14 = (char **)&unk_108258;
    v15 = 2LL;
    v16 = &v18;
    v17 = 1uLL;
    std::io::stdio::_eprint(&v14);
    v14 = &off_1082A8;
    v15 = 1LL;
    v16 = (__int64 **)&byte_8;
    v17 = 0LL;
    std::io::stdio::_eprint(&v14);
    uucore::mods::error::set_exit_code(1LL);
    v14 = &off_108298;
    v15 = 1LL;
    v16 = (__int64 **)&byte_8;
    v17 = 0LL;
    std::io::stdio::_print(&v14);
    v8 = v10;
    goto LABEL_9;
  }
  result = uu_uptime::print_uptime(1LL, v15);
  v8 = v10;
  if ( !result )
    goto LABEL_9;
  return result;
}