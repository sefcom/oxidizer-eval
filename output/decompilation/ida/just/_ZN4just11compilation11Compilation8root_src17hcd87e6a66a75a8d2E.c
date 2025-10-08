__int64 __fastcall just::compilation::Compilation::root_src(__int64 a1)
{
  __int64 inner; // rax

  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 816, a1 + 744);
  if ( !inner )
    core::option::unwrap_failed(&off_42DCB8);
  return *(_QWORD *)(inner + 24);
}