void _ZN7uu_join25parse_field_number_option17hc351970518f2dd89E(undefined8 *param_1,long param_2)

{
  long local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  _ZN7uu_join18parse_field_number17h7876c58ca785f0e6E(&local_18);
  if (local_18 != 0) {
    param_1[1] = local_18;
    param_1[2] = local_10;
    *param_1 = 1;
    return;
  }
  param_1[1] = 1;
  param_1[2] = local_10;
  *param_1 = 0;
  return;
}