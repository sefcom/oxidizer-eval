void _ZN9alacritty7display6window6Window15current_monitor17ha6a20112880c3114E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h86c9ada5f61f6fd4E_009defd0,0);
  puVar2 = PTR__ZN5winit6window6Window15current_monitor10__CALLSITE17h7d9a16d5bbf5ce9eE_009df490;
  if ((uVar4 != 5) && (uVar4 < 2)) {
    cVar3 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h8476693f2b82db19E
                      (
                      PTR__ZN5winit6window6Window15current_monitor10__CALLSITE17h7d9a16d5bbf5ce9eE_009df490
                      );
    if (cVar3 != '\0') {
      cVar3 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17h952ce841cee459daE_009defe0)
                        (*(undefined8 *)puVar2,cVar3);
      if (cVar3 != '\0') {
        lVar1 = *(long *)puVar2;
        lStack_b0 = lVar1 + 0x30;
        uStack_c0 = 8;
        uStack_b8 = 0;
        (*(code *)PTR__ZN7tracing4span4Span3new17h6b7f151451dc807eE_009defe8)
                  (&uStack_98,lVar1,&uStack_c0);
        goto LAB_004dfcd8;
      }
    }
  }
  uStack_98 = 2;
  uStack_78 = 0;
LAB_004dfcd8:
  _ZN7tracing4span4Span7entered17hb8854f4677069416E(&uStack_c0,&uStack_98);
  _ZN5winit13platform_impl5linux6Window15current_monitor17h9bdd5b80a1f05c9aE
            (&uStack_98,param_2,param_3);
  if (uStack_98 == -0x7fffffffffffffff) {
    *param_1 = 0x8000000000000001;
  }
  else {
    param_1[0xe] = uStack_28;
    param_1[0xc] = uStack_38;
    param_1[0xd] = uStack_30;
    param_1[10] = uStack_48;
    param_1[0xb] = uStack_40;
    param_1[8] = uStack_58;
    param_1[9] = uStack_50;
    param_1[6] = uStack_68;
    param_1[7] = uStack_60;
    param_1[4] = uStack_78;
    param_1[5] = uStack_70;
    param_1[2] = uStack_88;
    param_1[3] = uStack_80;
    *(undefined4 *)param_1 = (undefined4)uStack_98;
    *(undefined4 *)((long)param_1 + 4) = uStack_98._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_90;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
  }
  _ZN4core3ptr47drop_in_place_LT_tracing__span__EnteredSpan_GT_17h2a92309d4b5c81c2E(&uStack_c0);
  return;
}