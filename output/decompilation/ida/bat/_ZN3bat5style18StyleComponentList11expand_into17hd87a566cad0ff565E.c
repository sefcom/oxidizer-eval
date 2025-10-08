__int64 __fastcall bat::style::StyleComponentList::expand_into(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  char *v9; // rax
  __int64 v10; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 2 * v4;
    v7 = 0LL;
    do
    {
      while ( 1 )
      {
        v9 = (char *)bat::style::StyleComponent::components(*(_BYTE *)(v5 + v7 + 1), a3);
        if ( *(_BYTE *)(v5 + v7) >= 2u )
          break;
        result = <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(a2, v9, &v9[v10]);
        v7 += 2LL;
        if ( v6 == v7 )
          return result;
      }
      result = hashbrown::set::HashSet<T,S,A>::retain(a2, v9);
      v7 += 2LL;
    }
    while ( v6 != v7 );
  }
  return result;
}