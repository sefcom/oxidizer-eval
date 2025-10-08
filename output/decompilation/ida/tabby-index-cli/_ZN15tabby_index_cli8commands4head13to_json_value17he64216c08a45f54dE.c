__int64 __fastcall tabby_index_cli::commands::head::to_json_value(_OWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  _OWORD *v6; // r13
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v10; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-B8h]
  _BOOL8 v12; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-A0h]
  unsigned __int128 v14; // [rsp+30h] [rbp-98h]
  _BOOL8 v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  __int64 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+60h] [rbp-68h]
  _OWORD v20[2]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v21[8]; // [rsp+88h] [rbp-40h] BYREF
  _BOOL8 v22; // [rsp+90h] [rbp-38h]
  __int64 v23; // [rsp+98h] [rbp-30h]

  tantivy::schema::document::Document::to_json(v21);
  v12 = v22;
  v13 = v23;
  v14 = 0LL;
  v15 = v22;
  v16 = v23;
  serde_json::de::from_trait(v20, &v12);
  core::result::Result<T,E>::expect(&v10, v20);
  if ( (_BYTE)v10 != 5 )
    core::option::expect_failed(aExpectedObject, 15LL, &off_584C20);
  v3 = v11;
  v4 = *((_QWORD *)&v10 + 1);
  v5 = *((_QWORD *)&v10 + 1) != 0LL;
  if ( *((_QWORD *)&v10 + 1) )
    v4 = *((_QWORD *)&v11 + 1);
  v12 = *((_QWORD *)&v10 + 1) != 0LL;
  v13 = 0LL;
  v14 = __PAIR128__(v11, *((unsigned __int64 *)&v10 + 1));
  v15 = v12;
  v16 = 0LL;
  v17 = *((_QWORD *)&v10 + 1);
  v18 = v11;
  v19 = v4;
  while ( <alloc::collections::btree::map::IterMut<K,V> as core::iter::traits::iterator::Iterator>::next(
            &v12,
            v4,
            v5,
            v3) )
  {
    v6 = (_OWORD *)v5;
    if ( *(_BYTE *)v5 == 4 && *(_QWORD *)(v5 + 24) == 1LL )
    {
      v4 = *(_QWORD *)(v5 + 16);
      <serde_json::value::Value as core::clone::Clone>::clone(v20, v4);
      core::ptr::drop_in_place<serde_json::value::Value>(v6);
      v7 = v20[0];
      v6[1] = v20[1];
      *v6 = v7;
    }
  }
  v8 = v10;
  a1[1] = v11;
  *a1 = v8;
  core::ptr::drop_in_place<alloc::string::String>(v21);
  return core::ptr::drop_in_place<tantivy::schema::document::default_document::CompactDoc>(a2);
}