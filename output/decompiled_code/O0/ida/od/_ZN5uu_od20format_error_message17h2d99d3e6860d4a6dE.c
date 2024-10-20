__int64 __fastcall uu_od::format_error_message(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r14
  char **v8; // [rsp+0h] [rbp-158h] BYREF
  __int64 v9; // [rsp+8h] [rbp-150h]
  _QWORD *v10; // [rsp+10h] [rbp-148h]
  __int64 v11; // [rsp+18h] [rbp-140h]
  __int64 v12; // [rsp+20h] [rbp-138h]
  _QWORD v13[2]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v15[3]; // [rsp+60h] [rbp-F8h] BYREF
  char v16; // [rsp+78h] [rbp-E0h]
  _QWORD v17[4]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v18[3]; // [rsp+A0h] [rbp-B8h] BYREF
  char v19; // [rsp+B8h] [rbp-A0h]
  _QWORD v20[4]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v21[3]; // [rsp+E0h] [rbp-78h] BYREF
  char v22; // [rsp+F8h] [rbp-60h]
  char v23; // [rsp+100h] [rbp-58h] BYREF
  char v24; // [rsp+118h] [rbp-40h] BYREF
  char v25; // [rsp+130h] [rbp-28h] BYREF

  v13[0] = a5;
  v13[1] = a6;
  if ( *a2 )
  {
    if ( *a2 == 1LL )
    {
      v18[0] = 0LL;
      v18[1] = a3;
      v18[2] = a4;
      v19 = 1;
      v17[0] = v13;
      v17[1] = <&T as core::fmt::Display>::fmt;
      v17[2] = v18;
      v17[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v8 = &off_12E668;
      v9 = 2LL;
      v10 = v17;
      v11 = 2LL;
      v12 = 0LL;
      v6 = &v24;
    }
    else
    {
      v21[0] = 0LL;
      v21[1] = a3;
      v21[2] = a4;
      v22 = 1;
      v20[0] = v13;
      v20[1] = <&T as core::fmt::Display>::fmt;
      v20[2] = v21;
      v20[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v8 = &off_12E688;
      v9 = 3LL;
      v10 = v20;
      v11 = 2LL;
      v12 = 0LL;
      v6 = &v25;
    }
  }
  else
  {
    v15[0] = 0LL;
    v15[1] = a3;
    v15[2] = a4;
    v16 = 1;
    v14[0] = v13;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v14[2] = v15;
    v14[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &off_12E648;
    v9 = 2LL;
    v10 = v14;
    v11 = 2LL;
    v12 = 0LL;
    v6 = &v23;
  }
  alloc::fmt::format::format_inner(v6, &v8);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v6 + 2);
  *(_OWORD *)a1 = *(_OWORD *)v6;
  return a1;
}
