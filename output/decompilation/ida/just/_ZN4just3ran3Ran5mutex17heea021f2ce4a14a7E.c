volatile signed __int64 *__fastcall just::ran::Ran::mutex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  char v7; // dl
  unsigned __int8 v8; // bp
  __int64 v9; // rax
  __int64 v10; // r12
  volatile signed __int64 **v11; // rax
  __int64 v12; // rt0
  char v13; // of
  volatile signed __int64 *v14; // r14
  __int128 v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+10h] [rbp-68h]
  __int128 v18; // [rsp+18h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]

  std::sync::poison::mutex::Mutex<T>::lock(&v18, a1);
  v6 = core::result::Result<T,E>::unwrap(&v18);
  v8 = v7 & 1;
  v9 = just::recipe::Recipe::namepath(a2);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v9);
  v17 = v19;
  v16 = v18;
  ((void (__fastcall *)(__int128 *, __int64, __int128 *))alloc::collections::btree::map::BTreeMap<K,V,A>::entry)(
    &v18,
    v6 + 8,
    &v16);
  v10 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v18);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, a3, a4);
  alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v18, v10, &v16);
  v11 = (volatile signed __int64 **)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v18);
  v12 = _InterlockedIncrement64(*v11);
  if ( (v12 < 0) ^ v13 | (v12 == 0) )
    BUG();
  v14 = *v11;
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v6, v8);
  return v14;
}