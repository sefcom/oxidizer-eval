undefined8 _ZN10uu_hashsum13uu_app_custom17h877f20130ce52e37E(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **local_ae8;
  undefined *local_ae0;
  undefined local_ad8 [712];
  undefined local_810 [712];
  undefined local_548 [712];
  undefined local_280 [592];
  
  _ZN10uu_hashsum13uu_app_common17haf156add4ae409e5E(local_810);
  _ZN10uu_hashsum15uu_app_opt_bits17h1604bb86d678b504E(local_548,local_810);
  _ZN10uu_hashsum17uu_app_b3sum_opts17h6d29bf312f544a29E(local_ad8,local_548);
  local_ae8 = &PTR_s_md5_0043ecd0;
  local_ae0 = &DAT_0043eeb0;
  puVar1 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h105803dcb30d73e6E
                     (&local_ae8);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      (*(code *)PTR_memcpy_0047f5e0)(local_810,local_ad8,0x2c8);
                    /* try { // try from 002db788 to 002db7b0 has its CatchHandler @ 002db80c */
      _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_548,*puVar1,puVar1[1]);
      _ZN12clap_builder7builder3arg3Arg4long17hda6187eaf5c6dd54E(local_280,local_548,puVar1);
      _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
                (local_548,local_280,puVar1[2],puVar1[3]);
      _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_280,local_548,2);
      _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E
                (local_ad8,local_810,local_280);
      puVar1 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h105803dcb30d73e6E
                         (&local_ae8);
    } while (puVar1 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_0047f5e0)(param_1,local_ad8,0x2c8);
  return param_1;
}