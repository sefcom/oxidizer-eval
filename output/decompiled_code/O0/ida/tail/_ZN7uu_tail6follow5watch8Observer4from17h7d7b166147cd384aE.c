__int64 __fastcall uu_tail::follow::watch::Observer::from(__int64 a1, __int64 a2)
{
  char v2; // bp
  char v3; // r13
  char v4; // r12
  __int64 v5; // r15
  __int128 *v6; // rax
  char v7; // al
  char v9; // [rsp+Fh] [rbp-99h] BYREF
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v13; // [rsp+60h] [rbp-48h]
  char v14; // [rsp+70h] [rbp-38h]
  char v15; // [rsp+71h] [rbp-37h]

  v2 = *(_BYTE *)(a2 + 72);
  v3 = *(_BYTE *)(a2 + 76);
  v4 = *(_BYTE *)(a2 + 73);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v6 )
    core::result::unwrap_failed(
      anon_05a4d4ca64bdea474ebd4b0eb3197a7a_4_llvm_11384070901547909942,
      70LL,
      &v9,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_6_llvm_11384070901547909942);
  v10 = *v6;
  ++*(_QWORD *)v6;
  hashbrown::raw::RawTableInner::fallible_with_capacity(v12, &v9, 240LL, 16LL, v5, 1LL);
  v7 = *(_BYTE *)(a2 + 74) & 1;
  v13 = v10;
  *(_QWORD *)&v11 = 0x8000000000000000LL;
  v14 = v7;
  v15 = 0;
  uu_tail::follow::watch::Observer::new(a1, v2 & 1, v3, v4 & 1, &v11, *(_DWORD *)(a2 + 68));
  return a1;
}
