__int64 __fastcall uu_pr::get_formatted_line_number(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  _BYTE *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // [rsp+8h] [rbp-160h] BYREF
  const char *v20; // [rsp+10h] [rbp-158h] BYREF
  __int64 v21; // [rsp+18h] [rbp-150h]
  _BYTE **v22; // [rsp+20h] [rbp-148h]
  __int64 v23; // [rsp+28h] [rbp-140h]
  _QWORD *v24; // [rsp+30h] [rbp-138h]
  __int64 v25; // [rsp+38h] [rbp-130h]
  _BYTE *v26; // [rsp+40h] [rbp-128h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+48h] [rbp-120h]
  _QWORD **v28; // [rsp+50h] [rbp-118h]
  __int64 (__fastcall *v29)(); // [rsp+58h] [rbp-110h]
  unsigned __int64 v30; // [rsp+60h] [rbp-108h]
  __int64 v31; // [rsp+68h] [rbp-100h]
  __int64 v32; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+88h] [rbp-E0h]
  __int64 v35; // [rsp+90h] [rbp-D8h]
  __int64 v36; // [rsp+98h] [rbp-D0h]
  __int64 v37; // [rsp+A0h] [rbp-C8h]
  char v38; // [rsp+A8h] [rbp-C0h]
  __int64 v39; // [rsp+B0h] [rbp-B8h]
  __int64 v40; // [rsp+C0h] [rbp-A8h]
  __int64 v41; // [rsp+D0h] [rbp-98h]
  __int64 v42; // [rsp+D8h] [rbp-90h]
  char v43; // [rsp+E0h] [rbp-88h]
  _BYTE v44[8]; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-78h]
  unsigned __int64 v46; // [rsp+F8h] [rbp-70h]
  _QWORD v47[2]; // [rsp+100h] [rbp-68h] BYREF
  _BYTE v48[24]; // [rsp+110h] [rbp-58h] BYREF
  _BYTE v49[64]; // [rsp+128h] [rbp-40h] BYREF

  v32 = a3;
  result = 0x8000000000000000LL;
  if ( a2[27] == 0x8000000000000000LL )
    goto LABEL_2;
  if ( a2[2] )
  {
    if ( !a3 || a4 )
      goto LABEL_2;
  }
  else if ( !a3 )
  {
LABEL_2:
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
    return result;
  }
  <T as alloc::string::ToString>::to_string(v44, &v32);
  v9 = a2[30];
  v19 = a2 + 27;
  v10 = v46;
  v11 = v46 - v9;
  if ( v46 >= v9 )
  {
    v13 = v45;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v46 - v9,
            v45,
            v46);
    if ( !v14 )
      core::str::slice_error_fail(v13, v10, v11, v10, &off_309578);
    v47[0] = v14;
    v47[1] = v15;
    v26 = v47;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v19;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = v9;
    v31 = 0LL;
    v33[0] = 2LL;
    v34 = 1LL;
    v35 = 2LL;
    v36 = 0LL;
    v37 = 32LL;
    v38 = 1;
    v39 = 2LL;
    v40 = 2LL;
    v41 = 1LL;
    v42 = 32LL;
    v43 = 3;
    v20 = "\x01";
    v21 = 2LL;
    v24 = v33;
    v25 = 2LL;
    v22 = &v26;
    v23 = 3LL;
    v12 = v48;
    core::option::Option<T>::map_or_else(v48, &v20, v15, v16, v17, v18);
  }
  else
  {
    v26 = v44;
    v27 = <alloc::string::String as core::fmt::Display>::fmt;
    v28 = &v19;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = v9;
    v31 = 0LL;
    v33[0] = 2LL;
    v34 = 1LL;
    v35 = 2LL;
    v36 = 0LL;
    v37 = 32LL;
    v38 = 1;
    v39 = 2LL;
    v40 = 2LL;
    v41 = 1LL;
    v42 = 32LL;
    v43 = 3;
    v20 = "\x01";
    v21 = 2LL;
    v24 = v33;
    v25 = 2LL;
    v22 = &v26;
    v23 = 3LL;
    v12 = v49;
    core::option::Option<T>::map_or_else(v49, &v20, v5, v6, v7, v8);
  }
  a1[2] = *((_QWORD *)v12 + 2);
  *(_OWORD *)a1 = *(_OWORD *)v12;
  return core::ptr::drop_in_place<alloc::string::String>(v44);
}
