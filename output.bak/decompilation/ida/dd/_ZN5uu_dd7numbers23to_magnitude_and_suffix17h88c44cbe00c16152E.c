__int64 __fastcall uu_dd::numbers::to_magnitude_and_suffix(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  void *v5; // r13
  __int64 v6; // rbp
  double v7; // xmm1_8
  void **v8; // rsi
  double v10; // [rsp+0h] [rbp-118h]
  double v11; // [rsp+8h] [rbp-110h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-108h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+18h] [rbp-100h]
  _QWORD *v14; // [rsp+20h] [rbp-F8h]
  __int64 (__fastcall *v15)(); // [rsp+28h] [rbp-F0h]
  void **v16; // [rsp+30h] [rbp-E8h]
  __int64 v17; // [rsp+38h] [rbp-E0h]
  _QWORD v18[4]; // [rsp+40h] [rbp-D8h] BYREF
  void *v19; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-B0h]
  __int128 v21; // [rsp+70h] [rbp-A8h]
  __int64 v22; // [rsp+80h] [rbp-98h]
  __int64 v23; // [rsp+88h] [rbp-90h]
  char v24; // [rsp+90h] [rbp-88h]
  __int64 v25; // [rsp+98h] [rbp-80h]
  __int64 v26; // [rsp+A8h] [rbp-70h]
  __int64 v27; // [rsp+B8h] [rbp-60h]
  __int64 v28; // [rsp+C0h] [rbp-58h]
  char v29; // [rsp+C8h] [rbp-50h]
  _OWORD v30[4]; // [rsp+D8h] [rbp-40h] BYREF

  uu_dd::numbers::SuffixType::base_and_suffix((__int64)&v19, a4, a2, a3);
  v5 = v19;
  v6 = v20;
  v30[0] = v21;
  v10 = _floatuntidf(a2, a3);
  v7 = v10 / _floatuntidf(v5, v6);
  v11 = v7;
  if ( v7 >= 10.0 )
  {
    v18[0] = round(v7);
    v12 = v18;
    v13 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v14 = v30;
    v15 = <&T as core::fmt::Display>::fmt;
    v19 = &unk_161A88;
    v20 = 2LL;
    v22 = 0LL;
    *(_QWORD *)&v21 = &v12;
    *((_QWORD *)&v21 + 1) = 2LL;
    v8 = &v19;
  }
  else
  {
    v18[0] = &v11;
    v18[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v18[2] = v30;
    v18[3] = <&T as core::fmt::Display>::fmt;
    v19 = 0LL;
    v20 = 1LL;
    *(_QWORD *)&v21 = 2LL;
    v22 = 0LL;
    v23 = 32LL;
    v24 = 3;
    v25 = 2LL;
    v26 = 2LL;
    v27 = 1LL;
    v28 = 32LL;
    v29 = 3;
    v12 = &unk_161A88;
    v13 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v16 = &v19;
    v17 = 2LL;
    v14 = v18;
    v15 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v8 = (void **)&v12;
  }
  core::option::Option<T>::map_or_else(a1, v8);
  return a1;
}
