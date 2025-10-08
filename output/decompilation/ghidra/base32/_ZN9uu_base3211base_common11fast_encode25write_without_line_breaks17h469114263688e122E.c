long _ZN9uu_base3211base_common11fast_encode25write_without_line_breaks17h469114263688e122E
               (long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,char param_4,
               char param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hf17d47ca8c7d0746E
                    ();
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar1);
  if (lVar2 == 0) {
    if (param_4 == '\0') {
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_8truncate17had30ab5ba989df72E(param_1);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else if (param_5 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00169ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,"\n",1);
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}