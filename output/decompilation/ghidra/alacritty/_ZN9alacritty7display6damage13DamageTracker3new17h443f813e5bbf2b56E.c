void _ZN9alacritty7display6damage13DamageTracker3new17h443f813e5bbf2b56E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_e0 [3];
  undefined local_c8 [144];
  undefined local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined local_20;
  
  _ZN4core5array75__LT_impl_u20_core__default__Default_u20_for_u20__u5b_T_u3b__u20_2_u5d__GT_7default17h811b5f081d4468c9E
            (local_c8);
  local_e0[0] = 0;
  local_38 = 2;
  local_20 = 0;
                    /* try { // try from 00549f48 to 00549f57 has its CatchHandler @ 00549f78 */
  local_30 = param_2;
  local_28 = param_3;
  _ZN9alacritty7display6damage13DamageTracker6resize17h3618c97bcb1847cfE(local_e0,param_2,param_3);
  (*(code *)PTR_memcpy_009de0b0)(param_1,local_e0,200);
  return;
}