__int64 __fastcall sniffnet::networking::types::data_representation::DataRepr::formatted_string(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  double v7; // xmm0_8
  __int64 v8; // rsi
  float v9; // xmm1_4
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  float v14; // [rsp+Ch] [rbp-CCh] BYREF
  __int128 v15; // [rsp+10h] [rbp-C8h] BYREF
  __int128 *v16; // [rsp+20h] [rbp-B8h]
  __int64 v17; // [rsp+28h] [rbp-B0h]
  void *v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h]
  __int128 v20; // [rsp+40h] [rbp-98h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall *v22)(); // [rsp+58h] [rbp-80h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int16 v24; // [rsp+68h] [rbp-70h]
  _QWORD v25[3]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v26; // [rsp+88h] [rbp-50h] BYREF
  __int128 *v27; // [rsp+98h] [rbp-40h]
  _BYTE v28[56]; // [rsp+A0h] [rbp-38h] BYREF

  v25[1] = a4;
  v25[0] = a3;
  if ( !a2 )
    return <T as alloc::string::SpecToString>::spec_to_string(a1, v25);
  v7 = _floatuntisf(a3, a4);
  v8 = (unsigned __int8)sniffnet::networking::types::data_representation::ByteMultiple::from_amount(a3, a4);
  v9 = *(float *)&v7 / flt_18E9A30[v8];
  if ( (_BYTE)v8 != 5 )
    v9 = fminf(999.0, v9);
  v14 = v9;
  sniffnet::networking::types::data_representation::ByteMultiple::pretty_print(v28, v8, a2);
  *(_QWORD *)&v20 = &v14;
  *((_QWORD *)&v20 + 1) = core::fmt::float::<impl core::fmt::Display for f32>::fmt;
  v21 = v28;
  v22 = <alloc::string::String as core::fmt::Display>::fmt;
  v23 = 0LL;
  v24 = (_BYTE)v8 != 0 && v9 <= 9.9499998;
  *(_QWORD *)&v15 = &unk_2DFEE40;
  *((_QWORD *)&v15 + 1) = 2LL;
  v18 = &unk_1838970;
  v19 = 2LL;
  v16 = &v20;
  v17 = 3LL;
  core::option::Option<T>::map_or_else(&v26, 0LL, v10, &v15);
  core::ptr::drop_in_place<alloc::string::String>(v28);
  v15 = v26;
  v16 = v27;
  v11 = core::str::<impl str>::trim_matches(*((_QWORD *)&v26 + 1), v27);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, v11, v12);
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return core::ptr::drop_in_place<alloc::string::String>(&v15);
}