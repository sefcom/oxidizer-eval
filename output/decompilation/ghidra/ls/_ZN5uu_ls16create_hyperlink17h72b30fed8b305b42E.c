void _ZN5uu_ls16create_hyperlink17h72b30fed8b305b42E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80 [24];
  undefined local_68 [24];
  undefined **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = param_2;
  local_88 = param_3;
  _ZN8hostname3get17h61ff34d453bc4655E(&local_108);
  if (local_108 == (undefined *)0x8000000000000000) {
    _ZN5uu_ls16create_hyperlink28__u7b__u7b_closure_u7d__u7d_17h5c4b22834743e018E
              (&local_d8,uStack_100);
  }
  else {
    local_c8 = local_f8;
    local_d8 = (undefined4)local_108;
    uStack_d4 = local_108._4_4_;
    uStack_d0 = (undefined4)uStack_100;
    uStack_cc = uStack_100._4_4_;
  }
                    /* try { // try from 0022caf8 to 0022cb08 has its CatchHandler @ 0022cc74 */
  _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
            (local_80,CONCAT44(uStack_cc,uStack_d0),local_c8);
                    /* try { // try from 0022cb0d to 0022cb24 has its CatchHandler @ 0022cc79 */
  _ZN3std2fs12canonicalize17h205134df7886662bE(&local_108,param_4 + 0x18);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h2f717c7e2037f670E(local_c0,&local_108);
                    /* try { // try from 0022cb2f to 0022cb39 has its CatchHandler @ 0022cc56 */
  _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E(local_a8,local_b8,local_b0);
  uStack_100 = (code *)(local_98 + local_a0);
  local_108 = (undefined *)local_a0;
  local_f8 = &DAT_001363bb;
  local_f0 = (code *)0x6;
                    /* try { // try from 0022cb65 to 0022cb7a has its CatchHandler @ 0022cc5b */
  _ZN112__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_alloc__string__String_GT__GT_9from_iter17h5a0c4658461ac5beE
            (local_68,&local_108);
  uStack_100 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hdd85d91aa0a3dd15E;
  local_f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_e8 = &local_90;
  local_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
  local_50 = &PTR_DAT_003129e8;
  local_48 = 4;
  local_30 = 0;
  local_38 = 3;
                    /* try { // try from 0022cbed to 0022cbfc has its CatchHandler @ 0022cc44 */
  local_108 = local_80;
  local_f8 = local_68;
  local_40 = (undefined *)&local_108;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h7fca96e7ce97ddb7E(param_1,&local_50);
                    /* try { // try from 0022cbfd to 0022cc09 has its CatchHandler @ 0022cc5b */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_68);
                    /* try { // try from 0022cc0a to 0022cc13 has its CatchHandler @ 0022cc56 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h950c753f5d689b41E(local_a8);
                    /* try { // try from 0022cc14 to 0022cc1d has its CatchHandler @ 0022cc79 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h585d8b757a674aeaE(local_c0);
                    /* try { // try from 0022cc1e to 0022cc2a has its CatchHandler @ 0022cc74 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h950c753f5d689b41E(local_80);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h51f173604a280fb6E(&local_d8);
  return;
}