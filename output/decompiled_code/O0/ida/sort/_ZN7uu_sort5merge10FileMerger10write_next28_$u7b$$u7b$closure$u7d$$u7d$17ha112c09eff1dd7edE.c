char __fastcall uu_sort::merge::FileMerger::write_next::{{closure}}(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  const void **v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r10
  unsigned __int64 v12; // rsi
  __int64 *v13; // r14
  unsigned __int64 v14; // rdi
  char result; // al

  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
    goto LABEL_15;
  if ( (v3 & 7) != 0 )
    goto LABEL_15;
  v4 = *(_QWORD *)(a3 + 16);
  if ( v4 > 0x555555555555555LL )
    goto LABEL_15;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 24);
  if ( v4 <= v6 )
    core::panicking::panic_bounds_check(
      *(_QWORD *)(*a1 + 24),
      v4,
      &anon_1499ffac6f47c489d51642f1e0e6062b_97_llvm_17008735617955824143);
  v7 = (const void **)(v3 + 24 * v6);
  v8 = a1[1];
  if ( (*(_BYTE *)(v8 + 132) & 1) == 0 )
    return uu_sort::Line::print(v7, (_QWORD *)a1[3], v8);
  v9 = (_QWORD *)a1[2];
  if ( !*v9 )
    return uu_sort::Line::print(v7, (_QWORD *)a1[3], v8);
  v10 = *(_QWORD **)(*v9 + 16LL);
  v11 = v10[4];
  if ( !v11 || (v11 & 7) != 0 || (v12 = v10[5], v12 > 0x555555555555555LL) )
LABEL_15:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  v13 = a1;
  v14 = v9[1];
  if ( v12 <= v14 )
    core::panicking::panic_bounds_check(v14, v12, &anon_1499ffac6f47c489d51642f1e0e6062b_98_llvm_17008735617955824143);
  result = uu_sort::compare_by(
             (const void **)(v11 + 24 * v14),
             v7,
             v8,
             v10 + 6,
             (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 48LL));
  if ( result )
  {
    a1 = v13;
    v8 = v13[1];
    return uu_sort::Line::print(v7, (_QWORD *)a1[3], v8);
  }
  return result;
}
