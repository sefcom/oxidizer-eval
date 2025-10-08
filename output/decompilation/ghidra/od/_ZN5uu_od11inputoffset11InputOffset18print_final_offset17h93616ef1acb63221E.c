void _ZN5uu_od11inputoffset11InputOffset18print_final_offset17h93616ef1acb63221E(long *param_1)

{
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  if ((*(char *)(param_1 + 3) == '\x03') && (*param_1 == 0)) {
    return;
  }
  (*(code *)PTR__ZN5uu_od11inputoffset11InputOffset18format_byte_offset17h2a35c86a9cc6c7a3E_0020aa78
  )(local_20);
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = &DAT_00202418;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
                    /* try { // try from 00168c8a to 00168c94 has its CatchHandler @ 00168ca5 */
  local_60 = local_20;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0020aa68)(&local_50);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(local_20);
  return;
}