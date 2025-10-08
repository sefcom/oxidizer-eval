undefined4 *
_ZN11forc_crypto4args30read_content_filepath_or_stdin17h735eec317a7ae007E
          (undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
                    /* try { // try from 004f90bd to 004f9114 has its CatchHandler @ 004f914c */
  _ZN11forc_crypto4args17checked_read_file17h22b9faaf715a9a45E(&local_40);
  *(undefined8 *)(param_1 + 4) = local_30;
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hcdf0fe8cbfd4dfb2E(param_2);
  return param_1;
}