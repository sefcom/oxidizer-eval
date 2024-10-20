__int64 __fastcall uu_sort::get_rand_string(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rax
  bool v7; // zf
  _QWORD *v8; // rdi
  char v10; // [rsp+7h] [rbp-11h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-10h] BYREF

  v2 = __readfsqword(0);
  v3 = *(_QWORD *)(v2 - 32);
  if ( v3 == 1 )
  {
    v4 = v2;
    v5 = (_QWORD **)(v2 - 24);
  }
  else if ( v3 || (v5 = (_QWORD **)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(v2 - 32, 0LL)) == 0LL )
  {
    core::result::unwrap_failed(
      anon_ae7d027233a4cf631ecd7d99e41f08fc_18_llvm_8840552875692662641,
      70LL,
      &v10,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_8_llvm_8840552875692662641,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_20_llvm_8840552875692662641);
  }
  v6 = *v5;
  v7 = (*v6)++ == -1LL;
  if ( v7 )
    BUG();
  v11 = v6;
  rand::rng::Rng::sample(a1, &v11, v3, v4);
  v8 = v11;
  v7 = (*v11)-- == 1LL;
  if ( v7 )
  {
    v7 = v8[1]-- == 1LL;
    if ( v7 )
      _rust_dealloc(v8, 368LL, 16LL);
  }
  return a1;
}
