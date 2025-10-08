__int64 __fastcall zoxide::db::stream::Stream::next(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r13
  _QWORD *v7; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rsi

  v1 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a1 + 104) >= v1 )
    return 0LL;
  v2 = 0LL;
  while ( 1 )
  {
    v3 = v1 - 1;
    *(_QWORD *)(a1 + 112) = v3;
    v4 = *(_QWORD *)(a1 + 96);
    v5 = *(_QWORD *)(v4 + 16);
    if ( v3 >= v5 )
      core::panicking::panic_bounds_check(v3, v5, &off_1349B0);
    v6 = *(_QWORD *)(v4 + 8);
    if ( !(unsigned __int8)zoxide::db::stream::Stream::filter_by_keywords(
                             *(_QWORD *)(a1 + 8),
                             *(_QWORD *)(a1 + 16),
                             *(_QWORD *)(v6 + 40 * v3 + 8),
                             *(_QWORD *)(v6 + 40 * v3 + 16)) )
      goto LABEL_4;
    v7 = (_QWORD *)(v6 + 40 * v3);
    if ( !(unsigned __int8)zoxide::db::stream::Stream::filter_by_base_dir(a1, v7[1], v7[2]) )
      goto LABEL_4;
    if ( (unsigned __int8)zoxide::db::stream::Stream::filter_by_exclude(
                            *(_QWORD *)(a1 + 32),
                            *(_QWORD *)(a1 + 40),
                            v7[1],
                            v7[2]) )
      break;
LABEL_3:
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(*(_QWORD *)(a1 + 96), v3);
LABEL_4:
    v1 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 104) >= v1 )
      return v2;
  }
  if ( !(unsigned __int8)zoxide::db::stream::Stream::filter_by_exists(
                           *(unsigned int *)(a1 + 88),
                           *(unsigned __int8 *)(a1 + 89),
                           v7[1],
                           v7[2]) )
  {
    if ( v7[4] >= *(_QWORD *)(a1 + 80) )
      goto LABEL_4;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(v9 + 16);
  if ( v3 >= v10 )
    core::panicking::panic_bounds_check(v3, v10, &off_1349C8);
  return *(_QWORD *)(v9 + 8) + 40 * v3;
}