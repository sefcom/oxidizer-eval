void _ZN3bat6config25get_args_from_config_file17ha270dcc92bd168ccE(undefined8 param_1)

{
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined local_20 [24];
  
  local_38 = 0;
  local_30 = 1;
  local_28 = 0;
                    /* try { // try from 004acf53 to 004acf7e has its CatchHandler @ 004ad04b */
  _ZN3bat6config18system_config_file17h5269a0222f7ffe0aE(local_20);
  _ZN3std2fs14read_to_string17h462007d4b5b07c2dE(&local_50,local_20);
                    /* try { // try from 004acf8e to 004acfa6 has its CatchHandler @ 004ad02c */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb822dd115b0224bfE
            (&local_38,local_48,local_40 + local_48);
  _ZN5alloc6string6String4push17h0ede46164189e411E(&local_38,10);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(&local_50);
                    /* try { // try from 004acfb1 to 004acfe4 has its CatchHandler @ 004ad04b */
  _ZN3bat6config11config_file17h4b67a380f7fc9337E(local_20);
  _ZN3std2fs14read_to_string17h462007d4b5b07c2dE(&local_50,local_20);
  if (local_50 == -0x8000000000000000) {
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17h366d063fdc3aefc2E
              (&local_50);
  }
  else {
                    /* try { // try from 004acff4 to 004acffd has its CatchHandler @ 004ad02a */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb822dd115b0224bfE
              (&local_38,local_48,local_40 + local_48);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(&local_50);
  }
                    /* try { // try from 004ad012 to 004ad019 has its CatchHandler @ 004ad04b */
  _ZN3bat6config17get_args_from_str17hc7831eb106996c7fE(param_1,local_30,local_28);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(&local_38);
  return;
}