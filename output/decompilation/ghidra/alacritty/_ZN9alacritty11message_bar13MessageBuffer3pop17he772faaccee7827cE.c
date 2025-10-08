void _ZN9alacritty11message_bar13MessageBuffer3pop17he772faaccee7827cE(undefined4 *param_1)

{
  long lVar1;
  undefined4 *local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hdeb06d22186f8c86E
            (&local_68,param_1);
  local_78 = local_38;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  lVar1 = *(long *)(param_1 + 6);
  local_d0 = _ZN4core5slice5index5range17h4cda8274961093f5E(lVar1);
  *(undefined8 *)(param_1 + 6) = 0;
  local_c0 = lVar1 - local_d0;
  local_c8 = 0;
  local_b0 = &local_a8;
                    /* try { // try from 0055e745 to 0055e754 has its CatchHandler @ 0055e789 */
  local_d8 = param_1;
  local_b8 = local_d0;
  _ZN4core4iter6traits8iterator8Iterator7collect17h6f9c7b745cbe0808E(&local_30,&local_d8);
  _ZN4core3ptr99drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_alacritty__message_bar__Message_GT__GT_17he283a9226652e93bE
            (param_1);
  param_1[4] = local_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  param_1[7] = uStack_14;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  _ZN4core3ptr52drop_in_place_LT_alacritty__message_bar__Message_GT_17hcf82df9339b7ff8aE(&local_a8);
  return;
}