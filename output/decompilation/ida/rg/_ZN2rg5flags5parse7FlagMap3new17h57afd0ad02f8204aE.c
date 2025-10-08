__int64 __fastcall rg::flags::parse::FlagMap::new(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bp
  _BYTE *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  char **v18; // r8
  _QWORD *v19; // rdx
  _QWORD v20[3]; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD v21[2]; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+28h] [rbp-A0h] BYREF
  _OWORD v23[3]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v24[12]; // [rsp+68h] [rbp-60h] BYREF

  v4 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v23, a3, v4, v5);
  v20[0] = a2;
  v20[1] = a2 + 40 * a3;
  v20[2] = 0LL;
  result = ((__int64 (__fastcall *)(_QWORD *))<core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next)(v20);
  if ( v7 )
  {
    v8 = result;
    do
    {
      v9 = *(_QWORD *)(v7 + 16);
      if ( v9 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, v9);
        v21[0] = hashbrown::map::HashMap<K,V,S,A>::insert(v23, v24, v8);
        v21[1] = v10;
        if ( v21[0] )
        {
          v18 = &off_3EB610;
          v19 = v21;
          goto LABEL_11;
        }
      }
      else
      {
        v14 = *(_BYTE *)(v7 + 24);
        v15 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL);
        if ( !v15 )
          alloc::alloc::handle_alloc_error(1LL, 1LL);
        *v15 = v14;
        v24[0] = 1LL;
        v24[1] = v15;
        v24[2] = 1LL;
        v22[0] = hashbrown::map::HashMap<K,V,S,A>::insert(v23, v24, v8);
        v22[1] = v10;
        if ( v22[0] )
        {
          v18 = &off_3EB628;
          v19 = v22;
LABEL_11:
          v24[0] = 0LL;
          core::panicking::assert_failed(0LL, &unk_62620, v19, v24, v18);
        }
      }
      result = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64))<core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next)(
                 v20,
                 v24,
                 v10,
                 v11,
                 v12,
                 v13);
      v8 = result;
    }
    while ( v7 );
  }
  v16 = v23[0];
  v17 = v23[1];
  a1[2] = v23[2];
  a1[1] = v17;
  *a1 = v16;
  return result;
}