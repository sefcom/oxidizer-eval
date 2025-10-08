__int64 __fastcall sniffnet::notifications::notify_and_log::hosts_list(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v8; // [rsp+7h] [rbp-71h] BYREF
  char v9[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  unsigned __int64 v11; // [rsp+18h] [rbp-60h]
  _BYTE v12[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[64]; // [rsp+38h] [rbp-40h] BYREF

  v8 = a3;
  hashbrown::map::HashMap<K,V,S,A>::iter(v13);
  core::iter::traits::iterator::Iterator::collect(v9, v13);
  v3 = v10;
  v4 = v11;
  alloc::slice::<impl [T]>::sort_by(v10, v11, &v8);
  v5 = core::cmp::Ord::min(v4, 4LL);
  v6 = 0LL;
  if ( v5 > v4 )
    v3 = 16LL;
  else
    v6 = v5;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12, v3, v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v13, v12);
  core::iter::traits::iterator::Iterator::collect(a1, v13);
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::host::Host,sniffnet::networking::types::data_info_host::DataInfoHost)>>(v9);
}