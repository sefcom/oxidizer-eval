__int64 __fastcall bat::style::StyleComponentList::to_components(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v7; // [rsp+Fh] [rbp-A9h] BYREF
  __int128 v8; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+20h] [rbp-98h]
  __int128 v10; // [rsp+30h] [rbp-88h]
  __int128 v11; // [rsp+40h] [rbp-78h] BYREF
  __int128 v12; // [rsp+50h] [rbp-68h]
  __int128 v13; // [rsp+60h] [rbp-58h]
  _BYTE v14[64]; // [rsp+78h] [rbp-40h] BYREF

  v7 = a3;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v11);
  v10 = v13;
  v9 = v12;
  v8 = v11;
  v4 = bat::style::StyleComponent::components(0LL, a3);
  <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v8, v4, v4 + v5);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v14, a2);
  v13 = v10;
  v12 = v9;
  v11 = v8;
  return <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(a1, v14, &v11, &v7);
}