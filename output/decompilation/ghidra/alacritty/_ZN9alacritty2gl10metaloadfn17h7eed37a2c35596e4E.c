long _ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = _ZN4core3ops8function5impls79__LT_impl_u20_core__ops__function__FnMut_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_8call_mut17hb2ea25bc5a20bd77E
                    ();
  if (lVar1 != 0) {
    return lVar1;
  }
  if (param_5 != 0) {
    puVar2 = param_4 + param_5 * 2;
    do {
      lVar1 = _ZN4core3ops8function5impls79__LT_impl_u20_core__ops__function__FnMut_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_8call_mut17hb2ea25bc5a20bd77E
                        (param_1,*param_4,param_4[1]);
      if (lVar1 != 0) {
        return lVar1;
      }
      param_4 = param_4 + 2;
    } while (param_4 != puVar2);
  }
  return 0;
}