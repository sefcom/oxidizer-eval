void __fastcall uu_join::get_field_number(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 v8; // [rsp+8h] [rbp-80h] BYREF
  __int128 v9; // [rsp+10h] [rbp-78h] BYREF
  __int128 v10; // [rsp+20h] [rbp-68h]
  _QWORD v11[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[7]; // [rsp+50h] [rbp-38h] BYREF

  if ( a2 != 1 )
  {
    if ( !a4 )
      a5 = 0LL;
    a1[1] = a5;
    goto LABEL_10;
  }
  if ( a4 != 1 || a3 == a5 )
  {
    a1[1] = a3;
LABEL_10:
    *a1 = 0LL;
    return;
  }
  v7 = a3 + 1;
  v8 = a5 + 1;
  v11[0] = &v7;
  v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v11[2] = &v8;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v12[0] = &off_FDD70;
  v12[1] = 2LL;
  v12[4] = 0LL;
  v12[2] = v11;
  v12[3] = 2LL;
  alloc::fmt::format::format_inner(&v9, v12);
  DWORD2(v10) = 1;
  v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v6 = v9;
  v5[1] = v10;
  *v5 = v6;
  *a1 = v5;
  a1[1] = &off_FDB88;
}
