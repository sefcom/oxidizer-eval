__int64 __fastcall firecracker::api_server::parsed_request::describe(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v8; // al
  __int64 v9; // rdx
  unsigned __int8 v11; // [rsp+Fh] [rbp-89h] BYREF
  char *v12; // [rsp+10h] [rbp-88h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+18h] [rbp-80h]
  _QWORD *v14; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+28h] [rbp-70h]
  _QWORD v16[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h]
  char **v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+60h] [rbp-38h]

  v11 = a2;
  v16[0] = a3;
  v16[1] = a4;
  v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aMmds_1, 5LL);
  if ( !a5 || v8 )
  {
    v12 = (char *)&v11;
    v13 = <micro_http::common::Method as core::fmt::Debug>::fmt;
    v14 = v16;
    v15 = <&T as core::fmt::Debug>::fmt;
    v17 = &unk_3A3790;
    v18 = 2LL;
  }
  else
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aCpuConfig_0, 11LL)
      || (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4
      && (unsigned __int8)log::__private_api::enabled() )
    {
      return firecracker::api_server::parsed_request::describe_with_body(
               a1,
               a2,
               a3,
               a4,
               *(_QWORD *)(a5 + 8),
               *(_QWORD *)(a5 + 16));
    }
    v12 = (char *)&v11;
    v13 = <micro_http::common::Method as core::fmt::Debug>::fmt;
    v14 = v16;
    v15 = <&T as core::fmt::Debug>::fmt;
    v17 = &unk_3A37B0;
    v18 = 3LL;
  }
  v21 = 0LL;
  v19 = &v12;
  v20 = 2LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, v9, &v17);
}