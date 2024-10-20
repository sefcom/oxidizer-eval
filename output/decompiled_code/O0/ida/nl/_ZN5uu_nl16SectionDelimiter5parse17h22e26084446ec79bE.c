__int64 __fastcall uu_nl::SectionDelimiter::parse(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int128 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r12
  __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v12; // [rsp+18h] [rbp-D0h]
  __int64 v13; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+28h] [rbp-C0h]
  __int64 v15; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-A8h]
  __int64 v17; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v18[48]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v19; // [rsp+88h] [rbp-60h]
  __int64 v20; // [rsp+98h] [rbp-50h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-48h]
  __int64 v22; // [rsp+A8h] [rbp-40h]
  __int64 v23; // [rsp+B0h] [rbp-38h]

  *((_QWORD *)&v4 + 1) = a3;
  v6 = *((_QWORD *)&v4 + 1);
  BYTE8(v4) = 3;
  if ( a2 && a4 )
  {
    v12 = a4;
    core::str::pattern::StrSearcher::new(&v17, a1, a2, v6);
    v7 = 0LL;
    while ( 1 )
    {
      if ( v17 )
      {
        v8 = (__int64 *)v18;
        core::str::pattern::TwoWaySearcher::next((unsigned int)&v13, (unsigned int)v18, v20, v21, v22, v23, v19 == -1);
        if ( !v13 )
          break;
      }
      else
      {
        do
        {
          v8 = &v17;
          <core::str::pattern::StrSearcher as core::str::pattern::Searcher>::next(&v15, &v17);
        }
        while ( v15 == 1 );
        if ( v15 )
        {
          v9 = 0LL;
        }
        else
        {
          v14 = v16;
          v9 = 1LL;
        }
        v13 = v9;
        if ( !v9 )
          break;
      }
      if ( *((_QWORD *)&v14 + 1) < (unsigned __int64)v14 || v21 < *((_QWORD *)&v14 + 1) )
        core::panicking::panic_nounwind(anon_f2fb85536fffd0a461a91483864f6ad6_30_llvm_13329461704207359836, 102LL);
      if ( !v20 )
        break;
      if ( !++v7 )
        core::panicking::panic_const::panic_const_add_overflow(&anon_f2fb85536fffd0a461a91483864f6ad6_33_llvm_13329461704207359836);
    }
    v4 = v12 * (unsigned __int128)v7;
    if ( !is_mul_ok(v12, v7) )
      core::panicking::panic_const::panic_const_mul_overflow(&off_299C18, v8, *((_QWORD *)&v4 + 1));
    if ( v7 == 1 )
    {
      BYTE8(v4) = ((_QWORD)v4 == a2) ^ 3;
    }
    else if ( v7 == 2 )
    {
      BYTE8(v4) = (2 * ((_QWORD)v4 != a2)) | 1;
    }
    else
    {
      BYTE8(v4) = 3;
      if ( v7 == 3 )
        DWORD2(v4) = 3 * ((_QWORD)v4 != a2);
    }
  }
  return DWORD2(v4);
}
