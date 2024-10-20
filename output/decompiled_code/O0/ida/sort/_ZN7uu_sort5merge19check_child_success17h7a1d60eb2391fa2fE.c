_OWORD *__fastcall uu_sort::merge::check_child_success(__int64 a1, const void *a2, size_t a3)
{
  _OWORD *v4; // r12
  __int64 v5; // r12
  void *v6; // r13
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v12; // [rsp+8h] [rbp-90h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  void *dest; // [rsp+18h] [rbp-80h]
  int v15; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+24h] [rbp-74h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int128 v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]
  __int128 v21; // [rsp+60h] [rbp-38h]

  std::process::Child::wait(&v15, a1);
  if ( v15 )
  {
    std::io::error::repr_bitpacked::decode_repr(&v12, v17);
    if ( (unsigned __int8)v12 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v13);
    v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
    if ( (v16 & 0x7F) == 0 && (v16 & 0xFF00) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v12, a3, 0LL);
      v5 = v13;
      if ( v12 )
        alloc::raw_vec::handle_error(v13, dest);
      v6 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
      memcpy(v6, a2, a3);
      *((_QWORD *)&v18 + 1) = v5;
      *(_QWORD *)&v19 = v6;
      *((_QWORD *)&v19 + 1) = a3;
      LOBYTE(v18) = 6;
      v7 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
      v4 = v7;
      if ( !v7 )
        alloc::alloc::handle_alloc_error(8LL, 64LL);
      v8 = v18;
      v9 = v19;
      v10 = v20;
      v7[3] = v21;
      v7[2] = v10;
      v7[1] = v9;
      *v7 = v8;
    }
  }
  core::ptr::drop_in_place<std::process::Child>(a1);
  return v4;
}
