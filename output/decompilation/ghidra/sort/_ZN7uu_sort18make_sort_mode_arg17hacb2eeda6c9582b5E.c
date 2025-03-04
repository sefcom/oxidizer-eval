void _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **local_720;
  undefined **local_718;
  undefined local_4d0 [592];
  undefined local_280 [592];
  
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_280);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_720,local_280,param_4);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(local_280,&local_720,param_2,param_3);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E(&local_720,local_280,param_5,param_6);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(local_4d0,&local_720,2);
  local_720 = &PTR_s_general_numeric_sort_002ffbf8;
  local_718 = &
              PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h69cd5d56d5644af7E_002ffc58
  ;
  puVar2 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha02eaed260a898f9E
                     (&local_720);
  if (puVar2 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 00222107 to 00222111 has its CatchHandler @ 00222161 */
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb9af56cf5f49fd41E
                        (*puVar2,puVar2[1],param_2,param_3);
      if (cVar1 == '\0') {
        (*(code *)PTR_memcpy_00306c40)(local_280,local_4d0,0x250);
        _ZN12clap_builder7builder3arg3Arg14conflicts_with17h4d943ad74ef2fd17E
                  (local_4d0,local_280,puVar2);
      }
      puVar2 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha02eaed260a898f9E
                         (&local_720);
    } while (puVar2 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00306c40)(param_1,local_4d0,0x250);
  return;
}