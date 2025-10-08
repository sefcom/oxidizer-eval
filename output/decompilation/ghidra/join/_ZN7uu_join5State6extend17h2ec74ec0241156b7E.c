void _ZN7uu_join5State6extend17h2ec74ec0241156b7E(long *param_1,long param_2,undefined *param_3)

{
  undefined uVar1;
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN7uu_join5State9next_line17h97dbe53d754c4271E(&local_98);
  lVar3 = CONCAT44(uStack_94,local_98);
  if (lVar3 != -0x7fffffffffffffff) {
    uVar1 = *param_3;
    do {
      local_d8 = CONCAT44(uStack_7c,local_80);
      local_e8 = CONCAT44(uStack_8c,uStack_90);
      uStack_e0 = CONCAT44(uStack_84,uStack_88);
      local_40 = CONCAT44(uStack_74,local_78);
      uStack_38 = CONCAT44(uStack_6c,uStack_70);
      local_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
      local_60 = lVar3;
      local_48 = local_d8;
      if (lVar3 == -0x8000000000000000) {
        _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_uu_join__Line_GT__GT_17h0fad273de0c46d5dE
                  (&local_60);
        *param_1 = -0x8000000000000000;
        return;
      }
      uStack_c0 = CONCAT44(uStack_8c,uStack_90);
      local_a8 = local_78;
      uStack_a4 = uStack_74;
      uStack_a0 = uStack_70;
      uStack_9c = uStack_6c;
      local_b8 = uStack_88;
      uStack_b4 = uStack_84;
      uStack_b0 = local_80;
      uStack_ac = uStack_7c;
      local_c8 = lVar3;
                    /* try { // try from 00162cd2 to 00162d04 has its CatchHandler @ 00162dff */
      auVar4 = (*(code *)PTR__ZN7uu_join5State15get_current_key17hb0aa7b8c555c38dcE_00204f58)
                         (param_2);
      auVar5 = (*(code *)PTR__ZN7uu_join4Line9get_field17h5172ba7928bd7492E_00204ef0)
                         (&local_c8,*(undefined8 *)(param_2 + 0x40));
      cVar2 = _ZN7uu_join16Input_LT_Sep_GT_7compare17h365eb74b1ebb2c70E
                        (uVar1,auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_);
      if (cVar2 != '\0') {
        param_1[4] = CONCAT44(uStack_a4,local_a8);
        param_1[5] = CONCAT44(uStack_9c,uStack_a0);
        param_1[2] = CONCAT44(uStack_b4,local_b8);
        param_1[3] = CONCAT44(uStack_ac,uStack_b0);
        *param_1 = local_c8;
        param_1[1] = uStack_c0;
        return;
      }
      local_78 = local_a8;
      uStack_74 = uStack_a4;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      uStack_88 = local_b8;
      uStack_84 = uStack_b4;
      local_80 = uStack_b0;
      uStack_7c = uStack_ac;
      local_98 = (undefined4)local_c8;
      uStack_94 = local_c8._4_4_;
      uStack_90 = (undefined4)uStack_c0;
      uStack_8c = uStack_c0._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1e462bd96175ed88E
                (param_2,&local_98,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd360);
      _ZN7uu_join5State9next_line17h97dbe53d754c4271E(&local_98,param_2,param_3);
      lVar3 = CONCAT44(uStack_94,local_98);
    } while (lVar3 != -0x7fffffffffffffff);
  }
  local_d8 = CONCAT44(uStack_7c,local_80);
  local_e8 = CONCAT44(uStack_8c,uStack_90);
  uStack_e0 = CONCAT44(uStack_84,uStack_88);
  lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbde49e4af2e5852bE(&local_e8);
  param_1[1] = lVar3;
  param_1[2] = (long)&
                     PTR__ZN4core3ptr39drop_in_place_LT_uu_join__JoinError_GT_17h7df6c9a50d8621beE_001fd398
  ;
  *param_1 = -0x7fffffffffffffff;
  return;
}