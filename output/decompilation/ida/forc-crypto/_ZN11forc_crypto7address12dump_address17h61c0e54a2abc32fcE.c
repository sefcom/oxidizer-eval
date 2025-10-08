__int64 __fastcall forc_crypto::address::dump_address(__int64 a1, __int64 a2)
{
  __int128 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int128 v5; // xmm0
  __int64 result; // rax
  __int64 v7; // rax
  __m256i v8; // [rsp+8h] [rbp-F0h] BYREF
  __int8 v9; // [rsp+28h] [rbp-D0h]
  __m256i v10; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-90h]
  __int128 v13; // [rsp+70h] [rbp-88h] BYREF
  __int64 v14; // [rsp+80h] [rbp-78h]
  _BYTE v15[24]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v16[16]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-48h]
  __int128 v18; // [rsp+C0h] [rbp-38h]
  __int128 v19; // [rsp+D0h] [rbp-28h]

  v2 = (__int128 *)<alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(
                     *(_QWORD *)(a2 + 8),
                     *(_QWORD *)(a2 + 16));
  v4 = v3;
  if ( v3 == 32 )
  {
    v5 = *v2;
    v19 = v2[1];
    v18 = v5;
    *(_OWORD *)&v10.m256i_u64[2] = v19;
    *(_OWORD *)v10.m256i_i8 = v5;
  }
  else
  {
    forc_crypto::address::handle_string_conversion(&v8, a2);
    if ( v8.m256i_i8[0] )
    {
      result = v8.m256i_i64[1];
      *(_QWORD *)(a1 + 8) = v8.m256i_i64[1];
      *(_BYTE *)a1 = 6;
      return result;
    }
    *(__int32 *)((char *)v10.m256i_i32 + 3) = v8.m256i_i32[1];
    v10.m256i_i32[0] = *(__int32 *)((char *)v8.m256i_i32 + 1);
    *(_OWORD *)((char *)&v10.m256i_u64[1] + 7) = *(_OWORD *)&v8.m256i_u64[2];
    v10.m256i_i8[31] = v9;
    *(__int64 *)((char *)v10.m256i_i64 + 7) = v8.m256i_i64[1];
  }
  *(_QWORD *)&v11 = 0LL;
  v12 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, aAddress, 7LL);
  v14 = v8.m256i_i64[2];
  v13 = *(_OWORD *)v8.m256i_i8;
  <T as alloc::string::SpecToString>::spec_to_string(v15, &v10);
  serde_json::value::to_value(&v8, v15);
  core::result::Result<T,E>::unwrap(v16, &v8, &off_62C088);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v8, &v11, &v13, v16);
  core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v8);
  core::ptr::drop_in_place<alloc::string::String>(v15);
  v17 = v12;
  *(_OWORD *)((char *)&v8.m256i_u32[1] + 3) = v11;
  *(__int64 *)((char *)&v8.m256i_i64[2] + 7) = v12;
  *(_BYTE *)a1 = 5;
  v7 = *(__int64 *)((char *)&v8.m256i_i64[1] + 7);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v8.m256i_i8;
  *(_QWORD *)(a1 + 16) = v7;
  result = *(__int64 *)((char *)&v8.m256i_i64[2] + 7);
  *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v8.m256i_i64[2] + 7);
  if ( v4 == 32 )
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  return result;
}