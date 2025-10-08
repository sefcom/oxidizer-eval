__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::push_dangling(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 inner_mut; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  char **v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h]
  _BYTE v21[16]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v22[64]; // [rsp+28h] [rbp-40h] BYREF

  v19 = a2;
  v20 = a3;
  inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 6, &v19);
  if ( inner_mut )
  {
    if ( *(_DWORD *)(inner_mut + 16) )
    {
      v7 = inner_mut + 16;
      v8 = a1[2];
      if ( !*(_DWORD *)(inner_mut + 28)
        && v8 == ruff_python_formatter::comments::map::InOrderEntry::range(inner_mut + 16) )
      {
        alloc::vec::Vec<T,A>::push(a1, a4, &off_57CD78);
        return ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range(v7);
      }
      v17 = *(_QWORD *)ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(v7, a1[1], v8, a1 + 3)
          + 1LL;
      v18 = a1[5];
      if ( v17 >= v18 )
        core::panicking::panic_bounds_check(v17, v18, &off_57CD48);
      v15 = a1[4] + 24 * v17;
      v16 = &off_57CD60;
    }
    else
    {
      v13 = *(_QWORD *)(inner_mut + 24) + 1LL;
      v14 = a1[5];
      if ( v13 >= v14 )
        core::panicking::panic_bounds_check(v13, v14, &off_57CD90);
      v15 = a1[4] + 24 * v13;
      v16 = &off_57CDA8;
    }
    return alloc::vec::Vec<T,A>::push(v15, a4, v16);
  }
  else
  {
    v10 = a1[2];
    alloc::vec::Vec<T,A>::push(a1, a4, &off_57CD30);
    v11 = v19;
    v12 = v20;
    ruff_python_formatter::comments::map::InOrderEntry::dangling(v21, v10, a1[2]);
    return hashbrown::map::HashMap<K,V,S,A>::insert(v22, a1 + 6, v11, v12, v21);
  }
}