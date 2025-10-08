_OWORD *__fastcall uu_chcon::errors::report_full_error(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // rax
  unsigned __int8 v4; // al
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  _OWORD *result; // rax
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+18h] [rbp-90h] BYREF
  __int64 v12; // [rsp+28h] [rbp-80h]
  __int64 *v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  char **v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int64 **v18; // [rsp+58h] [rbp-50h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+68h] [rbp-40h]

  v15 = a1;
  v9 = a2;
  v10 = a3;
  *(_QWORD *)&v3 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(256LL, 1LL, 1LL, &off_F0310);
  v11 = v3;
  v12 = 0LL;
  v13 = &v9;
  v14 = <&T as core::fmt::Display>::fmt;
  v16 = (char **)&unk_19D80;
  v17 = 1LL;
  v20 = 0LL;
  v18 = &v13;
  v19 = 1LL;
  v4 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v16);
  core::result::Result<T,E>::unwrap(v4, &off_F0328);
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(v10 + 48))(v9);
    if ( !v5 )
      break;
    v9 = v5;
    v10 = v6;
    v13 = &v9;
    v14 = <&T as core::fmt::Display>::fmt;
    v16 = &off_F0300;
    v17 = 1LL;
    v20 = 0LL;
    v18 = &v13;
    v19 = 1LL;
    v7 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v11, &v16);
    core::result::Result<T,E>::unwrap(v7, &off_F0340);
  }
  result = (_OWORD *)v15;
  *(_QWORD *)(v15 + 16) = v12;
  *result = v11;
  return result;
}