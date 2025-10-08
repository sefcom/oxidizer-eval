void _ZN9uu_uptime12print_nusers17hc92747cb558417ffE(ulong param_1,undefined8 param_2)

{
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  if ((param_1 & 1) == 0) {
    param_2 = (*(code *)PTR__ZN6uucore8features6uptime10get_nusers17h1db0d77211e135b8E_00210528)();
  }
  _ZN6uucore8features6uptime13format_nusers17h076f2c9c059b6e41E(local_20,param_2);
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = &DAT_002082d0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
                    /* try { // try from 00167c73 to 00167c7d has its CatchHandler @ 00167c8e */
  local_60 = local_20;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_50);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h968af28e0e2a109dE(local_20);
  return;
}