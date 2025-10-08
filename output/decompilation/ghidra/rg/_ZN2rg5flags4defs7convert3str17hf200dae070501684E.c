void _ZN2rg5flags4defs7convert3str17hf200dae070501684E(undefined8 *param_1)

{
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_005267a8)(&local_38);
  if ((int)local_38 == 1) {
    local_38 = &PTR_s_value_is_not_valid_UTF_8_004ea250;
    local_30 = 1;
    local_28 = 8;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_38);
    local_30 = 0;
  }
  param_1[1] = local_28;
  *param_1 = local_30;
  return;
}