__int64 __fastcall sniffnet::report::get_report_entries::get_host_entries(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v10; // [rsp+Eh] [rbp-5Ah] BYREF
  char v11; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[64]; // [rsp+28h] [rbp-40h] BYREF

  v10 = a3;
  v11 = a4;
  hashbrown::map::HashMap<K,V,S,A>::iter(v15);
  core::iter::traits::iterator::Iterator::collect(&v12, v15);
  v4 = v13;
  v5 = v14;
  alloc::slice::<impl [T]>::sort_by(v13, v14, &v11, &v10);
  v6 = core::cmp::Ord::min(v5, 30LL);
  v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v4, v5);
  core::iter::traits::iterator::Iterator::collect(a1, v7, v7 + 16 * v8);
  return core::ptr::drop_in_place<alloc::vec::Vec<winit::platform_impl::linux::wayland::state::WindowCompositorUpdate>>(
           v12,
           v13);
}