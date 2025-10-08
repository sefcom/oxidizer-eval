__int64 __fastcall just::justfile::Justfile::public_recipes(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  _QWORD v11[12]; // [rsp+18h] [rbp-60h] BYREF

  v5 = a2[87];
  v6 = a2[88];
  v7 = v5;
  if ( v5 )
    v7 = a2[89];
  v11[0] = v5 != 0;
  v11[1] = 0LL;
  v11[2] = v5;
  v11[3] = v6;
  v11[4] = v11[0];
  v11[5] = 0LL;
  v11[6] = v5;
  v11[7] = v6;
  v11[8] = v7;
  core::iter::traits::iterator::Iterator::collect(&v9, v11);
  if ( (a3 & 1) != 0 )
    alloc::slice::<impl [T]>::sort_by_key(*((_QWORD *)&v9 + 1), v10);
  result = v10;
  *(_QWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  return result;
}