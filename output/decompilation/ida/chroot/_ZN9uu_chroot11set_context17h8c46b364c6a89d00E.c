__int64 __fastcall uu_chroot::set_context(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // eax
  __gid_t v14; // ebp
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v22[36]; // [rsp+Ch] [rbp-6Ch]
  _BYTE v23[40]; // [rsp+30h] [rbp-48h] BYREF

  result = uu_chroot::enter_chroot(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a1 + 96));
  if ( !result )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 != 0x8000000000000003LL )
    {
      v5 = v2 ^ 0x8000000000000000LL;
      v6 = 3LL;
      if ( v5 < 3 )
        v6 = v5;
      switch ( v6 )
      {
        case 0LL:
          goto LABEL_3;
        case 1LL:
          uu_chroot::name_to_uid((int *)v23, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72));
          v7 = *(_DWORD *)v23;
          LODWORD(v8) = *(_DWORD *)&v23[4];
          if ( *(_DWORD *)v23 != 14 )
            goto LABEL_38;
          v9 = 0LL;
          if ( *(_QWORD *)(a1 + 24) != 0x8000000000000000LL )
            v9 = a1 + 24;
          uu_chroot::set_supplemental_gids_with_strategy(
            (__int64)v23,
            ((unsigned __int64)*(unsigned int *)&v23[4] << 32) + 1,
            v9);
          v4 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 != 14 )
            goto LABEL_36;
          v10 = a1 + 56;
          v11 = uu_chroot::set_gid(v8);
          if ( v11 )
          {
            uu_chroot::set_context::{{closure}}(&v21, v10, v11);
            v4 = v21;
            *(_OWORD *)v23 = *(_OWORD *)v22;
            *(_OWORD *)&v23[16] = *(_OWORD *)&v22[16];
            *(_DWORD *)&v23[32] = *(_DWORD *)&v22[32];
            if ( v21 != 14 )
              goto LABEL_35;
          }
          v12 = uu_chroot::set_uid(v8);
          if ( !v12 )
            return 0LL;
          goto LABEL_33;
        case 2LL:
          uu_chroot::name_to_gid((int *)v23, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72));
          v13 = *(_DWORD *)v23;
          v14 = *(_DWORD *)&v23[4];
          if ( *(_DWORD *)v23 != 14 )
            goto LABEL_39;
          v15 = a1 + 24;
          if ( *(_QWORD *)(a1 + 24) == 0x8000000000000000LL )
            v15 = 0LL;
          uu_chroot::set_supplemental_gids_with_strategy((__int64)v23, 0LL, v15);
          v4 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 != 14 )
            goto LABEL_36;
          v16 = uu_chroot::set_gid(v14);
          if ( !v16 )
            return 0LL;
          uu_chroot::set_context::{{closure}}(&v21, a1 + 56, v16);
          goto LABEL_34;
        case 3LL:
          uu_chroot::name_to_uid((int *)v23, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
          v7 = *(_DWORD *)v23;
          v8 = *(unsigned int *)&v23[4];
          if ( *(_DWORD *)v23 != 14 )
          {
LABEL_38:
            *(_OWORD *)&v22[20] = *(_OWORD *)&v23[24];
            *(_OWORD *)&v22[4] = *(_OWORD *)&v23[8];
            v21 = v7;
            *(_DWORD *)v22 = v8;
            return alloc::boxed::Box<T>::new(&v21);
          }
          uu_chroot::name_to_gid((int *)v23, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
          v13 = *(_DWORD *)v23;
          v14 = *(_DWORD *)&v23[4];
          if ( *(_DWORD *)v23 != 14 )
          {
LABEL_39:
            *(_OWORD *)&v22[20] = *(_OWORD *)&v23[24];
            *(_OWORD *)&v22[4] = *(_OWORD *)&v23[8];
            v21 = v13;
            *(_DWORD *)v22 = v14;
            return alloc::boxed::Box<T>::new(&v21);
          }
          v17 = 0LL;
          if ( *(_QWORD *)(a1 + 24) != 0x8000000000000000LL )
            v17 = a1 + 24;
          uu_chroot::set_supplemental_gids_with_strategy((__int64)v23, (v8 << 32) | 0x101, v17);
          v4 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 != 14 )
            goto LABEL_36;
          v18 = uu_chroot::set_gid(v14);
          if ( v18 )
          {
            uu_chroot::set_context::{{closure}}(&v21, a1 + 72, v18);
            v4 = v21;
            *(_OWORD *)v23 = *(_OWORD *)v22;
            *(_OWORD *)&v23[16] = *(_OWORD *)&v22[16];
            *(_DWORD *)&v23[32] = *(_DWORD *)&v22[32];
            if ( v21 != 14 )
              goto LABEL_35;
          }
          v12 = uu_chroot::set_uid(v8);
          if ( v12 )
          {
            v10 = a1 + 48;
LABEL_33:
            uu_chroot::set_context::{{closure}}(&v21, v10, v12);
LABEL_34:
            v4 = v21;
            *(_OWORD *)v23 = *(_OWORD *)v22;
            *(_OWORD *)&v23[16] = *(_OWORD *)&v22[16];
            *(_DWORD *)&v23[32] = *(_DWORD *)&v22[32];
            if ( v21 != 14 )
            {
LABEL_35:
              *(_DWORD *)&v22[32] = *(_DWORD *)&v23[32];
              v19 = *(_OWORD *)v23;
              v20 = *(_OWORD *)&v23[16];
              goto LABEL_37;
            }
          }
          break;
      }
      return 0LL;
    }
LABEL_3:
    v3 = a1 + 24;
    if ( *(_QWORD *)(a1 + 24) == 0x8000000000000000LL )
      v3 = 0LL;
    uu_chroot::set_supplemental_gids_with_strategy((__int64)v23, 0LL, v3);
    v4 = *(_DWORD *)v23;
    if ( *(_DWORD *)v23 == 14 )
      return 0LL;
LABEL_36:
    *(_DWORD *)&v22[32] = *(_DWORD *)&v23[36];
    v19 = *(_OWORD *)&v23[4];
    v20 = *(_OWORD *)&v23[20];
LABEL_37:
    *(_OWORD *)&v22[16] = v20;
    *(_OWORD *)v22 = v19;
    v21 = v4;
    return alloc::boxed::Box<T>::new(&v21);
  }
  return result;
}