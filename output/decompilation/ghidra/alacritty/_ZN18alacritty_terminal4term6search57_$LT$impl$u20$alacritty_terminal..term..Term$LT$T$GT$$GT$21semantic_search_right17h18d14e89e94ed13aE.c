void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_21semantic_search_right17h18d14e89e94ed13aE
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  int local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  int local_38;
  undefined local_30 [24];
  
  _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_19inline_search_right17hbf0568499a7b63a6E
            (local_70,param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x220),
             *(undefined8 *)(param_1 + 0x228));
  if (local_70[0] != 1) {
    local_58 = param_1 + 0x28;
    local_38 = *(int *)(param_1 + 0xc0) + -1;
    local_40 = *(long *)(param_1 + 0xb8) + -1;
    local_50 = local_68;
    local_48 = local_60;
    _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
              (local_30,&local_58);
    _ZN4core6option15Option_LT_T_GT_6map_or17h55de4ce00cf2525fE(local_30,local_68,local_60);
  }
  return;
}