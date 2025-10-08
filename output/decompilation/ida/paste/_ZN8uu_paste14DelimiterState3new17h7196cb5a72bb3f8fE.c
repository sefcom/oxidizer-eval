void __fastcall uu_paste::DelimiterState::new(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  __int128 v8; // [rsp+0h] [rbp-28h]

  if ( !a3 )
    goto LABEL_7;
  if ( a3 != 1 )
  {
    v8 = *a2;
    v7 = a3;
    core::iter::adapters::cycle::Cycle<I>::new(a1 + 40, a2, &a2[a3]);
    v3 = v7;
    *(_OWORD *)(a1 + 8) = v8;
    v4 = 2LL;
    v5 = 32LL;
    v6 = 24LL;
    goto LABEL_6;
  }
  v3 = *((_QWORD *)a2 + 1);
  if ( v3 )
  {
    a2 = *(__int128 **)a2;
    v4 = 1LL;
    v5 = 16LL;
    v6 = 8LL;
LABEL_6:
    *(_QWORD *)(a1 + v6) = a2;
    *(_QWORD *)(a1 + v5) = v3;
    a3 = v4;
LABEL_7:
    *(_QWORD *)a1 = a3;
    return;
  }
  *(_QWORD *)a1 = 0LL;
}