void _ZN9alacritty8renderer4text5atlas5Atlas10load_glyph17hc84a3ea245fb6fcbE
               (undefined8 *param_1,undefined4 *param_2,long param_3,ulong *param_4,
               undefined8 param_5)

{
  undefined uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined4 *puVar6;
  char local_6c;
  undefined7 uStack_6b;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined local_4c [76];
  
  while( true ) {
    uVar2 = *param_4;
    uVar3 = *(ulong *)(param_3 + 0x10);
    if (uVar3 <= uVar2) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (uVar2,uVar3,&PTR_s_alacritty_src_renderer_text_atla_00983c80);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(long *)(param_3 + 8);
    puVar6 = (undefined4 *)(lVar4 + uVar2 + uVar2 * 0x1b);
    _ZN9alacritty8renderer4text5atlas5Atlas6insert17h8c37d2eea1fa4b0aE
              (&local_6c,puVar6,param_5,param_2);
    if ((char)uStack_50 != '\x02') break;
    if (local_6c != '\0') {
      *(undefined4 *)param_1 = *puVar6;
      *(undefined8 *)((long)param_1 + 4) = 0;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 0xd) = 0;
      *(undefined8 *)((long)param_1 + 0x15) = 0;
      return;
    }
    uVar1 = *(undefined *)(lVar4 + 0x18 + uVar2 * 0x1c);
    *param_4 = uVar2 + 1;
    if (uVar2 + 1 == uVar3) {
      _ZN9alacritty8renderer4text5atlas5Atlas3new17hbd21f71ac8ef989eE(local_4c,uVar1);
      *param_2 = 0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6493a9a40798fa41E(param_3,local_4c);
    }
  }
  param_1[2] = local_5c;
  param_1[3] = CONCAT44(uStack_50,uStack_54);
  *param_1 = CONCAT71(uStack_6b,local_6c);
  param_1[1] = uStack_64;
  return;
}