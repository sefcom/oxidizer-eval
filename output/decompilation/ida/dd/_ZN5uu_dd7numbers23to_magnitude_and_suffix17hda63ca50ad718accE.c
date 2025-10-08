__int64 __fastcall uu_dd::numbers::to_magnitude_and_suffix(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  void *v5; // r12
  __int64 v6; // r13
  double v7; // xmm0_8
  void *v9; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  __int128 v11; // [rsp+10h] [rbp-98h]
  void *v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+28h] [rbp-80h]
  double *v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+38h] [rbp-70h]
  _OWORD *v16; // [rsp+40h] [rbp-68h]
  __int64 (__fastcall *v17)(); // [rsp+48h] [rbp-60h]
  double v18; // [rsp+50h] [rbp-58h]
  double v19; // [rsp+58h] [rbp-50h] BYREF
  double v20; // [rsp+60h] [rbp-48h] BYREF
  _OWORD v21[4]; // [rsp+68h] [rbp-40h] BYREF

  uu_dd::numbers::SuffixType::base_and_suffix((__int64)&v9, a4, a2, a3);
  v5 = v9;
  v6 = v10;
  v21[0] = v11;
  v18 = _floatuntidf(a2, a3);
  v7 = _floatuntidf(v5, v6);
  v19 = v18 / v7;
  if ( v18 / v7 >= 10.0 )
  {
    v20 = round(v18 / v7);
    v14 = &v20;
    v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v16 = v21;
    v17 = <&T as core::fmt::Display>::fmt;
    v9 = &unk_13D8D8;
    v10 = 2LL;
    v12 = 0LL;
  }
  else
  {
    v14 = &v19;
    v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v16 = v21;
    v17 = <&T as core::fmt::Display>::fmt;
    v9 = &unk_13D8D8;
    v10 = 2LL;
    v12 = &unk_21120;
    v13 = 2LL;
  }
  *(_QWORD *)&v11 = &v14;
  *((_QWORD *)&v11 + 1) = 2LL;
  return ((__int64 (__fastcall *)(__int64, void **))core::option::Option<T>::map_or_else)(a1, &v9);
}