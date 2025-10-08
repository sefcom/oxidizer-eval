void _ZN13linera_server4main17h7a0264c37cf4b5b5E(void)

{
  undefined local_820 [80];
  undefined local_7d0 [205];
  undefined2 local_703;
  byte local_6f8 [8];
  long local_6f0;
  int local_6e8;
  undefined8 local_6e0;
  undefined local_5d8 [696];
  undefined local_320;
  
  _ZN12clap_builder6derive6Parser5parse17hf98a9b82f4975954E(local_6f8);
  if ((local_6f8[0] & local_6f0 == 1) == 0) {
    (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_0253c308)
              (local_5d8);
    if ((local_6f8[0] & 1) != 0) {
                    /* try { // try from 012731bd to 012731d4 has its CatchHandler @ 01273291 */
      (*(code *)PTR__ZN5tokio7runtime7builder7Builder14worker_threads17hcd535c7d235d69e5E_0253c310)
                (local_5d8,local_6f0,&PTR_s_linera_service_src_server_rs_024392c0);
    }
    (*(code *)PTR_memcpy_02538ec0)(local_7d0,local_5d8,0xd8);
  }
  else {
                    /* try { // try from 01273192 to 012731b6 has its CatchHandler @ 012732c1 */
    (*(code *)PTR__ZN5tokio7runtime7builder7Builder18new_current_thread17hdc7eca4ed249bc29E_0253c300
    )(local_7d0);
  }
  if (local_6e8 == 1) {
                    /* try { // try from 012731ff to 0127323f has its CatchHandler @ 012732c6 */
    (*(code *)
      PTR__ZN5tokio7runtime7builder7Builder20max_blocking_threads17h6023ec6130a6fa88E_0253c318)
              (local_7d0,local_6e0,&PTR_s_linera_service_src_server_rs_024392d8);
  }
  local_703 = 0x101;
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_0253c320)
            (local_5d8,local_7d0);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h06e81d6d4bf3efceE(local_820,local_5d8);
  (*(code *)PTR_memcpy_02538ec0)(local_5d8,local_6f8,0x120);
  local_320 = 0;
                    /* try { // try from 01273266 to 01273272 has its CatchHandler @ 012732a8 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h8b7d1fb58367b5edE(local_820,local_5d8);
                    /* try { // try from 01273273 to 0127327c has its CatchHandler @ 012732a3 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h557061b83b2e56fdE(local_7d0)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17haee433a5af9489f4E(local_820)
  ;
  return;
}