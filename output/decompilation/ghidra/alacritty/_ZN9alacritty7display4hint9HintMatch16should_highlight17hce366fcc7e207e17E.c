undefined8
_ZN9alacritty7display4hint9HintMatch16should_highlight17hce366fcc7e207e17E
          (long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if (param_4 == (long *)0x0) {
      uVar4 = _ZN4core3ops5range11RangeBounds8contains17h3765a02d6a3b303aE(param_1 + 2);
      return uVar4;
    }
  }
  else if (param_4 != (long *)0x0) {
    lVar2 = *param_4;
    if (lVar1 == lVar2) {
      return 1;
    }
    cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hca30ad5d4cfd9901E
                      (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
                       *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
    if ((cVar3 != '\0') &&
       (cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hca30ad5d4cfd9901E
                          (*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38),
                           *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38)),
       cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}