__int64 __fastcall uu_sort::get_rand_string(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  char v7; // [rsp+Fh] [rbp-19h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-18h] BYREF

  v2 = (_QWORD *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v2 || (v3 = v2, alloc::rc::RcInnerPtr::inc_strong(*v2), !*v3) )
    core::result::unwrap_failed(
      anon_431e63a222f002cdbe3510f4a5bd446f_17_llvm_12804663064488683472,
      70LL,
      &v7,
      &anon_431e63a222f002cdbe3510f4a5bd446f_52_llvm_12804663064488683472,
      &anon_431e63a222f002cdbe3510f4a5bd446f_19_llvm_12804663064488683472);
  v8 = (_QWORD *)*v3;
  rand::distributions::other::<impl rand::distributions::distribution::Distribution<[T; _]> for rand::distributions::Standard>::sample(
    a1,
    &v7,
    &v8);
  --*v8;
  v4 = v8;
  if ( !*v8 && v8[1]-- == 1LL )
    _rust_dealloc(v4, 368LL, 16LL);
  return a1;
}
