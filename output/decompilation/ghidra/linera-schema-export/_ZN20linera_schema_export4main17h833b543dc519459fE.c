undefined8 _ZN20linera_schema_export4main17h833b543dc519459fE(void)

{
  undefined8 uVar1;
  undefined local_180 [80];
  undefined local_130 [80];
  undefined local_e0 [205];
  undefined2 local_13;
  
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_007da078)
            (local_e0);
  local_13 = 0x101;
                    /* try { // try from 00371ef3 to 00371f0f has its CatchHandler @ 00371f51 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_007da080)
            (local_130,local_e0);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h44ad070c8b78a13fE(local_180,local_130);
                    /* try { // try from 00371f10 to 00371f1b has its CatchHandler @ 00371f42 */
  uVar1 = _ZN5tokio7runtime7runtime7Runtime8block_on17hfcbf2a4ee6e413b4E(local_180,0);
                    /* try { // try from 00371f1c to 00371f28 has its CatchHandler @ 00371f51 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17ha458387a869cf3c2E(local_180)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h8895b506b55d7767E(local_e0);
  return uVar1;
}