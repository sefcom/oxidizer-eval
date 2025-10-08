__int64 __fastcall just::function::shell(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v10; // [rsp+0h] [rbp-98h] BYREF
  __int64 v11; // [rsp+8h] [rbp-90h]
  __int64 v12; // [rsp+10h] [rbp-88h]
  _BYTE v13[24]; // [rsp+18h] [rbp-80h] BYREF
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]

  core::iter::traits::iterator::Iterator::chain(&v15, a3, a4, a5, a5 + 24 * a6);
  core::iter::traits::iterator::Iterator::collect(&v10, &v15);
  v8 = v11;
  just::evaluator::Evaluator::run_command((__int64)v13, *a2, a3, a4, v11, v12);
  if ( __OFSUB__(0LL, *(_QWORD *)v13) )
  {
    v14 = *(_OWORD *)&v13[8];
    just::function::shell::{{closure}}(&v15, &v14);
    *(_QWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v13[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v13;
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
    v10,
    v8);
  return a1;
}