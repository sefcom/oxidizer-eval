void _ZN9alacritty7display4hint9HintState4stop17hd033c0de1ffc73a4E(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _ZN4core3ptr58drop_in_place_LT__u5b_alloc__vec__Vec_LT_char_GT__u5d__GT_17hff5fd8ccc15a89ccE
            (*(undefined8 *)(param_1 + 0x38),uVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* try { // try from 0054741d to 00547424 has its CatchHandler @ 0054742e */
  _ZN4core3ptr104drop_in_place_LT_core__option__Option_LT_alloc__rc__Rc_LT_alacritty__config__ui_config__Hint_GT__GT__GT_17h5b7fa1363027eda5E
            ((undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}