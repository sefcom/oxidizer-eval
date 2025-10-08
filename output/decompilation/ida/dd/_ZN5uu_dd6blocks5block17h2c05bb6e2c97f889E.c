__int64 __fastcall uu_dd::blocks::block(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  __int64 v16; // [rsp+18h] [rbp-60h] BYREF
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  _QWORD v19[2]; // [rsp+38h] [rbp-40h] BYREF
  char v20; // [rsp+48h] [rbp-30h]

  v16 = a4;
  v19[0] = a2;
  v19[1] = a3;
  v20 = 0;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  ((void (__fastcall *)(__int128 *, _QWORD *, __int64 *, __int64 *, __int64))core::iter::traits::iterator::Iterator::fold)(
    &v17,
    v19,
    &v13,
    &v16,
    a6 + 24);
  v8 = v18;
  if ( v18 && (!a5 || !*(_QWORD *)(a6 + 8)) )
  {
    v9 = *((_QWORD *)&v17 + 1);
    v10 = *(_QWORD *)(*((_QWORD *)&v17 + 1) + 24 * v18 - 16);
    v11 = v10 + *(_QWORD *)(*((_QWORD *)&v17 + 1) + 24 * v18 - 8);
    v13 = v10;
    v14 = v11;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v13) )
    {
      v18 = v8 - 1;
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>(*(_QWORD *)(v9 + 24 * (v8 - 1)), v10);
    }
  }
  result = v18;
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  return result;
}