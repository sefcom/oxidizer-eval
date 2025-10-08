undefined8 _ZN14linera_indexer4main17hcf6b6b64089e4750E(undefined8 param_1)

{
  undefined auStack_b88 [80];
  undefined local_b38 [80];
  undefined local_ae8 [205];
  undefined2 local_a1b;
  undefined local_a10 [377];
  undefined local_897;
  
  local_897 = 0;
                    /* try { // try from 009d50b4 to 009d50c1 has its CatchHandler @ 009d5135 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_016272f0)
            (local_ae8);
  local_a1b = 0x101;
                    /* try { // try from 009d50cf to 009d50ee has its CatchHandler @ 009d513a */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_016272f8)
            (local_b38,local_ae8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hc7a18d7f2f1d2e1bE(auStack_b88,local_b38);
                    /* try { // try from 009d50ef to 009d5101 has its CatchHandler @ 009d5126 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17ha833e693e9900988E(param_1,auStack_b88,local_a10);
                    /* try { // try from 009d5104 to 009d510b has its CatchHandler @ 009d513a */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17hb2fe96f06610201dE
            (auStack_b88);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h97c60279d064bfd2E(local_ae8)
  ;
  return param_1;
}