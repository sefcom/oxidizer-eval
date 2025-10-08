__int64 __fastcall fd::extract_time_constraints(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int128 v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-C0h]
  _QWORD *v9; // [rsp+20h] [rbp-B8h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+28h] [rbp-B0h]
  void *v11; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h]
  _QWORD *v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+48h] [rbp-90h]
  __int64 v15; // [rsp+50h] [rbp-88h]
  _DWORD v16[6]; // [rsp+60h] [rbp-78h] BYREF
  _DWORD v17[6]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v18[24]; // [rsp+90h] [rbp-48h] BYREF
  _BYTE v19[48]; // [rsp+A8h] [rbp-30h] BYREF

  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 8LL;
  v8 = 0LL;
  if ( !__OFSUB__(0LL, a2[35]) )
  {
    v6 = a2 + 35;
    fd::filter::time::TimeFilter::after((__int64)v16, a2[36], a2[37]);
    if ( v16[0] == 2 )
    {
      v9 = &v6;
      v10 = <&T as core::fmt::Display>::fmt;
      v11 = &off_402900;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v9;
      v14 = 1LL;
      core::option::Option<T>::map_or_else(v18, 0LL, v2, &v11);
      a1[1] = anyhow::error::<impl anyhow::Error>::msg(v18);
      *a1 = 0x8000000000000000LL;
      *((_QWORD *)&v3 + 1) = 8LL;
      *(_QWORD *)&v3 = 0LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(v3, *((_QWORD *)&v3 + 1));
    }
    alloc::vec::Vec<T,A>::push(&v7, v16, &off_402920);
  }
  if ( a2[38] != 0x8000000000000000LL )
  {
    v6 = a2 + 38;
    fd::filter::time::TimeFilter::before((__int64)v17, a2[39], a2[40]);
    if ( v17[0] == 2 )
    {
      v9 = &v6;
      v10 = <&T as core::fmt::Display>::fmt;
      v11 = &off_402900;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v9;
      v14 = 1LL;
      core::option::Option<T>::map_or_else(v19, 0LL, v4, &v11);
      a1[1] = anyhow::error::<impl anyhow::Error>::msg(v19);
      *a1 = 0x8000000000000000LL;
      v3 = v7;
      return core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(v3, *((_QWORD *)&v3 + 1));
    }
    alloc::vec::Vec<T,A>::push(&v7, v17, &off_402938);
  }
  result = v8;
  a1[2] = v8;
  *(_OWORD *)a1 = v7;
  return result;
}