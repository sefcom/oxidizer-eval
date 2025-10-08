undefined8
_ZN11uu_unexpand10write_tabs17h3aaaa01eda901830E
          (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
          byte param_6,byte param_7,byte param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  
  if (param_7 == 0) {
    if (param_8 == 1 && param_6 == 0) goto LAB_0015cc0b;
  }
  else {
    param_8 = 1;
    if (param_6 == 0) {
LAB_0015cc0b:
      if (param_4 + 1 < param_5) goto LAB_0015cc30;
    }
  }
  if ((param_4 < param_5 & (param_7 | param_6 & param_8)) == 0) {
LAB_0015cc9a:
    puVar1 = 
    PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hccae24ef141405a2E_001eea60
    ;
    lVar2 = param_5 - param_4;
    if (param_5 < param_4 || lVar2 == 0) {
      return 0;
    }
    do {
      lVar3 = param_1[2];
      if ((ulong)(*param_1 - lVar3) < 2) {
        lVar3 = (*(code *)puVar1)(param_1," ",1);
        if (lVar3 != 0) goto LAB_0015ccee;
      }
      else {
        *(undefined *)(param_1[1] + lVar3) = 0x20;
        param_1[2] = lVar3 + 1;
      }
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        return 0;
      }
    } while( true );
  }
LAB_0015cc30:
  do {
    while( true ) {
      auVar6 = _ZN11uu_unexpand12next_tabstop17h080f73c87180f742E(param_2,param_3,param_4);
      if (((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
         (uVar5 = auVar6._8_8_ + param_4, param_5 < uVar5)) goto LAB_0015cc9a;
      lVar2 = param_1[2];
      param_4 = uVar5;
      if ((ulong)(*param_1 - lVar2) < 2) break;
      *(undefined *)(param_1[1] + lVar2) = 9;
      param_1[2] = lVar2 + 1;
    }
    lVar2 = (*(code *)
              PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hccae24ef141405a2E_001eea60
            )(param_1,"\t",1);
  } while (lVar2 == 0);
LAB_0015ccee:
  uVar4 = (*(code *)
            PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001eebe0
          )();
  return uVar4;
}