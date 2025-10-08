undefined8 _ZN9uu_uptime12print_uptime17h3abdc53142303b39E(undefined8 param_1,undefined8 param_2)

{
  undefined local_60 [24];
  undefined *local_48;
  code *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _ZN6uucore8features6uptime20get_formatted_uptime17hb339f4077851a9d5E(local_60,param_1,param_2);
  local_40 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_38 = &PTR_DAT_00208310;
  local_30 = 2;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
                    /* try { // try from 00167dc0 to 00167dca has its CatchHandler @ 00167ddd */
  local_48 = local_60;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_38);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h968af28e0e2a109dE(local_60);
  return 0;
}