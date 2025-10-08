__int64 __fastcall linera_exporter::storage::CanonicalState<C>::flush(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r14
  __int64 result; // rax
  char v6; // cl
  _BYTE v8[40]; // [rsp+8h] [rbp-100h] BYREF
  _OWORD v9[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+70h] [rbp-98h]
  _BYTE v11[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v12[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-40h]
  __int64 v14; // [rsp+D0h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 200);
  seize::guard::LocalGuard::enter(v12, *(_QWORD *)(v3 + 32));
  v14 = v3 + 16;
  papaya::raw::HashMap<K,V,S>::iter(v8, v3 + 16, v12);
  v10 = *(_QWORD *)&v8[32];
  v9[1] = *(_OWORD *)&v8[16];
  v9[0] = *(_OWORD *)v8;
  core::iter::traits::iterator::Iterator::collect(v11, v9);
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8, v11);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v9, v8);
    if ( !*((_QWORD *)&v9[0] + 1) )
      break;
    alloc::vec::Vec<T,A>::push(a2 + 152, (char *)v9 + 8);
  }
  core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<usize,linera_exporter::common::CanonicalBlock>>(v8);
  v4 = 0x8000000000000014LL;
  core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v13);
  <linera_views::views::log_view::LogView<C,T> as linera_views::views::View>::flush(v8, a2, a3);
  result = v8[0];
  if ( v8[0] == 12 )
  {
    v4 = 0x800000000000001CLL;
  }
  else
  {
    v6 = v8[1];
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v8[32];
    *(_OWORD *)(a1 + 26) = *(_OWORD *)&v8[18];
    *(_OWORD *)(a1 + 10) = *(_OWORD *)&v8[2];
    *(_BYTE *)(a1 + 8) = result;
    *(_BYTE *)(a1 + 9) = v6;
  }
  *(_QWORD *)a1 = v4;
  return result;
}