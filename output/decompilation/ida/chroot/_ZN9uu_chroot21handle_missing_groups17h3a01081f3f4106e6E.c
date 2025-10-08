void __fastcall uu_chroot::handle_missing_groups(__int64 a1, __int64 a2)
{
  __gid_t *v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __gid_t *groups; // [rsp+8h] [rbp-20h]
  size_t n; // [rsp+10h] [rbp-18h]

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      uu_chroot::supplemental_gids(&v5);
      v2 = groups;
      v4 = uu_chroot::set_supplemental_gids(groups, n);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 8) = v4;
        *(_DWORD *)a1 = 12;
      }
      else
      {
        *(_DWORD *)a1 = 14;
      }
    }
    else
    {
      uu_chroot::supplemental_gids(&v5);
      if ( n )
      {
        v2 = groups;
        v3 = uu_chroot::set_supplemental_gids(groups, n);
        if ( v3 )
        {
          *(_DWORD *)a1 = 12;
          *(_QWORD *)(a1 + 8) = v3;
        }
        else
        {
          *(_DWORD *)a1 = 14;
        }
      }
      else
      {
        *(_DWORD *)a1 = 7;
        *(_DWORD *)(a1 + 4) = HIDWORD(a2);
        v2 = groups;
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v5, v2);
  }
  else
  {
    *(_DWORD *)a1 = 14;
  }
}