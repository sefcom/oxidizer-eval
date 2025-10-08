void _ZN8forc_fmt17display_file_diff17h0e6791d1d0ed248fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_1c8 [184];
  long local_110 [13];
  undefined local_a8 [32];
  undefined local_88 [88];
  
  (*(code *)PTR__ZN10prettydiff4text10diff_lines17h9f37d4ffa3133813E_0096b4b0)
            (local_88,param_1,param_2,param_3,param_4);
                    /* try { // try from 004d552e to 004d557a has its CatchHandler @ 004d5cd9 */
  (*(code *)PTR__ZN10prettydiff4text13LineChangeset4diff17ha1342c8e083a9fe3E_0096b4b8)
            (auStack_1c8,local_88);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he86c3a603bfa32a4E
            (local_a8,auStack_1c8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb2b6db71e3da9753E
            (local_110,local_a8);
  if (local_110[0] == 4) {
    _ZN4core3ptr100drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_prettydiff__basic__DiffOp_LT__RF_str_GT__GT__GT_17hfda4e4c33da7a7a8E
              (local_a8);
    _ZN4core3ptr52drop_in_place_LT_prettydiff__text__LineChangeset_GT_17hc00cd269627f84c0E(local_88)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004d55fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00267220 + *(int *)(&DAT_00267220 + local_110[0] * 4)))();
  return;
}