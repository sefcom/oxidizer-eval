void _ZN9alacritty9clipboard9Clipboard3new17h057223b09dc81a04E
               (undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (param_2 == 6) {
    auVar3 = (*(code *)
               PTR__ZN9copypasta17wayland_clipboard31create_clipboards_from_external17hc5be914f1b9013cdE_009dfd20
             )(param_3);
                    /* try { // try from 00534745 to 00534749 has its CatchHandler @ 005347a1 */
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1e76a3124c301c1aE(auVar3._8_8_);
                    /* try { // try from 0053474a to 00534754 has its CatchHandler @ 0053478d */
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1e76a3124c301c1aE(auVar3._0_8_);
    *param_1 = uVar1;
    param_1[1] = &
                 PTR__ZN4core3ptr58drop_in_place_LT_copypasta__wayland_clipboard__Primary_GT_17h53900d59783182c0E_009816d8
    ;
    param_1[2] = uVar2;
    param_1[3] = &
                 PTR__ZN4core3ptr58drop_in_place_LT_copypasta__wayland_clipboard__Primary_GT_17h53900d59783182c0E_00981700
    ;
    return;
  }
  _ZN74__LT_alacritty__clipboard__Clipboard_u20_as_u20_core__default__Default_GT_7default17h95c70f02ce4db6f3E
            (param_1);
  return;
}