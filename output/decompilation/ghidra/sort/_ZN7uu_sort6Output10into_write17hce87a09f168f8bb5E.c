void _ZN7uu_sort6Output10into_write17hce87a09f168f8bb5E(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_24;
  undefined8 local_20;
  
  local_24 = *(undefined4 *)(param_2 + 0x18);
                    /* try { // try from 001d0516 to 001d0531 has its CatchHandler @ 001d0575 */
  local_20 = (*(code *)PTR__ZN3std2fs4File7set_len17h8625c3bc8a96431dE_00297598)(&local_24,0);
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hcd5997102e6004cdE
            (&local_20);
                    /* try { // try from 001d0536 to 001d053a has its CatchHandler @ 001d0562 */
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc32893ff2db2a481E(local_24);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(param_2);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hca58dd348178465dE
            (param_1,uVar1,
             &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h03a65ca6f8c2bbc9E_0028cc50);
  return;
}