void _ZN12forc_publish4main17hd924ece5c8cb2e4bE(void)

{
  undefined local_680 [80];
  undefined local_630 [80];
  undefined local_5e0 [205];
  undefined2 local_513;
  undefined local_508 [1264];
  undefined local_18;
  
  local_18 = 0;
                    /* try { // try from 00748611 to 0074861e has its CatchHandler @ 00748694 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17hfe1c7b1c7b65fbbeE_010494e0)
            (local_5e0);
  local_513 = 0x101;
                    /* try { // try from 0074862c to 0074864d has its CatchHandler @ 00748699 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hf3f5e94927d368c0E_010494e8)
            (local_630,local_5e0);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h18e9c6e1162e7269E(local_680,local_630);
                    /* try { // try from 0074864e to 0074865f has its CatchHandler @ 00748683 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17ha691b899d2e7fea5E(local_680,local_508);
                    /* try { // try from 00748662 to 0074866b has its CatchHandler @ 00748699 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h393208ac4a846dc9E(local_680)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17haa5f98bd74070332E(local_5e0)
  ;
  return;
}