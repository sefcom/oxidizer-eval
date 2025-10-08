__int64 __fastcall just::config::Config::parse_module_path(__int64 a1, __int64 a2)
{
  __int64 *v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r15
  char v6; // bp
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int128 v9; // xmm0
  __int64 result; // rax
  __int128 v11; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+18h] [rbp-A0h]
  __int128 v13; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int128 v15; // [rsp+38h] [rbp-80h] BYREF
  __int128 v16; // [rsp+48h] [rbp-70h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+78h] [rbp-40h] BYREF
  __int64 v19; // [rsp+88h] [rbp-30h]

  <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v15);
  v17 = *(_QWORD *)(a2 + 56);
  core::iter::traits::iterator::Iterator::collect(&v11, &v15);
  if ( v12 == 1
    && (v3 = (__int64 *)*((_QWORD *)&v11 + 1),
        (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(
                           32LL,
                           **((_QWORD **)&v11 + 1),
                           *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL))) )
  {
    v4 = *v3;
    v5 = v3[1];
    <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v16, v4, v5);
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = v5;
    LOWORD(v17) = 1;
    core::iter::traits::iterator::Iterator::collect(&v13, &v15);
    v6 = 1;
  }
  else
  {
    v14 = v12;
    v13 = v11;
    v6 = 0;
  }
  v7 = *((_QWORD *)&v13 + 1);
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from(&v15, *((_QWORD *)&v13 + 1), v14);
  if ( __OFSUB__(0LL, (_QWORD)v15) )
  {
    core::iter::traits::iterator::Iterator::collect(&v18, a2);
    *(_QWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    v8 = 0x8000000000000002LL;
  }
  else
  {
    v9 = v15;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v9;
    v8 = 0x8000000000000007LL;
  }
  *(_QWORD *)a1 = v8;
  result = core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
             v13,
             v7);
  if ( v6 )
    return core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
             v11,
             *((_QWORD *)&v11 + 1));
  return result;
}