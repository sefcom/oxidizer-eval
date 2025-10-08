__int64 __fastcall bat::assets::build_assets::print_unlinked_contexts(__int64 a1)
{
  _BYTE v2[16]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v3; // [rsp+18h] [rbp-E0h]
  __int128 v4; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v5; // [rsp+30h] [rbp-C8h]
  __int64 v6; // [rsp+38h] [rbp-C0h]
  __int64 v7; // [rsp+40h] [rbp-B8h]
  _QWORD v8[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v10; // [rsp+70h] [rbp-88h]
  _QWORD v11[3]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v12; // [rsp+98h] [rbp-60h]

  syntect::parsing::syntax_set::SyntaxSet::find_unlinked_contexts(v2, a1);
  if ( !v3 )
    return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(v2);
  v11[0] = &off_6CE0A8;
  v11[1] = 1LL;
  v11[2] = 8LL;
  v12 = 0LL;
  std::io::stdio::_print(v11);
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v11, v2);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v4, v11);
    if ( __OFSUB__(0LL, (_QWORD)v4) )
      break;
    v10 = v5;
    v9 = v4;
    v8[0] = &v9;
    v8[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v4 = &off_6CE0B8;
    *((_QWORD *)&v4 + 1) = 2LL;
    v7 = 0LL;
    v5 = v8;
    v6 = 1LL;
    std::io::stdio::_print(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
  }
  return core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(v11);
}