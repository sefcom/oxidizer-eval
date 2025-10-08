long _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_10query_list17h1793189bc91b0810E
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_60 = (undefined *)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0023b900)();
  local_98 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_0023b908)(&local_60);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x4b) & 1) == 0) {
    do {
      do {
                    /* try { // try from 001901b0 to 00190252 has its CatchHandler @ 0019027e */
        lVar4 = _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(param_2);
        if (lVar4 == 0) goto LAB_00190261;
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h070d08ab5346a901E
                          (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),uVar1,uVar2);
      } while (cVar3 != '\0');
      local_80 = 0;
      local_68 = 0x20;
      local_90 = &local_80;
      local_88 = 
      _ZN66__LT_zoxide__db__dir__DirDisplay_u20_as_u20_core__fmt__Display_GT_3fmt17h4918ffab7531bc79E
      ;
      local_60 = &DAT_00234950;
      local_58 = 2;
      local_40 = 0;
      local_50 = &local_90;
      local_48 = 1;
      local_70 = lVar4;
      uVar5 = _ZN3std2io5Write9write_fmt17h90c817d01f5acb46E(&local_98,&local_60);
      lVar4 = _ZN113__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_zoxide__error__BrokenPipeHandler_GT_9pipe_exit17ha3034502edd4f0bbE
                        (uVar5,"stdout",6);
    } while (lVar4 == 0);
  }
  else {
    do {
      do {
                    /* try { // try from 001900e0 to 00190189 has its CatchHandler @ 00190280 */
        lVar4 = _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(param_2);
        if (lVar4 == 0) goto LAB_00190261;
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h070d08ab5346a901E
                          (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),uVar1,uVar2);
      } while (cVar3 != '\0');
      local_80 = 1;
      local_68 = 0x20;
      local_90 = &local_80;
      local_88 = 
      _ZN66__LT_zoxide__db__dir__DirDisplay_u20_as_u20_core__fmt__Display_GT_3fmt17h4918ffab7531bc79E
      ;
      local_60 = &DAT_00234950;
      local_58 = 2;
      local_40 = 0;
      local_50 = &local_90;
      local_48 = 1;
      local_78 = param_3;
      local_70 = lVar4;
      uVar5 = _ZN3std2io5Write9write_fmt17h90c817d01f5acb46E(&local_98,&local_60);
      lVar4 = _ZN113__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_zoxide__error__BrokenPipeHandler_GT_9pipe_exit17ha3034502edd4f0bbE
                        (uVar5,"stdout",6);
    } while (lVar4 == 0);
  }
LAB_00190263:
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h5b7e4e16b06d2aa7E(local_98);
  return lVar4;
LAB_00190261:
  lVar4 = 0;
  goto LAB_00190263;
}