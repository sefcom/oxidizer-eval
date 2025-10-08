__int64 __fastcall just::function::env_var(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-D8h] BYREF
  char **v10; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-C0h]
  _QWORD **v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+30h] [rbp-A8h]
  _QWORD *v15; // [rsp+40h] [rbp-98h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+48h] [rbp-90h]
  __int128 *v17; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall *v18)(); // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int128 v21; // [rsp+80h] [rbp-58h] BYREF
  __int64 v22; // [rsp+90h] [rbp-48h]
  _BYTE v23[8]; // [rsp+98h] [rbp-40h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+B0h] [rbp-28h]

  v9[0] = a3;
  v9[1] = a4;
  v6 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
         **(_QWORD **)(*(_QWORD *)a2 + 8LL),
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 8LL));
  if ( v6 )
  {
    <alloc::string::String as core::clone::Clone>::clone(a1 + 8, v6);
LABEL_7:
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  std::env::var(v23, a3, a4);
  if ( (v23[0] & 1) == 0 )
  {
    *(_QWORD *)(a1 + 24) = v25;
    *(_OWORD *)(a1 + 8) = v24;
    goto LABEL_7;
  }
  if ( __OFSUB__(0LL, (_QWORD)v24) )
  {
    v15 = v9;
    v16 = <&T as core::fmt::Display>::fmt;
    v10 = &off_42FE48;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v15;
    v13 = 1LL;
    core::option::Option<T>::map_or_else(a1 + 8, 0LL, v7, &v10);
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v20 = v25;
    v19 = v24;
    v15 = v9;
    v16 = <&T as core::fmt::Display>::fmt;
    v17 = &v19;
    v18 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
    v10 = &off_42FE68;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v15;
    v13 = 2LL;
    core::option::Option<T>::map_or_else(&v21, 0LL, v7, &v10);
    *(_QWORD *)(a1 + 24) = v22;
    *(_OWORD *)(a1 + 8) = v21;
    *(_QWORD *)a1 = 1LL;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v19);
  }
  return a1;
}