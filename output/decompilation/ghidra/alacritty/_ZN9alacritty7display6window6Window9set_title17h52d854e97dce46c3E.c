void _ZN9alacritty7display6window6Window9set_title17h52d854e97dce46c3E
               (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE();
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _ZN5winit6window6Window9set_title17h485d3ace19b03c55E
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 2)
            );
  return;
}