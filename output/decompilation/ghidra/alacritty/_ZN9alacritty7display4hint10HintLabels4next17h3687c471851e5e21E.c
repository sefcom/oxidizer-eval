void _ZN9alacritty7display4hint10HintLabels4next17h3687c471851e5e21E
               (undefined8 *param_1,long param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = *(long *)(param_2 + 0x20);
  local_20 = local_28 + *(long *)(param_2 + 0x28) * 8;
  local_18 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h33746914ed5d5ddfE(&local_40,&local_28);
                    /* try { // try from 00547e47 to 00547e4e has its CatchHandler @ 00547e68 */
  _ZN9alacritty7display4hint10HintLabels9increment17hee42f897509faf72E(param_2);
  param_1[2] = local_30;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}