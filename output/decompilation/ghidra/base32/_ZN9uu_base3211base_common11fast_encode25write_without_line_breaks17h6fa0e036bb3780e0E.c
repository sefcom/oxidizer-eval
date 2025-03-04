long _ZN9uu_base3211base_common11fast_encode25write_without_line_breaks17h6fa0e036bb3780e0E
               (long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,char param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h690597712d12ddddE
                    ();
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar1);
  if (lVar2 == 0) {
    if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001c5ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_2,
                         "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
                         ,1);
      return lVar2;
    }
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_8truncate17h73fe8c7a0c90d99eE(param_1,0);
    lVar2 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return lVar2;
}