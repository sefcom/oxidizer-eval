void __rustcall
uu_join::Line::new(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
                    /* try { // try from 0016e3a8 to 0016e3b6 has its CatchHandler @ 0016e3e0 */
  (*(code *)PTR_field_ranges_00239f18)(&local_28,param_3,param_2[1],param_2[2],param_4);
  param_1[5] = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  *param_1 = local_28;
  param_1[1] = uStack_20;
  param_1[2] = local_18;
  return;
}