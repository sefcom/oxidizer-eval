__int64 __fastcall uu_sync::fdatasync(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // [rsp+8h] [rbp-80h] BYREF
  __int64 *v7; // [rsp+10h] [rbp-78h] BYREF
  __int64 *v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+20h] [rbp-68h]
  __int64 *v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-58h] BYREF
  int fd; // [rsp+34h] [rbp-54h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  __int128 v15; // [rsp+48h] [rbp-40h]

  v1 = *a1;
  v3 = a1[2];
  v7 = (__int64 *)a1[1];
  v2 = v7;
  v8 = v7;
  v9 = v1;
  v10 = &v7[3 * v3];
  if ( v3 )
  {
    do
    {
      v8 = v2 + 3;
      if ( *v2 == 0x8000000000000000LL )
        break;
      v14 = *v2;
      v15 = *(_OWORD *)(v2 + 1);
      std::fs::File::open(&v11, &v14);
      if ( v11 )
      {
        v6 = v13;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v6, &off_103240, &off_1032A8);
      }
      v4 = fd;
      syscall(75LL, (unsigned int)fd);
      std::sys::pal::unix::fs::debug_assert_fd_is_open(v4);
      close(v4);
      v2 = v8;
    }
    while ( v8 != v10 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v7);
  return 0LL;
}
