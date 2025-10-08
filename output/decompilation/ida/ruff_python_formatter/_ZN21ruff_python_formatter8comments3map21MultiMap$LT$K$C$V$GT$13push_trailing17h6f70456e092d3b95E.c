__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::push_trailing(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 inner_mut; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  char **v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  __int64 v21; // [rsp+10h] [rbp-58h]
  _BYTE v22[16]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v23[64]; // [rsp+28h] [rbp-40h] BYREF

  v20 = a2;
  v21 = a3;
  inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 6, &v20);
  if ( inner_mut )
  {
    if ( *(_DWORD *)(inner_mut + 16) )
    {
      v7 = inner_mut + 16;
      v8 = ruff_python_formatter::comments::map::InOrderEntry::range(inner_mut + 16);
      v9 = a1[2];
      if ( v8 == v9 )
      {
        alloc::vec::Vec<T,A>::push(a1, a4, &off_57CE08);
        return ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range(v7);
      }
      v18 = *(_QWORD *)ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(v7, a1[1], v9, a1 + 3)
          + 2LL;
      v19 = a1[5];
      if ( v18 >= v19 )
        core::panicking::panic_bounds_check(v18, v19, &off_57CDD8);
      v16 = a1[4] + 24 * v18;
      v17 = &off_57CDF0;
    }
    else
    {
      v14 = *(_QWORD *)(inner_mut + 24) + 2LL;
      v15 = a1[5];
      if ( v14 >= v15 )
        core::panicking::panic_bounds_check(v14, v15, &off_57CE20);
      v16 = a1[4] + 24 * v14;
      v17 = &off_57CE38;
    }
    return alloc::vec::Vec<T,A>::push(v16, a4, v17);
  }
  else
  {
    v11 = a1[2];
    alloc::vec::Vec<T,A>::push(a1, a4, &off_57CDC0);
    v12 = v20;
    v13 = v21;
    ruff_python_formatter::comments::map::InOrderEntry::trailing(v22, v11, a1[2]);
    return hashbrown::map::HashMap<K,V,S,A>::insert(v23, a1 + 6, v12, v13, v22);
  }
}