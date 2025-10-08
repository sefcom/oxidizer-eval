long _ZN11uu_unexpand13unexpand_line17h1d2ec673d7b6113dE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined local_48 [8];
  byte local_40;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _ZN11uu_unexpand14next_char_info17hde71cd1c734c3431E
              (local_48,param_4,*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x0015cf62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*(code *)((long)&UINT_00118d50 + (long)(int)(&UINT_00118d50)[local_40]))();
    return lVar1;
  }
  lVar1 = _ZN11uu_unexpand10write_tabs17h3aaaa01eda901830E(param_2,param_6,param_7,0,0,0,1,1);
  if (lVar1 == 0) {
    lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h3d4ee5ad78dae975E
                      (param_2);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      lVar1 = 0;
    }
    else {
      lVar1 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001eebe0
              )(lVar1);
    }
  }
  return lVar1;
}