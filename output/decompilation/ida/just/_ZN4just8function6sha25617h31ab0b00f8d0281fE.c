_QWORD *__fastcall just::function::sha256(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+0h] [rbp-138h] BYREF
  __int128 v9; // [rsp+10h] [rbp-128h] BYREF
  __int128 v10; // [rsp+20h] [rbp-118h]
  __int128 v11; // [rsp+30h] [rbp-108h]
  __int128 v12; // [rsp+40h] [rbp-F8h]
  __int128 v13; // [rsp+50h] [rbp-E8h]
  __int128 v14; // [rsp+60h] [rbp-D8h]
  __int128 v15; // [rsp+70h] [rbp-C8h]
  _OWORD v16[7]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v17[64]; // [rsp+F8h] [rbp-40h] BYREF

  <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default(v16);
  <D as digest::digest::Digest>::update(v16, a3, a4);
  v15 = v16[6];
  v14 = v16[5];
  v13 = v16[4];
  v12 = v16[3];
  v11 = v16[2];
  v10 = v16[1];
  v9 = v16[0];
  digest::FixedOutput::finalize_fixed(v17, &v9);
  v8[0] = v17;
  v8[1] = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
  *(_QWORD *)&v9 = asc_65DB0;
  *((_QWORD *)&v9 + 1) = 1LL;
  *(_QWORD *)&v11 = 0LL;
  *(_QWORD *)&v10 = v8;
  *((_QWORD *)&v10 + 1) = 1LL;
  core::option::Option<T>::map_or_else(a1 + 1, 0LL, v6, &v9);
  *a1 = 0LL;
  return a1;
}