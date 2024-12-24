__int64 (__fastcall **__fastcall uu_join::Spec::parse(__int64 a1, __int64 a2, __int64 a3))()
{
  int v4; // edx
  char v5; // bp
  char **v6; // rax
  __int64 (__fastcall **v7)(); // rax
  __int64 (__fastcall **result)(); // rax
  int v9; // edx
  __int64 slice; // rax
  __int64 v11; // rdx
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
  if ( !(unsigned int)core::str::validations::next_code_point(&v18) )
    goto LABEL_6;
  if ( v4 == 48 )
  {
    if ( !(unsigned int)core::str::validations::next_code_point(&v18) )
    {
      *(_BYTE *)(a1 + 8) = 0;
      result = 0LL;
      goto LABEL_9;
    }
    v14 = 0LL;
    v15 = a2;
    v16 = a3;
    v17 = 1;
    v12 = &v14;
    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &off_135E00;
    goto LABEL_7;
  }
  if ( v4 == 49 )
  {
    v5 = 0;
    goto LABEL_11;
  }
  if ( v4 != 50 )
  {
LABEL_6:
    v14 = 0LL;
    v15 = a2;
    v16 = a3;
    v17 = 1;
    v12 = &v14;
    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &off_135EB8;
LABEL_7:
    v20 = v6;
    v21 = 1LL;
    v24 = 0LL;
    v22 = &v12;
    v23 = 1LL;
    core::option::Option<T>::map_or_else(v25, &v20);
    v26 = 1;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v25);
    v7 = &off_135E48;
LABEL_8:
    *(_QWORD *)(a1 + 16) = v7;
    result = (__int64 (__fastcall **)())(&dword_0 + 1);
LABEL_9:
    *(_QWORD *)a1 = result;
    return result;
  }
  v5 = 1;
LABEL_11:
  if ( (unsigned int)core::str::validations::next_code_point(&v18) && v9 == 46 )
  {
    slice = core::slice::iter::Iter<T>::make_slice(v18, v19);
    uu_join::parse_field_number(&v20, slice, v11);
    v7 = (__int64 (__fastcall **)())v21;
    if ( !v20 )
    {
      *(_BYTE *)(a1 + 8) = 1;
      *(_BYTE *)(a1 + 9) = v5;
      *(_QWORD *)(a1 + 16) = v7;
      result = 0LL;
      goto LABEL_9;
    }
    *(_QWORD *)(a1 + 8) = v20;
    goto LABEL_8;
  }
  v14 = 0LL;
  v15 = a2;
  v16 = a3;
  v17 = 1;
  v12 = &v14;
  v13 = <os_display::Quoted as core::fmt::Display>::fmt;
  v20 = &off_135E00;
  v21 = 1LL;
  v24 = 0LL;
  v22 = &v12;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v25, &v20);
  v26 = 1;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v25);
  result = &off_135E48;
  *(_QWORD *)(a1 + 16) = &off_135E48;
  *(_QWORD *)a1 = 1LL;
  return result;
}
