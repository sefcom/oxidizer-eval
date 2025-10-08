undefined  [16]
_ZN9alacritty7display10FrameTimer15compute_timeout17hd003256b07b45f79E
          (undefined (*param_1) [12],long param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  
  uVar5 = (ulong)param_3;
  auVar8 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  uVar6 = auVar8._8_4_;
  lVar2 = auVar8._0_8_;
  if ((*(long *)(param_1[2] + 8) != param_2) || (*(uint *)(param_1[3] + 4) != param_3)) {
    *param_1 = auVar8;
    *(undefined (*) [12])(param_1[1] + 4) = auVar8;
    *(long *)(param_1[2] + 8) = param_2;
    *(uint *)(param_1[3] + 4) = param_3;
    goto LAB_0054fe0a;
  }
  auVar7 = (*(code *)
             PTR__ZN88__LT_std__time__Instant_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17h6e1ba6fe622dc9c8E_009df6d0
           )(*(undefined8 *)(param_1[1] + 4),*(undefined4 *)param_1[2],param_2,param_3);
  lVar3 = auVar7._0_8_;
  if (lVar3 == lVar2) {
    if (auVar7._8_4_ < uVar6) {
LAB_0054fd72:
      auVar7 = (*(code *)
                 PTR__ZN60__LT_std__time__Instant_u20_as_u20_core__ops__arith__Sub_GT_3sub17h58e97276508fd021E_009de400
               )(lVar2,uVar6,*(undefined8 *)*param_1,*(undefined4 *)(*param_1 + 8));
      uVar5 = uVar5 / 1000 + param_2 * 1000000;
      if (uVar5 == 0) {
        (*(code *)
          PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
                  (&PTR_s_alacritty_src_display_mod_rs_00982860);
        pcVar1 = (code *)swi(3);
        auVar7 = (*pcVar1)();
        return auVar7;
      }
      uVar4 = auVar7._0_8_ * 1000000 + (auVar7._8_8_ & 0xffffffff) / 1000;
      if ((uVar4 | uVar5) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (uVar5 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 % uVar5;
      }
      auVar8 = (*(code *)
                 PTR__ZN88__LT_std__time__Instant_u20_as_u20_core__ops__arith__Sub_LT_core__time__Duration_GT__GT_3sub17h5e9dd3ecc3decb67E_009dfe98
               )(lVar2,uVar6,uVar4 / 1000000,((int)uVar4 + (int)(uVar4 / 1000000) * -1000000) * 1000
                );
      *(undefined (*) [12])(param_1[1] + 4) = auVar8;
      uVar5 = 0;
      param_2 = 0;
      goto LAB_0054fe0a;
    }
  }
  else if (lVar3 < lVar2) goto LAB_0054fd72;
  *(long *)(param_1[1] + 4) = lVar3;
  *(uint *)param_1[2] = auVar7._8_4_;
  auVar8 = (*(code *)
             PTR__ZN60__LT_std__time__Instant_u20_as_u20_core__ops__arith__Sub_GT_3sub17h58e97276508fd021E_009de400
           )(lVar3,auVar7._8_8_ & 0xffffffff,lVar2,uVar6);
  param_2 = auVar8._0_8_;
  uVar5 = (ulong)auVar8._8_4_;
LAB_0054fe0a:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_2;
  return auVar7;
}