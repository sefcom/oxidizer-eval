__int64 __fastcall uu_dd::blocks::block(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int128 *v11; // rax
  __int128 v12; // xmm0
  __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+10h] [rbp-68h]
  __int128 v16; // [rsp+18h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-40h] BYREF
  char v20; // [rsp+48h] [rbp-30h]

  v18 = a4;
  v19[0] = a2;
  v19[1] = a3;
  v20 = 0;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 8LL;
  v15 = 0LL;
  ((void (__fastcall *)(__int128 *, _QWORD *, __int128 *, __int64 *, __int64))core::iter::traits::iterator::Iterator::fold)(
    &v16,
    v19,
    &v14,
    &v18,
    a6 + 24);
  if ( v17 && (!a5 || !*(_QWORD *)(a6 + 8)) )
  {
    v8 = *((_QWORD *)&v16 + 1);
    v9 = v17 - 1;
    v10 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 24 * (v17 - 1) + 8)
        + *(_QWORD *)(*((_QWORD *)&v16 + 1) + 24 * (v17 - 1) + 16);
    *(_QWORD *)&v14 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 24 * (v17 - 1) + 8);
    *((_QWORD *)&v14 + 1) = v10;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v14) )
    {
      v11 = (__int128 *)(v8 + 24 * v9);
      v17 = v9;
      v12 = *v11;
      v15 = *((_QWORD *)v11 + 2);
      v14 = v12;
      ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>)(&v14);
    }
  }
  result = v17;
  *(_QWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return result;
}
