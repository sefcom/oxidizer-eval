undefined8 _ZN12linera_proxy4main17h05cb79a16b5bcf85E(void)

{
  undefined8 uVar1;
  byte *local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined local_610 [205];
  undefined2 local_543;
  byte local_538 [8];
  long local_530;
  int local_528;
  undefined8 local_520;
  byte *local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined local_250;
  
  _ZN12clap_builder6derive6Parser5parse17h485c2928f06bc790E(local_538);
  if ((local_538[0] & local_530 == 1) == 0) {
    (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_0164e180)
              (&local_460);
    if ((local_538[0] & 1) != 0) {
                    /* try { // try from 00a7ead2 to 00a7eae9 has its CatchHandler @ 00a7ec10 */
      (*(code *)PTR__ZN5tokio7runtime7builder7Builder14worker_threads17hcd535c7d235d69e5E_0164e188)
                (&local_460,local_530,&PTR_s_linera_service_src_proxy_main_rs_015a9718);
    }
    (*(code *)PTR_memcpy_0164bc18)(local_610,&local_460,0xd8);
  }
  else {
                    /* try { // try from 00a7eaa7 to 00a7eacb has its CatchHandler @ 00a7ec5e */
    (*(code *)PTR__ZN5tokio7runtime7builder7Builder18new_current_thread17hdc7eca4ed249bc29E_0164e178
    )(local_610);
  }
  if (local_528 == 1) {
                    /* try { // try from 00a7eb14 to 00a7eb42 has its CatchHandler @ 00a7ec63 */
    (*(code *)
      PTR__ZN5tokio7runtime7builder7Builder20max_blocking_threads17h6023ec6130a6fa88E_0164e190)
              (local_610,local_520,&PTR_s_linera_service_src_proxy_main_rs_015a9730);
  }
  local_543 = 0x101;
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_0164e198)
            (&local_460,local_610);
  if (local_460 == (byte *)0x2) {
                    /* try { // try from 00a7eb59 to 00a7eb5d has its CatchHandler @ 00a7ec4f */
    uVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hd8fc8e85bfeb4841E
                      ();
                    /* try { // try from 00a7eb5e to 00a7eb6a has its CatchHandler @ 00a7ec27 */
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hbd1a479b1ebd449fE
              (local_610);
    _ZN4core3ptr47drop_in_place_LT_linera_proxy__ProxyOptions_GT_17h410627a150a97e5bE(local_538);
  }
  else {
    local_620 = local_420;
    uStack_61c = uStack_41c;
    uStack_618 = uStack_418;
    uStack_614 = uStack_414;
    local_630 = local_430;
    uStack_62c = uStack_42c;
    uStack_628 = uStack_428;
    uStack_624 = uStack_424;
    local_640 = local_440;
    uStack_63c = uStack_43c;
    uStack_638 = uStack_438;
    uStack_634 = uStack_434;
    local_650 = local_450;
    uStack_64c = uStack_44c;
    uStack_648 = uStack_448;
    uStack_644 = uStack_444;
    local_660 = local_460;
    local_658 = local_458;
    local_250 = 0;
                    /* try { // try from 00a7ebcb to 00a7ebdc has its CatchHandler @ 00a7ec29 */
    local_460 = local_538;
    uVar1 = _ZN5tokio7runtime7runtime7Runtime8block_on17h99348db8cdf5bbc6E(&local_660,&local_460);
                    /* try { // try from 00a7ebdd to 00a7ebe9 has its CatchHandler @ 00a7ec22 */
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hbd1a479b1ebd449fE
              (local_610);
    _ZN4core3ptr47drop_in_place_LT_linera_proxy__ProxyOptions_GT_17h410627a150a97e5bE(local_538);
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h58ebb9bdbf862456E
              (&local_660);
  }
  return uVar1;
}