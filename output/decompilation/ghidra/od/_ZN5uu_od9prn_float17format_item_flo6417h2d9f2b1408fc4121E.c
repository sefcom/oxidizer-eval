undefined8 _ZN5uu_od9prn_float17format_item_flo6417h2d9f2b1408fc4121E(undefined8 param_1)

{
  undefined *local_68;
  code *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  _ZN5uu_od9prn_float12format_flo6417h94eabf5ec411dc14E(local_28);
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_58 = &PTR_s_177_00203838;
  local_50 = 1;
  local_38 = 0;
  local_40 = 1;
                    /* try { // try from 0016b526 to 0016b532 has its CatchHandler @ 0016b548 */
  local_68 = local_28;
  local_48 = (undefined *)&local_68;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(param_1,&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(local_28);
  return param_1;
}