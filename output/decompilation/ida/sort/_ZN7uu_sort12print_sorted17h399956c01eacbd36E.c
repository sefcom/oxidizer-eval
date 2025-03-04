__int64 __fastcall uu_sort::print_sorted(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int128 *v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[2]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v14[80]; // [rsp+18h] [rbp-50h] BYREF

  v6 = a4;
  uu_sort::Output::into_write((__int64)v14, a4);
  v13[0] = a1;
  v13[1] = a2;
  while ( 1 )
  {
    v7 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v13);
    if ( !v7 )
      break;
    v6 = (__int128 *)v14;
    uu_sort::Line::print(v7, (__int64)v14, a3);
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
           v14,
           v6,
           v8,
           v9,
           v10,
           v11);
}
