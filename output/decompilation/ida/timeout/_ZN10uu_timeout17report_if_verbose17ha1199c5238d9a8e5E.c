void __fastcall uu_timeout::report_if_verbose(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdx
  char **v6; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+10h] [rbp-A8h]
  __int64 **v8; // [rsp+18h] [rbp-A0h]
  __int64 v9; // [rsp+20h] [rbp-98h]
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 *v11; // [rsp+38h] [rbp-80h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+40h] [rbp-78h]
  __int64 *v13; // [rsp+48h] [rbp-70h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  char v18; // [rsp+70h] [rbp-48h]
  __int128 v19; // [rsp+78h] [rbp-40h] BYREF

  if ( a4 )
  {
    if ( a1 >= 0x20 )
      core::option::unwrap_failed(&off_112818);
    v19 = *((_OWORD *)&uucore::features::signals::ALL_SIGNALS + a1);
    v15 = uucore::util_name();
    v16 = v5;
    v11 = &v15;
    v12 = <&T as core::fmt::Display>::fmt;
    v6 = (char **)&unk_1127C8;
    v7 = 2LL;
    v10 = 0LL;
    v8 = &v11;
    v9 = 1LL;
    std::io::stdio::_eprint(&v6);
    v15 = 0LL;
    v16 = a2;
    v17 = a3;
    v18 = 1;
    v11 = (__int64 *)&v19;
    v12 = <&T as core::fmt::Display>::fmt;
    v13 = &v15;
    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &off_1127E8;
    v7 = 3LL;
    v10 = 0LL;
    v8 = &v11;
    v9 = 2LL;
    std::io::stdio::_eprint(&v6);
  }
}