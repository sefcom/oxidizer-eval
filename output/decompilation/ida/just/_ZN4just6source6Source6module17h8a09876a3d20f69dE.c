__int64 __fastcall just::source::Source::module(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r12
  _QWORD *v8; // rsi
  __int64 v9; // rax
  int v11; // [rsp+4h] [rbp-C4h]
  __int128 v12; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-A8h]
  __int128 v14; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-90h]
  __int128 v16; // [rsp+60h] [rbp-68h] BYREF
  __int64 v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+80h] [rbp-48h] BYREF
  __int64 v19; // [rsp+90h] [rbp-38h]

  v11 = *(_DWORD *)(a2 + 120);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v14, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16, &v14);
  v6 = *(_QWORD *)(a4 + 8);
  v7 = *(_QWORD *)(a4 + 16);
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v14, v6, v7);
  v13 = v15;
  v12 = v14;
  core::iter::traits::iterator::Iterator::chain(&v14, &v16, &v12);
  core::iter::traits::iterator::Iterator::collect(&v18, &v14);
  v8 = (_QWORD *)(a2 + 96);
  if ( __OFSUB__(0LL, *v8) )
    v8 = 0LL;
  core::option::Option<T>::map_or_else(&v14, v8, a3, a3);
  v13 = v15;
  v12 = v14;
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v14, v6, v7);
  v17 = v15;
  v16 = v14;
  v9 = std::path::Path::parent(v6, v7);
  if ( !v9 )
    core::option::unwrap_failed(&off_431008);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v14, v9);
  *(_QWORD *)(a1 + 88) = v15;
  *(_OWORD *)(a1 + 72) = v14;
  *(_DWORD *)(a1 + 120) = v11 + 1;
  *(_OWORD *)a1 = v18;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 8LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 96) = v12;
  *(_QWORD *)(a1 + 112) = v13;
  *(_OWORD *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 64) = v17;
  return core::ptr::drop_in_place<std::path::PathBuf>(a4);
}