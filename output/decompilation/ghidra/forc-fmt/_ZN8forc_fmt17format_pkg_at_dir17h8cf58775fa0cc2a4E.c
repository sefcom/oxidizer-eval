undefined8
_ZN8forc_fmt17format_pkg_at_dir17h8cf58775fa0cc2a4E
          (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char local_d0;
  byte local_cf;
  undefined8 local_c8;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60 [3];
  undefined local_48 [24];
  
  local_98 = param_4;
  _ZN10sway_utils7helpers25find_parent_dir_with_file17hcc7b19d4dc2e8189E(&local_90);
                    /* try { // try from 004d52a2 to 004d52a9 has its CatchHandler @ 004d54b4 */
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (&local_108,CONCAT44(uStack_84,uStack_88),local_80);
  local_a8 = local_f8;
  local_b8 = (undefined4)local_108;
  uStack_b4 = local_108._4_4_;
  uStack_b0 = (undefined4)uStack_100;
  uStack_ac = uStack_100._4_4_;
                    /* try { // try from 004d52c2 to 004d52db has its CatchHandler @ 004d5497 */
  _ZN3std4path4Path4join17hc5b6364c54a49269E(&local_78,uStack_100,local_f8,"Forc.toml",9);
  local_f8 = local_80;
  local_108 = (undefined **)CONCAT44(uStack_8c,local_90);
  uStack_100 = CONCAT44(uStack_84,uStack_88);
                    /* try { // try from 004d52f2 to 004d5302 has its CatchHandler @ 004d54c7 */
  (*(code *)PTR__ZN10sway_utils7helpers14get_sway_files17h6d3fcb30d96264e7E_0096b4a8)
            (local_48,&local_108);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3bf6c9e6ad652326E
            (&local_108,local_48);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h128b359458db2cd2E
            (local_60,&local_108);
  local_bc = param_1;
  if (local_60[0] == -0x8000000000000000) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    do {
                    /* try { // try from 004d5360 to 004d5371 has its CatchHandler @ 004d54cc */
      _ZN8forc_fmt11format_file17haa7995617547e0cfE(&local_d0,param_1 & 0xff,local_60,local_98);
      if (local_d0 == '\x01') {
                    /* try { // try from 004d53f7 to 004d53fe has its CatchHandler @ 004d54c7 */
        _ZN4core3ptr78drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__path__PathBuf_GT__GT_17hacad36253799282aE
                  (&local_108);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(&local_78);
        goto LAB_004d540c;
      }
      bVar2 = bVar2 | local_cf;
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h128b359458db2cd2E
                (local_60,&local_108);
    } while (local_60[0] != -0x8000000000000000);
  }
                    /* try { // try from 004d5392 to 004d5399 has its CatchHandler @ 004d54c7 */
  _ZN4core3ptr78drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__path__PathBuf_GT__GT_17hacad36253799282aE
            (&local_108);
  uVar1 = local_bc;
  local_f8 = local_68;
  local_108 = (undefined **)CONCAT44(uStack_74,local_78);
  uStack_100 = CONCAT44(uStack_6c,uStack_70);
                    /* try { // try from 004d53b8 to 004d53c6 has its CatchHandler @ 004d5492 */
  _ZN8forc_fmt15format_manifest17hcc9f299bdf5e80efE(&local_d0,param_1 & 0xff,&local_108);
  if (local_d0 != '\x01') {
    if (((uVar1 & 1) == 0) || (((bVar2 | local_cf) & 1) == 0)) {
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(&local_b8);
      return 0;
    }
    local_108 = &PTR_s_Files_contain_formatting_violati_0090a3e0;
    uStack_100 = 1;
    local_f8 = 8;
    local_f0 = 0;
    uStack_e8 = 0;
                    /* try { // try from 004d5482 to 004d5489 has its CatchHandler @ 004d5492 */
    local_c8 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_108);
  }
LAB_004d540c:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(&local_b8);
  return local_c8;
}