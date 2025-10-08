void _ZN9alacritty7display7Display11draw_search17h54da426c82502e2dE
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint3 *puVar1;
  undefined8 uVar2;
  uint3 *puVar3;
  undefined **local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined local_60 [8];
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  local_48 = param_3;
  local_40 = param_4;
  if (*(ulong *)(param_1 + 0x7a0) < 0x10000) {
    local_38 = &local_48;
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_28 = 0;
    local_20 = (undefined2)*(ulong *)(param_1 + 0x7a0);
    local_90 = (undefined **)&DAT_001e8b60;
    local_88 = 1;
    puStack_70 = &DAT_002031d8;
    local_68 = 1;
    local_80 = &local_38;
    local_78 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(local_60,0,param_3,&local_90);
    puVar3 = (uint3 *)(param_2 + 0x1f9);
    if ((*(byte *)(param_2 + 0x1f8) & 1) == 0) {
      puVar3 = (uint3 *)(param_2 + 0x273);
    }
    puVar1 = (uint3 *)(param_2 + 0x270);
    if ((*(byte *)(param_2 + 0x1fc) & 1) != 0) {
      puVar1 = (uint3 *)(param_2 + 0x1fd);
    }
                    /* try { // try from 0054f129 to 0054f13b has its CatchHandler @ 0054f18b */
    _ZN9alacritty8renderer8Renderer11draw_string17he548dbda3300cc92E
              (param_1 + 0xe0,*(undefined8 *)(param_1 + 0x798),0,(ulong)*puVar3,(ulong)*puVar1,
               local_58,local_50 + local_58,param_1 + 0x798,param_1 + 0x5f8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_60);
    return;
  }
  local_90 = &PTR_DAT_009827a0;
  local_88 = 1;
  local_80 = (undefined8 **)0x8;
  local_78 = 0;
  puStack_70 = (undefined *)0x0;
  uVar2 = (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
                    (&local_90,&PTR_s_alacritty_src_display_mod_rs_009827b0);
                    /* catch() { ... } // from try @ 0054f129 with catch @ 0054f18b */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_60);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar2);
}