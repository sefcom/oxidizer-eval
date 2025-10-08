bool __fastcall uu_tail::follow::files::FileHandling::files_remaining(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  _BYTE v4[72]; // [rsp+0h] [rbp-48h] BYREF

  hashbrown::map::HashMap<K,V,S,A>::iter(v4, a1 + 24);
  do
  {
    v1 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v4);
    v2 = v1;
  }
  while ( v1
       && !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(
                              *(_QWORD *)(v1 + 8),
                              *(_QWORD *)(v1 + 16))
       && !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(
                              *(_QWORD *)(v2 + 8),
                              *(_QWORD *)(v2 + 16)) );
  return v2 != 0;
}