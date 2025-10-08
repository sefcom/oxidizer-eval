undefined8 _ZN11turbo_trace4main17h9e56cea794bb9d42E(undefined8 param_1)

{
  undefined local_810 [80];
  undefined local_7c0 [80];
  undefined local_770 [205];
  undefined2 local_6a3;
  undefined local_698 [148];
  undefined local_604;
  
  local_604 = 0;
                    /* try { // try from 0046dbe4 to 0046dbf1 has its CatchHandler @ 0046dc6d */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17hfb47d78496e1f0d5E_00760040)
            (local_770);
  local_6a3 = 0x101;
                    /* try { // try from 0046dbff to 0046dc20 has its CatchHandler @ 0046dc72 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h4b2efeb05b0b1f81E_00760048)
            (local_7c0,local_770);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9fa667908a8f15f4E(local_810,local_7c0);
                    /* try { // try from 0046dc21 to 0046dc35 has its CatchHandler @ 0046dc5c */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h8c5081d95f3b77bdE(param_1,local_810,local_698);
                    /* try { // try from 0046dc38 to 0046dc41 has its CatchHandler @ 0046dc72 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h63e0813ff91a39c3E(local_810)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17he57182b7c51a3cd3E(local_770)
  ;
  return param_1;
}