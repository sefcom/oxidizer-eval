char __fastcall ruff_python_formatter::comments::Comments::contains_comments(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 inner; // rcx
  char result; // al
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  __int64 v7; // [rsp+10h] [rbp-18h]

  v3 = *a1;
  v6 = 61LL;
  v7 = a2;
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v3 + 64);
  result = 1;
  if ( !inner )
  {
    v6 = (__int64)a1;
    LOBYTE(v7) = 0;
    ruff_python_ast::generated::AnyNodeRef::visit_source_order(a2, &v6);
    return v7;
  }
  return result;
}