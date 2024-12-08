__int64 __fastcall uu_ls::cached_uid2usr(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  char v4; // dl
  unsigned __int8 v5; // bp
  __int64 v6; // rax
  unsigned int v8; // [rsp+4h] [rbp-64h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  __int128 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-28h]

  v8 = a2;
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init(
         &uu_ls::cached_uid2usr::UID_CACHE,
         &uu_ls::cached_uid2usr::UID_CACHE);
  std::sync::mutex::Mutex<T>::lock(&v9, v2);
  v3 = core::result::Result<T,E>::unwrap(&v9, &off_212B20);
  v5 = v4 & 1;
  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v9, v3 + 8, a2);
  v13 = v10;
  v14 = v11;
  v12 = v9;
  v6 = std::collections::hash::map::Entry<K,V>::or_insert_with(&v12, &v8);
  <alloc::string::String as core::clone::Clone>::clone(a1, v6);
  return core::ptr::drop_in_place<std::sync::mutex::MutexGuard<std::collections::hash::map::HashMap<u32,alloc::string::String>>>(
           v3,
           v5);
}
