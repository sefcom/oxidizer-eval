__int64 __fastcall just::assignment_resolver::AssignmentResolver::resolve_assignments(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  _QWORD v15[7]; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v16[9]; // [rsp+40h] [rbp-B8h] BYREF
  _OWORD v17[4]; // [rsp+88h] [rbp-70h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-30h]

  v15[3] = a2;
  v15[4] = 0LL;
  v15[6] = 0LL;
  v15[0] = 0LL;
  v15[1] = 8LL;
  v15[2] = 0LL;
  v6 = *a2;
  v7 = a2[1];
  v8 = 0LL;
  v9 = *a2;
  LOBYTE(a5) = *a2 != 0;
  if ( *a2 )
    v9 = a2[2];
  LOBYTE(v8) = *a2 != 0;
  v16[0] = v8;
  v16[1] = 0LL;
  v16[2] = v6;
  v16[3] = v7;
  v16[4] = v8;
  v16[5] = 0LL;
  v16[6] = v6;
  v16[7] = v7;
  v16[8] = v9;
  while ( 1 )
  {
    v10 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(
                      v16,
                      a2,
                      v8,
                      v7,
                      a5);
    if ( !v10 )
      break;
    a2 = v15;
    just::assignment_resolver::AssignmentResolver::resolve_assignment(v17, v15, *v10, v10[1]);
    if ( BYTE8(v18) != 37 )
    {
      *(_OWORD *)(a1 + 64) = v18;
      v11 = v17[0];
      v12 = v17[1];
      v13 = v17[2];
      *(_OWORD *)(a1 + 48) = v17[3];
      *(_OWORD *)(a1 + 32) = v13;
      *(_OWORD *)(a1 + 16) = v12;
      *(_OWORD *)a1 = v11;
      return core::ptr::drop_in_place<just::assignment_resolver::AssignmentResolver>(v15);
    }
  }
  *(_BYTE *)(a1 + 72) = 37;
  return core::ptr::drop_in_place<just::assignment_resolver::AssignmentResolver>(v15);
}