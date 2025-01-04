__int64 (__fastcall **__fastcall uu_join::Spec::parse(__int64 a1, __int64 a2, __int64 a3))()
{
  bool v4; // zf
  int v5; // edx
  int v6; // eax
  char v7; // bp
  int v8; // edx
  __int64 slice; // rax
  __int64 (__fastcall **v10)(); // rax
  __int64 (__fastcall **result)(); // rax
  char **v12; // rax
  __int64 *v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+10h] [rbp-A8h]
  __int64 v15; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+28h] [rbp-90h]
  char v18; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h]
  char **v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+50h] [rbp-68h]
  __int64 **v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  _BYTE v26[24]; // [rsp+78h] [rbp-40h] BYREF
  int v27; // [rsp+90h] [rbp-28h]

  v19 = a2;
  v20 = a2 + a3;
  v4 = (unsigned int)core::str::validations::next_code_point(&v19) == 0;
  v6 = 1114112;
  if ( !v4 )
    v6 = v5;
  switch ( v6 )
  {
    case '0':
      if ( !(unsigned int)core::str::validations::next_code_point(&v19) )
      {
        *(_BYTE *)(a1 + 8) = 0;
        result = 0LL;
        goto LABEL_18;
      }
      v15 = 0LL;
      v16 = a2;
      v17 = a3;
      v18 = 1;
      v13 = &v15;
      v14 = <os_display::Quoted as core::fmt::Display>::fmt;
      v12 = &off_135260;
      break;
    case '1':
      v7 = 0;
LABEL_8:
      if ( !(unsigned int)core::str::validations::next_code_point(&v19) || v8 != 46 )
      {
        v15 = 0LL;
        v16 = a2;
        v17 = a3;
        v18 = 1;
        v13 = &v15;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v21 = &off_135260;
        v22 = 1LL;
        v25 = 0LL;
        v23 = &v13;
        v24 = 1LL;
        core::option::Option<T>::map_or_else(v26, &v21);
        v27 = 1;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v26);
        result = &off_1352B8;
        *(_QWORD *)(a1 + 16) = &off_1352B8;
        *(_QWORD *)a1 = 1LL;
        return result;
      }
      slice = core::slice::iter::Iter<T>::make_slice(v19, v20);
      uu_join::parse_field_number(&v21, slice);
      v10 = (__int64 (__fastcall **)())v22;
      if ( !v21 )
      {
        *(_BYTE *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 9) = v7;
        *(_QWORD *)(a1 + 16) = v10;
        result = 0LL;
        goto LABEL_18;
      }
      *(_QWORD *)(a1 + 8) = v21;
      goto LABEL_17;
    case '2':
      v7 = 1;
      goto LABEL_8;
    default:
      v15 = 0LL;
      v16 = a2;
      v17 = a3;
      v18 = 1;
      v13 = &v15;
      v14 = <os_display::Quoted as core::fmt::Display>::fmt;
      v12 = &off_135270;
      break;
  }
  v21 = v12;
  v22 = 1LL;
  v25 = 0LL;
  v23 = &v13;
  v24 = 1LL;
  core::option::Option<T>::map_or_else(v26, &v21);
  v27 = 1;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v26);
  v10 = &off_1352B8;
LABEL_17:
  *(_QWORD *)(a1 + 16) = v10;
  result = (__int64 (__fastcall **)())(&dword_0 + 1);
LABEL_18:
  *(_QWORD *)a1 = result;
  return result;
}
