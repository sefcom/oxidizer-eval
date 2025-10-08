void _ZN9uu_uptime10print_time17h85d109f21a0e3885E(void)

{
  undefined *local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  (*(code *)PTR__ZN6uucore8features6uptime18get_formatted_time17hdb71870ea10de290E_00210530)
            (local_20);
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = &PTR_s__002082f0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
                    /* try { // try from 00167d05 to 00167d0f has its CatchHandler @ 00167d20 */
  local_60 = local_20;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_50);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h968af28e0e2a109dE(local_20);
  return;
}