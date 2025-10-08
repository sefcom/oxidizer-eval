void _ZN21linera_storage_server4main17h66a2e32dcb9b47c4E(void)

{
  undefined auStack_b68 [80];
  undefined local_b18 [80];
  undefined local_ac8 [205];
  undefined2 local_9fb;
  undefined local_9f0 [61];
  undefined local_9b3;
  
  local_9b3 = 0;
                    /* try { // try from 0056fd71 to 0056fd7e has its CatchHandler @ 0056fdec */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_00b90158)
            (local_ac8);
  local_9fb = 0x101;
                    /* try { // try from 0056fd8c to 0056fdab has its CatchHandler @ 0056fdf1 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_00b90160)
            (local_b18,local_ac8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h2881572fcadc1cd0E(auStack_b68,local_b18);
                    /* try { // try from 0056fdac to 0056fdbb has its CatchHandler @ 0056fddd */
  _ZN5tokio7runtime7runtime7Runtime8block_on17hbaf535db79c3db71E(auStack_b68,local_9f0);
                    /* try { // try from 0056fdbe to 0056fdc5 has its CatchHandler @ 0056fdf1 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17hfb057937988ed1f0E
            (auStack_b68);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h2b24b7bc51b64c8bE(local_ac8)
  ;
  return;
}