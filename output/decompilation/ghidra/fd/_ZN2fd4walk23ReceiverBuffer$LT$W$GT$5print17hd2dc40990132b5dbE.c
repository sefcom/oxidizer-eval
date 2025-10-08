undefined8
_ZN2fd4walk23ReceiverBuffer_LT_W_GT_5print17hd2dc40990132b5dbE(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 extraout_RDX;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  lVar2 = _ZN2fd6output11print_entry17hc890df4f63d95a00E
                    (param_1 + 0x10,param_2,*(undefined8 *)(param_1 + 0x60));
  if (lVar2 != 0) {
    local_68 = lVar2;
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar2);
    if (cVar1 != '\v') {
      local_58 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_005408e0
      ;
      local_50 = &PTR_s_Could_not_write_to_output__00502618;
      local_48 = 1;
      local_30 = 0;
      local_40 = &local_60;
      local_38 = 1;
                    /* try { // try from 002f82ba to 002f82d4 has its CatchHandler @ 002f82ed */
      local_60 = (undefined *)&local_68;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
                (local_20,0,extraout_RDX,&local_50);
      _ZN2fd5error11print_error17h653511955bf98e50E(local_20);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h70c4621fa5d008f5E(&local_68);
      return 4;
    }
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h70c4621fa5d008f5E(&local_68);
  }
  cVar1 = _ZN4core4sync6atomic11atomic_load17h95058969b162ab98E(*(undefined8 *)(param_1 + 0x70),0);
  if (cVar1 != '\0') {
    _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5flush17h793374cb5c5836e2E(param_1);
    return 5;
  }
  return 6;
}