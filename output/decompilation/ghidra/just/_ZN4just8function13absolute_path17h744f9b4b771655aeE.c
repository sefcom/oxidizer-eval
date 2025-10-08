ulong * _ZN4just8function13absolute_path17h744f9b4b771655aeE
                  (ulong *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_RDX;
  bool bVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 *local_68;
  undefined *local_60;
  undefined local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulong local_30;
  
  lVar1 = *param_2;
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (&local_b0,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
                    /* try { // try from 0036951b to 0036952a has its CatchHandler @ 0036964a */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(&local_80,uStack_a8,local_a0,param_3,param_4);
                    /* try { // try from 00369535 to 00369542 has its CatchHandler @ 0036963b */
  (*(code *)
    PTR__ZN60__LT__RF_std__path__Path_u20_as_u20_lexiclean__Lexiclean_GT_9lexiclean17h6a5ff6ae87480de6E_00566a98
  )(local_58,CONCAT44(uStack_74,uStack_78),local_70);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_80);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_b0);
                    /* try { // try from 00369564 to 00369605 has its CatchHandler @ 00369660 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_b0,local_50,local_48);
  bVar2 = (int)local_b0 != 1;
  if (bVar2) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_b0,uStack_a8,local_a0);
    param_1[3] = (ulong)local_a0;
    *(int *)(param_1 + 1) = (int)local_b0;
    *(undefined4 *)((long)param_1 + 0xc) = local_b0._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_a8._4_4_;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    local_80 = *(undefined4 *)(lVar1 + 0x20);
    uStack_7c = *(undefined4 *)(lVar1 + 0x24);
    uStack_78 = *(undefined4 *)(lVar1 + 0x28);
    uStack_74 = *(undefined4 *)(lVar1 + 0x2c);
    local_60 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
    ;
    local_b0 = &PTR_s_Working_directory_is_not_valid_u_0052fd60;
    uStack_a8 = 1;
    local_90 = 0;
    local_a0 = &local_68;
    local_98 = 1;
    local_68 = &local_80;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (&local_40,0,extraout_RDX,&local_b0);
    param_1[3] = local_30;
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = uStack_38;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_34;
  }
  *param_1 = (ulong)!bVar2;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_58);
  return param_1;
}