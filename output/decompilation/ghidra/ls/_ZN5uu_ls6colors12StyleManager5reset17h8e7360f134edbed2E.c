undefined8 *
_ZN5uu_ls6colors12StyleManager5reset17h8e7360f134edbed2E
          (undefined8 *param_1,long param_2,char param_3)

{
  if ((*(char *)(param_2 + 8) == '\x02') && (param_3 == '\0')) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return param_1;
  }
  *(undefined *)(param_2 + 0x1d) = 1;
  *(undefined *)(param_2 + 8) = 2;
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE();
  return param_1;
}