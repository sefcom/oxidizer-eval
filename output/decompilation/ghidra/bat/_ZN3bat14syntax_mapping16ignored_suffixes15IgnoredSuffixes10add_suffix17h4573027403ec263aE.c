void _ZN3bat14syntax_mapping16ignored_suffixes15IgnoredSuffixes10add_suffix17h4573027403ec263aE
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbee92eab7fbd1405E_00808520)
              (param_1,&PTR_DAT_007cecc0);
  }
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_3;
  param_1[2] = lVar1 + 1;
  return;
}