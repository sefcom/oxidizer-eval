void _ZN18alacritty_terminal4term13Term_LT_T_GT_11set_options17h35d1164ca74ce318E
               (long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x238);
  local_38 = *(undefined8 *)(param_1 + 0x218);
  uStack_30 = *(undefined8 *)(param_1 + 0x220);
  local_28 = *(undefined8 *)(param_1 + 0x228);
  uStack_20 = *(undefined8 *)(param_1 + 0x230);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x218) = *param_2;
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  *(undefined4 *)(param_1 + 0x224) = uVar3;
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  *(undefined4 *)(param_1 + 0x22c) = uVar5;
  *(undefined4 *)(param_1 + 0x230) = uVar6;
  *(undefined4 *)(param_1 + 0x234) = uVar7;
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0046f080 to 0046f0e6 has its CatchHandler @ 0046f17c */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
  )(&local_78,param_1 + 0x240);
  uStack_64 = uStack_6c;
  uStack_68 = uStack_70;
  local_58 = local_78;
  uVar8 = local_58;
  local_58._0_4_ = (undefined4)local_78;
  local_58._4_4_ = (undefined4)((ulong)local_78 >> 0x20);
  uStack_70 = (undefined4)local_58;
  uStack_6c = local_58._4_4_;
  local_78 = 0x8000000000000001;
  local_58 = uVar8;
  _ZN89__LT_alacritty__event__EventProxy_u20_as_u20_alacritty_terminal__event__EventListener_GT_10send_event17hcb980e74e667f924E
            (param_1,&local_78);
  lVar9 = param_1 + 0xd8;
  if ((*(uint *)(param_1 + 0x6dc) & 0x1000) == 0) {
    lVar9 = param_1 + 0x28;
  }
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_14update_history17hf3d18eb057d90925E
            (lVar9,*(undefined8 *)(param_1 + 0x230));
  if (*(char *)(param_1 + 0x23c) != local_18._4_1_) {
    _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_bool_GT__GT_17h853d54bae12860f6E
              (*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 1;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_bool_GT__GT_17h853d54bae12860f6E
              (*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 1;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(byte *)(param_1 + 0x6de) = *(byte *)(param_1 + 0x6de) & 0x83;
  }
  *(undefined *)(param_1 + 0x210) = 1;
  _ZN4core3ptr53drop_in_place_LT_alacritty_terminal__term__Config_GT_17h06543dc3aca77dceE(&local_38)
  ;
  return;
}