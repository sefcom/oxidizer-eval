void _ZN9uu_uptime13print_loadavg17h786739790e395d27E(void)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _ZN6uucore8features6uptime21get_formatted_loadavg17hf18302e0e984d16aE(&local_60);
  local_68 = local_50;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  local_40 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_38 = &DAT_00208278;
  local_30 = 2;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
                    /* try { // try from 00167aa0 to 00167aaa has its CatchHandler @ 00167ab9 */
  local_48 = (undefined *)&local_78;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_38);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h968af28e0e2a109dE(&local_78);
  return;
}