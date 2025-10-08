undefined8 _ZN16fuel_core_keygen11print_value17h4e8c20a34f891badE(undefined8 param_1,int param_2)

{
  undefined local_30 [24];
  undefined8 local_18;
  
  if (param_2 == 0) {
    _ZN10serde_json3ser6to_vec17h0a10c859241e3c16E(local_30,param_1);
  }
  else {
                    /* try { // try from 0018bb8e to 0018bba9 has its CatchHandler @ 0018bc1b */
    _ZN10serde_json3ser13to_vec_pretty17ha5a7532e0ebd2ff3E(local_30,param_1);
  }
                    /* try { // try from 0018bbd0 to 0018bbe3 has its CatchHandler @ 0018bc20 */
  local_18 = _ZN16fuel_core_keygen25display_string_discreetly17h814b2e84e256ed26E();
  _ZN4core3ptr73drop_in_place_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT_17h538a4214196f009bE
            (&local_18);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h620ef3d513ef5c65E(local_30);
  _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h1073727cd256d0e5E(param_1);
  return 0;
}