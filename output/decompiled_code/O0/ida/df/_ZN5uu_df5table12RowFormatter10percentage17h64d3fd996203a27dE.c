__int64 __fastcall uu_df::table::RowFormatter::percentage(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  _BYTE *v8; // r15
  double v10; // [rsp+0h] [rbp-B8h] BYREF
  void *v11; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-A8h]
  _QWORD *v13; // [rsp+18h] [rbp-A0h]
  __int64 v14; // [rsp+20h] [rbp-98h]
  __int128 *v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]
  _QWORD v17[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+58h] [rbp-60h]
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp-38h]
  __int64 v23; // [rsp+88h] [rbp-30h]
  char v24; // [rsp+90h] [rbp-28h]

  if ( a2 )
  {
    v10 = ceil(a3 * 100.0);
    v17[0] = &v10;
    v17[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v20 = 0LL;
    v21 = 2LL;
    v22 = 0LL;
    v23 = 32LL;
    v24 = 3;
    v11 = &unk_12B7F8;
    v12 = 2LL;
    v13 = v17;
    v14 = 1LL;
    v15 = &v20;
    v16 = 1LL;
    ((void (__fastcall *)(__int128 *, void **, __int64, __int64, __int64, __int64, _QWORD))alloc::fmt::format::format_inner)(
      &v18,
      &v11,
      v3,
      v4,
      v5,
      v6,
      *(_QWORD *)&v10);
    *(_QWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v11, 1LL, 0LL);
    v7 = v12;
    if ( v11 )
      alloc::raw_vec::handle_error(v12, v13);
    v8 = v13;
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v13, 1LL, 1LL, 1LL);
    *v8 = 45;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = 1LL;
  }
  return a1;
}
