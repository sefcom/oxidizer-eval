void _ZN9alacritty11message_bar13MessageBuffer13remove_target17haff6ad13a53c4ac5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = param_1[3];
  local_70 = _ZN4core5slice5index5range17h4cda8274961093f5E(lVar1);
  param_1[3] = 0;
  local_60 = lVar1 - local_70;
  local_68 = 0;
  local_78 = param_1;
  local_58 = local_70;
  local_50 = param_2;
  local_48 = param_3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h79312c269d158583E(&local_40,&local_78);
  _ZN4core3ptr99drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_alacritty__message_bar__Message_GT__GT_17he283a9226652e93bE
            (param_1);
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}