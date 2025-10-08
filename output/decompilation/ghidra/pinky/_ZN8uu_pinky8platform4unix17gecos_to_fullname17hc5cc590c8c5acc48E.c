void _ZN8uu_pinky8platform4unix17gecos_to_fullname17hc5cc590c8c5acc48E
               (undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001ffcd0
  )(auStack_68,param_2 + 0x18);
  uVar1 = local_58;
  uVar2 = local_60;
                    /* try { // try from 00162da2 to 00162dd8 has its CatchHandler @ 00162e3f */
  auVar3 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h292770a8336ea6cdE(local_60,local_58);
  if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(auStack_68,auVar3._8_8_);
    uVar1 = local_58;
    uVar2 = local_60;
  }
  (*(code *)
    PTR__ZN44__LT_str_u20_as_u20_uu_pinky__Capitalize_GT_10capitalize17h521abc1e5369276eE_001ffed8)
            (local_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 00162de3 to 00162df2 has its CatchHandler @ 00162e22 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h9f65d83c61adc3dfE
            (&local_38,uVar2,uVar1,local_48,local_40);
  *(undefined8 *)(param_1 + 4) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(local_50);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(auStack_68);
  return;
}