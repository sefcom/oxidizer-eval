__int64 __fastcall forc_crypto::keys::get_public_key::handler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v5[34]; // [rsp+0h] [rbp-168h] BYREF
  _OWORD v6[2]; // [rsp+22h] [rbp-146h]
  __int128 v7; // [rsp+50h] [rbp-118h] BYREF
  __int64 v8; // [rsp+60h] [rbp-108h]
  _BYTE v9[24]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v10; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+98h] [rbp-D0h]
  _OWORD v12[2]; // [rsp+A0h] [rbp-C8h] BYREF
  char v13; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+C9h] [rbp-9Fh]
  __int128 v15; // [rsp+D9h] [rbp-8Fh]
  _BYTE v16[31]; // [rsp+E9h] [rbp-7Fh]
  _BYTE v17[32]; // [rsp+108h] [rbp-60h] BYREF
  _BYTE v18[64]; // [rsp+128h] [rbp-40h] BYREF

  *(_QWORD *)&v5[16] = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v5 = *(_OWORD *)a2;
  forc_crypto::args::read_content_filepath_or_stdin(&v13, v5);
  fuel_crypto::hasher::Hasher::hash(v18, &v13);
  fuel_crypto::secp256::signature::Signature::recover(v5, a2 + 24, v18);
  if ( v5[0] == 1 )
  {
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v5[1]);
    *(_BYTE *)a1 = 6;
  }
  else
  {
    *(_OWORD *)&v16[15] = *(_OWORD *)((char *)v6 + 15);
    *(_OWORD *)v16 = v6[0];
    v15 = *(_OWORD *)&v5[18];
    v14 = *(_OWORD *)&v5[2];
    v13 = v5[1];
    fuel_crypto::secp256::public::PublicKey::hash(v17, &v13);
    *(_QWORD *)&v10 = 0LL;
    v11 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, aPublickey, 9LL);
    v8 = *(_QWORD *)&v5[16];
    v7 = *(_OWORD *)v5;
    <T as alloc::string::SpecToString>::spec_to_string(v9, &v13);
    serde_json::value::to_value(v5, v9);
    core::result::Result<T,E>::unwrap(v12, v5, &off_62EF60);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v5, &v10, &v7, v12);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v5);
    core::ptr::drop_in_place<alloc::string::String>(v9);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, aAddress_0, 7LL);
    v8 = *(_QWORD *)&v5[16];
    v7 = *(_OWORD *)v5;
    <T as alloc::string::SpecToString>::spec_to_string(v9, v17);
    serde_json::value::to_value(v5, v9);
    core::result::Result<T,E>::unwrap(v12, v5, &off_62EF60);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v5, &v10, &v7, v12);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v5);
    core::ptr::drop_in_place<alloc::string::String>(v9);
    v12[0] = v10;
    *(_OWORD *)&v5[7] = v10;
    *(_QWORD *)&v5[23] = v11;
    *(_BYTE *)a1 = 5;
    v2 = *(_QWORD *)&v5[15];
    v3 = *(_QWORD *)&v5[23];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v5;
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 24) = v3;
  }
  return a1;
}