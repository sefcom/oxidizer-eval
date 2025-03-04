__int64 (__fastcall **__fastcall uu_join::Spec::parse(__int64 a1, __int64 a2, __int64 a3))()
{
  bool v4; // zf
  int v5; // edx
  int v6; // eax
  char v7; // bp
  int v8; // edx
  __int64 slice; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  __int64 (__fastcall **result)(); // rax
  char **v13; // rax
  __int64 *v14; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+10h] [rbp-A8h]
  __int64 v16; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  char v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  __int64 v21; // [rsp+40h] [rbp-78h]
  char **v22; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 **v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int64 v26; // [rsp+68h] [rbp-50h]
  _BYTE v27[24]; // [rsp+78h] [rbp-40h] BYREF
  int v28; // [rsp+90h] [rbp-28h]

  v20 = a2;
  v21 = a2 + a3;
  v4 = (unsigned int)core::str::validations::next_code_point(&v20) == 0;
  v6 = 1114112;
  if ( !v4 )
    v6 = v5;
  switch ( v6 )
  {
    case '0':
      if ( !(unsigned int)core::str::validations::next_code_point(&v20) )
      {
        *(_BYTE *)(a1 + 8) = 0;
        result = 0LL;
        goto LABEL_18;
      }
      v16 = 0LL;
      v17 = a2;
      v18 = a3;
      v19 = 1;
      v14 = &v16;
      v15 = <os_display::Quoted as core::fmt::Display>::fmt;
      v13 = &off_135260;
      break;
    case '1':
      v7 = 0;
LABEL_8:
      if ( !(unsigned int)core::str::validations::next_code_point(&v20) || v8 != 46 )
      {
        v16 = 0LL;
        v17 = a2;
        v18 = a3;
        v19 = 1;
        v14 = &v16;
        v15 = <os_display::Quoted as core::fmt::Display>::fmt;
        v22 = &off_135260;
        v23 = 1LL;
        v26 = 0LL;
        v24 = &v14;
        v25 = 1LL;
        core::option::Option<T>::map_or_else(v27, &v22);
        v28 = 1;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v27);
        result = &off_1352B8;
        *(_QWORD *)(a1 + 16) = &off_1352B8;
        *(_QWORD *)a1 = 1LL;
        return result;
      }
      slice = core::slice::iter::Iter<T>::make_slice(v20, v21);
      uu_join::parse_field_number(&v22, slice, v10);
      v11 = (__int64 (__fastcall **)())v23;
      if ( !v22 )
      {
        *(_BYTE *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 9) = v7;
        *(_QWORD *)(a1 + 16) = v11;
        result = 0LL;
        goto LABEL_18;
      }
      *(_QWORD *)(a1 + 8) = v22;
      goto LABEL_17;
    case '2':
      v7 = 1;
      goto LABEL_8;
    default:
      v16 = 0LL;
      v17 = a2;
      v18 = a3;
      v19 = 1;
      v14 = &v16;
      v15 = <os_display::Quoted as core::fmt::Display>::fmt;
      v13 = &off_135270;
      break;
  }
  v22 = v13;
  v23 = 1LL;
  v26 = 0LL;
  v24 = &v14;
  v25 = 1LL;
  core::option::Option<T>::map_or_else(v27, &v22);
  v28 = 1;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v27);
  v11 = &off_1352B8;
LABEL_17:
  *(_QWORD *)(a1 + 16) = v11;
  result = (__int64 (__fastcall **)())(&dword_0 + 1);
LABEL_18:
  *(_QWORD *)a1 = result;
  return result;
}
