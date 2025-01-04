undefined8 * __rustcall
uu_ls::colors::StyleManager::reset(undefined8 *param_1,long param_2,char param_3)

{
  if ((*(char *)(param_2 + 8) == '\x02') && (param_3 == '\0')) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return param_1;
  }
  *(undefined *)(param_2 + 0x1d) = 1;
  *(undefined *)(param_2 + 8) = 2;
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec();
  return param_1;
}