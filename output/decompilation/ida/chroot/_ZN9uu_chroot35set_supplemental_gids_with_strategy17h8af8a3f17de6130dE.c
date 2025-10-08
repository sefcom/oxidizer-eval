void __fastcall uu_chroot::set_supplemental_gids_with_strategy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // [rsp+8h] [rbp-70h] BYREF
  __gid_t *groups; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  int v15; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-54h]
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-40h]

  if ( !a3 )
  {
    uu_chroot::handle_missing_groups(a1, a2);
    return;
  }
  v12 = 0LL;
  groups = (__gid_t *)&::groups;
  n = 0LL;
  v3 = *(_QWORD *)(a3 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a3 + 8);
    v5 = 24 * v3;
    v6 = 0LL;
    do
    {
      uu_chroot::name_to_gid(&v15, *(_QWORD *)(v4 + v6 + 8), *(_QWORD *)(v4 + v6 + 16));
      v7 = v15;
      v8 = v16;
      if ( v15 != 14 )
      {
        v11 = v17;
        *(_OWORD *)(a1 + 24) = v18;
        *(_OWORD *)(a1 + 8) = v11;
        *(_DWORD *)a1 = v7;
        *(_DWORD *)(a1 + 4) = v8;
        goto LABEL_13;
      }
      alloc::vec::Vec<T,A>::push(&v12, v16);
      v6 += 24LL;
    }
    while ( v5 != v6 );
    v9 = uu_chroot::set_supplemental_gids(groups, n);
    if ( v9 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v9 = uu_chroot::set_supplemental_gids((__gid_t *)&::groups, 0LL);
  if ( !v9 )
  {
LABEL_7:
    v10 = 14;
    goto LABEL_11;
  }
LABEL_10:
  *(_QWORD *)(a1 + 8) = v9;
  v10 = 12;
LABEL_11:
  *(_DWORD *)a1 = v10;
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v12, groups);
}