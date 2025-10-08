void _ZN18alacritty_terminal7vi_mode22first_occupied_in_line17h19350108178722bcE
               (undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 local_3c;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *(undefined8 *)(param_2 + 0xb8);
  local_30 = 0;
  local_38 = &local_3c;
  local_3c = param_3;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h82c875bbb5b4bee1E
            (local_20,&local_30,param_2,&local_38);
  if (local_20[0] == 1) {
    param_1[1] = local_18;
    *(undefined4 *)(param_1 + 2) = local_10;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}