__int64 __fastcall uu_join::Spec::parse(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  int v5; // edx
  int v6; // eax
  char v7; // bp
  int v8; // edx
  __int64 (__fastcall **v9)(); // rax
  char **v10; // rax
  __int64 result; // rax
  __int64 *v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+10h] [rbp-A8h]
  __int64 v14; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-98h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  char v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  __int64 v19; // [rsp+40h] [rbp-78h]
  char **v20; // [rsp+48h] [rbp-70h] BYREF
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int64 **v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+68h] [rbp-50h]
  _BYTE v25[24]; // [rsp+78h] [rbp-40h] BYREF
  int v26; // [rsp+90h] [rbp-28h]

  v18 = a2;
  v19 = a2 + a3;
  v4 = (core::str::validations::next_code_point(&v18) & 1) == 0;
  v6 = 1114112;
  if ( !v4 )
    v6 = v5;
  switch ( v6 )
  {
    case '0':
      if ( (core::str::validations::next_code_point(&v18) & 1) != 0 )
        goto LABEL_14;
      *(_BYTE *)(a1 + 8) = 0;
LABEL_20:
      result = 0LL;
      goto LABEL_18;
    case '1':
      v7 = 0;
      if ( (core::str::validations::next_code_point(&v18) & 1) == 0 )
        goto LABEL_14;
      break;
    case '2':
      v7 = 1;
      if ( (core::str::validations::next_code_point(&v18) & 1) == 0 )
      {
LABEL_14:
        v14 = 0LL;
        v15 = a2;
        v16 = a3;
        v17 = 1;
        v12 = &v14;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v10 = &off_FE320;
LABEL_16:
        v20 = v10;
        v21 = 1LL;
        v24 = 0LL;
        v22 = &v12;
        v23 = 1LL;
        core::option::Option<T>::map_or_else(v25, &v20);
        v26 = 1;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v25);
        v9 = &off_FE360;
        goto LABEL_17;
      }
      break;
    default:
      v14 = 0LL;
      v15 = a2;
      v16 = a3;
      v17 = 1;
      v12 = &v14;
      v13 = <os_display::Quoted as core::fmt::Display>::fmt;
      v10 = &off_FE330;
      goto LABEL_16;
  }
  if ( v8 != 46 )
    goto LABEL_14;
  uu_join::parse_field_number(&v20, v18, v19 - v18);
  v9 = (__int64 (__fastcall **)())v21;
  if ( !v20 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 9) = v7;
    *(_QWORD *)(a1 + 16) = v9;
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 8) = v20;
LABEL_17:
  *(_QWORD *)(a1 + 16) = v9;
  result = 1LL;
LABEL_18:
  *(_QWORD *)a1 = result;
  return result;
}