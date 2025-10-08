void _ZN13turborepo_lsp4main17h370422881aabf7d5E(void)

{
  undefined local_870 [80];
  undefined local_820 [80];
  undefined local_7d0 [205];
  undefined2 local_703;
  undefined local_6f8 [1764];
  undefined local_14;
  
  local_14 = 0;
                    /* try { // try from 006a3761 to 006a376e has its CatchHandler @ 006a37e4 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17hfb47d78496e1f0d5E_00a817e0)
            (local_7d0);
  local_703 = 0x101;
                    /* try { // try from 006a377c to 006a379d has its CatchHandler @ 006a37e9 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h4b2efeb05b0b1f81E_00a817e8)
            (local_820,local_7d0);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h551a0165b444ffc5E(local_870,local_820);
                    /* try { // try from 006a379e to 006a37af has its CatchHandler @ 006a37d3 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h7e04aacd931ff9a8E(local_870,local_6f8);
                    /* try { // try from 006a37b2 to 006a37bb has its CatchHandler @ 006a37e9 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h06ba908e13551d57E(local_870)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h5cd6b0e21488f4edE(local_7d0)
  ;
  return;
}