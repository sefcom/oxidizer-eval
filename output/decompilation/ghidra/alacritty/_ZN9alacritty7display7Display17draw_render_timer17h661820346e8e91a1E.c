void _ZN9alacritty7display7Display17draw_render_timer17h661820346e8e91a1E
               (long param_1,long param_2,undefined8 param_3)

{
  uint3 uVar1;
  uint3 uVar2;
  long lVar3;
  undefined8 local_a8;
  undefined local_a0 [8];
  long local_98;
  long local_90;
  long local_88 [3];
  undefined8 *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    local_a8 = *(undefined8 *)(param_1 + 0x820);
    local_70 = &local_a8;
    local_68 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_009dfe08
    ;
    local_60 = &DAT_009827c8;
    local_58 = 2;
    local_40 = &DAT_00203210;
    local_38 = 1;
    local_50 = &local_70;
    local_48 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(local_a0,0,param_3,&local_60);
    lVar3 = *(ulong *)(param_1 + 0x798) - 2;
    if (*(ulong *)(param_1 + 0x798) < 2) {
      lVar3 = 0;
    }
    uVar2 = *(uint3 *)(param_2 + 0x273);
    uVar1 = *(uint3 *)(param_2 + 0x23b);
    local_88[1] = 0;
    local_88[2] = local_90;
                    /* try { // try from 0054f290 to 0054f2f5 has its CatchHandler @ 0054f312 */
    local_88[0] = lVar3;
    _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_88);
    _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
              (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),local_88);
    _ZN9alacritty8renderer8Renderer11draw_string17he548dbda3300cc92E
              (param_1 + 0xe0,lVar3,0,(uint)uVar2,(ulong)uVar1,local_98,local_90 + local_98,
               param_1 + 0x798,param_1 + 0x5f8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_a0);
  }
  return;
}