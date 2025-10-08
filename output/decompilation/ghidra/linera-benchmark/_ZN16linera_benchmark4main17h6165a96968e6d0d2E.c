undefined8 _ZN16linera_benchmark4main17h6165a96968e6d0d2E(void)

{
  undefined8 uVar1;
  undefined auStack_1048 [56];
  undefined8 local_1010;
  undefined local_ff8 [80];
  undefined local_fa8 [205];
  undefined2 local_edb;
  undefined local_ed0 [3768];
  undefined local_18;
  
  local_1010 = 0;
  local_18 = 0;
                    /* try { // try from 006659bd to 006659ca has its CatchHandler @ 00665a3e */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_00e1c760)
            (local_fa8);
  local_edb = 0x101;
                    /* try { // try from 006659d8 to 006659f7 has its CatchHandler @ 00665a43 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_00e1c768)
            (local_ff8,local_fa8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17ha0654862015e4090E(auStack_1048,local_ff8);
                    /* try { // try from 006659f8 to 00665a07 has its CatchHandler @ 00665a2f */
  uVar1 = _ZN5tokio7runtime7runtime7Runtime8block_on17h1314c56ba4ee3a88E(auStack_1048,local_ed0);
                    /* try { // try from 00665a0d to 00665a14 has its CatchHandler @ 00665a43 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h6f8e4e55d6977168E
            (auStack_1048);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h99070c07bd1d22e3E(local_fa8)
  ;
  return uVar1;
}