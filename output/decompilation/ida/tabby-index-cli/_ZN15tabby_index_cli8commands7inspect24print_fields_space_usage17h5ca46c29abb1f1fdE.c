unsigned int *__fastcall tabby_index_cli::commands::inspect::print_fields_space_usage(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdx
  char **v7; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-B8h]
  _QWORD *v9; // [rsp+18h] [rbp-B0h]
  __int64 v10; // [rsp+20h] [rbp-A8h]
  __int64 v11; // [rsp+28h] [rbp-A0h]
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v15[11]; // [rsp+70h] [rbp-58h] BYREF

  v13[0] = *(_QWORD *)(a2 + 48);
  v15[0] = v13;
  v15[1] = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
  v7 = &off_584CC8;
  v8 = 2LL;
  v11 = 0LL;
  v9 = v15;
  v10 = 1LL;
  std::io::stdio::_print(&v7);
  tantivy::space_usage::PerFieldSpaceUsage::fields(v15, a2);
  result = (unsigned int *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v15);
  if ( result )
  {
    v4 = v3;
    do
    {
      v14[0] = tantivy::schema::schema::Schema::get_field_name(a1, *result);
      v14[1] = v5;
      v12 = *(_QWORD *)(v4 + 24);
      v13[0] = v14;
      v13[1] = <&T as core::fmt::Display>::fmt;
      v13[2] = &v12;
      v13[3] = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
      v7 = &off_584E18;
      v8 = 3LL;
      v11 = 0LL;
      v9 = v13;
      v10 = 2LL;
      std::io::stdio::_print(&v7);
      result = (unsigned int *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v15);
      v4 = v6;
    }
    while ( result );
  }
  return result;
}