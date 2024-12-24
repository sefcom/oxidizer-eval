__int64 __fastcall uu_mv::handle_multiple_paths(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v9[6]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+40h] [rbp-58h] BYREF
  __int128 v11; // [rsp+48h] [rbp-50h]
  char v12; // [rsp+58h] [rbp-40h]
  _BYTE v13[24]; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp-20h]

  if ( *(_BYTE *)(a3 + 48) )
  {
    if ( a2 <= 2 )
      core::panicking::panic_bounds_check(2LL, a2, &off_187270);
    v3 = *(_OWORD *)(a1 + 56);
    v10 = 1LL;
    v11 = v3;
    v12 = 1;
    v8[0] = &v10;
    v8[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v9[0] = &off_187288;
    v9[1] = 1LL;
    v9[4] = 0LL;
    v9[2] = v8;
    v9[3] = 1LL;
    core::option::Option<T>::map_or_else(v13, v9);
    v14 = 1;
    return alloc::boxed::Box<T>::new(v13);
  }
  else
  {
    if ( !a2 )
      core::option::unwrap_failed(&off_187240);
    v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2);
    return uu_mv::move_files_into_dir(
             v6,
             v7,
             *(_QWORD *)(a1 + 24 * (a2 - 1) + 8),
             *(__int128 **)(a1 + 24 * (a2 - 1) + 16),
             a3);
  }
}
