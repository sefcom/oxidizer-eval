__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::leading_dangling_trailing(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 inner; // rax
  __int64 v5; // rbp
  int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdx
  int v11; // esi
  bool v12; // cf
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]

  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 6);
  if ( inner )
  {
    v5 = inner + 16;
    v6 = *(_DWORD *)(inner + 16);
    if ( v6 )
    {
      v7 = a2[1];
      v8 = a2[2];
      v9 = inner;
      v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              (unsigned int)(v6 - 1),
              (unsigned int)(*(_DWORD *)(inner + 20) - 1),
              v7,
              v8,
              &off_57CF70);
      v31 = v10;
      v11 = *(_DWORD *)(v9 + 24);
      v12 = v11 == 0;
      v13 = (unsigned int)(v11 - 1);
      if ( v12 )
        v13 = (unsigned int)(*(_DWORD *)(v9 + 20) - 1);
      v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              (unsigned int)(*(_DWORD *)(v9 + 20) - 1),
              v13,
              v7,
              v8,
              &off_57CF88);
      v16 = v15;
      v17 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range(v5);
      result = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                 v17,
                 v18,
                 v7,
                 v8,
                 &off_57CFA0);
      v21 = v31;
      v22 = v32;
    }
    else
    {
      v23 = *(_QWORD *)(inner + 24);
      v24 = a2[5];
      if ( v23 >= v24 )
        core::panicking::panic_bounds_check(v23, v24, &off_57CFB8);
      v25 = v23 + 1;
      if ( v23 + 1 >= v24 )
        core::panicking::panic_bounds_check(v23 + 1, v24, &off_57CFD0);
      v26 = v23 + 2;
      if ( v23 + 2 >= v24 )
        core::panicking::panic_bounds_check(v23 + 2, v24, &off_57CFE8);
      v27 = a2[4];
      v28 = 3 * v23;
      v22 = *(_QWORD *)(v27 + 24 * v23 + 8);
      v21 = *(_QWORD *)(v27 + 8 * v28 + 16);
      v29 = 3 * v25;
      v14 = *(_QWORD *)(v27 + 8 * v29 + 8);
      v16 = *(_QWORD *)(v27 + 8 * v29 + 16);
      v30 = 3 * v26;
      result = *(_QWORD *)(v27 + 8 * v30 + 8);
      v20 = *(_QWORD *)(v27 + 8 * v30 + 16);
    }
  }
  else
  {
    v21 = 0LL;
    v22 = 4LL;
    v14 = 4LL;
    v16 = 0LL;
    result = 4LL;
    v20 = 0LL;
  }
  *a1 = v22;
  a1[1] = v21;
  a1[2] = v14;
  a1[3] = v16;
  a1[4] = result;
  a1[5] = v20;
  return result;
}