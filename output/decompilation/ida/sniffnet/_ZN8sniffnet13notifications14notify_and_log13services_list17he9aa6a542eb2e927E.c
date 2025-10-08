__int64 __fastcall sniffnet::notifications::notify_and_log::services_list(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  char v9; // [rsp+7h] [rbp-71h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  unsigned __int64 v12; // [rsp+18h] [rbp-60h]
  _BYTE v13[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[64]; // [rsp+38h] [rbp-40h] BYREF

  v9 = a3;
  hashbrown::map::HashMap<K,V,S,A>::iter(v14);
  core::iter::traits::iterator::Iterator::collect(&v10, v14);
  v3 = v11;
  v4 = v12;
  alloc::slice::<impl [T]>::sort_by(v11, v12, &v9);
  v5 = core::cmp::Ord::min(v4, 4LL);
  v6 = 0LL;
  if ( v5 <= v4 )
    v6 = v5;
  v7 = 16LL;
  if ( v5 <= v4 )
    v7 = v3;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, v7, v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v14, v13);
  core::iter::traits::iterator::Iterator::collect(a1, v14);
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::service::Service,sniffnet::networking::types::data_info::DataInfo)>>(
           v10,
           v3);
}