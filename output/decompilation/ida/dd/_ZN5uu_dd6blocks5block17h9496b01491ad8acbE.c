__int64 __fastcall uu_dd::blocks::block(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 *v15; // rax
  __int128 v16; // xmm0
  __int64 result; // rax
  __int128 v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int128 v20; // [rsp+18h] [rbp-60h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-40h] BYREF
  char v24; // [rsp+48h] [rbp-30h]

  v22 = a4;
  v23[0] = a2;
  v23[1] = a3;
  v24 = 0;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 8LL;
  v19 = 0LL;
  ((void (__fastcall *)(__int128 *, _QWORD *, __int128 *, __int64 *, __int64, __int64))core::iter::traits::iterator::Iterator::fold)(
    &v20,
    v23,
    &v18,
    &v22,
    a6 + 24,
    a6);
  if ( v21 && (!a5 || !*(_QWORD *)(a6 + 8)) )
  {
    v8 = *((_QWORD *)&v20 + 1);
    v9 = v21 - 1;
    v10 = *(_QWORD *)(*((_QWORD *)&v20 + 1) + 24 * (v21 - 1) + 8)
        + *(_QWORD *)(*((_QWORD *)&v20 + 1) + 24 * (v21 - 1) + 16);
    *(_QWORD *)&v18 = *(_QWORD *)(*((_QWORD *)&v20 + 1) + 24 * (v21 - 1) + 8);
    *((_QWORD *)&v18 + 1) = v10;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v18) )
    {
      v15 = (__int128 *)(v8 + 24 * v9);
      v21 = v9;
      v16 = *v15;
      v19 = *((_QWORD *)v15 + 2);
      v18 = v16;
      ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>)(
        &v18,
        v23,
        v11,
        v12,
        v13,
        v14);
    }
  }
  result = v21;
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return result;
}
