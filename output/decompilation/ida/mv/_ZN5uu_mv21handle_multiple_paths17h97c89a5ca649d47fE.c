__int64 __fastcall uu_mv::handle_multiple_paths(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-88h] BYREF
  char v11; // [rsp+28h] [rbp-70h]
  _QWORD v12[6]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp-20h]

  if ( *(_BYTE *)(a3 + 48) )
  {
    if ( a2 <= 2 )
      core::panicking::panic_bounds_check(2LL, a2, &off_1418B8);
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 64);
    v10[0] = 1LL;
    v10[1] = v3;
    v10[2] = v4;
    v11 = 1;
    v9[0] = v10;
    v9[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v12[0] = &off_141878;
    v12[1] = 1LL;
    v12[4] = 0LL;
    v12[2] = v9;
    v12[3] = 1LL;
    core::option::Option<T>::map_or_else(v13, v12);
    v14 = 1;
    return alloc::boxed::Box<T>::new(v13);
  }
  else
  {
    if ( !a2 )
      core::option::unwrap_failed(&off_141888);
    v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2);
    return uu_mv::move_files_into_dir(
             v7,
             v8,
             *(_QWORD *)(a1 + 24 * (a2 - 1) + 8),
             *(_QWORD *)(a1 + 24 * (a2 - 1) + 16),
             a3);
  }
}