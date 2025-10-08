undefined8 *
_ZN4just8function5clean17hd74752c044f61e65E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  (*(code *)
    PTR__ZN60__LT__RF_std__path__Path_u20_as_u20_lexiclean__Lexiclean_GT_9lexiclean17h6a5ff6ae87480de6E_00566a98
  )(local_20,param_3,param_4);
                    /* try { // try from 0036a143 to 0036a19b has its CatchHandler @ 0036a19e */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_38,local_18,local_10);
  if (local_38 != 1) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_38,CONCAT44(uStack_2c,uStack_30),local_28);
    param_1[3] = local_28;
    *(int *)(param_1 + 1) = local_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    *param_1 = 0;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_20);
    return param_1;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&DAT_0052fdf0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}