void _ZN9alacritty8renderer5rects10RenderLine10push_rects17h98dca790795ed191E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  undefined uVar4;
  uint uVar5;
  undefined local_a0 [8];
  undefined **local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [23];
  undefined local_31;
  
  uVar3 = (uint)param_4 & 0xffff;
  if (uVar3 < 0x1000) {
    if (uVar3 == 8) {
      uVar3 = *(uint *)(param_2 + 0x14);
      uVar5 = *(uint *)(param_2 + 0x18);
    }
    else if (uVar3 == 0x200) {
      uVar3 = *(uint *)(param_2 + 0x1c);
      uVar5 = *(uint *)(param_2 + 0x20);
    }
    else {
      if (uVar3 != 0x800) {
LAB_005622f3:
        local_98 = &PTR_s_not_implemented__Invalid_flag_fo_00983950;
        local_90 = 1;
        local_88 = local_a0;
        local_80 = 0;
        uStack_78 = 0;
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
                  (&local_98,&PTR_s_alacritty_src_renderer_rects_rs_00983990,param_3,param_4,param_7
                  );
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)(param_2 + 0x10);
      local_58 = ZEXT416((uint)(_DAT_001ed49c * fVar1));
      local_68 = ZEXT416(*(uint *)(param_2 + 0x18));
      _ZN9alacritty8renderer5rects10RenderLine11create_rect17hcff17379e1e2cbf0E
                (fVar1,_DAT_001ec01c * fVar1,&local_98,param_3,param_5,param_6);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdfcf9666c620093fE
                (param_1,&local_98,&PTR_s_alacritty_src_renderer_rects_rs_00983960);
      uVar3 = local_58._0_4_;
      uVar5 = local_68._0_4_;
    }
    uVar4 = 0;
  }
  else if (uVar3 == 0x1000) {
    uVar3 = *(uint *)(param_2 + 0x10);
    uVar5 = _DAT_001e90d0 & uVar3;
    uVar4 = 1;
  }
  else if (uVar3 == 0x2000) {
    uVar3 = *(uint *)(param_2 + 0x10);
    uVar5 = _DAT_001e90d0 & uVar3;
    uVar4 = 2;
  }
  else {
    if (uVar3 != 0x4000) goto LAB_005622f3;
    uVar3 = *(uint *)(param_2 + 0x14);
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar4 = 3;
  }
  _ZN9alacritty8renderer5rects10RenderLine11create_rect17hcff17379e1e2cbf0E
            (*(undefined4 *)(param_2 + 0x10),uVar3,uVar5,local_48,param_3,param_5,param_6,param_7,
             param_8);
  local_31 = uVar4;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdfcf9666c620093fE
            (param_1,local_48,&PTR_s_alacritty_src_renderer_rects_rs_00983978);
  return;
}