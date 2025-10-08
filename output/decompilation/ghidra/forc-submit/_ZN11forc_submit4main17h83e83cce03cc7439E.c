void _ZN11forc_submit4main17h83e83cce03cc7439E(void)

{
  undefined auStack_5e8 [80];
  undefined local_598 [80];
  undefined local_548 [205];
  undefined2 local_47b;
  undefined local_470 [1112];
  undefined local_18;
  
  local_18 = 0;
                    /* try { // try from 0094da91 to 0094da9e has its CatchHandler @ 0094db0c */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17hfe1c7b1c7b65fbbeE_012c5070)
            (local_548);
  local_47b = 0x101;
                    /* try { // try from 0094daac to 0094dacb has its CatchHandler @ 0094db11 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hf3f5e94927d368c0E_012c5078)
            (local_598,local_548);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf43ed9f9b64b4573E(auStack_5e8,local_598);
                    /* try { // try from 0094dacc to 0094dadb has its CatchHandler @ 0094dafd */
  _ZN5tokio7runtime7runtime7Runtime8block_on17haa96747ed0a34a8eE(auStack_5e8,local_470);
                    /* try { // try from 0094dade to 0094dae5 has its CatchHandler @ 0094db11 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h137b51d965966bebE
            (auStack_5e8);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h603fc1478d16ed2fE(local_548)
  ;
  return;
}