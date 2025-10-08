void _ZN9alacritty7display7Display19draw_line_indicator17h462b756ef8d8474dE
               (long param_1,long param_2,long param_3,byte param_4,ulong param_5,undefined8 param_6
               )

{
  ulong uVar1;
  uint3 *puVar2;
  uint3 *puVar3;
  ulong uVar4;
  undefined8 local_c0;
  long local_b8;
  undefined local_b0 [8];
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  undefined8 *local_80;
  undefined *local_78;
  long *local_70;
  undefined *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *(ulong *)(param_1 + 0x7a0);
  local_b8 = param_3 + -1;
  local_80 = &local_c0;
  local_78 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
  ;
  local_70 = &local_b8;
  local_68 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
  ;
  local_60 = &PTR_s___009827e8;
  local_58 = 3;
  local_40 = 0;
  local_50 = &local_80;
  local_48 = 2;
  local_c0 = param_6;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(local_b0,0,local_b8,&local_60);
  uVar4 = uVar1 - local_a0;
  if (uVar1 < local_a0) {
    uVar4 = 0;
  }
  local_88 = uVar1 - 1;
  local_98 = 0;
                    /* try { // try from 0054f408 to 0054f4ba has its CatchHandler @ 0054f4d7 */
  local_90 = uVar4;
  _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&local_98);
  _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
            (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),&local_98);
  if ((param_4 & uVar4 <= param_5) == 0) {
    puVar3 = (uint3 *)(param_2 + 0x1f5);
    if ((*(byte *)(param_2 + 500) & 1) == 0) {
      puVar3 = (uint3 *)(param_2 + 0x270);
    }
    puVar2 = (uint3 *)(param_2 + 0x273);
    if ((*(byte *)(param_2 + 0x1f0) & 1) != 0) {
      puVar2 = (uint3 *)(param_2 + 0x1f1);
    }
    _ZN9alacritty8renderer8Renderer11draw_string17he548dbda3300cc92E
              (param_1 + 0xe0,0,uVar4,(ulong)*puVar2,(ulong)*puVar3,local_a8,local_a0 + local_a8,
               param_1 + 0x798,param_1 + 0x5f8);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_b0);
  return;
}