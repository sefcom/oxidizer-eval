__int64 __fastcall just::function::prepend(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE v8[8]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h]
  __int64 v10; // [rsp+18h] [rbp-70h]
  _QWORD v11[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  _BYTE v14[40]; // [rsp+48h] [rbp-40h] BYREF
  __int16 v15; // [rsp+70h] [rbp-18h]

  v11[0] = a3;
  v11[1] = a4;
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v14, a5, a6);
  v13 = a6;
  v15 = 1;
  v12 = (unsigned __int64)v11;
  core::iter::traits::iterator::Iterator::collect(v8, &v12);
  alloc::str::join_generic_copy(&v12, v9, v10, asc_6E4F0, 1LL);
  *(_QWORD *)(a1 + 24) = v13;
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v8);
  return a1;
}