undefined8 *
_ZN4just8function11path_exists17h36f930aac5fe45b9E
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined auStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (local_e0,*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_2 + 0x18));
                    /* try { // try from 0036b754 to 0036b761 has its CatchHandler @ 0036b7ed */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(auStack_f8,local_d8,local_d0,param_3,param_4);
                    /* try { // try from 0036b76c to 0036b7b1 has its CatchHandler @ 0036b802 */
  _ZN3std2fs8metadata17h5a72efc395e817eeE(&local_c8,local_f0,local_e8);
  iVar2 = local_c8;
  lVar1 = CONCAT44(uStack_c4,local_c8);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6c53bee5a1770485E
            (&local_c8);
  pcVar3 = "true";
  if (iVar2 == 2) {
    pcVar3 = "false";
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_c8,pcVar3,lVar1 == 2 | 4);
  param_1[3] = local_b8;
  *(int *)(param_1 + 1) = local_c8;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_c4;
  *(undefined4 *)(param_1 + 2) = uStack_c0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_bc;
  *param_1 = 0;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(auStack_f8);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_e0);
  return param_1;
}