void _ZN8forc_lsp4main17h0dd7fa0583825a2eE(void)

{
  undefined auStack_788 [80];
  undefined local_738 [80];
  undefined local_6e8 [205];
  undefined2 local_61b;
  undefined local_610 [1528];
  undefined local_18;
  
  local_18 = 0;
                    /* try { // try from 00ca6631 to 00ca663e has its CatchHandler @ 00ca66ac */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17hfe1c7b1c7b65fbbeE_01f15ef0)
            (local_6e8);
  local_61b = 0x101;
                    /* try { // try from 00ca664c to 00ca666b has its CatchHandler @ 00ca66b1 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hf3f5e94927d368c0E_01f15ef8)
            (local_738,local_6e8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4de8bc98264fa4e1E(auStack_788,local_738);
                    /* try { // try from 00ca666c to 00ca667b has its CatchHandler @ 00ca669d */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h8ff507d8dd3df0f7E(auStack_788,local_610);
                    /* try { // try from 00ca667e to 00ca6685 has its CatchHandler @ 00ca66b1 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h62d7b8c012f94a19E
            (auStack_788);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hb81664ef0aacf7bdE(local_6e8)
  ;
  return;
}