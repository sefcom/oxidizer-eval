undefined8 _ZN19linera_indexer_grpc4main17h60f35d94ef375322E(undefined8 param_1)

{
  undefined auStack_b48 [80];
  undefined local_af8 [80];
  undefined local_aa8 [205];
  undefined2 local_9db;
  undefined local_9d0 [34];
  undefined local_9ae;
  
  local_9ae = 0;
                    /* try { // try from 006384f4 to 00638501 has its CatchHandler @ 00638575 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_00e8beb0)
            (local_aa8);
  local_9db = 0x101;
                    /* try { // try from 0063850f to 0063852e has its CatchHandler @ 0063857a */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_00e8beb8)
            (local_af8,local_aa8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd40a373930682c08E(auStack_b48,local_af8);
                    /* try { // try from 0063852f to 00638541 has its CatchHandler @ 00638566 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h06ce146c1ea0f300E(param_1,auStack_b48,local_9d0);
                    /* try { // try from 00638544 to 0063854b has its CatchHandler @ 0063857a */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h48028e66f0ffc87dE
            (auStack_b48);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h4b25a40b50289f7cE(local_aa8)
  ;
  return param_1;
}