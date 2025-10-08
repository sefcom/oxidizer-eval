__int64 __fastcall sniffnet::report::get_report_entries::get_searched_entries(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // r15
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  bool v10; // al
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v20; // [rsp+18h] [rbp-C0h]
  __int128 v21; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h]
  _OWORD *v25; // [rsp+58h] [rbp-80h]
  _OWORD v26[7]; // [rsp+60h] [rbp-78h] BYREF

  <sniffnet::networking::types::data_info::DataInfo as core::default::Default>::default(v26);
  hashbrown::map::HashMap<K,V,S,A>::iter(&v21);
  v23 = a2;
  v24 = a2 + 800;
  v25 = v26;
  core::iter::traits::iterator::Iterator::collect(&v18, &v21);
  v2 = v19;
  v3 = v20;
  alloc::slice::<impl [T]>::sort_by(v19, v20, a2);
  v4 = *(_QWORD *)(a2 + 2384);
  v5 = core::cmp::Ord::min(20 * v4, v3);
  v6 = v4 == 0;
  v7 = v4 - 1;
  if ( v6 )
    v7 = 0LL;
  v8 = 4 * v7;
  v9 = v5 - 5 * v8;
  v10 = v5 < 5 * v8 || v5 > v3;
  v11 = 80 * v8 + v2;
  if ( v10 )
    v9 = 0LL;
  v12 = 8LL;
  if ( !v10 )
    v12 = v11;
  core::iter::traits::iterator::Iterator::collect(&v21, v12, v12 + 16 * v9);
  v13 = v20;
  *(_OWORD *)(a1 + 96) = v26[4];
  v14 = v26[0];
  v15 = v26[1];
  v16 = v26[2];
  *(_OWORD *)(a1 + 80) = v26[3];
  *(_OWORD *)(a1 + 64) = v16;
  *(_OWORD *)(a1 + 48) = v15;
  *(_OWORD *)(a1 + 32) = v14;
  *(_QWORD *)(a1 + 16) = v22;
  *(_OWORD *)a1 = v21;
  *(_QWORD *)(a1 + 24) = v13;
  return core::ptr::drop_in_place<alloc::vec::Vec<winit::platform_impl::linux::wayland::state::WindowCompositorUpdate>>(
           v18,
           v19);
}