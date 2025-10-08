undefined8 _ZN15tabby_index_cli4main17h0d21a36799406b57E(void)

{
  undefined8 uVar1;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_98;
  undefined local_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN12clap_builder6derive6Parser5parse17he3b59a741ba83229E(&local_98);
                    /* try { // try from 00374c2f to 00374c39 has its CatchHandler @ 00374ddd */
  (*(code *)PTR__ZN12tabby_common4path9index_dir17he3992c1c322ffd91E_006dfdb8)(&local_d8);
  local_e8 = local_60;
  local_f8 = local_70;
  uStack_f4 = uStack_6c;
  uStack_f0 = uStack_68;
  uStack_ec = uStack_64;
  _ZN4core3mem4drop17h9b3c690aea6436eaE(&local_d8);
  if (local_98 == 0) {
                    /* try { // try from 00374cd9 to 00374ce5 has its CatchHandler @ 00374db6 */
    _ZN15tabby_index_cli8commands7inspect15run_inspect_cli17h0366ea9782c6f029E
              (&local_58,CONCAT44(uStack_ec,uStack_f0),local_e8);
    if (local_58 != 0x12) {
      local_a8 = local_28;
      local_b8 = local_38;
      uStack_b4 = uStack_34;
      uStack_b0 = uStack_30;
      uStack_ac = uStack_2c;
      uStack_c0 = uStack_40;
      uStack_bc = uStack_3c;
      local_d8 = local_58;
      uStack_d4 = uStack_54;
      uStack_d0 = uStack_50;
      uStack_cc = uStack_4c;
                    /* try { // try from 00374d7b to 00374d84 has its CatchHandler @ 00374db6 */
      uVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hdc065b01342578bcE
                        (&local_d8);
      goto LAB_00374d88;
    }
  }
  else {
    if ((int)local_98 != 1) {
                    /* try { // try from 00374d01 to 00374d08 has its CatchHandler @ 00374da1 */
      uVar1 = _ZN15tabby_index_cli8commands4head12run_head_cli17h5b6ca3e30a296988E
                        (CONCAT44(uStack_ec,uStack_f0),local_e8,local_90);
      _ZN4core3ptr62drop_in_place_LT_tabby_index_cli__commands__head__HeadArgs_GT_17hbb26def184db11ddE
                (local_90);
      goto LAB_00374d88;
    }
                    /* try { // try from 00374c75 to 00374c84 has its CatchHandler @ 00374dc1 */
    _ZN15tabby_index_cli8commands5bench13run_bench_cli17hcf903498da3f6e9dE
              (&local_58,CONCAT44(uStack_ec,uStack_f0),local_e8,local_90);
    if (CONCAT44(uStack_54,local_58) != -0x8000000000000000) {
      local_d8 = local_58;
      uStack_d4 = uStack_54;
      uStack_d0 = uStack_50;
      uStack_cc = uStack_4c;
                    /* try { // try from 00374d30 to 00374d39 has its CatchHandler @ 00374dc1 */
      uVar1 = _ZN15tabby_index_cli4main28__u7b__u7b_closure_u7d__u7d_17h17eec3a34d3b36d3E(&local_d8)
      ;
      _ZN4core3ptr64drop_in_place_LT_tabby_index_cli__commands__bench__BenchArgs_GT_17hd7445ae24e69f1cdE
                (local_90);
      goto LAB_00374d88;
    }
    _ZN4core3ptr64drop_in_place_LT_tabby_index_cli__commands__bench__BenchArgs_GT_17hd7445ae24e69f1cdE
              (local_90);
  }
  uVar1 = 0;
LAB_00374d88:
  _ZN4core3mem4drop17h9b3c690aea6436eaE(&local_f8);
  return uVar1;
}