void __rustcall uu_join::parse_field_number_option(undefined8 *param_1,long param_2)

{
  long local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    parse_field_number(&local_18);
    if (local_18 == 0) {
      param_1[1] = 1;
      param_1[2] = local_10;
      *param_1 = 0;
    }
    else {
      param_1[1] = local_18;
      param_1[2] = local_10;
      *param_1 = 1;
    }
  }
  return;
}