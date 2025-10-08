void _ZN9alacritty7display6window6Window8set_blur17hdaafcc381de4b4caE
               (long param_1,undefined8 param_2,undefined param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_c1 = param_3;
  uVar4 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h86c9ada5f61f6fd4E_009defd0,0);
  puVar2 = PTR__ZN5winit6window6Window8set_blur10__CALLSITE17h7490ca73a6355842E_009df4f0;
  if ((uVar4 != 5) && (uVar4 < 2)) {
    cVar3 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h8476693f2b82db19E
                      (PTR__ZN5winit6window6Window8set_blur10__CALLSITE17h7490ca73a6355842E_009df4f0
                      );
    if (cVar3 != '\0') {
      cVar3 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17h952ce841cee459daE_009defe0)
                        (*(undefined8 *)puVar2,cVar3);
      if (cVar3 != '\0') {
        lVar1 = *(long *)puVar2;
        uStack_70 = *(undefined8 *)(lVar1 + 0x38);
        uStack_88 = *(undefined8 *)(lVar1 + 0x40);
        uStack_80 = *(undefined8 *)(lVar1 + 0x48);
        uStack_98 = *(undefined8 *)(lVar1 + 0x30);
        uStack_90 = *(undefined4 *)(lVar1 + 0x38);
        uStack_8c = *(undefined4 *)(lVar1 + 0x3c);
        uStack_78 = 0;
        _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h01de4d9980a06194E
                  (&uStack_c0,&uStack_98);
        if (uStack_c0 == (undefined4 *)0x0) {
          uVar5 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_009de340)
                            ("FieldSet corrupted (this is a bug)",0x22,
                             &PTR_s__home_34r7hm4n__cargo_registry_s_0097c180);
          _ZN4core3ptr47drop_in_place_LT_tracing__span__EnteredSpan_GT_17h2a92309d4b5c81c2E
                    (&uStack_c0);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar5);
        }
        lStack_50 = lVar1 + 0x30;
        uStack_28 = uStack_a0;
        uStack_38 = (undefined4)uStack_b0;
        uStack_34 = uStack_b0._4_4_;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        uStack_48 = (undefined4)uStack_c0;
        uStack_44 = uStack_c0._4_4_;
        uStack_40 = (undefined4)uStack_b8;
        uStack_3c = uStack_b8._4_4_;
        uStack_c0 = &uStack_48;
        uStack_b8 = &uStack_c1;
        uStack_b0 = &DAT_0097bf98;
        uStack_58 = 1;
        puStack_60 = &uStack_c0;
        (*(code *)PTR__ZN7tracing4span4Span3new17h6b7f151451dc807eE_009defe8)
                  (&uStack_98,lVar1,&puStack_60);
        goto LAB_004e0fd4;
      }
    }
  }
  uStack_98 = 2;
  uStack_78 = 0;
LAB_004e0fd4:
  _ZN7tracing4span4Span7entered17hb8854f4677069416E(&uStack_c0,&uStack_98);
  if (param_1 != 0) {
    _ZN5winit13platform_impl5linux7wayland6window6Window8set_blur17ha320fb2ec0e66883E
              (param_2,uStack_c1);
  }
  _ZN4core3ptr47drop_in_place_LT_tracing__span__EnteredSpan_GT_17h2a92309d4b5c81c2E(&uStack_c0);
  return;
}