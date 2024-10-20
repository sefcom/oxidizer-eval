__int64 __fastcall uu_tail::follow::files::FileHandling::files_remaining(_QWORD *a1)
{
  unsigned int v1; // ebp
  _OWORD *v2; // r14
  __int64 v3; // r15
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 impl; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD v11[3]; // [rsp+8h] [rbp-60h] BYREF
  __int16 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  _OWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_OWORD *)a1[3];
  v3 = (__int64)v2 + a1[4] + 1;
  v14[0] = *v2;
  v4 = core::core_arch::x86::sse2::_mm_movemask_epi8(v14);
  v5 = a1[6];
  v11[0] = v2;
  v11[1] = v2 + 1;
  v11[2] = v3;
  v12 = ~v4;
  v13 = v5;
  while ( v13 )
  {
    impl = hashbrown::raw::RawIterRange<T>::next_impl(v11);
    --v13;
    if ( !impl )
      break;
    v7 = impl;
    if ( !*(_QWORD *)(impl - 232) || *(__int64 *)(impl - 224) < 0 )
      goto LABEL_12;
    LOBYTE(v1) = 1;
    if ( (unsigned __int8)uu_tail::paths::path_is_tailable() )
      return v1;
    v8 = *(_QWORD *)(v7 - 232);
    if ( !v8 || (v9 = *(_QWORD *)(v7 - 224), v9 < 0) )
LABEL_12:
      core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
    if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v8, v9) )
      return v1;
  }
  return 0;
}
