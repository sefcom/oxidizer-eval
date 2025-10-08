__int64 __fastcall zoxide::cmd::import::import_z(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 inclusive; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 back; // rax
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 end; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v21; // [rsp+0h] [rbp-118h] BYREF
  __int64 v22; // [rsp+8h] [rbp-110h]
  _QWORD v23[2]; // [rsp+10h] [rbp-108h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-D0h]
  __int64 v28; // [rsp+50h] [rbp-C8h]
  _QWORD v29[2]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v30[48]; // [rsp+68h] [rbp-B0h] BYREF
  __int16 v31; // [rsp+98h] [rbp-80h]
  _QWORD v32[2]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v33[48]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v34; // [rsp+E0h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v33, 10LL, a2, a3);
  v32[0] = 0LL;
  v32[1] = a3;
  v34 = 0;
  inclusive = core::str::iter::SplitInternal<P>::next_inclusive(v32);
  if ( !inclusive )
  {
LABEL_23:
    if ( *(_BYTE *)(a1 + 56) == 1 )
      zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(a1);
    return 0LL;
  }
  while ( 1 )
  {
    v6 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(inclusive, v5);
    v23[0] = v6;
    v23[1] = v7;
    if ( v7 )
      break;
LABEL_3:
    inclusive = core::str::iter::SplitInternal<P>::next_inclusive(v32);
    if ( !inclusive )
      goto LABEL_23;
  }
  v8 = v7;
  <char as core::str::pattern::Pattern>::into_searcher(v30, 124LL, v6, v7);
  v29[0] = 0LL;
  v29[1] = v8;
  v31 = 1;
  v28 = 2LL;
  back = core::str::iter::SplitInternal<P>::next_back(v29);
  anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
    &v21,
    back,
    v10,
    v23);
  if ( !v21 )
    return v22;
  v24[0] = v21;
  v24[1] = v22;
  core::num::<impl u64>::from_ascii_radix(&v21);
  v11 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v21, v24);
  v13 = v12;
  if ( (v11 & 1) != 0 )
    return v13;
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      v28 = 0LL;
      end = core::str::iter::SplitInternal<P>::get_end(v29);
    }
    else
    {
      --v28;
      end = core::str::iter::SplitInternal<P>::next_back(v29);
    }
    v15 = end;
  }
  else
  {
    v15 = 0LL;
  }
  anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
    &v21,
    v15,
    v12,
    v23);
  v16 = v22;
  if ( !v21 )
    return v16;
  v25[0] = v21;
  v25[1] = v22;
  core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v21);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v26, &v21, v25);
  v16 = v27;
  if ( (v26[0] & 1) != 0 )
    return v16;
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      v28 = 0LL;
      v18 = core::str::iter::SplitInternal<P>::get_end(v29);
    }
    else
    {
      --v28;
      v18 = core::str::iter::SplitInternal<P>::next_back(v29);
    }
    v19 = v18;
  }
  else
  {
    v19 = 0LL;
  }
  anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(
    &v21,
    v19,
    v17,
    v23);
  if ( v21 )
  {
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(a1, v21, v22, v13);
    goto LABEL_3;
  }
  return v22;
}