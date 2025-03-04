bool __fastcall uu_tail::follow::files::FileHandling::files_remaining(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  hashbrown::map::HashMap<K,V,S,A>::iter(v6, a1 + 24);
  do
  {
    v1 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v6);
    v2 = v1;
    if ( !v1 )
      break;
    v3 = *(_QWORD *)(v1 + 8);
    v4 = *(_QWORD *)(v1 + 16);
    if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(v3, v4) )
      break;
  }
  while ( !(unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v3, v4) );
  return v2 != 0;
}
