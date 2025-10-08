void _ZN2fd5error11print_error17h653511955bf98e50E(undefined8 param_1)

{
  undefined *local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  _ZN4core3ops8function5FnMut8call_mut17h7f394ab0d8a750e1E(local_20,param_1);
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = &PTR_s__fd_error___00502140;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
                    /* try { // try from 002f2107 to 002f2111 has its CatchHandler @ 002f2122 */
  local_60 = local_20;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_005408a0)(&local_50);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(local_20);
  return;
}