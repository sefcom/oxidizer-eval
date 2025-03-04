void _ZN11uu_realpath28canonicalize_relative_option17h9b30ea9e43056c36E
               (long *param_1,long *param_2,undefined param_3,undefined param_4)

{
  long unaff_R12;
  long unaff_R15;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_58;
  long local_50;
  long local_48;
  undefined local_40 [24];
  
  if (*param_2 == -0x8000000000000000) {
    local_58 = -0x8000000000000000;
  }
  else {
    local_68 = param_2[2];
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((long)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((long)param_2 + 0xc);
                    /* try { // try from 001b6769 to 001b6792 has its CatchHandler @ 001b67e0 */
    _ZN11uu_realpath21canonicalize_relative17h9315a0e677658306E
              (local_40,param_2[1],local_68,param_3,param_4);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8dc0120961bddde7E
              (&local_58,local_40,&local_78);
    if (local_58 == -0x8000000000000000) {
      param_1[1] = local_50;
      param_1[2] = local_48;
      *param_1 = -0x7fffffffffffffff;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9cc26ee4129f6434E(&local_78);
      return;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9cc26ee4129f6434E(&local_78);
    unaff_R12 = local_48;
    unaff_R15 = local_50;
  }
  *param_1 = local_58;
  param_1[1] = unaff_R15;
  param_1[2] = unaff_R12;
  return;
}