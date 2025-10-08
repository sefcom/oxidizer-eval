void _ZN9alacritty7display6window6Window18pre_present_notify17h8d5a1a465fc31b57E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 auStack_40 [4];
  undefined8 uStack_20;
  
  uVar4 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h86c9ada5f61f6fd4E_009defd0,0);
  puVar2 = PTR__ZN5winit6window6Window18pre_present_notify10__CALLSITE17h3f51873a9ed4664fE_009df4b0;
  if ((uVar4 != 5) && (uVar4 < 2)) {
    cVar3 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h8476693f2b82db19E
                      (
                      PTR__ZN5winit6window6Window18pre_present_notify10__CALLSITE17h3f51873a9ed4664fE_009df4b0
                      );
    if (cVar3 != '\0') {
      cVar3 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17h952ce841cee459daE_009defe0)
                        (*(undefined8 *)puVar2,cVar3);
      if (cVar3 != '\0') {
        lVar1 = *(long *)puVar2;
        lStack_58 = lVar1 + 0x30;
        uStack_68 = 8;
        uStack_60 = 0;
        (*(code *)PTR__ZN7tracing4span4Span3new17h6b7f151451dc807eE_009defe8)
                  (auStack_40,lVar1,&uStack_68);
        goto LAB_004e035b;
      }
    }
  }
  auStack_40[0] = 2;
  uStack_20 = 0;
LAB_004e035b:
  _ZN7tracing4span4Span7entered17hb8854f4677069416E(&uStack_68,auStack_40);
  if (param_1 != 0) {
    _ZN5winit13platform_impl5linux7wayland6window6Window18pre_present_notify17h99afbe86e46acab7E
              (param_2);
  }
  _ZN4core3ptr47drop_in_place_LT_tracing__span__EnteredSpan_GT_17h2a92309d4b5c81c2E(&uStack_68);
  return;
}