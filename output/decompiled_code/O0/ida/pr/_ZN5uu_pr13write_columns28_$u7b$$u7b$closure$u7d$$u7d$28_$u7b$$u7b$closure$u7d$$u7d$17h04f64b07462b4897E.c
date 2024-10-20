        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int128 v10; // rax
  bool v11; // cf
  __int128 v13; // rax
  unsigned __int64 result; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax

  if ( (**(_BYTE **)a1 & 1) != 0 )
  {
    v15 = *(unsigned __int64 **)(a1 + 32);
    v16 = *v15 * (unsigned __int128)**(unsigned __int64 **)(a1 + 24);
    if ( !is_mul_ok(*v15, **(_QWORD **)(a1 + 24)) )
      core::panicking::panic_const::panic_const_mul_overflow(
        &anon_7c75ec29d226220b36fc1f3bbd3b01ef_191_llvm_17389174869910011146,
        a2,
        *((_QWORD *)&v16 + 1),
        v15,
        a6,
        a7,
        a3);
    v17 = a2 + v16;
    if ( __CFADD__(a2, (_QWORD)v16) )
      core::panicking::panic_const::panic_const_add_overflow(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_191_llvm_17389174869910011146);
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) == 1LL )
    {
      v7 = *(_QWORD *)(a1 + 48);
      v8 = *(_QWORD *)(v7 + 8);
      if ( !v8 || (v8 & 7) != 0 || (v9 = *(_QWORD *)(v7 + 16), v9 >> 60) )
        core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
      v10 = **(unsigned __int64 **)(a1 + 56) * (unsigned __int128)a2;
      if ( !is_mul_ok(**(_QWORD **)(a1 + 56), a2) )
        core::panicking::panic_const::panic_const_mul_overflow(
          &anon_7c75ec29d226220b36fc1f3bbd3b01ef_189_llvm_17389174869910011146,
          a2,
          *((_QWORD *)&v10 + 1),
          v8,
          v9,
          a7,
          a3);
      *((_QWORD *)&v10 + 1) = *(_QWORD *)(a1 + 24);
      v11 = __CFADD__(**((_QWORD **)&v10 + 1), (_QWORD)v10);
      *(_QWORD *)&v10 = **((_QWORD **)&v10 + 1) + v10;
      if ( v11 )
        core::panicking::panic_const::panic_const_add_overflow(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_189_llvm_17389174869910011146);
      v13 = (unsigned __int64)(v8 + 8 * v10);
      if ( (unsigned __int64)v13 < v9 )
        *((_QWORD *)&v13 + 1) = v13;
      *(_QWORD *)&v13 = &anon_950cfcae45c35517223fb4df16fabba4_235_llvm_13970589784840883217;
      if ( *((_QWORD *)&v13 + 1) )
        *(_QWORD *)&v13 = *((_QWORD *)&v13 + 1);
      return *(_QWORD *)v13;
    }
    v18 = *(unsigned __int64 **)(a1 + 56);
    if ( !is_mul_ok(*v18, a2) )
      core::panicking::panic_const::panic_const_mul_overflow(
        &anon_7c75ec29d226220b36fc1f3bbd3b01ef_188_llvm_17389174869910011146,
        a2,
        (*v18 * (unsigned __int128)a2) >> 64,
        v18,
        a6,
        a7,
        a3);
    v19 = *v18 * a2;
    v20 = *(_QWORD **)(a1 + 24);
    v11 = __CFADD__(*v20, v19);
    v17 = *v20 + v19;
    if ( v11 )
      core::panicking::panic_const::panic_const_add_overflow(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_188_llvm_17389174869910011146);
  }
  result = 0LL;
  if ( v17 < *(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 8) + (v17 << 6);
  return result;
}
