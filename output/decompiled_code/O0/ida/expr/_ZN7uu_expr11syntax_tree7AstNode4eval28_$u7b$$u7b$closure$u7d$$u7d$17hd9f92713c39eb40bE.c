__int64 __fastcall uu_expr::syntax_tree::AstNode::eval::{{closure}}(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( (_DWORD)v2 == 1 )
      goto LABEL_8;
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 || (v3 & 7) != 0 || *(_QWORD *)(a1 + 16) >> 60 )
      core::panicking::panic_nounwind(anon_3192fd2b3cdbb0a05347a2be3e369164_2_llvm_3898926832826071515, 162LL);
    v6 = <I as core::iter::traits::collect::IntoIterator>::into_iter(v3, v3 + 8LL * *(_QWORD *)(a1 + 16));
    v7 = v4;
    if ( !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6) )
LABEL_8:
      v2 = 1LL;
    else
      v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6) == 0;
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v6, a1);
  if ( v7 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a1 + 16, v6, v7, v8);
  return v2;
}
