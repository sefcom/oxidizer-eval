__int64 __fastcall zoxide::cmd::import::import_autojump(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  double v12; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+10h] [rbp-C8h]
  __int64 v14; // [rsp+18h] [rbp-C0h]
  _QWORD v15[2]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v18[48]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v19; // [rsp+80h] [rbp-58h]
  _BYTE v20[80]; // [rsp+88h] [rbp-50h] BYREF

  <char as core::str::pattern::Pattern>::into_searcher(v18, 10LL, a2, a3);
  v17[0] = 0LL;
  v17[1] = a3;
  v19 = 0;
  for ( i = core::str::iter::SplitInternal<P>::next_inclusive(v17);
        i;
        i = core::str::iter::SplitInternal<P>::next_inclusive(v17) )
  {
    v6 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(i, v5);
    v15[0] = v6;
    v15[1] = v7;
    if ( v7 )
    {
      core::str::<impl str>::split_once(v20, v6);
      anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
        &v11,
        v20,
        v15);
      if ( !v11 )
        return *(_QWORD *)&v12;
      v8 = v13;
      v9 = v14;
      v16[0] = v11;
      *(double *)&v16[1] = v12;
      core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v20);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v11, v20, v16);
      if ( (_DWORD)v11 == 1 )
        return *(_QWORD *)&v12;
      zoxide::cmd::import::sigmoid(v12);
      zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(a1, v8, v9, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 56) == 1 )
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(a1);
  return 0LL;
}