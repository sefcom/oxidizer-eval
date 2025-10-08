_OWORD *__fastcall uu_tail::args::Settings::from_obsolete_args(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v12; // [rsp+0h] [rbp-98h] BYREF
  _OWORD v13[3]; // [rsp+10h] [rbp-88h] BYREF
  __int128 v14; // [rsp+40h] [rbp-58h]
  _BYTE v15[72]; // [rsp+50h] [rbp-48h] BYREF

  <uu_tail::args::Settings as core::default::Default>::default(&v12);
  if ( *(_BYTE *)(a2 + 10) )
    BYTE12(v14) = a3 != 0;
  v5 = *(_QWORD *)a2;
  v6 = 10LL;
  if ( !*(_BYTE *)(a2 + 9) )
  {
    v6 = *(_QWORD *)a2;
    v5 = *(unsigned __int8 *)(a2 + 8);
  }
  v7 = 4LL;
  if ( *(_BYTE *)(a2 + 9) )
    v7 = *(unsigned __int8 *)(a2 + 8);
  *(_QWORD *)&v12 = v7;
  *((_QWORD *)&v12 + 1) = v5;
  *(_QWORD *)&v13[0] = v6;
  if ( a3 )
    uu_tail::paths::Input::from(v15, a3);
  else
    <uu_tail::paths::Input as core::default::Default>::default(v15);
  alloc::vec::Vec<T,A>::push((char *)v13 + 8, v15);
  a1[4] = v14;
  v8 = v12;
  v9 = v13[0];
  v10 = v13[1];
  a1[3] = v13[2];
  a1[2] = v10;
  a1[1] = v9;
  *a1 = v8;
  return a1;
}