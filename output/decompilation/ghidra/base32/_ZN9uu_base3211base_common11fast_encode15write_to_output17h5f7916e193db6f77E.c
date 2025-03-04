long _ZN9uu_base3211base_common11fast_encode15write_to_output17h5f7916e193db6f77E
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined param_5)

{
  long lVar1;
  
  if (*param_1 == -0x8000000000000000) {
    lVar1 = _ZN9uu_base3211base_common11fast_encode25write_without_line_breaks17h6fa0e036bb3780e0E
                      (param_2,param_3,*(undefined8 *)(param_4 + 0x38),param_5);
  }
  else {
    lVar1 = _ZN9uu_base3211base_common11fast_encode22write_with_line_breaks17h03d07599502588daE();
  }
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1;
}